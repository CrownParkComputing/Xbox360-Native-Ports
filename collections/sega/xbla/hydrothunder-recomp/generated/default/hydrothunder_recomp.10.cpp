#include "hydrothunder_funcs.10.h"

DEFINE_REX_FUNC(sub_821208C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821208C8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// b 0x82120904
	goto loc_82120904;
loc_821208E0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x821208EC;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821208fc
	if (!ctx.cr0.lt) goto loc_821208FC;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82120904
	goto loc_82120904;
loc_821208FC:
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82120904:
	// lbz r11,69(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821208e0
	if (ctx.cr0.eq) goto loc_821208E0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82120934
	if (ctx.cr6.eq) goto loc_82120934;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x8212092C;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821209f8
	if (!ctx.cr0.lt) goto loc_821209F8;
loc_82120934:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82120944;
	sub_82120AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120d70
	ctx.lr = 0x82120950;
	sub_82120D70(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x82120670
	ctx.lr = 0x8212095C;
	sub_82120670(ctx, base);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x82120964;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82120a04
	if (ctx.cr0.eq) goto loc_82120A04;
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
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// stb r11,69(r31)
	REX_STORE_U8(r31.u32 + 69, ctx.r11.u8);
	// beq 0x821209b0
	if (ctx.cr0.eq) goto loc_821209B0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120d70
	ctx.lr = 0x821209A4;
	sub_82120D70(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r28,28
	ctx.r3.s64 = r28.s64 + 28;
	// bl 0x82120670
	ctx.lr = 0x821209B0;
	sub_82120670(ctx, base);
loc_821209B0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121770
	ctx.lr = 0x821209C4;
	sub_82121770(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82120ac0
	ctx.lr = 0x821209D8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821209E8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821209F8;
	sub_82120AC0(ctx, base);
loc_821209F8:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d08
	return;
loc_82120A04:
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
	ctx.lr = 0x82120A20;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_821309F0) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x82130a48
	if (ctx.cr6.eq) goto loc_82130A48;
loc_82130A30:
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82130A38;
	sub_8269CE98(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82130a30
	if (!ctx.cr6.eq) goto loc_82130A30;
loc_82130A48:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8269ce98
	ctx.lr = 0x82130A50;
	sub_8269CE98(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x82120ac0
	ctx.lr = 0x82130A60;
	sub_82120AC0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// b 0x82130a78
	goto loc_82130A78;
loc_82130A6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82130d00
	ctx.lr = 0x82130A74;
	sub_82130D00(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
loc_82130A78:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130a6c
	if (!ctx.cr6.eq) goto loc_82130A6C;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82130A88;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,-21652
	ctx.r11.s64 = ctx.r11.s64 + -21652;
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

DEFINE_REX_FUNC(sub_82135F08) {
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
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82135f44
	if (ctx.cr6.gt) goto loc_82135F44;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-19404
	ctx.r4.s64 = ctx.r11.s64 + -19404;
	// addi r3,r10,-19344
	ctx.r3.s64 = ctx.r10.s64 + -19344;
	// li r5,143
	ctx.r5.s64 = 143;
	// bl 0x821231d0
	ctx.lr = 0x82135F44;
	sub_821231D0(ctx, base);
loc_82135F44:
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r30,r11,-21824
	r30.s64 = ctx.r11.s64 + -21824;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82135f70
	if (ctx.cr6.gt) goto loc_82135F70;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-21756
	ctx.r3.s64 = ctx.r11.s64 + -21756;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x821231d0
	ctx.lr = 0x82135F70;
	sub_821231D0(ctx, base);
loc_82135F70:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82135f90
	if (ctx.cr6.gt) goto loc_82135F90;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-21704
	ctx.r3.s64 = ctx.r11.s64 + -21704;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x82135F90;
	sub_821231D0(ctx, base);
loc_82135F90:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

DEFINE_REX_FUNC(sub_8213AC58) {
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
	ctx.lr = 0x8213AC60;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x821501a8
	ctx.lr = 0x8213AC90;
	sub_821501A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8213acb4
	if (ctx.cr6.eq) goto loc_8213ACB4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-18644
	ctx.r4.s64 = ctx.r11.s64 + -18644;
	// addi r3,r10,-18600
	ctx.r3.s64 = ctx.r10.s64 + -18600;
	// li r5,93
	ctx.r5.s64 = 93;
	// bl 0x821231d0
	ctx.lr = 0x8213ACB4;
	sub_821231D0(ctx, base);
loc_8213ACB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8213ACC4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82120ac0
	ctx.lr = 0x8213ACD4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82120ac0
	ctx.lr = 0x8213ACE4;
	sub_82120AC0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,-1
	r30.s64 = -1;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120b20
	ctx.lr = 0x8213AD04;
	sub_82120B20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82120b20
	ctx.lr = 0x8213AD18;
	sub_82120B20(ctx, base);
	// stw r26,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82120b20
	ctx.lr = 0x8213AD30;
	sub_82120B20(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8213b118
	ctx.lr = 0x8213AD3C;
	sub_8213B118(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r28,88
	r28.s64 = 88;
	// addi r6,r11,-21560
	ctx.r6.s64 = ctx.r11.s64 + -21560;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r3.u64;
	// divw r5,r11,r28
	ctx.r5.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// bl 0x8213b4c8
	ctx.lr = 0x8213AD60;
	sub_8213B4C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r11,r11,r28
	ctx.r11.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8213adbc
	if (!ctx.cr0.gt) goto loc_8213ADBC;
	// li r29,0
	r29.s64 = 0;
loc_8213AD80:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8214fcc8
	ctx.lr = 0x8213AD94;
	sub_8214FCC8(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,88
	r29.s64 = r29.s64 + 88;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r11,r11,r28
	ctx.r11.u64 = uint32_t((r28.s32 && !(ctx.r11.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r11.s32 / r28.s32 : 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8213ad80
	if (ctx.cr6.lt) goto loc_8213AD80;
loc_8213ADBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8213add0
	ctx.lr = 0x8213ADC4;
	sub_8213ADD0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82147C40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82147C48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82147c9c
	goto loc_82147C9C;
loc_82147C64:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x82147c98
	if (!ctx.cr6.eq) goto loc_82147C98;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x82147C88;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82147c9c
	goto loc_82147C9C;
loc_82147C98:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82147C9C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82147c64
	if (!ctx.cr6.eq) goto loc_82147C64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8214A2F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// bne cr6,0x8214a35c
	if (!ctx.cr6.eq) goto loc_8214A35C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
loc_8214A318:
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// stfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r9.u64);
	// std r8,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// lwz r9,96(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x8214a318
	if (ctx.cr6.lt) goto loc_8214A318;
	// blr 
	return;
loc_8214A35C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
loc_8214A374:
	// ld r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// std r9,12(r11)
	REX_STORE_U64(ctx.r11.u32 + 12, ctx.r9.u64);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lwz r9,96(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// blt cr6,0x8214a374
	if (ctx.cr6.lt) goto loc_8214A374;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82150328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82150330;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821503b8
	if (!ctx.cr6.eq) goto loc_821503B8;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821503b8
	if (!ctx.cr6.eq) goto loc_821503B8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821507a0
	ctx.lr = 0x82150368;
	sub_821507A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x821503c4
	goto loc_821503C4;
loc_82150398:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82150a10
	ctx.lr = 0x821503A4;
	sub_82150A10(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821503d0
	ctx.lr = 0x821503B4;
	sub_821503D0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_821503B8:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r30.u32, ctx.xer);
	// bne cr6,0x82150398
	if (!ctx.cr6.eq) goto loc_82150398;
	// stw r5,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r5.u32);
loc_821503C4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82154D60) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bne cr6,0x82154d88
	if (!ctx.cr6.eq) goto loc_82154D88;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82154D88:
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
	ctx.lr = 0x82154DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823edd70
	ctx.lr = 0x82154DB0;
	sub_823EDD70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82154dc0
	if (ctx.cr0.eq) goto loc_82154DC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82154DC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82154dd4
	if (!ctx.cr6.eq) goto loc_82154DD4;
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
loc_82154DD4:
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

DEFINE_REX_FUNC(sub_82158818) {
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
	ctx.lr = 0x8215883C;
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
	ctx.lr = 0x82158854;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6212(r10)
	REX_STORE_U32(ctx.r10.u32 + 6212, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8215B2A0) {
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
	// lwz r11,-88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r3,-84
	ctx.r3.s64 = ctx.r3.s64 + -84;
	// addi r10,r10,18424
	ctx.r10.s64 = ctx.r10.s64 + 18424;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r10,-88(r11)
	REX_STORE_U32(ctx.r11.u32 + -88, ctx.r10.u32);
	// bl 0x8215b308
	ctx.lr = 0x8215B2D4;
	sub_8215B308(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r31,-80
	ctx.r11.s64 = r31.s64 + -80;
	// addi r9,r10,18620
	ctx.r9.s64 = ctx.r10.s64 + 18620;
	// lwz r10,-88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + -88);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8215CEE0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x8215CF00;
	sub_822F66B0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8215cf20
	if (ctx.cr6.eq) goto loc_8215CF20;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8215cf20
	if (!ctx.cr6.lt) goto loc_8215CF20;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8215CF20:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
	// bl 0x822f6700
	ctx.lr = 0x8215CF38;
	sub_822F6700(ctx, base);
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

DEFINE_REX_FUNC(sub_8215FAB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215facc
	if (!ctx.cr6.eq) goto loc_8215FACC;
	// lwa r3,8(r3)
	ctx.r3.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 8));
	// blr 
	return;
loc_8215FACC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215fae8
	if (!ctx.cr6.eq) goto loc_8215FAE8;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ld r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8215FAE8:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215faf8
	if (!ctx.cr6.eq) goto loc_8215FAF8;
	// ld r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// blr 
	return;
loc_8215FAF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821629E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821629E8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82162a28
	if (ctx.cr6.eq) goto loc_82162A28;
	// lwz r29,4(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
loc_82162A04:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r31,8
	ctx.r5.s64 = r31.s64 + 8;
	// bl 0x821627e8
	ctx.lr = 0x82162A20;
	sub_821627E8(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82162a04
	if (!ctx.cr6.eq) goto loc_82162A04;
loc_82162A28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821679A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821679B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,23876
	ctx.r11.s64 = ctx.r11.s64 + 23876;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8216ba58
	ctx.lr = 0x821679D0;
	sub_8216BA58(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// bl 0x82120830
	ctx.lr = 0x821679E4;
	sub_82120830(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// std r30,56(r31)
	REX_STORE_U64(r31.u32 + 56, r30.u64);
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x821679F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82167b00
	if (ctx.cr0.eq) goto loc_82167B00;
	// stw r3,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,168
	ctx.r3.s64 = 168;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, r29.u8);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stb r29,33(r11)
	REX_STORE_U8(ctx.r11.u32 + 33, r29.u8);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82167A3C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82167ae8
	if (ctx.cr0.eq) goto loc_82167AE8;
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stb r29,164(r11)
	REX_STORE_U8(ctx.r11.u32 + 164, r29.u8);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stb r29,165(r11)
	REX_STORE_U8(ctx.r11.u32 + 165, r29.u8);
	// stb r30,100(r31)
	REX_STORE_U8(r31.u32 + 100, r30.u8);
	// bl 0x822f6280
	ctx.lr = 0x82167A78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82167aa4
	if (ctx.cr0.eq) goto loc_82167AA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-30704
	ctx.r10.s64 = ctx.r10.s64 + -30704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82167aa8
	goto loc_82167AA8;
loc_82167AA4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82167AA8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,23304
	ctx.r5.s64 = ctx.r11.s64 + 23304;
	// bl 0x8216be80
	ctx.lr = 0x82167AB8;
	sub_8216BE80(ctx, base);
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
	ctx.lr = 0x82167AD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,-24(r10)
	REX_STORE_U32(ctx.r10.u32 + -24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
loc_82167AE8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82167B00;
	sub_82120018(ctx, base);
loc_82167B00:
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
	ctx.lr = 0x82167B18;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82171D30) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82171D5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82126238
	ctx.lr = 0x82171D6C;
	sub_82126238(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821233a0
	ctx.lr = 0x82171D74;
	sub_821233A0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bge cr6,0x82171d88
	if (!ctx.cr6.lt) goto loc_82171D88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82171D88:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823eed08
	ctx.lr = 0x82171D94;
	sub_823EED08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82171dcc
	if (!ctx.cr0.eq) goto loc_82171DCC;
	// li r31,0
	r31.s64 = 0;
loc_82171DA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82171DB0;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
loc_82171DCC:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r31,1
	r31.s64 = 1;
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r11.u64);
	// b 0x82171da0
	goto loc_82171DA0;
}

DEFINE_REX_FUNC(sub_82178140) {
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
	// bl 0x821780e8
	ctx.lr = 0x82178160;
	sub_821780E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82178170
	if (ctx.cr0.eq) goto loc_82178170;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82178170;
	sub_8269CE98(ctx, base);
loc_82178170:
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

DEFINE_REX_FUNC(sub_8217A160) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8217A168;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,47
	ctx.r11.s64 = 47;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821235c8
	ctx.lr = 0x8217A18C;
	sub_821235C8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8217a1c0
	if (ctx.cr6.eq) goto loc_8217A1C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x8217A1A8;
	sub_82120AC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120b20
	ctx.lr = 0x8217A1BC;
	sub_82120B20(ctx, base);
	// b 0x8217a1c8
	goto loc_8217A1C8;
loc_8217A1C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120d70
	ctx.lr = 0x8217A1C8;
	sub_82120D70(ctx, base);
loc_8217A1C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217B6E8) {
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
	// bl 0x822f6280
	ctx.lr = 0x8217B708;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217b724
	if (ctx.cr0.eq) goto loc_8217B724;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x8217af40
	ctx.lr = 0x8217B71C;
	sub_8217AF40(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8217b728
	goto loc_8217B728;
loc_8217B724:
	// li r31,0
	r31.s64 = 0;
loc_8217B728:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217b738
	if (!ctx.cr6.eq) goto loc_8217B738;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217b748
	goto loc_8217B748;
loc_8217B738:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8217b5a0
	ctx.lr = 0x8217B744;
	sub_8217B5A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8217B748:
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

DEFINE_REX_FUNC(sub_8217F120) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217F400) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82181388) {
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
	ctx.lr = 0x82181390;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// li r28,0
	r28.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stb r28,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, r28.u8);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6280
	ctx.lr = 0x821813B8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82181440
	if (ctx.cr0.eq) goto loc_82181440;
	// addic. r11,r3,8
	ctx.xer.ca = ctx.r3.u32 > 4294967287;
	ctx.r11.s64 = ctx.r3.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// beq 0x821813d8
	if (ctx.cr0.eq) goto loc_821813D8;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
loc_821813D8:
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x821813fc
	if (!ctx.cr6.lt) goto loc_821813FC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26228
	ctx.r3.s64 = ctx.r11.s64 + -26228;
	// bl 0x822f6020
	ctx.lr = 0x821813FC;
	sub_822F6020(ctx, base);
loc_821813FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,6124(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6124);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_82181440:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82181458;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8218AA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lwz r8,108(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fctiw f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r4,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r4.u64);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fsubs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E5F8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x8218E600;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2ca8
	ctx.lr = 0x8218E608;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// addi r29,r11,16
	r29.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8218e768
	if (!ctx.cr6.gt) goto loc_8218E768;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r25,r11,16592
	r25.s64 = ctx.r11.s64 + 16592;
	// lfs f29,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f29.f64 = double(temp.f32);
loc_8218E644:
	// lfs f13,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x8218e748
	if (!ctx.cr6.lt) goto loc_8218E748;
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r25,256
	ctx.r11.s64 = r25.s64 + 256;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
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
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f0,f29
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : f29.f64;
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8218e748
	if (!ctx.cr6.gt) goto loc_8218E748;
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f9,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fadds f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f9,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f31,f13,f9
	f31.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// bge cr6,0x8218e748
	if (!ctx.cr6.lt) goto loc_8218E748;
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x8218e748
	if (!ctx.cr6.gt) goto loc_8218E748;
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// fmr f28,f12
	f28.f64 = ctx.f12.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821265f8
	ctx.lr = 0x8218E6FC;
	sub_821265F8(ctx, base);
	// fsubs f13,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 - f28.f64));
	// lfs f12,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// fmadds f11,f13,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f9,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f9,f31
	ctx.f11.f64 = double(float(ctx.f9.f64 * f31.f64));
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f13.f64)));
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
loc_8218E748:
	// lwz r11,96(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 96);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8218e644
	if (ctx.cr6.lt) goto loc_8218E644;
loc_8218E768:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x826a2cf4
	ctx.lr = 0x8218E774;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8219BE30) {
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
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8219BE54;
	sub_82120AC0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8219BE64;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82191250
	ctx.lr = 0x8219BE6C;
	sub_82191250(ctx, base);
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

DEFINE_REX_FUNC(sub_8219DA98) {
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
	// lbz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,41(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 41);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r9,42(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 42);
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// lbz r8,43(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 43);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,44(r4)
	REX_STORE_U8(ctx.r4.u32 + 44, ctx.r11.u8);
	// stb r10,45(r4)
	REX_STORE_U8(ctx.r4.u32 + 45, ctx.r10.u8);
	// stb r9,46(r4)
	REX_STORE_U8(ctx.r4.u32 + 46, ctx.r9.u8);
	// stb r8,47(r4)
	REX_STORE_U8(ctx.r4.u32 + 47, ctx.r8.u8);
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,44(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DAE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r11,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r11.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219db40
	if (ctx.cr6.eq) goto loc_8219DB40;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219DB40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219DB40:
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

DEFINE_REX_FUNC(sub_821A3048) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15392
	ctx.r3.s64 = ctx.r11.s64 + -15392;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A34E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r11,6244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a3588
	if (!ctx.cr6.eq) goto loc_821A3588;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f8,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-19392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19392);
	ctx.f9.f64 = double(temp.f32);
loc_821A352C:
	// bl 0x821a33a0
	ctx.lr = 0x821A3530;
	sub_821A33A0(ctx, base);
	// fmsubs f30,f1,f9,f10
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f10.f64)));
	// bl 0x821a33a0
	ctx.lr = 0x821A3538;
	sub_821A33A0(ctx, base);
	// fmsubs f29,f1,f9,f10
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, -ctx.f10.f64)));
	// fmuls f0,f30,f30
	ctx.f0.f64 = double(float(f30.f64 * f30.f64));
	// fmadds f31,f29,f29,f0
	f31.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f0.f64)));
	// fcmpu cr6,f31,f10
	ctx.cr6.compare(f31.f64, ctx.f10.f64);
	// bge cr6,0x821a352c
	if (!ctx.cr6.lt) goto loc_821A352C;
	// fcmpu cr6,f31,f8
	ctx.cr6.compare(f31.f64, ctx.f8.f64);
	// beq cr6,0x821a352c
	if (ctx.cr6.eq) goto loc_821A352C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a16a0
	ctx.lr = 0x821A355C;
	sub_826A16A0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1
	ctx.r11.s64 = 1;
	// fdivs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 / f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,8568(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8568, temp.u32);
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * f29.f64));
	// b 0x821a3594
	goto loc_821A3594;
loc_821A3588:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,8568(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8568);
	ctx.f1.f64 = double(temp.f32);
loc_821A3594:
	// stw r11,6244(r31)
	REX_STORE_U32(r31.u32 + 6244, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
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

DEFINE_REX_FUNC(sub_821A8CF0) {
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
	// blt cr6,0x821a8d20
	if (ctx.cr6.lt) goto loc_821A8D20;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a8d38
	if (ctx.cr6.lt) goto loc_821A8D38;
loc_821A8D20:
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
	ctx.lr = 0x821A8D38;
	sub_821231D0(ctx, base);
loc_821A8D38:
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

DEFINE_REX_FUNC(sub_821ABD18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15272
	ctx.r3.s64 = ctx.r11.s64 + -15272;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC308) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15256
	ctx.r3.s64 = ctx.r11.s64 + -15256;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821AC6E8) {
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
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821AC718;
	sub_8269CE98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbbb8
	ctx.lr = 0x821AC720;
	sub_821DBBB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ac730
	if (ctx.cr0.eq) goto loc_821AC730;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821AC730;
	sub_8269CE98(ctx, base);
loc_821AC730:
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

DEFINE_REX_FUNC(sub_821AFC30) {
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
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x822f6280
	ctx.lr = 0x821AFC44;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821afc54
	if (ctx.cr0.eq) goto loc_821AFC54;
	// bl 0x821afc68
	ctx.lr = 0x821AFC50;
	sub_821AFC68(ctx, base);
	// b 0x821afc58
	goto loc_821AFC58;
loc_821AFC54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AFC58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B1170) {
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
	ctx.lr = 0x821B1178;
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b12bc
	if (ctx.cr0.eq) goto loc_821B12BC;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,224(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B11AC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821b11ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B11AC;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821B11C8;
	sub_821884B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823fbf60
	ctx.lr = 0x821B11DC;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B11EC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b11ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B11EC;
	// li r31,255
	r31.s64 = 255;
	// li r28,0
	r28.s64 = 0;
	// stb r31,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r31.u8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f30,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f31.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821375f8
	ctx.lr = 0x821B1244;
	sub_821375F8(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821B1260;
	sub_821884B0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823fbf60
	ctx.lr = 0x821B1274;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B1284:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b1284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B1284;
	// stb r28,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, r28.u8);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stb r31,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r31.u8);
	// li r7,16
	ctx.r7.s64 = 16;
	// stb r28,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r31,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821375f8
	ctx.lr = 0x821B12BC;
	sub_821375F8(ctx, base);
loc_821B12BC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821BB710) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15032
	ctx.r3.s64 = ctx.r11.s64 + -15032;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BBA50) {
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
	ctx.lr = 0x821BBA58;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x82178268
	ctx.lr = 0x821BBA74;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r27,116(r31)
	REX_STORE_U32(r31.u32 + 116, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,-19324
	ctx.r11.s64 = ctx.r11.s64 + -19324;
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BBA90;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821bbac0
	if (ctx.cr0.eq) goto loc_821BBAC0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// bl 0x82120600
	ctx.lr = 0x821BBAA8;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82197628
	ctx.lr = 0x821BBABC;
	sub_82197628(ctx, base);
	// b 0x821bbac4
	goto loc_821BBAC4;
loc_821BBAC0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821BBAC4:
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82145710
	ctx.lr = 0x821BBAD4;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bbaec
	if (ctx.cr0.eq) goto loc_821BBAEC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BBAEC;
	sub_82120AC0(ctx, base);
loc_821BBAEC:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821BBAF4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bbb14
	if (ctx.cr0.eq) goto loc_821BBB14;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BBB0C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bbb18
	goto loc_821BBB18;
loc_821BBB14:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821BBB18:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BBB24;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BBB2C;
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
	// beq 0x821bbbac
	if (ctx.cr0.eq) goto loc_821BBBAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8216b9a8
	ctx.lr = 0x821BBB54;
	sub_8216B9A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19344
	ctx.r4.s64 = ctx.r11.s64 + -19344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBB6C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BBB78;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bbb9c
	if (ctx.cr0.eq) goto loc_821BBB9C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-17224
	ctx.r10.s64 = ctx.r10.s64 + -17224;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bbba0
	goto loc_821BBBA0;
loc_821BBB9C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BBBA0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bbbb0
	goto loc_821BBBB0;
loc_821BBBAC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BBBB0:
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
	ctx.lr = 0x821BBBC8;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BBBD0;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bbc34
	if (ctx.cr0.eq) goto loc_821BBC34;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19340
	ctx.r4.s64 = ctx.r11.s64 + -19340;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBBF4;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821BBC00;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bbc24
	if (ctx.cr0.eq) goto loc_821BBC24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-472
	ctx.r10.s64 = ctx.r10.s64 + -472;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bbc28
	goto loc_821BBC28;
loc_821BBC24:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821BBC28:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821bbc38
	goto loc_821BBC38;
loc_821BBC34:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BBC38:
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
	ctx.lr = 0x821BBC50;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BBC58;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821bbc90
	if (ctx.cr0.eq) goto loc_821BBC90;
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-19336
	ctx.r4.s64 = ctx.r11.s64 + -19336;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBC7C;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x821bbc94
	goto loc_821BBC94;
loc_821BBC90:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_821BBC94:
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
	ctx.lr = 0x821BBCAC;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821CAEC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x821caf88
	ctx.lr = 0x821CAEEC;
	sub_821CAF88(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD3B0) {
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
	// beq cr6,0x821cd3e8
	if (ctx.cr6.eq) goto loc_821CD3E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CD3E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821CD3E8:
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

DEFINE_REX_FUNC(sub_821D00E0) {
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
	// lwz r4,104(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d0124
	if (ctx.cr6.eq) goto loc_821D0124;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D011C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_821D0124:
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821d0378
	ctx.lr = 0x821D0130;
	sub_821D0378(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d0148
	if (ctx.cr0.eq) goto loc_821D0148;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x821d03f0
	ctx.lr = 0x821D0144;
	sub_821D03F0(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
loc_821D0148:
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

DEFINE_REX_FUNC(sub_821D5650) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82197900
	ctx.lr = 0x821D5670;
	sub_82197900(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821d5710
	ctx.lr = 0x821D5680;
	sub_821D5710(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215efb0
	ctx.lr = 0x821D568C;
	sub_8215EFB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x821D5694;
	sub_8215F0F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821D7530) {
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
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subf r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x821d75d8
	if (!ctx.cr6.gt) goto loc_821D75D8;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d7674
	if (ctx.cr6.eq) goto loc_821D7674;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821d75b0
	if (ctx.cr6.eq) goto loc_821D75B0;
loc_821D7580:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d7580
	if (!ctx.cr6.eq) goto loc_821D7580;
loc_821D75B0:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821d75d0
	if (ctx.cr6.eq) goto loc_821D75D0;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_821D75C4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821d75c4
	if (!ctx.cr6.eq) goto loc_821D75C4;
loc_821D75D0:
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// b 0x821d7674
	goto loc_821D7674;
loc_821D75D8:
	// bge cr6,0x821d7674
	if (!ctx.cr6.lt) goto loc_821D7674;
	// subf r4,r10,r30
	ctx.r4.u64 = r30.u64 - ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82154970
	ctx.lr = 0x821D75E8;
	sub_82154970(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf. r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821d7654
	if (ctx.cr0.eq) goto loc_821D7654;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_821D7608:
	// sth r9,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stb r9,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
	// beq cr6,0x821d7648
	if (ctx.cr6.eq) goto loc_821D7648;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,8(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_821D7648:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x821d7608
	if (!ctx.cr0.eq) goto loc_821D7608;
loc_821D7654:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// subf r10,r10,r30
	ctx.r10.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821D7674:
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

DEFINE_REX_FUNC(sub_821DFF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821DFF98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,148(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821dffc4
	if (ctx.cr0.eq) goto loc_821DFFC4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6188(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6188);
	// bl 0x82151a88
	ctx.lr = 0x821DFFC0;
	sub_82151A88(ctx, base);
	// stb r30,148(r31)
	REX_STORE_U8(r31.u32 + 148, r30.u8);
loc_821DFFC4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E06E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E06F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x822f6280
	ctx.lr = 0x821E0700;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821e0770
	if (ctx.cr0.eq) goto loc_821E0770;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,12996
	ctx.r11.s64 = ctx.r11.s64 + 12996;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r30,r31,20
	r30.s64 = r31.s64 + 20;
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d1958
	ctx.lr = 0x821E0740;
	sub_824D1958(ctx, base);
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ed608
	ctx.lr = 0x821E0754;
	sub_823ED608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824d1dd0
	ctx.lr = 0x821E0768;
	sub_824D1DD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x821e0774
	goto loc_821E0774;
loc_821E0770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0774:
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821E4E68) {
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
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4E9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4EB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821E4ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lfs f9,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// lfs f13,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f11,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 + f31.f64));
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// std r8,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// lfs f7,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f8.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fdivs f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fdivs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - f31.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 - f30.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r10,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
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

DEFINE_REX_FUNC(sub_821F4828) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F4830;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x821f4864
	if (ctx.cr6.eq) goto loc_821F4864;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,146
	ctx.r5.s64 = 146;
	// bl 0x821231d0
	ctx.lr = 0x821F4864;
	sub_821231D0(ctx, base);
loc_821F4864:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16680
	ctx.r4.s64 = ctx.r11.s64 + -16680;
	// bl 0x82120600
	ctx.lr = 0x821F4874;
	sub_82120600(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x821F4888;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23032
	ctx.r4.s64 = ctx.r11.s64 + 23032;
	// bl 0x8215f338
	ctx.lr = 0x821F4894;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821F489C;
	sub_8215F2D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821f6130
	ctx.lr = 0x821F48A8;
	sub_821F6130(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821F48BC;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6DE0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x821F6DE8;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lha r10,714(r4)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 714));
	// lha r11,714(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 714));
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f6fbc
	if (ctx.cr0.eq) goto loc_821F6FBC;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x821f6e30
	if (ctx.cr0.eq) goto loc_821F6E30;
	// lwz r11,704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r11,744(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 744);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
loc_821F6E30:
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f6e4c
	if (ctx.cr0.eq) goto loc_821F6E4C;
	// lwz r10,704(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 704);
	// lwz r10,744(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 744);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_821F6E4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f6fbc
	if (ctx.cr0.eq) goto loc_821F6FBC;
	// addi r27,r28,16
	r27.s64 = r28.s64 + 16;
	// addi r6,r28,32
	ctx.r6.s64 = r28.s64 + 32;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x821f6c58
	ctx.lr = 0x821F6E64;
	sub_821F6C58(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x821f6fbc
	if (ctx.cr6.eq) goto loc_821F6FBC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821f6ef0
	if (!ctx.cr6.lt) goto loc_821F6EF0;
	// lwz r10,84(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821f6ef0
	if (ctx.cr6.eq) goto loc_821F6EF0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_821F6EA8:
	// lwz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821f6ee0
	if (!ctx.cr6.eq) goto loc_821F6EE0;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821f6ee0
	if (!ctx.cr6.eq) goto loc_821F6EE0;
	// lbz r9,48(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 48);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821f6ee0
	if (!ctx.cr6.eq) goto loc_821F6EE0;
	// lbz r9,49(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 49);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821f6fbc
	if (ctx.cr6.eq) goto loc_821F6FBC;
loc_821F6EE0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f6ea8
	if (!ctx.cr6.eq) goto loc_821F6EA8;
loc_821F6EF0:
	// lwz r11,72(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 72);
	// addi r31,r7,68
	r31.s64 = ctx.r7.s64 + 68;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// lwz r11,76(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 76);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f6f58
	if (!ctx.cr6.gt) goto loc_821F6F58;
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
	// bgt cr6,0x821f6f20
	if (ctx.cr6.gt) goto loc_821F6F20;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821F6F20:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821f6f58
	if (!ctx.cr6.gt) goto loc_821F6F58;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r30,48
	ctx.r3.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// bl 0x8269d1d0
	ctx.lr = 0x821F6F34;
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
	ctx.lr = 0x821F6F48;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821F6F50;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r31)
	REX_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_821F6F58:
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x821f6f70
	if (ctx.cr0.lt) goto loc_821F6F70;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6f88
	if (ctx.cr6.lt) goto loc_821F6F88;
loc_821F6F70:
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
	ctx.lr = 0x821F6F88;
	sub_821231D0(ctx, base);
loc_821F6F88:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r30,48
	ctx.r10.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(48));
	// lbz r9,48(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lbz r10,49(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 49);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ld r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 0);
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U64(r27.u32 + 8);
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
loc_821F6FBC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822050F0) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29936
	ctx.r4.s64 = ctx.r11.s64 + 29936;
	// bl 0x82120600
	ctx.lr = 0x82205114;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82205124;
	sub_82180E18(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82205138;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220514c
	if (!ctx.cr6.eq) goto loc_8220514C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82205174
	goto loc_82205174;
loc_8220514C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// bl 0x8215f338
	ctx.lr = 0x8220515C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29956
	ctx.r4.s64 = ctx.r11.s64 + 29956;
	// bl 0x8215f338
	ctx.lr = 0x82205168;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8220516C;
	sub_8215F990(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82205174:
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

DEFINE_REX_FUNC(sub_82208840) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82208864:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82208864
	if (!ctx.cr6.eq) goto loc_82208864;
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
	ctx.lr = 0x82208890;
	sub_8216B6A8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82208894:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82208894
	if (!ctx.cr6.eq) goto loc_82208894;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x822088C4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,31500
	ctx.r3.s64 = ctx.r11.s64 + 31500;
	// bl 0x8216bc98
	ctx.lr = 0x822088D4;
	sub_8216BC98(ctx, base);
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

DEFINE_REX_FUNC(sub_8220CF50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8220CF58;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-31792
	ctx.r4.s64 = ctx.r11.s64 + -31792;
	// bl 0x82120600
	ctx.lr = 0x8220CF70;
	sub_82120600(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220CF80;
	sub_82180E18(ctx, base);
	// stw r3,288(r31)
	REX_STORE_U32(r31.u32 + 288, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8220CF94;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-31780
	r29.s64 = ctx.r11.s64 + -31780;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220cfbc
	if (!ctx.cr6.eq) goto loc_8220CFBC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-31720
	ctx.r3.s64 = ctx.r11.s64 + -31720;
	// li r5,109
	ctx.r5.s64 = 109;
	// bl 0x821231d0
	ctx.lr = 0x8220CFBC;
	sub_821231D0(ctx, base);
loc_8220CFBC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16348
	ctx.r4.s64 = ctx.r11.s64 + 16348;
	// bl 0x82120600
	ctx.lr = 0x8220CFCC;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220CFD8;
	sub_82180E18(ctx, base);
	// stw r3,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220CFEC;
	sub_82120AC0(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220d00c
	if (!ctx.cr6.eq) goto loc_8220D00C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-31624
	ctx.r3.s64 = ctx.r11.s64 + -31624;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x821231d0
	ctx.lr = 0x8220D00C;
	sub_821231D0(ctx, base);
loc_8220D00C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16492
	r30.s64 = ctx.r11.s64 + 16492;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220D028;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x8220D034;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220D038;
	sub_8215FA30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220D048;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8220D054;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220D058;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,32388
	ctx.r4.s64 = ctx.r11.s64 + 32388;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x8220D06C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220D070;
	sub_8215FA30(ctx, base);
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8220D088;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8220D090;
	sub_8215F2D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8220D098;
	sub_8215F2D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8220D0A0;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31524
	ctx.r4.s64 = ctx.r11.s64 + -31524;
	// bl 0x8215f338
	ctx.lr = 0x8220D0AC;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8220D0B0;
	sub_8215F9E0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fctiw f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-31508
	ctx.r4.s64 = ctx.r11.s64 + -31508;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826a0568
	ctx.lr = 0x8220D0CC;
	sub_826A0568(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6140);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220D0E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,260
	ctx.r3.s64 = r31.s64 + 260;
	// bl 0x82120b20
	ctx.lr = 0x8220D0FC;
	sub_82120B20(ctx, base);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8221CB00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8221CB08;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r5,r4,116
	ctx.r5.s64 = ctx.r4.s64 + 116;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8221CB30;
	sub_8216B6A8(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221cb44
	if (ctx.cr6.lt) goto loc_8221CB44;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8221CB44:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221CB48:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221cb48
	if (!ctx.cr6.eq) goto loc_8221CB48;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221CB74;
	sub_8216B6A8(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r5,r31,148
	ctx.r5.s64 = r31.s64 + 148;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221cb88
	if (ctx.cr6.lt) goto loc_8221CB88;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_8221CB88:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8221CB8C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8221cb8c
	if (!ctx.cr6.eq) goto loc_8221CB8C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// bl 0x8216b6a8
	ctx.lr = 0x8221CBB8;
	sub_8216B6A8(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8221CBD0;
	sub_8216B6A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8213bce8
	ctx.lr = 0x8221CBD8;
	sub_8213BCE8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8221CBF0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8221CC00;
	sub_8216BC98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82226C88) {
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
	ctx.lr = 0x82226C90;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r26,r11,16492
	r26.s64 = ctx.r11.s64 + 16492;
	// addi r25,r10,1624
	r25.s64 = ctx.r10.s64 + 1624;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226CBC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82226CC8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226CCC;
	sub_8215FA30(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226CDC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x8215f338
	ctx.lr = 0x82226CE8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226CEC;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226D00;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226D04;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226D18;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226D1C;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x82226D30;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226f50
	if (!ctx.cr0.eq) goto loc_82226F50;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,684(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 684);
	// addi r30,r11,22808
	r30.s64 = ctx.r11.s64 + 22808;
	// addi r3,r10,96
	ctx.r3.s64 = ctx.r10.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226D50;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82226D58;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,32412
	r27.s64 = ctx.r11.s64 + 32412;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226D68;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226D6C;
	sub_8215FA30(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,6248(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6248);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82226D88;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82226D90;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82226de4
	if (ctx.cr6.eq) goto loc_82226DE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16384
	ctx.r4.s64 = ctx.r11.s64 + 16384;
	// bl 0x8215f338
	ctx.lr = 0x82226DA8;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226DAC;
	sub_8215FA30(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82226dc4
	if (!ctx.cr6.eq) goto loc_82226DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82226de4
	goto loc_82226DE4;
loc_82226DC4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226DDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82226DE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82226df4
	if (!ctx.cr0.eq) goto loc_82226DF4;
loc_82226DEC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82226fd8
	goto loc_82226FD8;
loc_82226DF4:
	// lbz r11,676(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 676);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82226e18
	if (!ctx.cr0.eq) goto loc_82226E18;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,23068
	ctx.r4.s64 = ctx.r11.s64 + 23068;
	// bl 0x82125d00
	ctx.lr = 0x82226E10;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82226dec
	if (ctx.cr0.eq) goto loc_82226DEC;
loc_82226E18:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r3,6248(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6248);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821ef570
	ctx.lr = 0x82226E28;
	sub_821EF570(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82226dec
	if (ctx.cr0.eq) goto loc_82226DEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x82226E40;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226edc
	if (!ctx.cr0.eq) goto loc_82226EDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,32436
	ctx.r4.s64 = ctx.r11.s64 + 32436;
	// bl 0x82125d00
	ctx.lr = 0x82226E58;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226e78
	if (!ctx.cr0.eq) goto loc_82226E78;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// bl 0x82125d00
	ctx.lr = 0x82226E70;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226dec
	if (!ctx.cr0.eq) goto loc_82226DEC;
loc_82226E78:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,32428
	ctx.r4.s64 = ctx.r11.s64 + 32428;
	// bl 0x82125d00
	ctx.lr = 0x82226E88;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226ea8
	if (!ctx.cr0.eq) goto loc_82226EA8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x82125d00
	ctx.lr = 0x82226EA0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226dec
	if (!ctx.cr0.eq) goto loc_82226DEC;
loc_82226EA8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,32420
	ctx.r4.s64 = ctx.r11.s64 + 32420;
	// bl 0x82125d00
	ctx.lr = 0x82226EB8;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226fd4
	if (!ctx.cr0.eq) goto loc_82226FD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-19348
	ctx.r4.s64 = ctx.r11.s64 + -19348;
	// bl 0x82125d00
	ctx.lr = 0x82226ED0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82226fd4
	if (ctx.cr0.eq) goto loc_82226FD4;
	// b 0x82226dec
	goto loc_82226DEC;
loc_82226EDC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r31,r11,20280
	r31.s64 = ctx.r11.s64 + 20280;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x82226EF0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226fd4
	if (!ctx.cr0.eq) goto loc_82226FD4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226F04;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226F0C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226F10;
	sub_8215FA30(ctx, base);
	// lwz r11,688(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 688);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82226F24;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82226F2C;
	sub_8215F2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x82226F34;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82226F38;
	sub_8215FA30(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120780
	ctx.lr = 0x82226F44;
	sub_82120780(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82226fd8
	goto loc_82226FD8;
loc_82226F50:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,16192
	ctx.r4.s64 = ctx.r11.s64 + 16192;
	// bl 0x82125d00
	ctx.lr = 0x82226F60;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226fd4
	if (!ctx.cr0.eq) goto loc_82226FD4;
	// lwz r11,692(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 692);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x82226F7C;
	sub_8215F338(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82226F84;
	sub_8215F2D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,17480
	ctx.r4.s64 = ctx.r11.s64 + 17480;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82125d00
	ctx.lr = 0x82226F98;
	sub_82125D00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24168
	ctx.r4.s64 = ctx.r11.s64 + -24168;
	// bne 0x82226fc0
	if (!ctx.cr0.eq) goto loc_82226FC0;
	// bl 0x8215f338
	ctx.lr = 0x82226FB0;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226fd4
	if (!ctx.cr6.eq) goto loc_82226FD4;
	// b 0x82226dec
	goto loc_82226DEC;
loc_82226FC0:
	// bl 0x8215f338
	ctx.lr = 0x82226FC4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82226fd8
	if (!ctx.cr6.eq) goto loc_82226FD8;
loc_82226FD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82226FD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8223B698) {
	REX_FUNC_PROLOGUE();
	// lwz r3,3864(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3864);
	// b 0x821914c8
	sub_821914C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223BDA8) {
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
	ctx.lr = 0x8223BDB0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x8223d0d0
	ctx.lr = 0x8223BDC4;
	sub_8223D0D0(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r28,1
	r28.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223BDE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223be5c
	if (!ctx.cr0.gt) goto loc_8223BE5C;
	// li r29,0
	r29.s64 = 0;
loc_8223BDF0:
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
	ctx.lr = 0x8223BE08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,460(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223BE1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223be38
	if (ctx.cr0.eq) goto loc_8223BE38;
	// lwz r11,3884(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 3884);
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,224(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 224);
	// and r28,r11,r10
	r28.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8223BE38:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,336
	r29.s64 = r29.s64 + 336;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223BE54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8223bdf0
	if (ctx.cr6.lt) goto loc_8223BDF0;
loc_8223BE5C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223bef4
	if (ctx.cr0.eq) goto loc_8223BEF4;
	// lfs f0,3892(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 3892);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f13,f31,f0
	ctx.f13.f64 = double(float(f31.f64 + ctx.f0.f64));
	// stfs f13,3892(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 3892, temp.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8223bef4
	if (ctx.cr6.lt) goto loc_8223BEF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8223BE98;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16536
	ctx.r4.s64 = ctx.r11.s64 + 16536;
	// bl 0x8215f338
	ctx.lr = 0x8223BEA4;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8223beb8
	if (!ctx.cr6.eq) goto loc_8223BEB8;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8223bebc
	goto loc_8223BEBC;
loc_8223BEB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8223BEBC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// beq 0x8223bed0
	if (ctx.cr0.eq) goto loc_8223BED0;
	// bl 0x8223c7f8
	ctx.lr = 0x8223BECC;
	sub_8223C7F8(ctx, base);
	// b 0x8223bed4
	goto loc_8223BED4;
loc_8223BED0:
	// bl 0x8223c3d0
	ctx.lr = 0x8223BED4;
	sub_8223C3D0(ctx, base);
loc_8223BED4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r10,-17808
	ctx.r3.s64 = ctx.r10.s64 + -17808;
	// bl 0x8216bc98
	ctx.lr = 0x8223BEEC;
	sub_8216BC98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223bf38
	goto loc_8223BF38;
loc_8223BEF4:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lbz r11,19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8223bf34
	if (ctx.cr0.eq) goto loc_8223BF34;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223BF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,720
	ctx.r4.s64 = ctx.r11.s64 + 720;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x823fbd18
	ctx.lr = 0x8223BF34;
	sub_823FBD18(ctx, base);
loc_8223BF34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223BF38:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82246BA0) {
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
	ctx.lr = 0x82246BA8;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// bl 0x82178268
	ctx.lr = 0x82246BC0;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r27,1
	r27.s64 = 1;
	// addi r10,r10,-15116
	ctx.r10.s64 = ctx.r10.s64 + -15116;
	// stb r27,116(r30)
	REX_STORE_U8(r30.u32 + 116, r27.u8);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r30,116
	r29.s64 = r30.s64 + 116;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,117(r30)
	REX_STORE_U8(r30.u32 + 117, r27.u8);
	// stfs f0,120(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// addi r26,r30,117
	r26.s64 = r30.s64 + 117;
	// stfs f0,124(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
	// addi r25,r30,120
	r25.s64 = r30.s64 + 120;
	// addi r24,r30,124
	r24.s64 = r30.s64 + 124;
	// bl 0x822f6280
	ctx.lr = 0x82246C04;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82246c34
	if (ctx.cr0.eq) goto loc_82246C34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-15180
	ctx.r4.s64 = ctx.r11.s64 + -15180;
	// bl 0x82120600
	ctx.lr = 0x82246C1C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// bl 0x82191600
	ctx.lr = 0x82246C30;
	sub_82191600(ctx, base);
	// b 0x82246c38
	goto loc_82246C38;
loc_82246C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246C38:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82246C4C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246c68
	if (ctx.cr0.eq) goto loc_82246C68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82246C68;
	sub_82120AC0(ctx, base);
loc_82246C68:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82246C70;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82246ca0
	if (ctx.cr0.eq) goto loc_82246CA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-15164
	ctx.r4.s64 = ctx.r11.s64 + -15164;
	// bl 0x82120600
	ctx.lr = 0x82246C88;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x82246C9C;
	sub_82191600(ctx, base);
	// b 0x82246ca4
	goto loc_82246CA4;
loc_82246CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246CA4:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82246CB4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246cd0
	if (ctx.cr0.eq) goto loc_82246CD0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82246CD0;
	sub_82120AC0(ctx, base);
loc_82246CD0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82246CD8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82246d08
	if (ctx.cr0.eq) goto loc_82246D08;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-15148
	ctx.r4.s64 = ctx.r11.s64 + -15148;
	// bl 0x82120600
	ctx.lr = 0x82246CF0;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82246D04;
	sub_82196BA8(ctx, base);
	// b 0x82246d0c
	goto loc_82246D0C;
loc_82246D08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246D0C:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82246D1C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246d38
	if (ctx.cr0.eq) goto loc_82246D38;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82246D38;
	sub_82120AC0(ctx, base);
loc_82246D38:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82246D40;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82246d70
	if (ctx.cr0.eq) goto loc_82246D70;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-15132
	ctx.r4.s64 = ctx.r11.s64 + -15132;
	// bl 0x82120600
	ctx.lr = 0x82246D58;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82246D6C;
	sub_82196BA8(ctx, base);
	// b 0x82246d74
	goto loc_82246D74;
loc_82246D70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246D74:
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82246D84;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82246d9c
	if (ctx.cr0.eq) goto loc_82246D9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x82246D9C;
	sub_82120AC0(ctx, base);
loc_82246D9C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82246DA4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246dc4
	if (ctx.cr0.eq) goto loc_82246DC4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x82246DBC;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82246dc8
	goto loc_82246DC8;
loc_82246DC4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82246DC8:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82246DD4;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82246DDC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82246e54
	if (ctx.cr0.eq) goto loc_82246E54;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82246E04;
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
	ctx.lr = 0x82246E18;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246e44
	if (ctx.cr0.eq) goto loc_82246E44;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,28400
	ctx.r10.s64 = ctx.r10.s64 + 28400;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82246e48
	goto loc_82246E48;
loc_82246E44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82246E48:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x82246e58
	goto loc_82246E58;
loc_82246E54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82246E58:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82246E70;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82246E78;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82246ec8
	if (ctx.cr0.eq) goto loc_82246EC8;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8216b9a8
	ctx.lr = 0x82246E9C;
	sub_8216B9A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19344
	ctx.r4.s64 = ctx.r11.s64 + -19344;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82246EB4;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82246ecc
	goto loc_82246ECC;
loc_82246EC8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82246ECC:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 112);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82246EE4;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_8225D738) {
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
	ctx.lr = 0x8225D740;
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1596(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1596);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225da0c
	if (!ctx.cr6.eq) goto loc_8225DA0C;
	// lwz r31,172(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225d770
	if (ctx.cr0.eq) goto loc_8225D770;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225da0c
	if (!ctx.cr6.eq) goto loc_8225DA0C;
loc_8225D770:
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
	ctx.lr = 0x8225D79C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225d7c0
	if (!ctx.cr0.eq) goto loc_8225D7C0;
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
	ctx.lr = 0x8225D7C0;
	sub_821231D0(ctx, base);
loc_8225D7C0:
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
	// beq cr6,0x8225da00
	if (ctx.cr6.eq) goto loc_8225DA00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225D7F8;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D804;
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
	ctx.lr = 0x8225D818;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225D828;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D834;
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
	ctx.lr = 0x8225D848;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225D858;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D864;
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
	ctx.lr = 0x8225D878;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225D888;
	sub_82120600(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D894;
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
	ctx.lr = 0x8225D8A8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225D8B8;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D8C4;
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
	ctx.lr = 0x8225D8D8;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225D8E8;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D8F4;
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
	ctx.lr = 0x8225D908;
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
	ctx.lr = 0x8225D924;
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
	ctx.lr = 0x8225D938;
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
	ctx.lr = 0x8225D950;
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
	ctx.lr = 0x8225D968;
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
	ctx.lr = 0x8225D980;
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
	ctx.lr = 0x8225D998;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r4,r11,-8324
	ctx.r4.s64 = ctx.r11.s64 + -8324;
	// bl 0x82288848
	ctx.lr = 0x8225D9A8;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225D9B8;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225D9C8;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225D9D4;
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
	ctx.lr = 0x8225D9E8;
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
	ctx.lr = 0x8225DA00;
	sub_82288798(ctx, base);
loc_8225DA00:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225DA0C;
	sub_8226AFB8(ctx, base);
loc_8225DA0C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,1604(r28)
	REX_STORE_U32(r28.u32 + 1604, ctx.r11.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82270EF0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270EF8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82270FE0) {
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
	ctx.lr = 0x82270FE8;
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// bl 0x82178268
	ctx.lr = 0x82271004;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r28,r31,120
	r28.s64 = r31.s64 + 120;
	// addi r11,r11,-4128
	ctx.r11.s64 = ctx.r11.s64 + -4128;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82271024;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r21,r31,168
	r21.s64 = r31.s64 + 168;
	// addi r10,r11,15048
	ctx.r10.s64 = ctx.r11.s64 + 15048;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r26,r31,148
	r26.s64 = r31.s64 + 148;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r31,156
	r25.s64 = r31.s64 + 156;
	// addi r24,r31,164
	r24.s64 = r31.s64 + 164;
	// lfs f13,-22312(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -22312);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// bl 0x82269a80
	ctx.lr = 0x82271060;
	sub_82269A80(ctx, base);
	// stb r29,604(r31)
	REX_STORE_U8(r31.u32 + 604, r29.u8);
	// stb r29,605(r31)
	REX_STORE_U8(r31.u32 + 605, r29.u8);
	// li r3,104
	ctx.r3.s64 = 104;
	// stw r29,616(r31)
	REX_STORE_U32(r31.u32 + 616, r29.u32);
	// addi r23,r31,604
	r23.s64 = r31.s64 + 604;
	// std r29,624(r31)
	REX_STORE_U64(r31.u32 + 624, r29.u64);
	// addi r22,r31,605
	r22.s64 = r31.s64 + 605;
	// stw r29,632(r31)
	REX_STORE_U32(r31.u32 + 632, r29.u32);
	// stw r29,636(r31)
	REX_STORE_U32(r31.u32 + 636, r29.u32);
	// stw r29,640(r31)
	REX_STORE_U32(r31.u32 + 640, r29.u32);
	// stw r29,648(r31)
	REX_STORE_U32(r31.u32 + 648, r29.u32);
	// stw r29,652(r31)
	REX_STORE_U32(r31.u32 + 652, r29.u32);
	// stw r29,656(r31)
	REX_STORE_U32(r31.u32 + 656, r29.u32);
	// stw r29,664(r31)
	REX_STORE_U32(r31.u32 + 664, r29.u32);
	// stb r29,668(r31)
	REX_STORE_U8(r31.u32 + 668, r29.u8);
	// bl 0x822f6280
	ctx.lr = 0x822710A0;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r20,r11,-27060
	r20.s64 = ctx.r11.s64 + -27060;
	// beq 0x822710dc
	if (ctx.cr0.eq) goto loc_822710DC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-4320
	ctx.r4.s64 = ctx.r11.s64 + -4320;
	// bl 0x82120600
	ctx.lr = 0x822710C0;
	sub_82120600(ctx, base);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x821e9d10
	ctx.lr = 0x822710D8;
	sub_821E9D10(ctx, base);
	// b 0x822710e0
	goto loc_822710E0;
loc_822710DC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822710E0:
	// stw r3,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r3.u32);
	// addi r27,r31,80
	r27.s64 = r31.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822710F8;
	sub_82145710(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x82271104;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x8227110C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271138
	if (ctx.cr0.eq) goto loc_82271138;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32217
	ctx.r10.s64 = -2111373312;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,8704
	ctx.r10.s64 = ctx.r10.s64 + 8704;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x8227113c
	goto loc_8227113C;
loc_82271138:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8227113C:
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r11.u32);
	// stb r29,33(r28)
	REX_STORE_U8(r28.u32 + 33, r29.u8);
	// beq 0x82271160
	if (ctx.cr0.eq) goto loc_82271160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82271160;
	sub_82120AC0(ctx, base);
loc_82271160:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x822f6280
	ctx.lr = 0x82271168;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82271198
	if (ctx.cr0.eq) goto loc_82271198;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,32356
	ctx.r4.s64 = ctx.r11.s64 + 32356;
	// bl 0x82120600
	ctx.lr = 0x82271180;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x821d13f8
	ctx.lr = 0x82271194;
	sub_821D13F8(ctx, base);
	// b 0x8227119c
	goto loc_8227119C;
loc_82271198:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8227119C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822711AC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822711c8
	if (ctx.cr0.eq) goto loc_822711C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822711C8;
	sub_82120AC0(ctx, base);
loc_822711C8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822711D0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82271200
	if (ctx.cr0.eq) goto loc_82271200;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,32504
	ctx.r4.s64 = ctx.r11.s64 + 32504;
	// bl 0x82120600
	ctx.lr = 0x822711E8;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x822711FC;
	sub_82196BA8(ctx, base);
	// b 0x82271204
	goto loc_82271204;
loc_82271200:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82271204:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x82271214;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271230
	if (ctx.cr0.eq) goto loc_82271230;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82271230;
	sub_82120AC0(ctx, base);
loc_82271230:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82271238;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82271268
	if (ctx.cr0.eq) goto loc_82271268;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,32516
	ctx.r4.s64 = ctx.r11.s64 + 32516;
	// bl 0x82120600
	ctx.lr = 0x82271250;
	sub_82120600(ctx, base);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82271264;
	sub_82196BA8(ctx, base);
	// b 0x8227126c
	goto loc_8227126C;
loc_82271268:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8227126C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8227127C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271298
	if (ctx.cr0.eq) goto loc_82271298;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82271298;
	sub_82120AC0(ctx, base);
loc_82271298:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822712A0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822712d0
	if (ctx.cr0.eq) goto loc_822712D0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-28492
	ctx.r4.s64 = ctx.r11.s64 + -28492;
	// bl 0x82120600
	ctx.lr = 0x822712B8;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x822712CC;
	sub_82196BA8(ctx, base);
	// b 0x822712d4
	goto loc_822712D4;
loc_822712D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822712D4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822712E4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271300
	if (ctx.cr0.eq) goto loc_82271300;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82271300;
	sub_82120AC0(ctx, base);
loc_82271300:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82271308;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82271338
	if (ctx.cr0.eq) goto loc_82271338;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-4308
	ctx.r4.s64 = ctx.r11.s64 + -4308;
	// bl 0x82120600
	ctx.lr = 0x82271320;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x82191600
	ctx.lr = 0x82271334;
	sub_82191600(ctx, base);
	// b 0x8227133c
	goto loc_8227133C;
loc_82271338:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8227133C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x8227134C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271368
	if (ctx.cr0.eq) goto loc_82271368;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x82271368;
	sub_82120AC0(ctx, base);
loc_82271368:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x82271370;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822713a0
	if (ctx.cr0.eq) goto loc_822713A0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-4292
	ctx.r4.s64 = ctx.r11.s64 + -4292;
	// bl 0x82120600
	ctx.lr = 0x82271388;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x82191600
	ctx.lr = 0x8227139C;
	sub_82191600(ctx, base);
	// b 0x822713a4
	goto loc_822713A4;
loc_822713A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822713A4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82145710
	ctx.lr = 0x822713B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822713cc
	if (ctx.cr0.eq) goto loc_822713CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x822713CC;
	sub_82120AC0(ctx, base);
loc_822713CC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82269bb8
	ctx.lr = 0x822713D8;
	sub_82269BB8(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x822713E0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271400
	if (ctx.cr0.eq) goto loc_82271400;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,200
	ctx.r5.s64 = 200;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x822713F8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82271404
	goto loc_82271404;
loc_82271400:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82271404:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82271414;
	sub_821D3988(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x822f6280
	ctx.lr = 0x8227141C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82271484
	if (ctx.cr0.eq) goto loc_82271484;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r31,12(r30)
	REX_STORE_U32(r30.u32 + 12, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// addi r11,r11,32616
	ctx.r11.s64 = ctx.r11.s64 + 32616;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82271448;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271474
	if (ctx.cr0.eq) goto loc_82271474;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,21984
	ctx.r10.s64 = ctx.r10.s64 + 21984;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82271478
	goto loc_82271478;
loc_82271474:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82271478:
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82271488
	goto loc_82271488;
loc_82271484:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82271488:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x82271490;
	sub_821D3988(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x822f6280
	ctx.lr = 0x82271498;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822714b0
	if (ctx.cr0.eq) goto loc_822714B0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82273730
	ctx.lr = 0x822714A8;
	sub_82273730(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822714b4
	goto loc_822714B4;
loc_822714B0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822714B4:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821d3988
	ctx.lr = 0x822714C0;
	sub_821D3988(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x822714C8;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r28,r11,-23824
	r28.s64 = ctx.r11.s64 + -23824;
	// beq 0x82271500
	if (ctx.cr0.eq) goto loc_82271500;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4276
	ctx.r4.s64 = ctx.r11.s64 + -4276;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822714F4;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x82271504
	goto loc_82271504;
loc_82271500:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82271504:
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
	ctx.lr = 0x8227151C;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x82271524;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82271554
	if (ctx.cr0.eq) goto loc_82271554;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-4260
	ctx.r4.s64 = ctx.r11.s64 + -4260;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82271548;
	sub_821DBB48(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// b 0x82271558
	goto loc_82271558;
loc_82271554:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82271558:
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
	ctx.lr = 0x82271570;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82271578;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822715a8
	if (ctx.cr0.eq) goto loc_822715A8;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-23908
	ctx.r4.s64 = ctx.r10.s64 + -23908;
	// addi r6,r11,6440
	ctx.r6.s64 = ctx.r11.s64 + 6440;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x822715A0;
	sub_822737D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822715ac
	goto loc_822715AC;
loc_822715A8:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822715AC:
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
	ctx.lr = 0x822715C4;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822715CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822715fc
	if (ctx.cr0.eq) goto loc_822715FC;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-4240
	ctx.r4.s64 = ctx.r10.s64 + -4240;
	// addi r6,r11,6504
	ctx.r6.s64 = ctx.r11.s64 + 6504;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x822715F4;
	sub_822737D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82271600
	goto loc_82271600;
loc_822715FC:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82271600:
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
	ctx.lr = 0x82271618;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82271620;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271650
	if (ctx.cr0.eq) goto loc_82271650;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-4228
	ctx.r4.s64 = ctx.r10.s64 + -4228;
	// addi r6,r11,6568
	ctx.r6.s64 = ctx.r11.s64 + 6568;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x82271648;
	sub_822737D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x82271654
	goto loc_82271654;
loc_82271650:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_82271654:
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
	ctx.lr = 0x8227166C;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82271674;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822716a4
	if (ctx.cr0.eq) goto loc_822716A4;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-4212
	ctx.r4.s64 = ctx.r10.s64 + -4212;
	// addi r6,r11,6632
	ctx.r6.s64 = ctx.r11.s64 + 6632;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822737d8
	ctx.lr = 0x8227169C;
	sub_822737D8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x822716a8
	goto loc_822716A8;
loc_822716A4:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_822716A8:
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
	ctx.lr = 0x822716C0;
	sub_82264568(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x822716C8;
	sub_822F6280(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29688
	r30.s64 = ctx.r11.s64 + -29688;
	// beq 0x822716f4
	if (ctx.cr0.eq) goto loc_822716F4;
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,31296
	ctx.r11.s64 = ctx.r11.s64 + 31296;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822716f8
	goto loc_822716F8;
loc_822716F4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_822716F8:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// addi r5,r11,-28924
	ctx.r5.s64 = ctx.r11.s64 + -28924;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8216be80
	ctx.lr = 0x8227170C;
	sub_8216BE80(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82271714;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82271738
	if (ctx.cr0.eq) goto loc_82271738;
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
	// b 0x8227173c
	goto loc_8227173C;
loc_82271738:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8227173C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r5,r11,-27100
	ctx.r5.s64 = ctx.r11.s64 + -27100;
	// bl 0x8216be80
	ctx.lr = 0x8227174C;
	sub_8216BE80(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120600
	ctx.lr = 0x82271758;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x82271768;
	sub_82180E18(ctx, base);
	// stw r3,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82120ac0
	ctx.lr = 0x8227177C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822A5430) {
	REX_FUNC_PROLOGUE();
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// ld r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// std r10,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r10.u64);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// b 0x822a4828
	sub_822A4828(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A5CD0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x822A5CD8;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2c94
	ctx.lr = 0x822A5CE0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fsubs f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fadds f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmuls f27,f11,f0
	f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f26,f9,f0
	f26.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f25,f10,f0
	f25.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f28,f8,f0
	f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bne cr6,0x822a5d74
	if (!ctx.cr6.eq) goto loc_822A5D74;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmr f26,f31
	f26.f64 = f31.f64;
	// fmr f25,f31
	f25.f64 = f31.f64;
	// fmr f30,f31
	f30.f64 = f31.f64;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
loc_822A5D74:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	f24.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	f23.f64 = ctx.f1.f64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A5DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f25,f24
	ctx.f13.f64 = double(float(f25.f64 + f24.f64));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfs f10,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// lfs f6,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * f29.f64));
	// fmuls f6,f6,f29
	ctx.f6.f64 = double(float(ctx.f6.f64 * f29.f64));
	// lfs f5,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f26,f23
	ctx.f3.f64 = double(float(f26.f64 + f23.f64));
	// lfs f4,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f29,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	f29.f64 = double(temp.f32);
	// lfs f2,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fabs f4,f4
	ctx.f4.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// lfs f26,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	f26.f64 = double(temp.f32);
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f24,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	f24.f64 = double(temp.f32);
	// fmadds f9,f5,f30,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f9.f64)));
	// lfs f25,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f25.f64 = double(temp.f32);
	// fmuls f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f8,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f29,f28,f7
	ctx.f7.f64 = double(float(std::fma(f29.f64, f28.f64, ctx.f7.f64)));
	// lfs f29,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f29.f64 = double(temp.f32);
	// fmadds f6,f26,f28,f6
	ctx.f6.f64 = double(float(std::fma(f26.f64, f28.f64, ctx.f6.f64)));
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fadds f1,f1,f27
	ctx.f1.f64 = double(float(ctx.f1.f64 + f27.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fabs f23,f24
	f23.u64 = f24.u64 & ~0x8000000000000000;
	// fabs f27,f25
	f27.u64 = f25.u64 & ~0x8000000000000000;
	// fmadds f12,f3,f12,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f0,f0,f28,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f9.f64)));
	// fmadds f11,f3,f4,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f13,f3,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f13.f64)));
	// fmadds f10,f24,f30,f7
	ctx.f10.f64 = double(float(std::fma(f24.f64, f30.f64, ctx.f7.f64)));
	// fmadds f9,f25,f30,f6
	ctx.f9.f64 = double(float(std::fma(f25.f64, f30.f64, ctx.f6.f64)));
	// fmadds f12,f5,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f12.f64)));
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// fmadds f11,f27,f1,f11
	ctx.f11.f64 = double(float(std::fma(f27.f64, ctx.f1.f64, ctx.f11.f64)));
	// fmadds f13,f23,f1,f13
	ctx.f13.f64 = double(float(std::fma(f23.f64, ctx.f1.f64, ctx.f13.f64)));
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
	// fadds f9,f9,f26
	ctx.f9.f64 = double(float(ctx.f9.f64 + f26.f64));
	// fsubs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fadds f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r9,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r9.u64);
	// std r11,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r11.u64);
	// std r8,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r8.u64);
	// std r10,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r10.u64);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ce0
	ctx.lr = 0x822A5EE8;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822BCE08) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,7308
	ctx.r4.s64 = ctx.r11.s64 + 7308;
	// bl 0x82180150
	ctx.lr = 0x822BCE34;
	sub_82180150(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822bcffc
	if (!ctx.cr6.gt) goto loc_822BCFFC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// lbz r6,53(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 53);
loc_822BCE60:
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bcfe8
	if (ctx.cr6.eq) goto loc_822BCFE8;
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x822bcef8
	if (ctx.cr6.eq) goto loc_822BCEF8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x822bcef8
	if (ctx.cr6.eq) goto loc_822BCEF8;
	// lfs f12,324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,320(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 492);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,328(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 328);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x822bcee4
	if (!ctx.cr6.lt) goto loc_822BCEE4;
	// lfs f12,340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f11,336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 336);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,496(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,344(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bge cr6,0x822bcee4
	if (!ctx.cr6.lt) goto loc_822BCEE4;
	// lfs f12,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 + f31.f64));
	// stfs f12,228(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// b 0x822bcef8
	goto loc_822BCEF8;
loc_822BCEE4:
	// stfs f0,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 228, temp.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x822bcef8
	if (ctx.cr6.eq) goto loc_822BCEF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_822BCEF8:
	// lwz r9,224(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x822bcf30
	if (ctx.cr6.eq) goto loc_822BCF30;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822bcf30
	if (!ctx.cr0.eq) goto loc_822BCF30;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x822bcf28
	if (ctx.cr6.eq) goto loc_822BCF28;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x822bcf28
	if (ctx.cr6.eq) goto loc_822BCF28;
	// lfs f12,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x822bcf30
	if (!ctx.cr6.gt) goto loc_822BCF30;
loc_822BCF28:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x822bcf34
	goto loc_822BCF34;
loc_822BCF30:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822BCF34:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822bcfd0
	if (ctx.cr0.eq) goto loc_822BCFD0;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822bcf60
	if (ctx.cr0.eq) goto loc_822BCF60;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x822bcfe8
	if (ctx.cr6.eq) goto loc_822BCFE8;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x822bcfe8
	if (ctx.cr6.eq) goto loc_822BCFE8;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822bcfe4
	goto loc_822BCFE4;
loc_822BCF60:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x822bcf70
	if (!ctx.cr6.eq) goto loc_822BCF70;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_822BCF70:
	// lwz r10,224(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x822bcfe8
	if (!ctx.cr6.eq) goto loc_822BCFE8;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r11,336
	ctx.r10.s64 = ctx.r11.s64 + 336;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ld r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// ld r5,8(r5)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r4,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r4.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r3,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// b 0x822bcfe8
	goto loc_822BCFE8;
loc_822BCFD0:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x822bcfe8
	if (ctx.cr6.eq) goto loc_822BCFE8;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x822bcfe8
	if (ctx.cr6.eq) goto loc_822BCFE8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_822BCFE4:
	// stw r10,224(r11)
	REX_STORE_U32(ctx.r11.u32 + 224, ctx.r10.u32);
loc_822BCFE8:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822bce60
	if (ctx.cr6.lt) goto loc_822BCE60;
loc_822BCFFC:
	// bl 0x821800b8
	ctx.lr = 0x822BD000;
	sub_821800B8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_822C6D60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x822C6D68;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	ea = (ctx.r1.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r30,1
	r30.s64 = 1;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,32
	r29.s64 = 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c6e50
	if (ctx.cr6.eq) goto loc_822C6E50;
	// rlwinm r9,r4,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r6,-64
	ctx.r6.s64 = -64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// or r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 | ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822C6DCC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm. r11,r7,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822c6e40
	if (!ctx.cr0.gt) goto loc_822C6E40;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// bge cr6,0x822c6e40
	if (!ctx.cr6.lt) goto loc_822C6E40;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x822c6e00
	if (ctx.cr6.gt) goto loc_822C6E00;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_822C6E00:
	// cmpwi cr6,r9,254
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 254, ctx.xer);
	// bge cr6,0x822c6e18
	if (!ctx.cr6.lt) goto loc_822C6E18;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x822c6e1c
	if (ctx.cr6.gt) goto loc_822C6E1C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x822c6e1c
	goto loc_822C6E1C;
loc_822C6E18:
	// li r11,254
	ctx.r11.s64 = 254;
loc_822C6E1C:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// rlwinm r7,r7,0,9,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stvx128 v127,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r11,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, ctx.r11.u32);
	// lvx128 v127,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822C6E40:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x822c6dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C6DCC;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_822C6E50:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(r31.u32, 15, ctx.xer);
	// bgt cr6,0x822c71b0
	if (ctx.cr6.gt) goto loc_822C71B0;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// addi r12,r12,16296
	ctx.r12.s64 = ctx.r12.s64 + 16296;
	// lbzx r0,r12,r31
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + r31.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32212
	ctx.r12.s64 = -2111045632;
	// nop 
	// addi r12,r12,28288
	ctx.r12.s64 = ctx.r12.s64 + 28288;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (r31.u32) {
	case 0:
		goto loc_822C6E8C;
	case 1:
		goto loc_822C6E80;
	case 2:
		goto loc_822C6E8C;
	case 3:
		goto loc_822C7030;
	case 4:
		goto loc_822C6F74;
	case 5:
		goto loc_822C6F74;
	case 6:
		goto loc_822C712C;
	case 7:
		goto loc_822C7150;
	case 8:
		goto loc_822C71B0;
	case 9:
		goto loc_822C71B0;
	case 10:
		goto loc_822C6E8C;
	case 11:
		goto loc_822C71B0;
	case 12:
		goto loc_822C7030;
	case 13:
		goto loc_822C71B0;
	case 14:
		goto loc_822C7194;
	case 15:
		goto loc_822C71A0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822C6E80:
	// vor128 v1,v127,v127
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v127.u8));
	// bl 0x822c6bc8
	ctx.lr = 0x822C6E88;
	sub_822C6BC8(ctx, base);
	// vor128 v127,v1,v1
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
loc_822C6E8C:
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(r31.u32, 10, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x822c6e9c
	if (ctx.cr6.eq) goto loc_822C6E9C;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822C6E9C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// addi r10,r10,8116
	ctx.r10.s64 = ctx.r10.s64 + 8116;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r9,r9,8112
	ctx.r9.s64 = ctx.r9.s64 + 8112;
	// addi r8,r8,16592
	ctx.r8.s64 = ctx.r8.s64 + 16592;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r8,16
	ctx.r8.s64 = 16;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mulli r10,r11,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// rotlwi r5,r11,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v127,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vminfp128 v63,v63,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vrfin128 v63,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvlx128 v63,r0,r6
	ea = ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_822C6F6C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x822c71b4
	goto loc_822C71B4;
loc_822C6F74:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,896
	ctx.r10.s64 = 896;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,12
	ctx.r8.s64 = 12;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lvlx128 v63,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r7,8128
	ctx.r10.s64 = ctx.r7.s64 + 8128;
	// lvlx128 v62,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r6,-21776
	ctx.r9.s64 = ctx.r6.s64 + -21776;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvlx128 v61,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// vspltw128 v61,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,8144
	ctx.r11.s64 = ctx.r11.s64 + 8144;
	// vmulfp128 v60,v127,v63
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(v127.f32), simde_mm_load_ps(ctx.v63.f32)));
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,16
	ctx.r9.s64 = 16;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(r31.u32, 5, ctx.xer);
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v62,v62,v60
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v12,v61,v62
	simde_mm_store_ps(ctx.v12.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v0.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v62.f32)));
	// vxor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stvlx128 v63,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x822c7024
	if (!ctx.cr6.eq) goto loc_822C7024;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x822c71b4
	goto loc_822C71B4;
loc_822C7024:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x822c6f6c
	goto loc_822C6F6C;
loc_822C7030:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
loc_822C7044:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r4,-124
	ctx.r4.s64 = -124;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a3068
	ctx.lr = 0x822C7054;
	sub_826A3068(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq 0x822c708c
	if (ctx.cr0.eq) goto loc_822C708C;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1023
	ctx.r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x822c7090
	if (ctx.cr6.lt) goto loc_822C7090;
	// li r11,511
	ctx.r11.s64 = 511;
	// b 0x822c7090
	goto loc_822C7090;
loc_822C708C:
	// rlwinm r11,r11,16,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
loc_822C7090:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwx r11,r31,r10
	REX_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(r31.u32, 12, ctx.xer);
	// blt cr6,0x822c7044
	if (ctx.cr6.lt) goto loc_822C7044;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822c70d0
	if (!ctx.cr6.gt) goto loc_822C70D0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822c70d4
	goto loc_822C70D4;
loc_822C70D0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
loc_822C70D4:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x822c70ec
	if (!ctx.cr6.lt) goto loc_822C70EC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x822c70f0
	if (ctx.cr6.gt) goto loc_822C70F0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x822c70f0
	goto loc_822C70F0;
loc_822C70EC:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_822C70F0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r8,r8,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x822c6f6c
	goto loc_822C6F6C;
loc_822C712C:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v127,3,1,3
	ctx.fpscr.enableFlushMode();
	temp.u32 = (v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((v127.u32[3]&0x80000000)>>16);
	temp.u32 = (v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((v127.u32[2]&0x80000000)>>16);
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822c6f6c
	goto loc_822C6F6C;
loc_822C7150:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r29,64
	r29.s64 = 64;
	// vpkd3d128 v63,v127,5,2,2
	ctx.fpscr.enableFlushMode();
	temp.u32 = (v127.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[7] |= ((v127.u32[3]&0x80000000)>>16);
	temp.u32 = (v127.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[6] |= ((v127.u32[2]&0x80000000)>>16);
	temp.u32 = (v127.u32[1]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[1]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[1]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[5] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[5] |= ((v127.u32[1]&0x80000000)>>16);
	temp.u32 = (v127.u32[0]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((v127.u32[0]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((v127.u32[0]&0x7FE000)>>13) : 0x0;
	ctx.v63.u16[4] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v63.u16[4] |= ((v127.u32[0]&0x80000000)>>16);
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// lhz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x822c71b4
	goto loc_822C71B4;
loc_822C7194:
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x822c71b4
	goto loc_822C71B4;
loc_822C71A0:
	// lwz r10,240(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// li r29,64
	r29.s64 = 64;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// b 0x822c71b4
	goto loc_822C71B4;
loc_822C71B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822C71B4:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	ea = (ctx.r1.u32 + ctx.r0.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822F61C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,2552
	ctx.r11.s64 = ctx.r11.s64 + 2552;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x822f5ee0
	sub_822F5EE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F63D0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822f6410
	if (!ctx.cr6.gt) goto loc_822F6410;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r10,r10,-11072
	ctx.r10.s64 = ctx.r10.s64 + -11072;
	// lbzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// bgt 0x822f642c
	if (ctx.cr0.gt) goto loc_822F642C;
loc_822F6410:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f6340
	ctx.lr = 0x822F6418;
	sub_822F6340(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f642c
	if (ctx.cr6.eq) goto loc_822F642C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215cf60
	ctx.lr = 0x822F642C;
	sub_8215CF60(ctx, base);
loc_822F642C:
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

DEFINE_REX_FUNC(sub_822F73F0) {
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
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmuls f0,f2,f2
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// fmadds f0,f1,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f1.f64, ctx.f0.f64)));
	// fsqrts f31,f0
	f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8269d528
	ctx.lr = 0x822F7428;
	sub_8269D528(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ble cr6,0x822f7448
	if (!ctx.cr6.gt) goto loc_822F7448;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_822F7448:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f7188
	ctx.lr = 0x822F745C;
	sub_822F7188(ctx, base);
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

DEFINE_REX_FUNC(sub_822FB768) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fb790
	if (!ctx.cr6.eq) goto loc_822FB790;
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x822fb89c
	goto loc_822FB89C;
loc_822FB790:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822fb7a8
	if (ctx.cr0.eq) goto loc_822FB7A8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x822fb7dc
	goto loc_822FB7DC;
loc_822FB7A8:
	// rlwinm. r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822fb7b8
	if (ctx.cr0.eq) goto loc_822FB7B8;
	// li r31,1
	r31.s64 = 1;
	// b 0x822fb7dc
	goto loc_822FB7DC;
loc_822FB7B8:
	// rlwinm. r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822fb7c8
	if (ctx.cr0.eq) goto loc_822FB7C8;
	// li r31,2
	r31.s64 = 2;
	// b 0x822fb7dc
	goto loc_822FB7DC;
loc_822FB7C8:
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
loc_822FB7DC:
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fb800
	if (ctx.cr6.eq) goto loc_822FB800;
	// mulli r11,r31,76
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(76));
	// li r5,76
	ctx.r5.s64 = 76;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x822FB7FC;
	sub_823EF2F8(ctx, base);
	// b 0x822fb898
	goto loc_822FB898;
loc_822FB800:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r5,23
	ctx.r5.s64 = 23;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,3712(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3712);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lfs f11,3708(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3708);
	ctx.f11.f64 = double(temp.f32);
	// stw r5,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// lfs f13,3704(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
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
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// bl 0x823ef2f8
	ctx.lr = 0x822FB880;
	sub_823EF2F8(ctx, base);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r10,r10,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
loc_822FB898:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FB89C:
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

DEFINE_REX_FUNC(sub_82303070) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8232fa90
	sub_8232FA90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82303568) {
	REX_FUNC_PROLOGUE();
	// stw r4,180(r3)
	REX_STORE_U32(ctx.r3.u32 + 180, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82303CB0) {
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
	// lwz r6,52(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82303cdc
	if (!ctx.cr6.eq) goto loc_82303CDC;
	// li r3,19
	ctx.r3.s64 = 19;
	// b 0x82303d00
	goto loc_82303D00;
loc_82303CDC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8269e4b8
	ctx.lr = 0x82303CEC;
	sub_8269E4B8(ctx, base);
	// subf r11,r3,r31
	ctx.r11.u64 = r31.u64 - ctx.r3.u64;
	// li r10,19
	ctx.r10.s64 = 19;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82303D00:
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

DEFINE_REX_FUNC(sub_82308C18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82308c28
	if (!ctx.cr6.eq) goto loc_82308C28;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82308C28:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82308c54
	if (ctx.cr6.eq) goto loc_82308C54;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82308c4c
	goto loc_82308C4C;
loc_82308C44:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82308C4C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82308c44
	if (!ctx.cr6.eq) goto loc_82308C44;
loc_82308C54:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8230C1B8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82331a00
	ctx.lr = 0x8230C1E8;
	sub_82331A00(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230C200;
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

DEFINE_REX_FUNC(sub_8230DD00) {
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
	ctx.lr = 0x8230DD08;
	// addi r31,r1,-352
	r31.s64 = ctx.r1.s64 + -352;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x826a2d14
	ctx.lr = 0x8230DD2C;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r19,0
	r19.s64 = 0;
	// mr r20,r19
	r20.u64 = r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x8230dda8
	if (ctx.cr6.eq) goto loc_8230DDA8;
	// mr r27,r19
	r27.u64 = r19.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8230ddd0
	if (!ctx.cr6.gt) goto loc_8230DDD0;
	// addi r28,r24,-4
	r28.s64 = r24.s64 + -4;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
loc_8230DD60:
	// stw r19,84(r31)
	REX_STORE_U32(r31.u32 + 84, r19.u32);
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// bl 0x8233f688
	ctx.lr = 0x8230DD74;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230dd94
	if (!ctx.cr6.eq) goto loc_8230DD94;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
loc_8230DD94:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// blt cr6,0x8230dd60
	if (ctx.cr6.lt) goto loc_8230DD60;
	// b 0x8230ddd0
	goto loc_8230DDD0;
loc_8230DDA8:
	// mr r20,r30
	r20.u64 = r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8230ddd0
	if (!ctx.cr6.gt) goto loc_8230DDD0;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// subf r10,r24,r5
	ctx.r10.u64 = ctx.r5.u64 - r24.u64;
loc_8230DDC0:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8230ddc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230DDC0;
loc_8230DDD0:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8230DDE0;
	sub_823EF5F0(ctx, base);
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 84);
	// li r17,112
	r17.s64 = 112;
	// stw r20,136(r31)
	REX_STORE_U32(r31.u32 + 136, r20.u32);
	// li r18,8
	r18.s64 = 8;
	// stw r24,132(r31)
	REX_STORE_U32(r31.u32 + 132, r24.u32);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stw r17,96(r31)
	REX_STORE_U32(r31.u32 + 96, r17.u32);
	// stw r18,168(r31)
	REX_STORE_U32(r31.u32 + 168, r18.u32);
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// beq cr6,0x8230e21c
	if (ctx.cr6.eq) goto loc_8230E21C;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8230c890
	ctx.lr = 0x8230DE1C;
	sub_8230C890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// beq cr6,0x8230df60
	if (ctx.cr6.eq) goto loc_8230DF60;
	// mr r28,r19
	r28.u64 = r19.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8230dec0
	if (!ctx.cr6.gt) goto loc_8230DEC0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8230DE48:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8233f688
	ctx.lr = 0x8230DE54;
	sub_8233F688(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8230df30
	if (!ctx.cr0.eq) goto loc_8230DF30;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230df48
	if (ctx.cr6.eq) goto loc_8230DF48;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8233f608
	ctx.lr = 0x8230DE78;
	sub_8233F608(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8230df30
	if (!ctx.cr0.eq) goto loc_8230DF30;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r19.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r10,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, ctx.r10.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x8233f608
	ctx.lr = 0x8230DEA4;
	sub_8233F608(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8230df30
	if (!ctx.cr0.eq) goto loc_8230DF30;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(r28.s32, r20.s32, ctx.xer);
	// blt cr6,0x8230de48
	if (ctx.cr6.lt) goto loc_8230DE48;
loc_8230DEC0:
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r9,196(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r10,196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,196(r11)
	REX_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8232fc60
	ctx.lr = 0x8230DEDC;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8230dff8
	if (!ctx.cr6.gt) goto loc_8230DFF8;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8230DEF4:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// bl 0x8233f688
	ctx.lr = 0x8230DF04;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230df58
	if (ctx.cr6.eq) goto loc_8230DF58;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r19,220(r11)
	REX_STORE_U32(ctx.r11.u32 + 220, r19.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(r29.s32, r20.s32, ctx.xer);
	// blt cr6,0x8230def4
	if (ctx.cr6.lt) goto loc_8230DEF4;
	// b 0x8230dff8
	goto loc_8230DFF8;
loc_8230DF30:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230df40
	if (ctx.cr6.eq) goto loc_8230DF40;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232fc60
	ctx.lr = 0x8230DF40;
	sub_8232FC60(ctx, base);
loc_8230DF40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8230e220
	goto loc_8230E220;
loc_8230DF48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230df58
	if (ctx.cr6.eq) goto loc_8230DF58;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232fc60
	ctx.lr = 0x8230DF58;
	sub_8232FC60(ctx, base);
loc_8230DF58:
	// li r3,33
	ctx.r3.s64 = 33;
	// b 0x8230e220
	goto loc_8230E220;
loc_8230DF60:
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// bl 0x8233f818
	ctx.lr = 0x8230DF68;
	sub_8233F818(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8230df88
	if (ctx.cr0.eq) goto loc_8230DF88;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230df80
	if (ctx.cr6.eq) goto loc_8230DF80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232fc60
	ctx.lr = 0x8230DF80;
	sub_8232FC60(ctx, base);
loc_8230DF80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8230e220
	goto loc_8230E220;
loc_8230DF88:
	// lwz r3,76(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 76);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8230dfe4
	if (!ctx.cr6.eq) goto loc_8230DFE4;
	// stw r11,92(r21)
	REX_STORE_U32(r21.u32 + 92, ctx.r11.u32);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r9,5068
	ctx.r5.s64 = ctx.r9.s64 + 5068;
	// li r6,897
	ctx.r6.s64 = 897;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,1012(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x8230DFC0;
	sub_82330E40(ctx, base);
	// stw r3,76(r21)
	REX_STORE_U32(r21.u32 + 76, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8230dff0
	if (!ctx.cr0.eq) goto loc_8230DFF0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8230dfdc
	if (ctx.cr6.eq) goto loc_8230DFDC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8232fc60
	ctx.lr = 0x8230DFDC;
	sub_8232FC60(ctx, base);
loc_8230DFDC:
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x8230e220
	goto loc_8230E220;
loc_8230DFE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ef5f0
	ctx.lr = 0x8230DFF0;
	sub_823EF5F0(ctx, base);
loc_8230DFF0:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,40(r21)
	REX_STORE_U32(r21.u32 + 40, ctx.r11.u32);
loc_8230DFF8:
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r23,320(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// bl 0x8233f818
	ctx.lr = 0x8230E00C;
	sub_8233F818(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// rlwinm r11,r20,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 4) & 0xFFFFFFF0;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r12,r11,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x826a2d14
	ctx.lr = 0x8230E024;
	sub_826A2D14(ctx, base);
	// lwz r11,0(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r22,r19
	r22.u64 = r19.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x8230e21c
	if (!ctx.cr6.gt) goto loc_8230E21C;
loc_8230E040:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r19
	r26.u64 = r19.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// addi r25,r10,-4
	r25.s64 = ctx.r10.s64 + -4;
	// add r27,r9,r23
	r27.u64 = ctx.r9.u64 + r23.u64;
loc_8230E064:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8230e10c
	if (!ctx.cr6.lt) goto loc_8230E10C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8230e08c
	if (!ctx.cr0.eq) goto loc_8230E08C;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8230e10c
	if (!ctx.cr0.eq) goto loc_8230E10C;
loc_8230E08C:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8233f688
	ctx.lr = 0x8230E09C;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230e0f8
	if (!ctx.cr6.eq) goto loc_8230E0F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8230e0e8
	if (!ctx.cr6.gt) goto loc_8230E0E8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_8230E0C4:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r29.s32, ctx.xer);
	// beq cr6,0x8230e0e4
	if (ctx.cr6.eq) goto loc_8230E0E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// blt cr6,0x8230e0c4
	if (ctx.cr6.lt) goto loc_8230E0C4;
	// b 0x8230e0e8
	goto loc_8230E0E8;
loc_8230E0E4:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_8230E0E8:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e0f8
	if (ctx.cr0.eq) goto loc_8230E0F8;
	// stwu r29,4(r25)
	ea = 4 + r25.u32;
	REX_STORE_U32(ea, r29.u32);
	r25.u32 = ea;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8230E0F8:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(r26.s32, 4, ctx.xer);
	// blt cr6,0x8230e064
	if (ctx.cr6.lt) goto loc_8230E064;
loc_8230E10C:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// cmpw cr6,r22,r20
	ctx.cr6.compare<int32_t>(r22.s32, r20.s32, ctx.xer);
	// blt cr6,0x8230e040
	if (ctx.cr6.lt) goto loc_8230E040;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8230e21c
	if (ctx.cr6.eq) goto loc_8230E21C;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x8230E134;
	sub_823EF5F0(ctx, base);
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 84);
	// stw r28,136(r31)
	REX_STORE_U32(r31.u32 + 136, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r17,96(r31)
	REX_STORE_U32(r31.u32 + 96, r17.u32);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// stw r30,132(r31)
	REX_STORE_U32(r31.u32 + 132, r30.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stw r18,168(r31)
	REX_STORE_U32(r31.u32 + 168, r18.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// bl 0x8230c890
	ctx.lr = 0x8230E160;
	sub_8230C890(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x8230e1f4
	if (!ctx.cr6.gt) goto loc_8230E1F4;
loc_8230E174:
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8233f688
	ctx.lr = 0x8230E184;
	sub_8233F688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230df58
	if (ctx.cr6.eq) goto loc_8230DF58;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8233f608
	ctx.lr = 0x8230E1A8;
	sub_8233F608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r19,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r19.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x82343440
	ctx.lr = 0x8230E1C4;
	sub_82343440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,84(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,40(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 40);
	// bl 0x8233f608
	ctx.lr = 0x8230E1DC;
	sub_8233F608(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x8230e174
	if (ctx.cr6.lt) goto loc_8230E174;
loc_8230E1F4:
	// lwz r11,40(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 40);
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,196(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r9,196(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 196);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,196(r11)
	REX_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x8232fc60
	ctx.lr = 0x8230E214;
	sub_8232FC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230e220
	if (!ctx.cr0.eq) goto loc_8230E220;
loc_8230E21C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230E220:
	// addi r1,r31,352
	ctx.r1.s64 = r31.s64 + 352;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82332188) {
	REX_FUNC_PROLOGUE();
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233219c
	if (ctx.cr6.eq) goto loc_8233219C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8233219C:
	// rlwinm r10,r4,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823321b0
	if (ctx.cr6.eq) goto loc_823321B0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823321B0:
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823321c4
	if (ctx.cr6.eq) goto loc_823321C4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823321C4:
	// rlwinm r10,r4,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823321d8
	if (ctx.cr6.eq) goto loc_823321D8;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823321D8:
	// rlwinm r10,r4,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823321ec
	if (ctx.cr6.eq) goto loc_823321EC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823321EC:
	// rlwinm r10,r4,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332200
	if (ctx.cr6.eq) goto loc_82332200;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332200:
	// rlwinm r10,r4,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332214
	if (ctx.cr6.eq) goto loc_82332214;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332214:
	// rlwinm r10,r4,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332228
	if (ctx.cr6.eq) goto loc_82332228;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332228:
	// rlwinm r10,r4,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233223c
	if (ctx.cr6.eq) goto loc_8233223C;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233223C:
	// rlwinm r10,r4,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332250
	if (ctx.cr6.eq) goto loc_82332250;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332250:
	// rlwinm r10,r4,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332264
	if (ctx.cr6.eq) goto loc_82332264;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332264:
	// rlwinm r10,r4,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332278
	if (ctx.cr6.eq) goto loc_82332278;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332278:
	// rlwinm r10,r4,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233228c
	if (ctx.cr6.eq) goto loc_8233228C;
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233228C:
	// rlwinm r10,r4,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823322a0
	if (ctx.cr6.eq) goto loc_823322A0;
	// lwz r10,52(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823322A0:
	// rlwinm r10,r4,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823322b4
	if (ctx.cr6.eq) goto loc_823322B4;
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823322B4:
	// rlwinm r10,r4,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823322c8
	if (ctx.cr6.eq) goto loc_823322C8;
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823322C8:
	// rlwinm r10,r4,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823322dc
	if (ctx.cr6.eq) goto loc_823322DC;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823322DC:
	// rlwinm r10,r4,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823322f0
	if (ctx.cr6.eq) goto loc_823322F0;
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823322F0:
	// rlwinm r10,r4,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332304
	if (ctx.cr6.eq) goto loc_82332304;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332304:
	// rlwinm r10,r4,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332318
	if (ctx.cr6.eq) goto loc_82332318;
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332318:
	// rlwinm r10,r4,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233232c
	if (ctx.cr6.eq) goto loc_8233232C;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233232C:
	// rlwinm r10,r4,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332340
	if (ctx.cr6.eq) goto loc_82332340;
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332340:
	// clrlwi r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332354
	if (ctx.cr6.eq) goto loc_82332354;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332354:
	// rlwinm r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332368
	if (ctx.cr6.eq) goto loc_82332368;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332368:
	// rlwinm r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233237c
	if (ctx.cr6.eq) goto loc_8233237C;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233237C:
	// rlwinm r10,r5,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332390
	if (ctx.cr6.eq) goto loc_82332390;
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332390:
	// rlwinm r10,r5,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323a4
	if (ctx.cr6.eq) goto loc_823323A4;
	// lwz r10,104(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823323A4:
	// rlwinm r10,r5,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323b8
	if (ctx.cr6.eq) goto loc_823323B8;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823323B8:
	// rlwinm r10,r5,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323cc
	if (ctx.cr6.eq) goto loc_823323CC;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823323CC:
	// rlwinm r10,r5,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323e0
	if (ctx.cr6.eq) goto loc_823323E0;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823323E0:
	// rlwinm r10,r5,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823323f4
	if (ctx.cr6.eq) goto loc_823323F4;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823323F4:
	// rlwinm r10,r5,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332408
	if (ctx.cr6.eq) goto loc_82332408;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332408:
	// rlwinm r10,r5,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233241c
	if (ctx.cr6.eq) goto loc_8233241C;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233241C:
	// rlwinm r10,r5,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332430
	if (ctx.cr6.eq) goto loc_82332430;
	// lwz r10,132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332430:
	// rlwinm r10,r5,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332444
	if (ctx.cr6.eq) goto loc_82332444;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332444:
	// rlwinm r10,r5,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332458
	if (ctx.cr6.eq) goto loc_82332458;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332458:
	// rlwinm r10,r5,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233246c
	if (ctx.cr6.eq) goto loc_8233246C;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233246C:
	// rlwinm r10,r5,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332480
	if (ctx.cr6.eq) goto loc_82332480;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332480:
	// rlwinm r10,r5,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332494
	if (ctx.cr6.eq) goto loc_82332494;
	// lwz r10,152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332494:
	// rlwinm r10,r5,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823324a8
	if (ctx.cr6.eq) goto loc_823324A8;
	// lwz r10,156(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823324A8:
	// rlwinm r10,r5,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823324bc
	if (ctx.cr6.eq) goto loc_823324BC;
	// lwz r10,160(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823324BC:
	// rlwinm r10,r5,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823324d0
	if (ctx.cr6.eq) goto loc_823324D0;
	// lwz r10,164(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823324D0:
	// rlwinm r10,r5,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823324e4
	if (ctx.cr6.eq) goto loc_823324E4;
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823324E4:
	// rlwinm r10,r5,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823324f8
	if (ctx.cr6.eq) goto loc_823324F8;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823324F8:
	// rlwinm r10,r5,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233250c
	if (ctx.cr6.eq) goto loc_8233250C;
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8233250C:
	// rlwinm r10,r5,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332520
	if (ctx.cr6.eq) goto loc_82332520;
	// lwz r10,180(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82332520:
	// rlwinm r10,r5,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332538
	if (ctx.cr6.eq) goto loc_82332538;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82332538:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82357870) {
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
	ctx.lr = 0x82357888;
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
	ctx.lr = 0x8235789C;
	sub_82341280(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,8628
	ctx.r6.s64 = ctx.r8.s64 + 8628;
	// addi r9,r31,1884
	ctx.r9.s64 = r31.s64 + 1884;
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
	// stw r11,1896(r31)
	REX_STORE_U32(r31.u32 + 1896, ctx.r11.u32);
	// lis r7,-32129
	ctx.r7.s64 = -2105606144;
	// stw r8,1888(r31)
	REX_STORE_U32(r31.u32 + 1888, ctx.r8.u32);
	// addi r6,r4,9656
	ctx.r6.s64 = ctx.r4.s64 + 9656;
	// stw r8,1892(r31)
	REX_STORE_U32(r31.u32 + 1892, ctx.r8.u32);
	// stw r10,1900(r31)
	REX_STORE_U32(r31.u32 + 1900, ctx.r10.u32);
	// lis r3,-32203
	ctx.r3.s64 = -2110455808;
	// stw r6,1884(r31)
	REX_STORE_U32(r31.u32 + 1884, ctx.r6.u32);
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
	// stw r10,1908(r31)
	REX_STORE_U32(r31.u32 + 1908, ctx.r10.u32);
	// addi r4,r4,26144
	ctx.r4.s64 = ctx.r4.s64 + 26144;
	// stw r6,2016(r31)
	REX_STORE_U32(r31.u32 + 2016, ctx.r6.u32);
	// stw r9,2004(r31)
	REX_STORE_U32(r31.u32 + 2004, ctx.r9.u32);
	// stw r9,2008(r31)
	REX_STORE_U32(r31.u32 + 2008, ctx.r9.u32);
	// stw r11,2012(r31)
	REX_STORE_U32(r31.u32 + 2012, ctx.r11.u32);
	// stw r3,1940(r31)
	REX_STORE_U32(r31.u32 + 1940, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,1952(r31)
	REX_STORE_U32(r31.u32 + 1952, ctx.r11.u32);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// stw r5,1932(r31)
	REX_STORE_U32(r31.u32 + 1932, ctx.r5.u32);
	// stw r4,1936(r31)
	REX_STORE_U32(r31.u32 + 1936, ctx.r4.u32);
	// stw r8,1884(r31)
	REX_STORE_U32(r31.u32 + 1884, ctx.r8.u32);
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

DEFINE_REX_FUNC(sub_8235E6C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235e710
	if (!ctx.cr6.eq) goto loc_8235E710;
	// lbz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,37
	ctx.r10.s64 = ctx.r3.s64 + 37;
loc_8235E6E4:
	// lbz r7,-1(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8235e700
	if (!ctx.cr6.eq) goto loc_8235E700;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,9(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 9);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8235e718
	if (ctx.cr6.eq) goto loc_8235E718;
loc_8235E700:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8235e6e4
	if (ctx.cr6.lt) goto loc_8235E6E4;
loc_8235E710:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235E718:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// subf r5,r7,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subfc r4,r5,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r4.u64 = ctx.r6.u64 - ctx.r5.u64;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82361730) {
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
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,14
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14, ctx.xer);
	// bgt cr6,0x823619ac
	if (ctx.cr6.gt) goto loc_823619AC;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6000
	ctx.r12.s64 = ctx.r12.s64 + 6000;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_823617AC;
	case 1:
		goto loc_823617D4;
	case 2:
		goto loc_823618BC;
	case 3:
		goto loc_823618E4;
	case 4:
		goto loc_823618F0;
	case 5:
		goto loc_823618FC;
	case 6:
		goto loc_82361908;
	case 7:
		goto loc_82361930;
	case 8:
		goto loc_8236193C;
	case 9:
		goto loc_82361964;
	case 10:
		goto loc_82361970;
	case 11:
		goto loc_8236197C;
	case 12:
		goto loc_82361988;
	case 13:
		goto loc_82361994;
	case 14:
		goto loc_823619A0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823617AC:
	// stfs f0,1896(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1896, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,11188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 11188);
	ctx.f13.f64 = double(temp.f32);
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x8269f778
	ctx.lr = 0x823617C8;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,1900(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 1900, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_823617D4:
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
loc_823617DC:
	// lfs f13,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsel f10,f0,f11,f12
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f9.u32);
loc_823617F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e7e0
	ctx.lr = 0x82361800;
	sub_8233E7E0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r3,20848
	ctx.r11.s64 = ctx.r3.s64 + 20848;
	// lwz r10,20848(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20848);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361824
	if (!ctx.cr6.eq) goto loc_82361824;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82361828
	if (ctx.cr6.eq) goto loc_82361828;
loc_82361824:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82361828:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236183c
	if (ctx.cr6.eq) goto loc_8236183C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82334ca0
	ctx.lr = 0x8236183C;
	sub_82334CA0(ctx, base);
loc_8236183C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,20848(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20848);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r5,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// stw r9,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r9,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,20816
	ctx.r11.s64 = ctx.r11.s64 + 20816;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r4,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r31,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, r31.u32);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,4356(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4356);
	// bl 0x8233e820
	ctx.lr = 0x823618A0;
	sub_8233E820(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823618A4:
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
loc_823618BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f13,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsel f10,f0,f11,f12
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f9.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_823618E4:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_823618F0:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_823618FC:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361908:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// li r9,20
	ctx.r9.s64 = 20;
	// lfs f13,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsel f10,f0,f11,f12
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f9.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361930:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_8236193C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,1772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// li r9,28
	ctx.r9.s64 = 28;
	// lfs f13,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsel f10,f0,f11,f12
	ctx.f10.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f9.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361964:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361970:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_8236197C:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361988:
	// lwz r11,1772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// stfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_82361994:
	// lwz r10,1780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// b 0x823617dc
	goto loc_823617DC;
loc_823619A0:
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x823617f4
	goto loc_823617F4;
loc_823619AC:
	// li r3,37
	ctx.r3.s64 = 37;
	// b 0x823618a4
	goto loc_823618A4;
}

DEFINE_REX_FUNC(sub_8237BBE8) {
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
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r30,0
	r30.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r30,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, r30.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// stw r30,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r30.u32);
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x8237BC34;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bd1c
	if (!ctx.cr6.eq) goto loc_8237BD1C;
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,264(r31)
	REX_STORE_U32(r31.u32 + 264, r30.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340718
	ctx.lr = 0x8237BC60;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bd1c
	if (!ctx.cr6.eq) goto loc_8237BD1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18148
	ctx.r4.s64 = ctx.r11.s64 + 18148;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82331620
	ctx.lr = 0x8237BC7C;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8237bc8c
	if (ctx.cr6.eq) goto loc_8237BC8C;
loc_8237BC84:
	// li r3,25
	ctx.r3.s64 = 25;
	// b 0x8237bd1c
	goto loc_8237BD1C;
loc_8237BC8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82340718
	ctx.lr = 0x8237BCA4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bd1c
	if (!ctx.cr6.eq) goto loc_8237BD1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,18516
	ctx.r4.s64 = ctx.r11.s64 + 18516;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82331620
	ctx.lr = 0x8237BCC0;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bc84
	if (!ctx.cr6.eq) goto loc_8237BC84;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,280(r31)
	REX_STORE_U32(r31.u32 + 280, r30.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r10,r11,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bl 0x8237a240
	ctx.lr = 0x8237BD00;
	sub_8237A240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237bd1c
	if (!ctx.cr6.eq) goto loc_8237BD1C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8237bc84
	if (!ctx.cr6.gt) goto loc_8237BC84;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_8237BD1C:
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

DEFINE_REX_FUNC(sub_8238AA98) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8238aaa8
	if (!ctx.cr6.eq) goto loc_8238AAA8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8238AAA8:
	// b 0x8238a6e0
	sub_8238A6E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8238DA20) {
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
	ctx.lr = 0x8238DA28;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823c86b8
	ctx.lr = 0x8238DA34;
	sub_823C86B8(ctx, base);
	// lwz r3,1056(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1056);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238da4c
	if (ctx.cr6.eq) goto loc_8238DA4C;
	// bl 0x82358490
	ctx.lr = 0x8238DA48;
	sub_82358490(ctx, base);
	// stw r27,1056(r31)
	REX_STORE_U32(r31.u32 + 1056, r27.u32);
loc_8238DA4C:
	// lwz r3,524(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238da70
	if (ctx.cr6.eq) goto loc_8238DA70;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DA6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,524(r31)
	REX_STORE_U32(r31.u32 + 524, r27.u32);
loc_8238DA70:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238dabc
	if (!ctx.cr6.gt) goto loc_8238DABC;
	// addi r30,r31,2204
	r30.s64 = r31.s64 + 2204;
loc_8238DA84:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8238daa8
	if (ctx.cr6.eq) goto loc_8238DAA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8238DAA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
loc_8238DAA8:
	// lwz r11,1424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1424);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,52
	r30.s64 = r30.s64 + 52;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238da84
	if (ctx.cr6.lt) goto loc_8238DA84;
loc_8238DABC:
	// lwz r4,1052(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1052);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,19760
	r29.s64 = ctx.r11.s64 + 19760;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238daf0
	if (ctx.cr6.eq) goto loc_8238DAF0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2539
	ctx.r6.s64 = 2539;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DAEC;
	sub_82330D00(ctx, base);
	// stw r27,1052(r31)
	REX_STORE_U32(r31.u32 + 1052, r27.u32);
loc_8238DAF0:
	// lwz r4,1060(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1060);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238db18
	if (ctx.cr6.eq) goto loc_8238DB18;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2545
	ctx.r6.s64 = 2545;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DB14;
	sub_82330D00(ctx, base);
	// stw r27,1060(r31)
	REX_STORE_U32(r31.u32 + 1060, r27.u32);
loc_8238DB18:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8238dba4
	if (ctx.cr6.eq) goto loc_8238DBA4;
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238db84
	if (!ctx.cr6.gt) goto loc_8238DB84;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8238DB38:
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238db70
	if (ctx.cr6.eq) goto loc_8238DB70;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2555
	ctx.r6.s64 = 2555;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DB64;
	sub_82330D00(ctx, base);
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
loc_8238DB70:
	// lwz r11,1416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1416);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238db38
	if (ctx.cr6.lt) goto loc_8238DB38;
loc_8238DB84:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,520(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 520);
	// li r6,2560
	ctx.r6.s64 = 2560;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DBA0;
	sub_82330D00(ctx, base);
	// stw r27,520(r31)
	REX_STORE_U32(r31.u32 + 520, r27.u32);
loc_8238DBA4:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8238dbf4
	if (!ctx.cr6.gt) goto loc_8238DBF4;
	// addi r30,r31,792
	r30.s64 = r31.s64 + 792;
loc_8238DBB8:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238dbe0
	if (ctx.cr6.eq) goto loc_8238DBE0;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2568
	ctx.r6.s64 = 2568;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DBDC;
	sub_82330D00(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
loc_8238DBE0:
	// lwz r11,788(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 788);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8238dbb8
	if (ctx.cr6.lt) goto loc_8238DBB8;
loc_8238DBF4:
	// lwz r4,528(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238dc1c
	if (ctx.cr6.eq) goto loc_8238DC1C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2575
	ctx.r6.s64 = 2575;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DC18;
	sub_82330D00(ctx, base);
	// stw r27,528(r31)
	REX_STORE_U32(r31.u32 + 528, r27.u32);
loc_8238DC1C:
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8238dc44
	if (ctx.cr6.eq) goto loc_8238DC44;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2581
	ctx.r6.s64 = 2581;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8238DC40;
	sub_82330D00(ctx, base);
	// stw r27,64(r31)
	REX_STORE_U32(r31.u32 + 64, r27.u32);
loc_8238DC44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8239FA50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8239FEE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8239FEF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823d2570
	ctx.lr = 0x8239FF00;
	sub_823D2570(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ff68
	if (!ctx.cr6.eq) goto loc_8239FF68;
	// lwz r3,24(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,156(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FF20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239ff68
	if (!ctx.cr6.eq) goto loc_8239FF68;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 124);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239ff68
	if (!ctx.cr6.gt) goto loc_8239FF68;
	// rlwinm r28,r30,0,0,28
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r30,r29,124
	r30.s64 = r29.s64 + 124;
loc_8239FF40:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239FF58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,124(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 124);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8239ff40
	if (ctx.cr6.lt) goto loc_8239FF40;
loc_8239FF68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A2870) {
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
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823a28c0
	if (ctx.cr6.eq) goto loc_823A28C0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a28c0
	if (ctx.cr6.eq) goto loc_823A28C0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8896
	ctx.r5.s64 = ctx.r10.s64 + 8896;
	// li r6,160
	ctx.r6.s64 = 160;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823A28B8;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
loc_823A28C0:
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

DEFINE_REX_FUNC(sub_823A4040) {
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
	ctx.lr = 0x823A4048;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lis r11,-32124
	ctx.r11.s64 = -2105278464;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,6024
	r29.s64 = ctx.r11.s64 + 6024;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwzx r3,r9,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + r29.u32);
	// bl 0x8269b078
	ctx.lr = 0x823A4074;
	sub_8269B078(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a4088
	if (ctx.cr6.eq) goto loc_823A4088;
	// li r3,59
	ctx.r3.s64 = 59;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
loc_823A4088:
	// lhz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 116);
	// li r26,1
	r26.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823a40e0
	if (!ctx.cr6.eq) goto loc_823A40E0;
	// lhz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823a40b0
	if (!ctx.cr6.eq) goto loc_823A40B0;
	// stw r26,48(r31)
	REX_STORE_U32(r31.u32 + 48, r26.u32);
	// b 0x823a40f0
	goto loc_823A40F0;
loc_823A40B0:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x823a40c0
	if (!ctx.cr6.eq) goto loc_823A40C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x823a40ec
	goto loc_823A40EC;
loc_823A40C0:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x823a40d0
	if (!ctx.cr6.eq) goto loc_823A40D0;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// b 0x823a40f0
	goto loc_823A40F0;
loc_823A40D0:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x823a46e4
	if (!ctx.cr6.eq) goto loc_823A46E4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823a40ec
	goto loc_823A40EC;
loc_823A40E0:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823a46e4
	if (!ctx.cr6.eq) goto loc_823A46E4;
	// li r11,5
	ctx.r11.s64 = 5;
loc_823A40EC:
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_823A40F0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823a411c
	if (ctx.cr6.eq) goto loc_823A411C;
	// addi r9,r11,270
	ctx.r9.s64 = ctx.r11.s64 + 270;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// stwx r26,r8,r30
	REX_STORE_U32(ctx.r8.u32 + r30.u32, r26.u32);
	// b 0x823a4134
	goto loc_823A4134;
loc_823A411C:
	// addi r8,r11,270
	ctx.r8.s64 = ctx.r11.s64 + 270;
	// lis r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r7,r9,48000
	ctx.r7.u64 = ctx.r9.u64 | 48000;
	// stw r7,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r7.u32);
	// stwx r10,r6,r30
	REX_STORE_U32(ctx.r6.u32 + r30.u32, ctx.r10.u32);
loc_823A4134:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// lhz r8,118(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// li r5,28
	ctx.r5.s64 = 28;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r8,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r8.u32);
	// stb r26,1736(r9)
	REX_STORE_U8(ctx.r9.u32 + 1736, r26.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r7,r30,r11
	ctx.r7.u64 = r30.u64 + ctx.r11.u64;
	// stb r27,1744(r7)
	REX_STORE_U8(ctx.r7.u32 + 1744, r27.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,54
	ctx.r6.s64 = ctx.r11.s64 + 54;
	// mulli r11,r6,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823A4174;
	sub_823EF5F0(ctx, base);
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r4,256
	ctx.r4.s64 = 256;
	// cmplwi cr6,r5,48000
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 48000, ctx.xer);
	// beq cr6,0x823a4188
	if (ctx.cr6.eq) goto loc_823A4188;
	// li r4,64
	ctx.r4.s64 = 64;
loc_823A4188:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,54
	ctx.r10.s64 = ctx.r11.s64 + 54;
	// addi r9,r11,274
	ctx.r9.s64 = ctx.r11.s64 + 274;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// lwzx r3,r8,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + r29.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + r30.u64;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8269ae50
	ctx.lr = 0x823A41B0;
	sub_8269AE50(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x823a41c4
	if (ctx.cr6.eq) goto loc_823A41C4;
	// li r3,72
	ctx.r3.s64 = 72;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
loc_823A41C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r7,36
	ctx.r7.s64 = 36;
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 72);
	// addi r9,r11,274
	ctx.r9.s64 = ctx.r11.s64 + 274;
	// addi r8,r11,266
	ctx.r8.s64 = ctx.r11.s64 + 266;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r6,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r11,r5,r30
	REX_STORE_U32(ctx.r5.u32 + r30.u32, ctx.r11.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,80(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823a44f0
	if (ctx.cr6.eq) goto loc_823A44F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,9000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r10,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
loc_823A423C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 72);
	// addi r10,r11,266
	ctx.r10.s64 = ctx.r11.s64 + 266;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// beq cr6,0x823a4370
	if (ctx.cr6.eq) goto loc_823A4370;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a4370
	if (ctx.cr6.gt) goto loc_823A4370;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17020
	ctx.r12.s64 = ctx.r12.s64 + 17020;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A42E4;
	case 1:
		goto loc_823A42AC;
	case 2:
		goto loc_823A42B4;
	case 3:
		goto loc_823A42BC;
	case 4:
		goto loc_823A42C4;
	case 5:
		goto loc_823A42C4;
	case 6:
		goto loc_823A42E4;
	case 7:
		goto loc_823A42E4;
	case 8:
		goto loc_823A42E4;
	case 9:
		goto loc_823A42E4;
	case 10:
		goto loc_823A42E4;
	case 11:
		goto loc_823A42E4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A42AC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a42c8
	goto loc_823A42C8;
loc_823A42B4:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a42c8
	goto loc_823A42C8;
loc_823A42BC:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823a42c8
	goto loc_823A42C8;
loc_823A42C4:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823A42C8:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r5,r10,r6
	ctx.r5.u64 = ctx.r6.u64 ? ctx.r10.u64 / ctx.r6.u64 : 0;
	// stw r5,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// b 0x823a4360
	goto loc_823A4360;
loc_823A42E4:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17148
	ctx.r12.s64 = ctx.r12.s64 + 17148;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A435C;
	case 1:
		goto loc_823A4370;
	case 2:
		goto loc_823A4370;
	case 3:
		goto loc_823A4370;
	case 4:
		goto loc_823A4370;
	case 5:
		goto loc_823A4370;
	case 6:
		goto loc_823A432C;
	case 7:
		goto loc_823A433C;
	case 8:
		goto loc_823A434C;
	case 9:
		goto loc_823A436C;
	case 10:
		goto loc_823A436C;
	case 11:
		goto loc_823A436C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A432C:
	// mulli r11,r10,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4360
	goto loc_823A4360;
loc_823A433C:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r10,r11,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4360
	goto loc_823A4360;
loc_823A434C:
	// mulli r11,r10,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4360
	goto loc_823A4360;
loc_823A435C:
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_823A4360:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
loc_823A436C:
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
loc_823A4370:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,266
	ctx.r9.s64 = ctx.r11.s64 + 266;
	// addi r10,r11,274
	ctx.r10.s64 = ctx.r11.s64 + 274;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bge cr6,0x823a43a8
	if (!ctx.cr6.lt) goto loc_823A43A8;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + r30.u32);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r4,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r4.u32);
	// b 0x823a423c
	goto loc_823A423C;
loc_823A43A8:
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r5,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r5.u32);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 72);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,266
	ctx.r4.s64 = ctx.r11.s64 + 266;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r10,r3,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// beq cr6,0x823a44f0
	if (ctx.cr6.eq) goto loc_823A44F0;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a44f0
	if (ctx.cr6.gt) goto loc_823A44F0;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17404
	ctx.r12.s64 = ctx.r12.s64 + 17404;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A4464;
	case 1:
		goto loc_823A442C;
	case 2:
		goto loc_823A4434;
	case 3:
		goto loc_823A443C;
	case 4:
		goto loc_823A4444;
	case 5:
		goto loc_823A4444;
	case 6:
		goto loc_823A4464;
	case 7:
		goto loc_823A4464;
	case 8:
		goto loc_823A4464;
	case 9:
		goto loc_823A4464;
	case 10:
		goto loc_823A4464;
	case 11:
		goto loc_823A4464;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A442C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a4448
	goto loc_823A4448;
loc_823A4434:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a4448
	goto loc_823A4448;
loc_823A443C:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823a4448
	goto loc_823A4448;
loc_823A4444:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823A4448:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r6,r10,r8
	ctx.r6.u64 = ctx.r8.u64 ? ctx.r10.u64 / ctx.r8.u64 : 0;
	// stw r6,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r6.u32);
	// b 0x823a44e0
	goto loc_823A44E0;
loc_823A4464:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17532
	ctx.r12.s64 = ctx.r12.s64 + 17532;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A44DC;
	case 1:
		goto loc_823A44F0;
	case 2:
		goto loc_823A44F0;
	case 3:
		goto loc_823A44F0;
	case 4:
		goto loc_823A44F0;
	case 5:
		goto loc_823A44F0;
	case 6:
		goto loc_823A44AC;
	case 7:
		goto loc_823A44BC;
	case 8:
		goto loc_823A44CC;
	case 9:
		goto loc_823A44EC;
	case 10:
		goto loc_823A44EC;
	case 11:
		goto loc_823A44EC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A44AC:
	// mulli r11,r10,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a44e0
	goto loc_823A44E0;
loc_823A44BC:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r10,r11,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a44e0
	goto loc_823A44E0;
loc_823A44CC:
	// mulli r11,r10,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a44e0
	goto loc_823A44E0;
loc_823A44DC:
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_823A44E0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
loc_823A44EC:
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
loc_823A44F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,72(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 72);
	// addi r10,r11,266
	ctx.r10.s64 = ctx.r11.s64 + 266;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// beq cr6,0x823a4624
	if (ctx.cr6.eq) goto loc_823A4624;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823a4624
	if (ctx.cr6.gt) goto loc_823A4624;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17712
	ctx.r12.s64 = ctx.r12.s64 + 17712;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A4598;
	case 1:
		goto loc_823A4560;
	case 2:
		goto loc_823A4568;
	case 3:
		goto loc_823A4570;
	case 4:
		goto loc_823A4578;
	case 5:
		goto loc_823A4578;
	case 6:
		goto loc_823A4598;
	case 7:
		goto loc_823A4598;
	case 8:
		goto loc_823A4598;
	case 9:
		goto loc_823A4598;
	case 10:
		goto loc_823A4598;
	case 11:
		goto loc_823A4598;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A4560:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x823a457c
	goto loc_823A457C;
loc_823A4568:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x823a457c
	goto loc_823A457C;
loc_823A4570:
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823a457c
	goto loc_823A457C;
loc_823A4578:
	// li r11,32
	ctx.r11.s64 = 32;
loc_823A457C:
	// rldicl r10,r10,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 3) & 0x7FFFFFFFF;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// rldicr r10,r10,0,60
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 ? ctx.r10.u64 / ctx.r8.u64 : 0;
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// b 0x823a4614
	goto loc_823A4614;
loc_823A4598:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17840
	ctx.r12.s64 = ctx.r12.s64 + 17840;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823A4610;
	case 1:
		goto loc_823A4624;
	case 2:
		goto loc_823A4624;
	case 3:
		goto loc_823A4624;
	case 4:
		goto loc_823A4624;
	case 5:
		goto loc_823A4624;
	case 6:
		goto loc_823A45E0;
	case 7:
		goto loc_823A45F0;
	case 8:
		goto loc_823A4600;
	case 9:
		goto loc_823A4620;
	case 10:
		goto loc_823A4620;
	case 11:
		goto loc_823A4620;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A45E0:
	// mulli r11,r10,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4614
	goto loc_823A4614;
loc_823A45F0:
	// rlwinm r11,r10,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// divwu r10,r11,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4614
	goto loc_823A4614;
loc_823A4600:
	// mulli r11,r10,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// b 0x823a4614
	goto loc_823A4614;
loc_823A4610:
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_823A4614:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
loc_823A4620:
	// stw r10,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r10.u32);
loc_823A4624:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,266
	ctx.r8.s64 = ctx.r11.s64 + 266;
	// addi r5,r9,21608
	ctx.r5.s64 = ctx.r9.s64 + 21608;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1012(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1245
	ctx.r6.s64 = 1245;
	// lwzx r4,r4,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x823A4654;
	sub_82330E40(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,318
	ctx.r11.s64 = ctx.r11.s64 + 318;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r11,318
	ctx.r9.s64 = ctx.r11.s64 + 318;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823a4688
	if (!ctx.cr6.eq) goto loc_823A4688;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
loc_823A4688:
	// lbz r11,2044(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2044);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a46d8
	if (!ctx.cr6.eq) goto loc_823A46D8;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r4,9128
	ctx.r4.s64 = ctx.r4.s64 + 9128;
	// li r9,16384
	ctx.r9.s64 = 16384;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r5,16440
	ctx.r5.s64 = ctx.r5.s64 + 16440;
	// addi r3,r30,1748
	ctx.r3.s64 = r30.s64 + 1748;
	// bl 0x82353870
	ctx.lr = 0x823A46CC;
	sub_82353870(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a46e8
	if (!ctx.cr6.eq) goto loc_823A46E8;
	// stb r26,2044(r30)
	REX_STORE_U8(r30.u32 + 2044, r26.u8);
loc_823A46D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
loc_823A46E4:
	// li r3,82
	ctx.r3.s64 = 82;
loc_823A46E8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823D6B18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// blt cr6,0x823d6bc8
	if (ctx.cr6.lt) goto loc_823D6BC8;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D6B44:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d6b54
	if (!ctx.cr6.gt) goto loc_823D6B54;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823D6B54:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d6b60
	if (!ctx.cr6.lt) goto loc_823D6B60;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D6B60:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d6b74
	if (!ctx.cr6.gt) goto loc_823D6B74;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823D6B74:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d6b80
	if (!ctx.cr6.lt) goto loc_823D6B80;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D6B80:
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d6b94
	if (!ctx.cr6.gt) goto loc_823D6B94;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823D6B94:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d6ba0
	if (!ctx.cr6.lt) goto loc_823D6BA0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D6BA0:
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d6bb4
	if (!ctx.cr6.gt) goto loc_823D6BB4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823D6BB4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d6bc0
	if (!ctx.cr6.lt) goto loc_823D6BC0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D6BC0:
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d6b44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6B44;
loc_823D6BC8:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823D6BE4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823d6bf4
	if (!ctx.cr6.gt) goto loc_823D6BF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823D6BF4:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823d6c00
	if (!ctx.cr6.lt) goto loc_823D6C00;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_823D6C00:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d6be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D6BE4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DCBC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823DD030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823DD038;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823dd110
	if (ctx.cr6.eq) goto loc_823DD110;
loc_823DD050:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823dd098
	if (ctx.cr6.eq) goto loc_823DD098;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DD070;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd08c
	if (ctx.cr6.eq) goto loc_823DD08C;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823dd050
	if (!ctx.cr0.eq) goto loc_823DD050;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823DD08C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_823DD098:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823dd110
	if (ctx.cr6.eq) goto loc_823DD110;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// blt cr6,0x823dd0e4
	if (ctx.cr6.lt) goto loc_823DD0E4;
loc_823DD0A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823dd0c8
	if (!ctx.cr6.lt) goto loc_823DD0C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// b 0x823dd0dc
	goto loc_823DD0DC;
loc_823DD0C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dc8c8
	ctx.lr = 0x823DD0D4;
	sub_823DC8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd08c
	if (ctx.cr6.eq) goto loc_823DD08C;
loc_823DD0DC:
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bge cr6,0x823dd0a8
	if (!ctx.cr6.lt) goto loc_823DD0A8;
loc_823DD0E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823dd110
	if (ctx.cr6.eq) goto loc_823DD110;
loc_823DD0EC:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DD100;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823dd08c
	if (ctx.cr6.eq) goto loc_823DD08C;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823dd0ec
	if (!ctx.cr0.eq) goto loc_823DD0EC;
loc_823DD110:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E2C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823E2C78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,20
	ctx.r5.s64 = 20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823E2C94;
	sub_823EF5F0(ctx, base);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823E4188) {
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
	ctx.lr = 0x823E4190;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r29,40(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 40);
	// lwz r4,36(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 36);
	// bl 0x823e2ca8
	ctx.lr = 0x823E41AC;
	sub_823E2CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823e4208
	if (ctx.cr6.lt) goto loc_823E4208;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r9,r31,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823e41e4
	if (ctx.cr6.eq) goto loc_823E41E4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi r10,r31,17
	ctx.r10.u64 = r31.u32 & 0x7FFF;
	// srawi r9,r31,15
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 15;
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// clrlwi r31,r9,17
	r31.u64 = ctx.r9.u32 & 0x7FFF;
	// b 0x823e4210
	goto loc_823E4210;
loc_823E41E4:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x823e2d70
	ctx.lr = 0x823E41FC;
	sub_823E2D70(ctx, base);
	// addi r3,r31,-1
	ctx.r3.s64 = r31.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823E4208:
	// lwz r30,8(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r31,0
	r31.s64 = 0;
loc_823E4210:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e2ca8
	ctx.lr = 0x823E421C;
	sub_823E2CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x823e4250
	if (!ctx.cr6.lt) goto loc_823E4250;
loc_823E4224:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x823e4248
	if (!ctx.cr6.gt) goto loc_823E4248;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823e2ca8
	ctx.lr = 0x823E423C;
	sub_823E2CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823e4224
	if (ctx.cr6.lt) goto loc_823E4224;
	// b 0x823e4250
	goto loc_823E4250;
loc_823E4248:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823e4350
	if (ctx.cr6.lt) goto loc_823E4350;
loc_823E4250:
	// rlwinm r11,r3,16,24,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r10,r3,8,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF;
	// rlwinm r9,r11,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// rlwinm r6,r8,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-241
	ctx.r12.s64 = -15794176;
	// rlwinm r5,r7,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// and r3,r4,r12
	ctx.r3.u64 = ctx.r4.u64 & ctx.r12.u64;
	// lis r12,-3277
	ctx.r12.s64 = -214761472;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r12,r12,13107
	ctx.r12.u64 = ctx.r12.u64 | 13107;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// lis r12,-10923
	ctx.r12.s64 = -715849728;
	// rlwinm r5,r7,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// or r9,r6,r5
	ctx.r9.u64 = ctx.r6.u64 | ctx.r5.u64;
	// ble cr6,0x823e4320
	if (!ctx.cr6.gt) goto loc_823E4320;
	// lwz r8,20(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 20);
loc_823E42E0:
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfc r5,r6,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r5.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 & ctx.r11.u64;
	// subf r30,r5,r30
	r30.u64 = r30.u64 - ctx.r5.u64;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// subf r11,r31,r30
	ctx.r11.u64 = r30.u64 - r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823e42e0
	if (ctx.cr6.gt) goto loc_823E42E0;
loc_823E4320:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// cmpw cr6,r4,r29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r29.s32, ctx.xer);
	// bgt cr6,0x823e4348
	if (ctx.cr6.gt) goto loc_823E4348;
	// bl 0x823e2d70
	ctx.lr = 0x823E433C;
	sub_823E2D70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823E4348:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823e2d70
	ctx.lr = 0x823E4350;
	sub_823E2D70(ctx, base);
loc_823E4350:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(xstart) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823ECA00;
	// addi r31,r1,-496
	r31.s64 = ctx.r1.s64 + -496;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,31528(r9)
	REX_STORE_U32(ctx.r9.u32 + 31528, ctx.r11.u32);
	// stw r10,31532(r8)
	REX_STORE_U32(ctx.r8.u32 + 31532, ctx.r10.u32);
	// bl 0x823efc68
	ctx.lr = 0x823ECA30;
	sub_823EFC68(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823efab8
	ctx.lr = 0x823ECA38;
	sub_823EFAB8(ctx, base);
	// bl 0x823ec810
	ctx.lr = 0x823ECA3C;
	sub_823EC810(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823eca4c
	if (ctx.cr0.eq) goto loc_823ECA4C;
	// bl 0x82793684
	ctx.lr = 0x823ECA48;
	__imp__XamLoaderTerminateTitle(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_823ECA4C:
	// bl 0x826a3bd8
	ctx.lr = 0x823ECA50;
	sub_826A3BD8(ctx, base);
	// bl 0x823efa40
	ctx.lr = 0x823ECA54;
	sub_823EFA40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ef960
	ctx.lr = 0x823ECA5C;
	sub_823EF960(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lwz r11,15928(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ecb78
	if (ctx.cr6.eq) goto loc_823ECB78;
	// li r28,0
	r28.s64 = 0;
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r29,r28
	r29.u64 = r28.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// bl 0x823ec638
	ctx.lr = 0x823ECA84;
	sub_823EC638(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ecb60
	if (ctx.cr0.eq) goto loc_823ECB60;
	// addi r10,r31,192
	ctx.r10.s64 = r31.s64 + 192;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_823ECA98:
	// lbz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
loc_823ECAA0:
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823ecad8
	if (ctx.cr0.eq) goto loc_823ECAD8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x823ecab8
	if (ctx.cr6.eq) goto loc_823ECAB8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823ecad8
	if (!ctx.cr6.eq) goto loc_823ECAD8;
loc_823ECAB8:
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823ecaa0
	goto loc_823ECAA0;
loc_823ECAD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ecb5c
	if (ctx.cr6.eq) goto loc_823ECB5C;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
loc_823ECAFC:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x823ecb14
	if (ctx.cr6.eq) goto loc_823ECB14;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// b 0x823ecb20
	goto loc_823ECB20;
loc_823ECB14:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r8,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r8.u32);
loc_823ECB20:
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stb r9,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r9.u8);
	// beq 0x823ecb4c
	if (ctx.cr0.eq) goto loc_823ECB4C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823ecafc
	if (!ctx.cr6.eq) goto loc_823ECAFC;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x823ecb4c
	if (ctx.cr6.eq) goto loc_823ECB4C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x823ecafc
	if (!ctx.cr6.eq) goto loc_823ECAFC;
loc_823ECB4C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ecb5c
	if (ctx.cr6.eq) goto loc_823ECB5C;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x823eca98
	if (!ctx.cr6.gt) goto loc_823ECA98;
loc_823ECB5C:
	// stb r28,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r28.u8);
loc_823ECB60:
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x823ecb80
	goto loc_823ECB80;
loc_823ECB78:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ECB80:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821201d0
	ctx.lr = 0x823ECB88;
	sub_821201D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826a38c8
	ctx.lr = 0x823ECB90;
	sub_826A38C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,12128
	ctx.r3.s64 = ctx.r11.s64 + 12128;
	// bl 0x82793914
	ctx.lr = 0x823ECBA0;
	__imp__DbgPrint(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82793684
	ctx.lr = 0x823ECBB0;
	__imp__XamLoaderTerminateTitle(ctx, base);
}

DEFINE_REX_FUNC(sub_823F51C8) {
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
	// bl 0x823f5788
	ctx.lr = 0x823F51E8;
	sub_823F5788(ctx, base);
	// rlwinm r4,r31,29,28,28
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823f3720
	ctx.lr = 0x823F51F4;
	sub_823F3720(ctx, base);
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

DEFINE_REX_FUNC(sub_823F6590) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x823F6598;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,1104(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,2420(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2420);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// li r18,0
	r18.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r15,r30,r4
	r15.u64 = r30.u64 + ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq 0x823f6610
	if (ctx.cr0.eq) goto loc_823F6610;
	// lwz r11,2156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2156);
	// li r10,10000
	ctx.r10.s64 = 10000;
	// stb r18,2420(r3)
	REX_STORE_U8(ctx.r3.u32 + 2420, r18.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,9504(r3)
	REX_STORE_U32(ctx.r3.u32 + 9504, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f6604
	if (ctx.cr6.eq) goto loc_823F6604;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x823f6ff8
	ctx.lr = 0x823F65E4;
	sub_823F6FF8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,2156(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 2156);
	// bl 0x823f6ff8
	ctx.lr = 0x823F65F4;
	sub_823F6FF8(ctx, base);
	// lhz r5,2158(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 2158);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823f6608
	goto loc_823F6608;
loc_823F6604:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F6608:
	// bl 0x823f6ff8
	ctx.lr = 0x823F660C;
	sub_823F6FF8(ctx, base);
	// b 0x823f6634
	goto loc_823F6634;
loc_823F6610:
	// li r29,50
	r29.s64 = 50;
loc_823F6614:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x823f75f8
	ctx.lr = 0x823F662C;
	sub_823F75F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x823f6614
	if (!ctx.cr0.eq) goto loc_823F6614;
loc_823F6634:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r19,r10,32768
	r19.u64 = ctx.r10.u64 | 32768;
	// lis r17,8
	r17.s64 = 524288;
	// li r20,1
	r20.s64 = 1;
	// addi r21,r11,12484
	r21.s64 = ctx.r11.s64 + 12484;
	// b 0x823f6654
	goto loc_823F6654;
loc_823F6650:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823F6654:
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(r30.u32, r15.u32, ctx.xer);
	// bge cr6,0x823f6e68
	if (!ctx.cr6.lt) goto loc_823F6E68;
	// add r11,r30,r19
	ctx.r11.u64 = r30.u64 + r19.u64;
	// rlwinm r24,r11,0,0,16
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(r24.u32, r15.u32, ctx.xer);
	// ble cr6,0x823f6670
	if (!ctx.cr6.gt) goto loc_823F6670;
	// mr r24,r15
	r24.u64 = r15.u64;
loc_823F6670:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f72b8
	ctx.lr = 0x823F667C;
	sub_823F72B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x823f66a0
	if (ctx.cr6.lt) goto loc_823F66A0;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// ble cr6,0x823f66d0
	if (!ctx.cr6.gt) goto loc_823F66D0;
	// subf r29,r30,r24
	r29.u64 = r24.u64 - r30.u64;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bge cr6,0x823f66d0
	if (!ctx.cr6.lt) goto loc_823F66D0;
loc_823F66A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stbx r11,r9,r10
	REX_STORE_U8(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// b 0x823f6e54
	goto loc_823F6E54;
loc_823F66D0:
	// cmpwi cr6,r29,50
	ctx.cr6.compare<int32_t>(r29.s32, 50, ctx.xer);
	// bge cr6,0x823f6d30
	if (!ctx.cr6.lt) goto loc_823F6D30;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r26,r29,r30
	r26.u64 = r29.u64 + r30.u64;
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// addi r23,r30,3837
	r23.s64 = r30.s64 + 3837;
	// mr r22,r30
	r22.u64 = r30.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9520);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,9516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// stw r30,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r30.u32);
	// blt cr6,0x823f67e0
	if (ctx.cr6.lt) goto loc_823F67E0;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r6,r31,76
	ctx.r6.s64 = r31.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F6720:
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f6738
	if (!ctx.cr6.lt) goto loc_823F6738;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f675c
	goto loc_823F675C;
loc_823F6738:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bge cr6,0x823f6754
	if (!ctx.cr6.lt) goto loc_823F6754;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f675c
	goto loc_823F675C;
loc_823F6754:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F675C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r7,9516(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// cmplwi cr6,r9,9
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9, ctx.xer);
	// rlwinm r8,r11,3,21,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// bge cr6,0x823f6794
	if (!ctx.cr6.lt) goto loc_823F6794;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r11,r5,r21
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + r21.u32);
	// lbz r8,9774(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9774);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r11.u32);
	// b 0x823f67bc
	goto loc_823F67BC;
loc_823F6794:
	// add r5,r9,r31
	ctx.r5.u64 = ctx.r9.u64 + r31.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r11,10212(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 10212);
	// lbz r8,9783(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 9783);
	// lbzx r7,r4,r21
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + r21.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
loc_823F67BC:
	// lwz r11,9516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// lwzu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lwz r8,9516(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// stwx r11,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// bdnz 0x823f6720
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F6720;
loc_823F67E0:
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// stw r18,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r18.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,9516(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// subf r27,r30,r24
	r27.u64 = r24.u64 - r30.u64;
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// lwz r9,64(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// lwz r9,68(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// subf r25,r11,r10
	r25.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
loc_823F6824:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzu r11,24(r29)
	ea = 24 + r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823f68b8
	if (ctx.cr6.eq) goto loc_823F68B8;
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// blt cr6,0x823f6868
	if (ctx.cr6.lt) goto loc_823F6868;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x823f68b4
	goto loc_823F68B4;
loc_823F6868:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823f6888
	if (!ctx.cr6.eq) goto loc_823F6888;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_823F687C:
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x823f68b4
	goto loc_823F68B4;
loc_823F6888:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823f68a0
	if (!ctx.cr6.eq) goto loc_823F68A0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823f687c
	goto loc_823F687C;
loc_823F68A0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823F68B4:
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
loc_823F68B8:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// beq cr6,0x823f6b58
	if (ctx.cr6.eq) goto loc_823F6B58;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f72b8
	ctx.lr = 0x823F68E4;
	sub_823F72B8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// ble cr6,0x823f690c
	if (!ctx.cr6.gt) goto loc_823F690C;
	// li r11,2
	ctx.r11.s64 = 2;
	// xoris r10,r11,32768
	ctx.r10.u64 = ctx.r11.u64 ^ 2147483648;
	// subf r11,r11,r27
	ctx.r11.u64 = r27.u64 - ctx.r11.u64;
	// addc r11,r11,r10
	ctx.xer.ca = ctx.r11.u32 + ctx.r10.u32 < ctx.r11.u32;
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r11,r27
	r28.u64 = ctx.r11.u64 & r27.u64;
loc_823F690C:
	// cmpwi cr6,r28,50
	ctx.cr6.compare<int32_t>(r28.s32, 50, ctx.xer);
	// bgt cr6,0x823f6a90
	if (ctx.cr6.gt) goto loc_823F6A90;
	// add r9,r28,r30
	ctx.r9.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// bge cr6,0x823f6a90
	if (!ctx.cr6.lt) goto loc_823F6A90;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bgt cr6,0x823f6938
	if (ctx.cr6.gt) goto loc_823F6938;
	// bne cr6,0x823f6990
	if (!ctx.cr6.eq) goto loc_823F6990;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x823f6990
	if (!ctx.cr6.lt) goto loc_823F6990;
loc_823F6938:
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823f6990
	if (!ctx.cr6.lt) goto loc_823F6990;
	// subf r11,r22,r28
	ctx.r11.u64 = r28.u64 - r22.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// cmplwi cr6,r10,3836
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3836, ctx.xer);
	// blt cr6,0x823f6954
	if (ctx.cr6.lt) goto loc_823F6954;
	// li r10,3836
	ctx.r10.s64 = 3836;
loc_823F6954:
	// subf r11,r22,r26
	ctx.r11.u64 = r26.u64 - r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823f698c
	if (ctx.cr6.gt) goto loc_823F698C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F6974:
	// lwz r10,9516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 9516);
	// li r8,-1
	ctx.r8.s64 = -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// bdnz 0x823f6974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F6974;
loc_823F698C:
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_823F6990:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,9520(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9520);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f69bc
	if (!ctx.cr6.lt) goto loc_823F69BC;
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// stw r30,24(r29)
	REX_STORE_U32(r29.u32 + 24, r30.u32);
loc_823F69BC:
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// blt cr6,0x823f6824
	if (ctx.cr6.lt) goto loc_823F6824;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r7,r29,64
	ctx.r7.s64 = r29.s64 + 64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823F69D8:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bge cr6,0x823f69f0
	if (!ctx.cr6.lt) goto loc_823F69F0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f6a14
	goto loc_823F6A14;
loc_823F69F0:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bge cr6,0x823f6a0c
	if (!ctx.cr6.lt) goto loc_823F6A0C;
	// rlwinm r11,r11,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f6a14
	goto loc_823F6A14;
loc_823F6A0C:
	// rlwinm r11,r11,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F6A14:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// bge cr6,0x823f6a3c
	if (!ctx.cr6.lt) goto loc_823F6A3C;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbzx r10,r9,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + r21.u32);
	// lbz r11,9774(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 9774);
	// b 0x823f6a58
	goto loc_823F6A58;
loc_823F6A3C:
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r9,r8,r31
	ctx.r9.u64 = ctx.r8.u64 + r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lbz r11,9783(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 9783);
	// lbz r9,10212(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 10212);
	// lbzx r10,r4,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + r21.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_823F6A58:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823f6a7c
	if (!ctx.cr6.lt) goto loc_823F6A7C;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r30,-16(r7)
	REX_STORE_U32(ctx.r7.u32 + -16, r30.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,-20(r7)
	REX_STORE_U32(ctx.r7.u32 + -20, ctx.r11.u32);
loc_823F6A7C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// bdnz 0x823f69d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F69D8;
	// b 0x823f6824
	goto loc_823F6824;
loc_823F6A90:
	// addi r11,r28,18
	ctx.r11.s64 = r28.s64 + 18;
	// add r26,r28,r30
	r26.u64 = r28.u64 + r30.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r26,24
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(24));
	// lwzx r27,r10,r31
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// bne cr6,0x823f6adc
	if (!ctx.cr6.eq) goto loc_823F6ADC;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(r28.s32, 16, ctx.xer);
	// ble cr6,0x823f6adc
	if (!ctx.cr6.gt) goto loc_823F6ADC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// bl 0x823f75f8
	ctx.lr = 0x823F6AD8;
	sub_823F75F8(ctx, base);
	// b 0x823f6b10
	goto loc_823F6B10;
loc_823F6ADC:
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// ble cr6,0x823f6b10
	if (!ctx.cr6.gt) goto loc_823F6B10;
loc_823F6AE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x823f75f8
	ctx.lr = 0x823F6B04;
	sub_823F75F8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x823f6ae8
	if (ctx.cr6.lt) goto loc_823F6AE8;
loc_823F6B10:
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// blt cr6,0x823f6b38
	if (ctx.cr6.lt) goto loc_823F6B38;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r10,r27,-2
	ctx.r10.s64 = r27.s64 + -2;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// b 0x823f6b58
	goto loc_823F6B58;
loc_823F6B38:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823f6b58
	if (ctx.cr6.eq) goto loc_823F6B58;
	// addi r11,r27,15
	ctx.r11.s64 = r27.s64 + 15;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_823F6B58:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// mr r28,r18
	r28.u64 = r18.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_823F6B68:
	// mulli r10,r11,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 + r25.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// bne cr6,0x823f6b68
	if (!ctx.cr6.eq) goto loc_823F6B68;
loc_823F6B90:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// bge cr6,0x823f6bb0
	if (!ctx.cr6.lt) goto loc_823F6BB0;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// blt cr6,0x823f6bc0
	if (ctx.cr6.lt) goto loc_823F6BC0;
loc_823F6BB0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6418
	ctx.lr = 0x823F6BBC;
	sub_823F6418(ctx, base);
	// b 0x823f6b90
	goto loc_823F6B90;
loc_823F6BC0:
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823f6c4c
	if (!ctx.cr6.gt) goto loc_823F6C4C;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// slw r8,r20,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r8.u8 & 0x3F));
	// lbzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r10,r10,254
	ctx.r10.s64 = ctx.r10.s64 + 254;
	// stbx r10,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r9,r9,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r9,r25
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r25.u32);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823f6c70
	goto loc_823F6C70;
loc_823F6C4C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lbzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// stbx r11,r9,r8
	REX_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_823F6C70:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x823f6bc0
	if (!ctx.cr0.eq) goto loc_823F6BC0;
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,9504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9504);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823f6cf4
	if (ctx.cr6.lt) goto loc_823F6CF4;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823f6ce8
	if (ctx.cr6.eq) goto loc_823F6CE8;
	// lbz r11,2419(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2419);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f6cb8
	if (ctx.cr0.eq) goto loc_823F6CB8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823f9418
	ctx.lr = 0x823F6CB0;
	sub_823F9418(ctx, base);
	// stb r18,2419(r31)
	REX_STORE_U8(r31.u32 + 2419, r18.u8);
	// b 0x823f6cc4
	goto loc_823F6CC4;
loc_823F6CB8:
	// lwz r5,9512(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 9512);
	// lwz r4,9508(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 9508);
	// bl 0x823f9470
	ctx.lr = 0x823F6CC4;
	sub_823F9470(ctx, base);
loc_823F6CC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7b18
	ctx.lr = 0x823F6CD0;
	sub_823F7B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7ca8
	ctx.lr = 0x823F6CD8;
	sub_823F7CA8(ctx, base);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r6,9508(r31)
	REX_STORE_U32(r31.u32 + 9508, ctx.r6.u32);
	// stw r11,9512(r31)
	REX_STORE_U32(r31.u32 + 9512, ctx.r11.u32);
loc_823F6CE8:
	// lwz r11,9504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 9504);
	// addi r11,r11,4096
	ctx.r11.s64 = ctx.r11.s64 + 4096;
	// stw r11,9504(r31)
	REX_STORE_U32(r31.u32 + 9504, ctx.r11.u32);
loc_823F6CF4:
	// lbz r11,2418(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f6654
	if (ctx.cr0.eq) goto loc_823F6654;
	// cmplwi cr6,r6,65024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65024, ctx.xer);
	// bge cr6,0x823f6d14
	if (!ctx.cr6.lt) goto loc_823F6D14;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,32256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32256, ctx.xer);
	// blt cr6,0x823f6654
	if (ctx.cr6.lt) goto loc_823F6654;
loc_823F6D14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6480
	ctx.lr = 0x823F6D20;
	sub_823F6480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f6650
	if (!ctx.cr0.eq) goto loc_823F6650;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823f6e58
	goto loc_823F6E58;
loc_823F6D30:
	// addi r11,r29,18
	ctx.r11.s64 = r29.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r31
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// bne cr6,0x823f6d68
	if (!ctx.cr6.eq) goto loc_823F6D68;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(r29.s32, 16, ctx.xer);
	// ble cr6,0x823f6d68
	if (!ctx.cr6.gt) goto loc_823F6D68;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r5,r11,5
	ctx.r5.s64 = ctx.r11.s64 + 5;
	// bl 0x823f75f8
	ctx.lr = 0x823F6D64;
	sub_823F75F8(ctx, base);
	// b 0x823f6d9c
	goto loc_823F6D9C;
loc_823F6D68:
	// mr r28,r20
	r28.u64 = r20.u64;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// ble cr6,0x823f6d9c
	if (!ctx.cr6.gt) goto loc_823F6D9C;
loc_823F6D74:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x823f75f8
	ctx.lr = 0x823F6D90;
	sub_823F75F8(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(r28.u32, r29.u32, ctx.xer);
	// blt cr6,0x823f6d74
	if (ctx.cr6.lt) goto loc_823F6D74;
loc_823F6D9C:
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r8,r29,254
	ctx.r8.s64 = r29.s64 + 254;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stbx r9,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stwx r27,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r27.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// blt cr6,0x823f6e20
	if (ctx.cr6.lt) goto loc_823F6E20;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r10,r27,-2
	ctx.r10.s64 = r27.s64 + -2;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// b 0x823f6e40
	goto loc_823F6E40;
loc_823F6E20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x823f6e40
	if (ctx.cr6.eq) goto loc_823F6E40;
	// addi r11,r27,15
	ctx.r11.s64 = r27.s64 + 15;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
loc_823F6E40:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,65528
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65528, ctx.xer);
	// bge cr6,0x823f6e58
	if (!ctx.cr6.lt) goto loc_823F6E58;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
loc_823F6E54:
	// blt cr6,0x823f6654
	if (ctx.cr6.lt) goto loc_823F6654;
loc_823F6E58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823f6418
	ctx.lr = 0x823F6E64;
	sub_823F6418(ctx, base);
	// b 0x823f6654
	goto loc_823F6654;
loc_823F6E68:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r16,r19
	ctx.cr6.compare<int32_t>(r16.s32, r19.s32, ctx.xer);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// stw r11,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, ctx.r11.u32);
	// bge cr6,0x823f6ea4
	if (!ctx.cr6.lt) goto loc_823F6EA4;
	// lbz r11,2418(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f6f94
	if (ctx.cr0.eq) goto loc_823F6F94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6480
	ctx.lr = 0x823F6E94;
	sub_823F6480(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6f94
	if (ctx.cr0.eq) goto loc_823F6F94;
	// b 0x823f6654
	goto loc_823F6654;
loc_823F6EA4:
	// addi r28,r11,54
	r28.s64 = ctx.r11.s64 + 54;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_823F6EAC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r4,r29,r30
	ctx.r4.u64 = r30.u64 - r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7758
	ctx.lr = 0x823F6EBC;
	sub_823F7758(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,50
	ctx.cr6.compare<uint32_t>(r29.u32, 50, ctx.xer);
	// ble cr6,0x823f6eac
	if (!ctx.cr6.gt) goto loc_823F6EAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,17184(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,2424(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f6f94
	if (ctx.cr6.lt) goto loc_823F6F94;
	// lbz r11,2418(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 2418);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f6f10
	if (ctx.cr0.eq) goto loc_823F6F10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f6480
	ctx.lr = 0x823F6F04;
	sub_823F6480(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f6650
	if (!ctx.cr0.eq) goto loc_823F6650;
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823F6F10:
	// lwz r3,17184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 17184);
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823F6F24;
	sub_8269CC20(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// lwz r3,17188(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 17188);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823F6F40;
	sub_8269CC20(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// lwz r3,17192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 17192);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8269cc20
	ctx.lr = 0x823F6F5C;
	sub_8269CC20(ctx, base);
	// lwz r11,2424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2424);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r30
	ctx.r11.u64 = r30.u64 - ctx.r10.u64;
	// stw r11,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, ctx.r11.u32);
loc_823F6F94:
	// stw r30,1104(r31)
	REX_STORE_U32(r31.u32 + 1104, r30.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82444570) {
	REX_FUNC_PROLOGUE();
	// addi r10,r5,4095
	ctx.r10.s64 = ctx.r5.s64 + 4095;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// bne cr6,0x8244459c
	if (!ctx.cr6.eq) goto loc_8244459C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
loc_8244459C:
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444918) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// addi r11,r11,-8104
	ctx.r11.s64 = ctx.r11.s64 + -8104;
	// stw r6,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82444E10) {
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
	// bl 0x82448598
	ctx.lr = 0x82444E28;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x82444608
	ctx.lr = 0x82444E38;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82444e64
	if (ctx.cr0.eq) goto loc_82444E64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,-8068
	ctx.r10.s64 = ctx.r10.s64 + -8068;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82444e68
	goto loc_82444E68;
loc_82444E64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82444E68:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82444e98
	if (ctx.cr6.eq) goto loc_82444E98;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
loc_82444E98:
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

DEFINE_REX_FUNC(sub_82447688) {
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
	// bl 0x82448598
	ctx.lr = 0x824476A4;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x82444608
	ctx.lr = 0x824476B4;
	sub_82444608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447718
	if (ctx.cr0.eq) goto loc_82447718;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,14
	ctx.r9.s64 = 14;
	// addi r10,r10,-7900
	ctx.r10.s64 = ctx.r10.s64 + -7900;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
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
	// stw r8,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// std r11,64(r3)
	REX_STORE_U64(ctx.r3.u32 + 64, ctx.r11.u64);
	// std r11,72(r3)
	REX_STORE_U64(ctx.r3.u32 + 72, ctx.r11.u64);
	// b 0x8244771c
	goto loc_8244771C;
loc_82447718:
	// li r31,0
	r31.s64 = 0;
loc_8244771C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8244772c
	if (!ctx.cr6.eq) goto loc_8244772C;
loc_82447724:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82447800
	goto loc_82447800;
loc_8244772C:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r10,r31,48
	ctx.r10.s64 = r31.s64 + 48;
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
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// ld r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 48);
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
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824477a4
	if (ctx.cr6.eq) goto loc_824477A4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82447798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447724
	if (ctx.cr0.eq) goto loc_82447724;
loc_824477A4:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824477d0
	if (ctx.cr6.eq) goto loc_824477D0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824477C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447724
	if (ctx.cr0.eq) goto loc_82447724;
loc_824477D0:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824477fc
	if (ctx.cr6.eq) goto loc_824477FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824477F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82447724
	if (ctx.cr0.eq) goto loc_82447724;
loc_824477FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82447800:
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

DEFINE_REX_FUNC(sub_824548E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824548E8;
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
	// bl 0x82476d88
	ctx.lr = 0x824548FC;
	sub_82476D88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82454924
	if (ctx.cr0.lt) goto loc_82454924;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82454924:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824550C8) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82455D10) {
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
	ctx.lr = 0x82455D18;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82455e3c
	if (ctx.cr6.eq) goto loc_82455E3C;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82455e3c
	if (!ctx.cr6.gt) goto loc_82455E3C;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r26,r8,14096
	r26.s64 = ctx.r8.s64 + 14096;
	// addi r28,r9,14180
	r28.s64 = ctx.r9.s64 + 14180;
	// addi r29,r10,14172
	r29.s64 = ctx.r10.s64 + 14172;
	// addi r27,r11,14148
	r27.s64 = ctx.r11.s64 + 14148;
loc_82455D68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82455D70;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455e40
	if (ctx.cr0.lt) goto loc_82455E40;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82404168
	ctx.lr = 0x82455D8C;
	sub_82404168(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82455DA4;
	sub_82404168(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82455dbc
	if (!ctx.cr6.eq) goto loc_82455DBC;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82455DBC:
	// bl 0x824555b8
	ctx.lr = 0x82455DC0;
	sub_824555B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82455e40
	if (ctx.cr6.lt) goto loc_82455E40;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82455dd8
	if (!ctx.cr6.eq) goto loc_82455DD8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// b 0x82455df4
	goto loc_82455DF4;
loc_82455DD8:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82455DF0;
	sub_82404168(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
loc_82455DF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82455E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455e40
	if (ctx.cr0.lt) goto loc_82455E40;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82455E24;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455e40
	if (ctx.cr0.lt) goto loc_82455E40;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82455d68
	if (ctx.cr6.lt) goto loc_82455D68;
loc_82455E3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82455E40:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8245E440) {
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
	// addi r5,r11,18484
	ctx.r5.s64 = ctx.r11.s64 + 18484;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245E46C;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474720
	ctx.lr = 0x8245E474;
	sub_82474720(ctx, base);
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

DEFINE_REX_FUNC(sub_8245EAC0) {
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
	// addi r5,r11,18756
	ctx.r5.s64 = ctx.r11.s64 + 18756;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245EAEC;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474780
	ctx.lr = 0x8245EAF4;
	sub_82474780(ctx, base);
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

DEFINE_REX_FUNC(sub_82460CF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r11,12
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82460d40
	if (!ctx.cr0.eq) goto loc_82460D40;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82460D40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82460d88
	if (ctx.cr6.eq) goto loc_82460D88;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82460D50:
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// stw r9,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// bdnz 0x82460d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82460D50;
loc_82460D88:
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824685C0) {
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
	ctx.lr = 0x824685C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,136(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bne cr6,0x82468664
	if (!ctx.cr6.eq) goto loc_82468664;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x8246863c
	if (ctx.cr6.lt) goto loc_8246863C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,27056
	ctx.r6.s64 = ctx.r10.s64 + 27056;
loc_8246861C:
	// li r5,4505
	ctx.r5.s64 = 4505;
loc_82468620:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x82468630;
	sub_82489C30(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82468990
	goto loc_82468990;
loc_8246863C:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824686c4
	if (ctx.cr6.eq) goto loc_824686C4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824686c4
	if (ctx.cr6.lt) goto loc_824686C4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x824686c4
	goto loc_824686C4;
loc_82468664:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82468684
	if (ctx.cr0.eq) goto loc_82468684;
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82468684
	if (ctx.cr0.eq) goto loc_82468684;
	// li r9,15
	ctx.r9.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82468754
	goto loc_82468754;
loc_82468684:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824686e4
	if (ctx.cr6.eq) goto loc_824686E4;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824686e4
	if (!ctx.cr0.eq) goto loc_824686E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824686B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82468990
	if (ctx.cr0.lt) goto loc_82468990;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_824686C4:
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r10,0,11,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82468840
	if (!ctx.cr6.eq) goto loc_82468840;
	// lis r8,2816
	ctx.r8.s64 = 184549376;
	// b 0x824688f0
	goto loc_824688F0;
loc_824686E4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82468760
	if (ctx.cr0.eq) goto loc_82468760;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// ori r12,r12,8320
	ctx.r12.u64 = ctx.r12.u64 | 8320;
	// and. r9,r11,r12
	ctx.r9.u64 = ctx.r11.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82468760
	if (!ctx.cr0.eq) goto loc_82468760;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x82468720
	if (ctx.cr6.lt) goto loc_82468720;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4507
	ctx.r5.s64 = 4507;
	// addi r6,r10,27352
	ctx.r6.s64 = ctx.r10.s64 + 27352;
	// b 0x82468620
	goto loc_82468620;
loc_82468720:
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x82468730
	if (!ctx.cr6.lt) goto loc_82468730;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82468750
	goto loc_82468750;
loc_82468730:
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bge cr6,0x82468740
	if (!ctx.cr6.lt) goto loc_82468740;
	// li r9,11
	ctx.r9.s64 = 11;
	// b 0x82468750
	goto loc_82468750;
loc_82468740:
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r10,13
	ctx.r9.s64 = ctx.r10.s64 + 13;
loc_82468750:
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
loc_82468754:
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x824686c4
	goto loc_824686C4;
loc_82468760:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824687a4
	if (ctx.cr6.eq) goto loc_824687A4;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824687a4
	if (!ctx.cr0.eq) goto loc_824687A4;
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824687a4
	if (ctx.cr0.eq) goto loc_824687A4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,14
	ctx.r9.s64 = 14;
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x824686c4
	if (ctx.cr6.lt) goto loc_824686C4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4500
	ctx.r5.s64 = 4500;
	// addi r6,r10,27308
	ctx.r6.s64 = ctx.r10.s64 + 27308;
	// b 0x82468620
	goto loc_82468620;
loc_824687A4:
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824687d4
	if (ctx.cr0.eq) goto loc_824687D4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,10
	ctx.r9.s64 = 10;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x824686c4
	if (ctx.cr6.lt) goto loc_824686C4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,27268
	ctx.r6.s64 = ctx.r10.s64 + 27268;
	// b 0x8246861c
	goto loc_8246861C;
loc_824687D4:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82468804
	if (ctx.cr0.eq) goto loc_82468804;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,7
	ctx.r9.s64 = 7;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x824686c4
	if (ctx.cr6.lt) goto loc_824686C4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r6,r10,27228
	ctx.r6.s64 = ctx.r10.s64 + 27228;
	// b 0x8246861c
	goto loc_8246861C;
loc_82468804:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82468970
	if (!ctx.cr6.eq) goto loc_82468970;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r9,19
	ctx.r9.s64 = 19;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x824686c4
	if (ctx.cr6.lt) goto loc_824686C4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4549
	ctx.r5.s64 = 4549;
	// addi r6,r10,26972
	ctx.r6.s64 = ctx.r10.s64 + 26972;
	// b 0x82468620
	goto loc_82468620;
loc_82468840:
	// lis r7,24
	ctx.r7.s64 = 1572864;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82468854
	if (!ctx.cr6.eq) goto loc_82468854;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// b 0x824688f0
	goto loc_824688F0;
loc_82468854:
	// lis r7,8
	ctx.r7.s64 = 524288;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82468868
	if (!ctx.cr6.eq) goto loc_82468868;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// b 0x824688f0
	goto loc_824688F0;
loc_82468868:
	// lis r7,2
	ctx.r7.s64 = 131072;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8246887c
	if (!ctx.cr6.eq) goto loc_8246887C;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// b 0x824688f0
	goto loc_824688F0;
loc_8246887C:
	// lis r7,10
	ctx.r7.s64 = 655360;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82468890
	if (!ctx.cr6.eq) goto loc_82468890;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// b 0x824688f0
	goto loc_824688F0;
loc_82468890:
	// lis r7,6
	ctx.r7.s64 = 393216;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824688a4
	if (!ctx.cr6.eq) goto loc_824688A4;
	// lis r8,1024
	ctx.r8.s64 = 67108864;
	// b 0x824688f0
	goto loc_824688F0;
loc_824688A4:
	// lis r7,14
	ctx.r7.s64 = 917504;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824688b8
	if (!ctx.cr6.eq) goto loc_824688B8;
	// lis r8,1280
	ctx.r8.s64 = 83886080;
	// b 0x824688f0
	goto loc_824688F0;
loc_824688B8:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824688cc
	if (!ctx.cr6.eq) goto loc_824688CC;
	// lis r8,1536
	ctx.r8.s64 = 100663296;
	// b 0x824688f0
	goto loc_824688F0;
loc_824688CC:
	// lis r7,4
	ctx.r7.s64 = 262144;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824688e0
	if (!ctx.cr6.eq) goto loc_824688E0;
	// lis r8,1792
	ctx.r8.s64 = 117440512;
	// b 0x824688f0
	goto loc_824688F0;
loc_824688E0:
	// lis r7,12
	ctx.r7.s64 = 786432;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824688f0
	if (!ctx.cr6.eq) goto loc_824688F0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
loc_824688F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8246891c
	if (ctx.cr6.eq) goto loc_8246891C;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// rlwinm r7,r9,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// rlwimi r10,r9,20,9,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r10.u64 & 0xFFFFFFFFFF8FFFFF);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8246891C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8246892c
	if (ctx.cr6.eq) goto loc_8246892C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8246892C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82468968
	if (ctx.cr6.eq) goto loc_82468968;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246895c
	if (!ctx.cr6.eq) goto loc_8246895C;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4511
	ctx.r5.s64 = 4511;
	// addi r6,r10,27184
	ctx.r6.s64 = ctx.r10.s64 + 27184;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// b 0x82468980
	goto loc_82468980;
loc_8246895C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82468968:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82468990
	goto loc_82468990;
loc_82468970:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,27136
	ctx.r6.s64 = ctx.r11.s64 + 27136;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82468980:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82489c30
	ctx.lr = 0x82468988;
	sub_82489C30(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82468990:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8247D6F0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82477990
	ctx.lr = 0x8247D714;
	sub_82477990(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8247d724
	if (!ctx.cr0.eq) goto loc_8247D724;
loc_8247D71C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8247d858
	goto loc_8247D858;
loc_8247D724:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r6,r9,12
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8247d798
	if (ctx.cr6.gt) goto loc_8247D798;
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d790
	if (ctx.cr6.eq) goto loc_8247D790;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d790
	if (ctx.cr6.eq) goto loc_8247D790;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// b 0x8247d7d8
	goto loc_8247D7D8;
loc_8247D790:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8247d7e4
	goto loc_8247D7E4;
loc_8247D798:
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8247d7e0
	if (ctx.cr6.eq) goto loc_8247D7E0;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
loc_8247D7D8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247d71c
	if (!ctx.cr6.eq) goto loc_8247D71C;
loc_8247D7E0:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_8247D7E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r7,16(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r5,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// andi. r7,r7,528
	ctx.r7.u64 = ctx.r7.u64 & 528;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x8247d71c
	if (ctx.cr0.eq) goto loc_8247D71C;
	// li r7,1
	ctx.r7.s64 = 1;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x8247d854
	if (!ctx.cr6.gt) goto loc_8247D854;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8247D82C:
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8247d71c
	if (!ctx.cr6.eq) goto loc_8247D71C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8247d82c
	if (ctx.cr6.lt) goto loc_8247D82C;
loc_8247D854:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8247D858:
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

DEFINE_REX_FUNC(sub_824941E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824941E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x82444750
	ctx.lr = 0x82494208;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249422c
	if (ctx.cr0.eq) goto loc_8249422C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12712
	ctx.r6.s64 = ctx.r11.s64 + -12712;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x82494224;
	sub_82444918(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82494230
	goto loc_82494230;
loc_8249422C:
	// li r29,0
	r29.s64 = 0;
loc_82494230:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82494240
	if (!ctx.cr6.eq) goto loc_82494240;
loc_82494238:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82494274
	goto loc_82494274;
loc_82494240:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82444750
	ctx.lr = 0x82494248;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82494260
	if (ctx.cr0.eq) goto loc_82494260;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82445a10
	ctx.lr = 0x8249425C;
	sub_82445A10(ctx, base);
	// b 0x82494264
	goto loc_82494264;
loc_82494260:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494264:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82494238
	if (ctx.cr6.eq) goto loc_82494238;
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82494274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82495490) {
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
	ctx.lr = 0x82495498;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82444750
	ctx.lr = 0x824954B4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824954d8
	if (ctx.cr0.eq) goto loc_824954D8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-12204
	ctx.r6.s64 = ctx.r11.s64 + -12204;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82444918
	ctx.lr = 0x824954D0;
	sub_82444918(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x824954dc
	goto loc_824954DC;
loc_824954D8:
	// li r28,0
	r28.s64 = 0;
loc_824954DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82495538
	if (ctx.cr6.eq) goto loc_82495538;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82444750
	ctx.lr = 0x824954EC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82495514
	if (ctx.cr0.eq) goto loc_82495514;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x824453f8
	ctx.lr = 0x8249550C;
	sub_824453F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82495518
	goto loc_82495518;
loc_82495514:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82495518:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82495538
	if (ctx.cr6.eq) goto loc_82495538;
	// stw r4,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82495180
	ctx.lr = 0x82495530;
	sub_82495180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82495540
	if (!ctx.cr0.lt) goto loc_82495540;
loc_82495538:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82495544
	goto loc_82495544;
loc_82495540:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82495544:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82499F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82499F98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82444750
	ctx.lr = 0x82499FAC;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499fd8
	if (ctx.cr0.eq) goto loc_82499FD8;
	// addi r9,r28,40
	ctx.r9.s64 = r28.s64 + 40;
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
	ctx.lr = 0x82499FD0;
	sub_824474C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82499fdc
	goto loc_82499FDC;
loc_82499FD8:
	// li r30,0
	r30.s64 = 0;
loc_82499FDC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82499fec
	if (!ctx.cr6.eq) goto loc_82499FEC;
loc_82499FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249a0c8
	goto loc_8249A0C8;
loc_82499FEC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82444750
	ctx.lr = 0x82499FF4;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249a01c
	if (ctx.cr0.eq) goto loc_8249A01C;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,33
	ctx.r5.s64 = 33;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x824461c0
	ctx.lr = 0x8249A018;
	sub_824461C0(ctx, base);
	// b 0x8249a020
	goto loc_8249A020;
loc_8249A01C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249A020:
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499fe4
	if (ctx.cr6.eq) goto loc_82499FE4;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82444750
	ctx.lr = 0x8249A034;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249a054
	if (ctx.cr0.eq) goto loc_8249A054;
	// addi r6,r28,40
	ctx.r6.s64 = r28.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82447910
	ctx.lr = 0x8249A04C;
	sub_82447910(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8249a058
	goto loc_8249A058;
loc_8249A054:
	// li r31,0
	r31.s64 = 0;
loc_8249A058:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82499fe4
	if (ctx.cr6.eq) goto loc_82499FE4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r31,32(r30)
	REX_STORE_U32(r30.u32 + 32, r31.u32);
	// beq cr6,0x8249a080
	if (ctx.cr6.eq) goto loc_8249A080;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82444890
	ctx.lr = 0x8249A074;
	sub_82444890(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82499fe4
	if (ctx.cr0.eq) goto loc_82499FE4;
loc_8249A080:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82444750
	ctx.lr = 0x8249A088;
	sub_82444750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8249a0a8
	if (ctx.cr0.eq) goto loc_8249A0A8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-17164
	ctx.r6.s64 = ctx.r11.s64 + -17164;
	// bl 0x82444918
	ctx.lr = 0x8249A0A4;
	sub_82444918(ctx, base);
	// b 0x8249a0ac
	goto loc_8249A0AC;
loc_8249A0A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249A0AC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82499fe4
	if (ctx.cr6.eq) goto loc_82499FE4;
	// stw r3,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824974b0
	ctx.lr = 0x8249A0C4;
	sub_824974B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8249A0C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824A6ED8) {
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
	ctx.lr = 0x824A6EE0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824a6f58
	if (ctx.cr0.eq) goto loc_824A6F58;
	// bl 0x8247ca90
	ctx.lr = 0x824A6EFC;
	sub_8247CA90(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a6f50
	if (!ctx.cr6.gt) goto loc_824A6F50;
	// li r28,0
	r28.s64 = 0;
loc_824A6F10:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a6f3c
	if (!ctx.cr6.eq) goto loc_824A6F3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460cf0
	ctx.lr = 0x824A6F3C;
	sub_82460CF0(ctx, base);
loc_824A6F3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a6f10
	if (ctx.cr6.lt) goto loc_824A6F10;
loc_824A6F50:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481920
	ctx.lr = 0x824A6F58;
	sub_82481920(ctx, base);
loc_824A6F58:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824a73c4
	if (!ctx.cr0.eq) goto loc_824A73C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r27,8192
	r27.s64 = 536870912;
	// lis r25,12288
	r25.s64 = 805306368;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a700c
	if (!ctx.cr6.gt) goto loc_824A700C;
	// li r28,0
	r28.s64 = 0;
loc_824A6F80:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a6fe0
	if (ctx.cr6.eq) goto loc_824A6FE0;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x824a6fc8
	if (ctx.cr6.eq) goto loc_824A6FC8;
	// lis r10,8208
	ctx.r10.s64 = 537919488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a6fc8
	if (ctx.cr6.eq) goto loc_824A6FC8;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x824a6fc8
	if (ctx.cr6.eq) goto loc_824A6FC8;
	// li r30,1
	r30.s64 = 1;
	// b 0x824a6ff8
	goto loc_824A6FF8;
loc_824A6FC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a828
	ctx.lr = 0x824A6FD0;
	sub_8246A828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A6FDC;
	sub_8245FCB8(ctx, base);
	// b 0x824a6ff0
	goto loc_824A6FF0;
loc_824A6FE0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246dcd8
	ctx.lr = 0x824A6FEC;
	sub_8246DCD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824A6FF0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
loc_824A6FF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a6f80
	if (ctx.cr6.lt) goto loc_824A6F80;
loc_824A700C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a709c
	if (!ctx.cr6.gt) goto loc_824A709C;
	// li r28,0
	r28.s64 = 0;
loc_824A7020:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x824a7048
	if (ctx.cr6.eq) goto loc_824A7048;
	// li r30,1
	r30.s64 = 1;
	// b 0x824a7088
	goto loc_824A7088;
loc_824A7048:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460da0
	ctx.lr = 0x824A7064;
	sub_82460DA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461438
	ctx.lr = 0x824A7080;
	sub_82461438(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
loc_824A7088:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a7020
	if (ctx.cr6.lt) goto loc_824A7020;
loc_824A709C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824A70A4;
	sub_82482568(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A70B4;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a7124
	if (!ctx.cr6.gt) goto loc_824A7124;
	// li r28,0
	r28.s64 = 0;
loc_824A70C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x824a70f4
	if (ctx.cr6.eq) goto loc_824A70F4;
	// lis r10,28848
	ctx.r10.s64 = 1890582528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a7110
	if (!ctx.cr6.eq) goto loc_824A7110;
loc_824A70F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a828
	ctx.lr = 0x824A70FC;
	sub_8246A828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A7108;
	sub_8245FCB8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
loc_824A7110:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a70c8
	if (ctx.cr6.lt) goto loc_824A70C8;
loc_824A7124:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lis r26,8272
	r26.s64 = 542113792;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a7204
	if (!ctx.cr6.gt) goto loc_824A7204;
	// li r28,0
	r28.s64 = 0;
loc_824A713C:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lis r10,4176
	ctx.r10.s64 = 273678336;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a71dc
	if (ctx.cr6.eq) goto loc_824A71DC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a71d0
	if (ctx.cr6.eq) goto loc_824A71D0;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a71b0
	if (ctx.cr6.eq) goto loc_824A71B0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824a71a4
	if (ctx.cr6.eq) goto loc_824A71A4;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x824a71f0
	if (!ctx.cr6.eq) goto loc_824A71F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824652c8
	ctx.lr = 0x824A7190;
	sub_824652C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824a71e8
	if (ctx.cr0.eq) goto loc_824A71E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824653a8
	ctx.lr = 0x824A71A0;
	sub_824653A8(ctx, base);
	// b 0x824a71e4
	goto loc_824A71E4;
loc_824A71A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464558
	ctx.lr = 0x824A71AC;
	sub_82464558(ctx, base);
	// b 0x824a71e4
	goto loc_824A71E4;
loc_824A71B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824649e0
	ctx.lr = 0x824A71B8;
	sub_824649E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824a71e8
	if (ctx.cr0.eq) goto loc_824A71E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246b640
	ctx.lr = 0x824A71CC;
	sub_8246B640(ctx, base);
	// b 0x824a71e4
	goto loc_824A71E4;
loc_824A71D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824620e8
	ctx.lr = 0x824A71D8;
	sub_824620E8(ctx, base);
	// b 0x824a71e4
	goto loc_824A71E4;
loc_824A71DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460b58
	ctx.lr = 0x824A71E4;
	sub_82460B58(ctx, base);
loc_824A71E4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824A71E8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
loc_824A71F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a713c
	if (ctx.cr6.lt) goto loc_824A713C;
loc_824A7204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824A720C;
	sub_82482568(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A721C;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lis r27,28720
	r27.s64 = 1882193920;
	// lis r24,29520
	r24.s64 = 1934622720;
	// lis r25,29536
	r25.s64 = 1935671296;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a72d0
	if (!ctx.cr6.gt) goto loc_824A72D0;
	// li r28,0
	r28.s64 = 0;
loc_824A723C:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x824a72a8
	if (ctx.cr6.eq) goto loc_824A72A8;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a729c
	if (ctx.cr6.eq) goto loc_824A729C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x824a728c
	if (ctx.cr6.eq) goto loc_824A728C;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x824a7280
	if (ctx.cr6.eq) goto loc_824A7280;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x824a72bc
	if (!ctx.cr6.eq) goto loc_824A72BC;
loc_824A7280:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82462498
	ctx.lr = 0x824A7288;
	sub_82462498(ctx, base);
	// b 0x824a72b0
	goto loc_824A72B0;
loc_824A728C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82465a50
	ctx.lr = 0x824A7298;
	sub_82465A50(ctx, base);
	// b 0x824a72b0
	goto loc_824A72B0;
loc_824A729C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82464d18
	ctx.lr = 0x824A72A4;
	sub_82464D18(ctx, base);
	// b 0x824a72b0
	goto loc_824A72B0;
loc_824A72A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824646f8
	ctx.lr = 0x824A72B0;
	sub_824646F8(ctx, base);
loc_824A72B0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
loc_824A72BC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a723c
	if (ctx.cr6.lt) goto loc_824A723C;
loc_824A72D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A72D8;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a7328
	if (!ctx.cr6.gt) goto loc_824A7328;
	// li r29,0
	r29.s64 = 0;
loc_824A72EC:
	// stw r30,256(r31)
	REX_STORE_U32(r31.u32 + 256, r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x824a7314
	if (!ctx.cr6.eq) goto loc_824A7314;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246bca0
	ctx.lr = 0x824A7314;
	sub_8246BCA0(ctx, base);
loc_824A7314:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a72ec
	if (ctx.cr6.lt) goto loc_824A72EC;
loc_824A7328:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A7330;
	sub_8245FCB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a73c4
	if (!ctx.cr6.gt) goto loc_824A73C4;
	// li r28,0
	r28.s64 = 0;
loc_824A7344:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x824a7398
	if (ctx.cr6.eq) goto loc_824A7398;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// beq cr6,0x824a738c
	if (ctx.cr6.eq) goto loc_824A738C;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x824a738c
	if (ctx.cr6.eq) goto loc_824A738C;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824a738c
	if (ctx.cr6.eq) goto loc_824A738C;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824a73b0
	if (!ctx.cr6.eq) goto loc_824A73B0;
loc_824A738C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824627d8
	ctx.lr = 0x824A7394;
	sub_824627D8(ctx, base);
	// b 0x824a73a4
	goto loc_824A73A4;
loc_824A7398:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82465a50
	ctx.lr = 0x824A73A4;
	sub_82465A50(ctx, base);
loc_824A73A4:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824a746c
	if (ctx.cr6.lt) goto loc_824A746C;
loc_824A73B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a7344
	if (ctx.cr6.lt) goto loc_824A7344;
loc_824A73C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824a7420
	if (!ctx.cr6.gt) goto loc_824A7420;
	// li r28,0
	r28.s64 = 0;
loc_824A73D8:
	// stw r29,256(r31)
	REX_STORE_U32(r31.u32 + 256, r29.u32);
	// lis r11,20528
	ctx.r11.s64 = 1345323008;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824a740c
	if (!ctx.cr6.eq) goto loc_824A740C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824602d8
	ctx.lr = 0x824A7404;
	sub_824602D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
loc_824A740C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824a73d8
	if (ctx.cr6.lt) goto loc_824A73D8;
loc_824A7420:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482568
	ctx.lr = 0x824A7428;
	sub_82482568(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82482c68
	ctx.lr = 0x824A7438;
	sub_82482C68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247d160
	ctx.lr = 0x824A7448;
	sub_8247D160(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824856b0
	ctx.lr = 0x824A7458;
	sub_824856B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824a746c
	if (ctx.cr0.lt) goto loc_824A746C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x824A7468;
	sub_8245FCB8(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_824A746C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824C7470) {
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
	ctx.lr = 0x824C7478;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,428(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r24,1
	r24.s64 = 1;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x824c74d8
	if (!ctx.cr6.eq) goto loc_824C74D8;
	// lwz r10,432(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824C74C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x824c760c
	if (ctx.cr6.eq) goto loc_824C760C;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r24,48(r31)
	REX_STORE_U32(r31.u32 + 48, r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
loc_824C74D8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824c7550
	if (ctx.cr6.lt) goto loc_824C7550;
	// beq cr6,0x824c757c
	if (ctx.cr6.eq) goto loc_824C757C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x824c760c
	if (!ctx.cr6.lt) goto loc_824C760C;
	// lwz r10,436(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 436);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C7530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824c760c
	if (ctx.cr6.lt) goto loc_824C760C;
	// stw r25,68(r31)
	REX_STORE_U32(r31.u32 + 68, r25.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bge cr6,0x824c760c
	if (!ctx.cr6.lt) goto loc_824C760C;
loc_824C7550:
	// stw r25,52(r31)
	REX_STORE_U32(r31.u32 + 52, r25.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r9,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// lwz r8,324(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 324);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824c7578
	if (!ctx.cr6.eq) goto loc_824C7578;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c72d8
	ctx.lr = 0x824C7578;
	sub_824C72D8(ctx, base);
loc_824C7578:
	// stw r24,68(r31)
	REX_STORE_U32(r31.u32 + 68, r24.u32);
loc_824C757C:
	// lwz r10,436(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 436);
	// addi r29,r31,52
	r29.s64 = r31.s64 + 52;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r10,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824C75B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x824c760c
	if (ctx.cr6.lt) goto loc_824C760C;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824c75dc
	if (!ctx.cr6.eq) goto loc_824C75DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824c71e8
	ctx.lr = 0x824C75DC;
	sub_824C71E8(ctx, base);
loc_824C75DC:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r25,48(r31)
	REX_STORE_U32(r31.u32 + 48, r25.u32);
	// xori r9,r11,1
	ctx.r9.u64 = ctx.r11.u64 ^ 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 320);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// stw r7,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r7.u32);
loc_824C760C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824D2A80) {
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
	ctx.lr = 0x824D2A88;
	// cntlzw r11,r5
	ctx.r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r19,12(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r25,-1
	r25.s64 = -1;
	// subfic r8,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r22,r11,27,5,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r21,r8,3
	r21.s64 = ctx.r8.s64 + 3;
	// addi r24,r8,7
	r24.s64 = ctx.r8.s64 + 7;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, ctx.xer);
	// bge cr6,0x824d2b80
	if (!ctx.cr6.lt) goto loc_824D2B80;
	// lwz r23,0(r4)
	r23.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r20,8(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_824D2AC0:
	// rlwinm r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// rlwinm r11,r9,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x10;
	// slw r10,r10,r21
	ctx.r10.u64 = r21.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r21.u8 & 0x3F));
	// rlwinm r5,r9,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r30,r5,r22
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r22.s32);
	// rlwinm r29,r9,2,27,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x18;
	// rlwinm r27,r9,7,20,20
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x800;
	// rlwinm r11,r9,30,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x2;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplw cr6,r23,r20
	ctx.cr6.compare<uint32_t>(r23.u32, r20.u32, ctx.xer);
	// bge cr6,0x824d2b74
	if (!ctx.cr6.lt) goto loc_824D2B74;
	// rlwinm r26,r11,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_824D2AF4:
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// slw r4,r5,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// slw r11,r11,r24
	ctx.r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r24.u8 & 0x3F));
	// rlwinm r5,r4,1,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFE0;
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r5,r10,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r4,r5,3,24,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xC0;
	// rlwinm r3,r11,1,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFC00;
	// rlwinm r31,r11,0,23,25
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C0;
	// clrlwi r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bge cr6,0x824d2b5c
	if (!ctx.cr6.lt) goto loc_824D2B5C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_824D2B5C:
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r18.u32, ctx.xer);
	// ble cr6,0x824d2b68
	if (!ctx.cr6.gt) goto loc_824D2B68;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
loc_824D2B68:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// blt cr6,0x824d2af4
	if (ctx.cr6.lt) goto loc_824D2AF4;
loc_824D2B74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, ctx.xer);
	// blt cr6,0x824d2ac0
	if (ctx.cr6.lt) goto loc_824D2AC0;
loc_824D2B80:
	// stw r25,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r25.u32);
	// stw r18,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r18.u32);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_824D7FD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D8508) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D8510;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824d858c
	if (!ctx.cr6.gt) goto loc_824D858C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d8538
	if (!ctx.cr6.lt) goto loc_824D8538;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D8538:
	// mulli r4,r30,476
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(476));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8544;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d855c
	if (!ctx.cr0.eq) goto loc_824D855C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d858c
	goto loc_824D858C;
loc_824D855C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8588
	if (ctx.cr6.eq) goto loc_824D8588;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,476
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// bl 0x826a1e70
	ctx.lr = 0x824D857C;
	sub_826A1E70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5b08
	ctx.lr = 0x824D8588;
	sub_824E5B08(ctx, base);
loc_824D8588:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D858C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DB1C8) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824db214
	if (ctx.cr6.eq) goto loc_824DB214;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,21976
	ctx.r4.s64 = ctx.r11.s64 + 21976;
	// bl 0x826a4a90
	ctx.lr = 0x824DB1F4;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824db214
	if (ctx.cr0.eq) goto loc_824DB214;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824db214
	if (ctx.cr6.eq) goto loc_824DB214;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,256(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 256);
	// b 0x824db21c
	goto loc_824DB21C;
loc_824DB214:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_824DB21C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824da030
	ctx.lr = 0x824DB224;
	sub_824DA030(ctx, base);
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

DEFINE_REX_FUNC(sub_824DCAE0) {
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
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// li r3,172
	ctx.r3.s64 = 172;
	// bl 0x823f02b8
	ctx.lr = 0x824DCAF8;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824dcb08
	if (ctx.cr0.eq) goto loc_824DCB08;
	// bl 0x824dac58
	ctx.lr = 0x824DCB04;
	sub_824DAC58(ctx, base);
	// b 0x824dcb0c
	goto loc_824DCB0C;
loc_824DCB08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824DCB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DD928) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824DD930;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r4,27,5,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(r29.u32, 8, ctx.xer);
	// blt cr6,0x824dd96c
	if (ctx.cr6.lt) goto loc_824DD96C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,22944
	ctx.r6.s64 = ctx.r11.s64 + 22944;
	// addi r5,r10,22884
	ctx.r5.s64 = ctx.r10.s64 + 22884;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824DD96C;
	sub_824EA978(ctx, base);
loc_824DD96C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DF9E8) {
	REX_FUNC_PROLOGUE();
	// b 0x824df978
	sub_824DF978(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DFC10) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824DFC34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824dfc4c
	if (!ctx.cr0.lt) goto loc_824DFC4C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x824dfc4c
	if (ctx.cr6.lt) goto loc_824DFC4C;
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824DFC4C:
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

DEFINE_REX_FUNC(sub_824E2F68) {
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
	ctx.lr = 0x824E2F70;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824e3290
	if (ctx.cr6.eq) goto loc_824E3290;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x824e3290
	if (ctx.cr6.lt) goto loc_824E3290;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824e3290
	if (ctx.cr6.eq) goto loc_824E3290;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi. r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x824e3290
	if (!ctx.cr0.eq) goto loc_824E3290;
	// rlwinm r11,r5,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x1;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,26584
	ctx.r4.s64 = ctx.r10.s64 + 26584;
	// bl 0x824e0480
	ctx.lr = 0x824E2FD0;
	sub_824E0480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26456
	ctx.r4.s64 = ctx.r11.s64 + 26456;
	// bl 0x824e0480
	ctx.lr = 0x824E2FE0;
	sub_824E0480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26396
	ctx.r4.s64 = ctx.r11.s64 + 26396;
	// bl 0x824e0480
	ctx.lr = 0x824E2FF0;
	sub_824E0480(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-21440(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + -21440);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r30,r11,31
	r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x824e0480
	ctx.lr = 0x824E3014;
	sub_824E0480(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26376
	ctx.r4.s64 = ctx.r11.s64 + 26376;
	// bl 0x824df9f0
	ctx.lr = 0x824E3024;
	sub_824DF9F0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x824e304c
	if (ctx.cr6.gt) goto loc_824E304C;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-21448
	ctx.r11.s64 = ctx.r11.s64 + -21448;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r4,r9,26372
	ctx.r4.s64 = ctx.r9.s64 + 26372;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x824e3058
	goto loc_824E3058;
loc_824E304C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,26356
	ctx.r4.s64 = ctx.r11.s64 + 26356;
loc_824E3058:
	// bl 0x824df9f0
	ctx.lr = 0x824E305C;
	sub_824DF9F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17792
	ctx.r4.s64 = ctx.r11.s64 + 17792;
	// bl 0x824df9f0
	ctx.lr = 0x824E306C;
	sub_824DF9F0(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -21452);
	// bl 0x824e0480
	ctx.lr = 0x824E307C;
	sub_824E0480(ctx, base);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-21456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -21456);
	// bl 0x824e0480
	ctx.lr = 0x824E308C;
	sub_824E0480(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e25c0
	ctx.lr = 0x824E30A4;
	sub_824E25C0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e03c8
	ctx.lr = 0x824E30B8;
	sub_824E03C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e26a8
	ctx.lr = 0x824E30DC;
	sub_824E26A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3130
	if (ctx.cr0.lt) goto loc_824E3130;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2eb8
	ctx.lr = 0x824E3100;
	sub_824E2EB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3130
	if (ctx.cr0.lt) goto loc_824E3130;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e1808
	ctx.lr = 0x824E3130;
	sub_824E1808(ctx, base);
loc_824E3130:
	// rlwinm. r27,r28,0,20,20
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x824e3158
	if (ctx.cr0.eq) goto loc_824E3158;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e1b70
	ctx.lr = 0x824E314C;
	sub_824E1B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824e3160
	if (!ctx.cr0.lt) goto loc_824E3160;
	// b 0x824e3298
	goto loc_824E3298;
loc_824E3158:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x824e3298
	if (ctx.cr6.lt) goto loc_824E3298;
loc_824E3160:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824e3238
	if (ctx.cr0.eq) goto loc_824E3238;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-6708
	ctx.r4.s64 = ctx.r11.s64 + -6708;
	// bl 0x824e21f8
	ctx.lr = 0x824E317C;
	sub_824E21F8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19072
	ctx.r4.s64 = ctx.r11.s64 + 19072;
	// bl 0x824e0480
	ctx.lr = 0x824E318C;
	sub_824E0480(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19772
	ctx.r4.s64 = ctx.r11.s64 + -19772;
	// bl 0x824df9f0
	ctx.lr = 0x824E319C;
	sub_824DF9F0(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e26a8
	ctx.lr = 0x824E31B8;
	sub_824E26A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824e2eb8
	ctx.lr = 0x824E31DC;
	sub_824E2EB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e1808
	ctx.lr = 0x824E320C;
	sub_824E1808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824e3238
	if (ctx.cr6.eq) goto loc_824E3238;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824e1b70
	ctx.lr = 0x824E3230;
	sub_824E1B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
loc_824E3238:
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824e3278
	if (ctx.cr6.eq) goto loc_824E3278;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19228
	ctx.r4.s64 = ctx.r11.s64 + 19228;
	// bl 0x824e0480
	ctx.lr = 0x824E3254;
	sub_824E0480(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x824e1070
	ctx.lr = 0x824E3260;
	sub_824E1070(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824e3298
	if (ctx.cr0.lt) goto loc_824E3298;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,19212
	ctx.r4.s64 = ctx.r11.s64 + 19212;
	// bl 0x824e0480
	ctx.lr = 0x824E3278;
	sub_824E0480(ctx, base);
loc_824E3278:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,26352
	ctx.r4.s64 = ctx.r11.s64 + 26352;
	// bl 0x824e0480
	ctx.lr = 0x824E3288;
	sub_824E0480(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x824e3298
	goto loc_824E3298;
loc_824E3290:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_824E3298:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824F64A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F64A8;
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f68c0
	if (ctx.cr0.eq) goto loc_824F68C0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f66e4
	if (!ctx.cr0.eq) goto loc_824F66E4;
	// rlwinm. r11,r3,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f6570
	if (!ctx.cr0.eq) goto loc_824F6570;
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm. r10,r3,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1096(r6)
	REX_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
	// bne 0x824f6518
	if (!ctx.cr0.eq) goto loc_824F6518;
	// lwz r11,1076(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1076);
	// lwz r10,1100(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1100);
	// lwz r9,1108(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 1108);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,1116(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r8,1076(r6)
	REX_STORE_U32(ctx.r6.u32 + 1076, ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,1100(r6)
	REX_STORE_U32(ctx.r6.u32 + 1100, ctx.r10.u32);
	// stw r11,1108(r6)
	REX_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
	// beq cr6,0x824f6518
	if (ctx.cr6.eq) goto loc_824F6518;
	// lwz r10,1120(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f6518
	if (ctx.cr6.eq) goto loc_824F6518;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	REX_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_824F6518:
	// lwz r11,1072(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1072);
	// lwz r10,1104(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1104);
	// lwz r9,1112(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 1112);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r7,1116(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// stw r8,1072(r6)
	REX_STORE_U32(ctx.r6.u32 + 1072, ctx.r8.u32);
	// stw r10,1104(r6)
	REX_STORE_U32(ctx.r6.u32 + 1104, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r11,1112(r6)
	REX_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
	// beq cr6,0x824f655c
	if (ctx.cr6.eq) goto loc_824F655C;
	// lwz r10,1120(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f655c
	if (ctx.cr6.eq) goto loc_824F655C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1112(r6)
	REX_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
loc_824F655C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, ctx.r11.u32);
	// stw r10,1116(r6)
	REX_STORE_U32(ctx.r6.u32 + 1116, ctx.r10.u32);
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F6570:
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// rlwinm. r30,r3,0,24,24
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r31,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, r31.u32);
	// stw r29,1096(r6)
	REX_STORE_U32(ctx.r6.u32 + 1096, r29.u32);
	// bne 0x824f65a0
	if (!ctx.cr0.eq) goto loc_824F65A0;
	// lwz r11,1124(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1124);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1132(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1132);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1124(r6)
	REX_STORE_U32(ctx.r6.u32 + 1124, ctx.r10.u32);
	// stw r11,1132(r6)
	REX_STORE_U32(ctx.r6.u32 + 1132, ctx.r11.u32);
loc_824F65A0:
	// lwz r11,1128(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1128);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwz r11,1136(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1128(r6)
	REX_STORE_U32(ctx.r6.u32 + 1128, ctx.r10.u32);
	// stw r11,1136(r6)
	REX_STORE_U32(ctx.r6.u32 + 1136, ctx.r11.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r10,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f6670
	if (!ctx.cr0.eq) goto loc_824F6670;
	// lwz r11,1020(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1020);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f6670
	if (ctx.cr6.eq) goto loc_824F6670;
	// lwz r8,1024(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 1024);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_824F65E4:
	// stw r29,1048(r6)
	REX_STORE_U32(ctx.r6.u32 + 1048, r29.u32);
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824f6600
	if (!ctx.cr6.eq) goto loc_824F6600;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_824F6600:
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824f663c
	if (ctx.cr6.eq) goto loc_824F663C;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824f6620
	if (ctx.cr6.eq) goto loc_824F6620;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824f6624
	if (!ctx.cr6.eq) goto loc_824F6624;
loc_824F6620:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_824F6624:
	// lwz r11,1020(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1020);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f65e4
	if (ctx.cr6.lt) goto loc_824F65E4;
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F663C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824f664c
	if (ctx.cr6.eq) goto loc_824F664C;
	// clrlwi. r11,r7,30
	ctx.r11.u64 = ctx.r7.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f6a2c
	if (!ctx.cr0.eq) goto loc_824F6A2C;
loc_824F664C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824f6660
	if (!ctx.cr6.eq) goto loc_824F6660;
	// lwz r11,1060(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	REX_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_824F6660:
	// lwz r11,1056(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	REX_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F6670:
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f6698
	if (!ctx.cr0.eq) goto loc_824F6698;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824f668c
	if (!ctx.cr6.eq) goto loc_824F668C;
	// lwz r11,1060(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1060);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1060(r6)
	REX_STORE_U32(ctx.r6.u32 + 1060, ctx.r11.u32);
loc_824F668C:
	// lwz r11,1056(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1056);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1056(r6)
	REX_STORE_U32(ctx.r6.u32 + 1056, ctx.r11.u32);
loc_824F6698:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,-26296
	ctx.r11.s64 = ctx.r11.s64 + -26296;
	// bne cr6,0x824f66c4
	if (!ctx.cr6.eq) goto loc_824F66C4;
	// lhz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r9,1068(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 1068);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,1068(r6)
	REX_STORE_U32(ctx.r6.u32 + 1068, ctx.r10.u32);
loc_824F66C4:
	// lhz r9,4(r5)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// lwz r10,1064(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1064);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1064(r6)
	REX_STORE_U32(ctx.r6.u32 + 1064, ctx.r11.u32);
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F66E4:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm. r3,r3,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,1096(r6)
	REX_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
	// bne 0x824f672c
	if (!ctx.cr0.eq) goto loc_824F672C;
	// lwz r10,1100(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1100);
	// lwz r11,1108(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1108);
	// lwz r9,1116(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,1100(r6)
	REX_STORE_U32(ctx.r6.u32 + 1100, ctx.r10.u32);
	// stw r11,1108(r6)
	REX_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
	// beq cr6,0x824f672c
	if (ctx.cr6.eq) goto loc_824F672C;
	// lwz r10,1120(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f672c
	if (ctx.cr6.eq) goto loc_824F672C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	REX_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_824F672C:
	// lwz r10,1104(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1104);
	// lwz r11,1112(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1112);
	// lwz r9,1116(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 1116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1104(r6)
	REX_STORE_U32(ctx.r6.u32 + 1104, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,1112(r6)
	REX_STORE_U32(ctx.r6.u32 + 1112, ctx.r11.u32);
	// beq cr6,0x824f6768
	if (ctx.cr6.eq) goto loc_824F6768;
	// lwz r11,1120(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f6768
	if (ctx.cr6.eq) goto loc_824F6768;
	// lwz r11,1108(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1108(r6)
	REX_STORE_U32(ctx.r6.u32 + 1108, ctx.r11.u32);
loc_824F6768:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,980(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 980);
	// li r29,1
	r29.s64 = 1;
	// stw r11,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,1116(r6)
	REX_STORE_U32(ctx.r6.u32 + 1116, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,12,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,180(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 180);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// beq cr6,0x824f6898
	if (ctx.cr6.eq) goto loc_824F6898;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x824f67ec
	if (ctx.cr6.gt) goto loc_824F67EC;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,-22616
	ctx.r12.s64 = ctx.r12.s64 + -22616;
	// lbzx r0,r12,r4
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// nop 
	// addi r12,r12,26576
	ctx.r12.s64 = ctx.r12.s64 + 26576;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_824F67D0;
	case 1:
		goto loc_824F67D0;
	case 2:
		goto loc_824F67D0;
	case 3:
		goto loc_824F67D0;
	case 4:
		goto loc_824F67D0;
	case 5:
		goto loc_824F67D0;
	case 6:
		goto loc_824F67D0;
	case 7:
		goto loc_824F67D0;
	case 8:
		goto loc_824F67D0;
	case 9:
		goto loc_824F67D0;
	case 10:
		goto loc_824F67D0;
	case 11:
		goto loc_824F67D0;
	case 12:
		goto loc_824F67D0;
	case 13:
		goto loc_824F67D0;
	case 14:
		goto loc_824F67D0;
	case 15:
		goto loc_824F67D0;
	case 16:
		goto loc_824F67D0;
	case 17:
		goto loc_824F67D0;
	case 18:
		goto loc_824F67D0;
	case 19:
		goto loc_824F67D0;
	case 20:
		goto loc_824F67D0;
	case 21:
		goto loc_824F67D8;
	case 22:
		goto loc_824F67D0;
	case 23:
		goto loc_824F67D0;
	case 24:
		goto loc_824F67D0;
	case 25:
		goto loc_824F67D0;
	case 26:
		goto loc_824F67D8;
	case 27:
		goto loc_824F67D0;
	case 28:
		goto loc_824F67D8;
	case 29:
		goto loc_824F67E8;
	case 30:
		goto loc_824F67D0;
	case 31:
		goto loc_824F67D0;
	case 32:
		goto loc_824F67D8;
	case 33:
		goto loc_824F67D0;
	case 34:
		goto loc_824F67D8;
	case 35:
		goto loc_824F67E8;
	case 36:
		goto loc_824F67D0;
	case 37:
		goto loc_824F67D8;
	case 38:
		goto loc_824F67E8;
	case 39:
		goto loc_824F67D0;
	case 40:
		goto loc_824F67D0;
	case 41:
		goto loc_824F67D0;
	case 42:
		goto loc_824F67D0;
	case 43:
		goto loc_824F67D0;
	case 44:
		goto loc_824F67D0;
	case 45:
		goto loc_824F67D0;
	case 46:
		goto loc_824F67D0;
	case 47:
		goto loc_824F67D0;
	case 48:
		goto loc_824F67D0;
	case 49:
		goto loc_824F67D0;
	case 50:
		goto loc_824F67D8;
	case 51:
		goto loc_824F67D8;
	case 52:
		goto loc_824F67D8;
	case 53:
		goto loc_824F67D8;
	case 54:
		goto loc_824F67D8;
	case 55:
		goto loc_824F67D8;
	case 56:
		goto loc_824F67D8;
	case 57:
		goto loc_824F67E0;
	case 58:
		goto loc_824F67D0;
	case 59:
		goto loc_824F67D0;
	case 60:
		goto loc_824F67D0;
	case 61:
		goto loc_824F67D0;
	case 62:
		goto loc_824F67D0;
	case 63:
		goto loc_824F67D0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824F67D0:
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x824f67ec
	goto loc_824F67EC;
loc_824F67D8:
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x824f67ec
	goto loc_824F67EC;
loc_824F67E0:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x824f67ec
	goto loc_824F67EC;
loc_824F67E8:
	// li r9,4
	ctx.r9.s64 = 4;
loc_824F67EC:
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r10,r8,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x824f6804
	if (!ctx.cr6.eq) goto loc_824F6804;
	// lwz r11,188(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r10,r11,11,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_824F6804:
	// rlwinm r11,r8,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824f6818
	if (!ctx.cr6.eq) goto loc_824F6818;
	// lwz r11,188(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,11,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x3;
loc_824F6818:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f6834
	if (!ctx.cr6.eq) goto loc_824F6834;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824f6834
	if (!ctx.cr6.eq) goto loc_824F6834;
	// cmplwi cr6,r4,38
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 38, ctx.xer);
	// bne cr6,0x824f6834
	if (!ctx.cr6.eq) goto loc_824F6834;
	// li r9,2
	ctx.r9.s64 = 2;
loc_824F6834:
	// rlwinm r11,r8,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x824f6848
	if (!ctx.cr6.eq) goto loc_824F6848;
	// lwz r11,188(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_824F6848:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f6860
	if (ctx.cr6.eq) goto loc_824F6860;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
loc_824F6860:
	// rlwinm r11,r8,16,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x824f6874
	if (!ctx.cr6.eq) goto loc_824F6874;
	// lwz r11,188(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 188);
	// rlwinm r11,r11,9,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x3;
loc_824F6874:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824f689c
	if (!ctx.cr6.eq) goto loc_824F689C;
	// lwz r11,192(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 192);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f689c
	if (ctx.cr0.eq) goto loc_824F689C;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x824f689c
	goto loc_824F689C;
loc_824F6898:
	// stw r29,1044(r6)
	REX_STORE_U32(ctx.r6.u32 + 1044, r29.u32);
loc_824F689C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x824f68b0
	if (!ctx.cr6.eq) goto loc_824F68B0;
	// lwz r11,1076(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1076);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,1076(r6)
	REX_STORE_U32(ctx.r6.u32 + 1076, ctx.r11.u32);
loc_824F68B0:
	// lwz r11,1072(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1072);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,1072(r6)
	REX_STORE_U32(ctx.r6.u32 + 1072, ctx.r11.u32);
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F68C0:
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f68f8
	if (ctx.cr0.eq) goto loc_824F68F8;
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r31,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, r31.u32);
	// stw r31,1096(r6)
	REX_STORE_U32(ctx.r6.u32 + 1096, r31.u32);
	// bne 0x824f68e8
	if (!ctx.cr0.eq) goto loc_824F68E8;
	// lwz r11,1084(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1084);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1084(r6)
	REX_STORE_U32(ctx.r6.u32 + 1084, ctx.r11.u32);
loc_824F68E8:
	// lwz r11,1080(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1080);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1080(r6)
	REX_STORE_U32(ctx.r6.u32 + 1080, ctx.r11.u32);
	// b 0x824f6a2c
	goto loc_824F6A2C;
loc_824F68F8:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f6a2c
	if (ctx.cr0.eq) goto loc_824F6A2C;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,49152
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49152, ctx.xer);
	// bne cr6,0x824f6918
	if (!ctx.cr6.eq) goto loc_824F6918;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1096(r6)
	REX_STORE_U32(ctx.r6.u32 + 1096, ctx.r11.u32);
loc_824F6918:
	// lwz r11,1096(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1096);
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824f6944
	if (!ctx.cr6.eq) goto loc_824F6944;
	// lwz r10,1132(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1132);
	// lwz r11,1136(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1136);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,1132(r6)
	REX_STORE_U32(ctx.r6.u32 + 1132, ctx.r10.u32);
	// stw r11,1136(r6)
	REX_STORE_U32(ctx.r6.u32 + 1136, ctx.r11.u32);
	// b 0x824f6950
	goto loc_824F6950;
loc_824F6944:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824f6950
	if (!ctx.cr6.eq) goto loc_824F6950;
	// stw r29,1120(r6)
	REX_STORE_U32(ctx.r6.u32 + 1120, r29.u32);
loc_824F6950:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824f6a4c
	if (ctx.cr6.eq) goto loc_824F6A4C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824f6a4c
	if (ctx.cr6.eq) goto loc_824F6A4C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x824f6a5c
	if (ctx.cr6.eq) goto loc_824F6A5C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x824f6a4c
	if (ctx.cr6.eq) goto loc_824F6A4C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x824f6a4c
	if (ctx.cr6.eq) goto loc_824F6A4C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x824f6a4c
	if (ctx.cr6.eq) goto loc_824F6A4C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x824f6998
	if (ctx.cr6.eq) goto loc_824F6998;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x824f69d0
	if (!ctx.cr6.eq) goto loc_824F69D0;
loc_824F6998:
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,976(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 976);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f69b4
	if (!ctx.cr0.eq) goto loc_824F69B4;
	// stw r29,1028(r6)
	REX_STORE_U32(ctx.r6.u32 + 1028, r29.u32);
loc_824F69B4:
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,1016(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1016);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f69d0
	if (ctx.cr0.eq) goto loc_824F69D0;
	// stw r29,1032(r6)
	REX_STORE_U32(ctx.r6.u32 + 1032, r29.u32);
loc_824F69D0:
	// lwz r11,1088(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_824F69D8:
	// stw r11,1088(r6)
	REX_STORE_U32(ctx.r6.u32 + 1088, ctx.r11.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x824f69f4
	if (ctx.cr6.eq) goto loc_824F69F4;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x824f6a0c
	if (!ctx.cr6.eq) goto loc_824F6A0C;
loc_824F69F4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f6a0c
	if (!ctx.cr0.eq) goto loc_824F6A0C;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f6a0c
	if (ctx.cr0.eq) goto loc_824F6A0C;
	// stw r29,1036(r6)
	REX_STORE_U32(ctx.r6.u32 + 1036, r29.u32);
loc_824F6A0C:
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x824f6a2c
	if (!ctx.cr6.eq) goto loc_824F6A2C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f6a2c
	if (ctx.cr0.eq) goto loc_824F6A2C;
	// stw r29,1040(r6)
	REX_STORE_U32(ctx.r6.u32 + 1040, r29.u32);
loc_824F6A2C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,1088(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 1088);
	// li r9,-1000
	ctx.r9.s64 = -1000;
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// b 0x826a1d0c
	return;
loc_824F6A4C:
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x824f6a5c
	if (ctx.cr6.eq) goto loc_824F6A5C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x824f6a70
	if (!ctx.cr6.eq) goto loc_824F6A70;
loc_824F6A5C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f69d0
	if (!ctx.cr0.eq) goto loc_824F69D0;
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f69d0
	if (!ctx.cr0.eq) goto loc_824F69D0;
loc_824F6A70:
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r10,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7;
	// rlwinm r10,r10,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1F;
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f6a98
	if (!ctx.cr0.eq) goto loc_824F6A98;
	// stw r29,1028(r6)
	REX_STORE_U32(ctx.r6.u32 + 1028, r29.u32);
loc_824F6A98:
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r10,25,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7;
	// rlwinm r10,r10,30,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1F;
	// addi r11,r11,246
	ctx.r11.s64 = ctx.r11.s64 + 246;
	// slw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f6ac0
	if (ctx.cr0.eq) goto loc_824F6AC0;
	// stw r29,1032(r6)
	REX_STORE_U32(ctx.r6.u32 + 1032, r29.u32);
loc_824F6AC0:
	// lwz r11,1088(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 1088);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x824f69d8
	goto loc_824F69D8;
}

DEFINE_REX_FUNC(sub_8254A438) {
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
	ctx.lr = 0x8254A440;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8254a498
	if (ctx.cr0.eq) goto loc_8254A498;
	// rlwinm r5,r4,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,28(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// bl 0x825c0e88
	ctx.lr = 0x8254A46C;
	sub_825C0E88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254a564
	if (!ctx.cr0.eq) goto loc_8254A564;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8254A480;
	sub_8250AED8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254A488;
	sub_825226B0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x8254a564
	goto loc_8254A564;
loc_8254A498:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// and r30,r9,r11
	r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8254a4cc
	if (ctx.cr6.eq) goto loc_8254A4CC;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8254a4d0
	if (!ctx.cr6.eq) goto loc_8254A4D0;
loc_8254A4CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8254A4D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254a4dc
	if (!ctx.cr0.eq) goto loc_8254A4DC;
	// lwz r30,28(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 28);
loc_8254A4DC:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8254a4f0
	if (!ctx.cr6.eq) goto loc_8254A4F0;
	// rlwinm r5,r27,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8254a4fc
	goto loc_8254A4FC;
loc_8254A4F0:
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8254A4FC:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c0e88
	ctx.lr = 0x8254A50C;
	sub_825C0E88(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8254a534
	if (!ctx.cr0.eq) goto loc_8254A534;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8254A520;
	sub_8250AED8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825226b0
	ctx.lr = 0x8254A528;
	sub_825226B0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_8254A534:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8254a564
	if (ctx.cr6.eq) goto loc_8254A564;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8254A550;
	sub_8254A0E8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-14080
	ctx.r11.s64 = ctx.r11.s64 + -14080;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8254A564:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825538E0) {
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
	ctx.lr = 0x825538E8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,23
	ctx.r11.s64 = ctx.r4.s64 + 23;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwzx r29,r28,r5
	r29.u64 = REX_LOAD_U32(r28.u32 + ctx.r5.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82553954
	if (ctx.cr6.eq) goto loc_82553954;
	// lwzx r27,r28,r3
	r27.u64 = REX_LOAD_U32(r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82553950
	if (ctx.cr6.eq) goto loc_82553950;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x8255392c
	goto loc_8255392C;
loc_82553924:
	// lwz r30,12(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8255392C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8250ae78
	ctx.lr = 0x82553934;
	sub_8250AE78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82553924
	if (!ctx.cr0.eq) goto loc_82553924;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x82553950;
	sub_8250B4D8(ctx, base);
loc_82553950:
	// stwx r29,r28,r26
	REX_STORE_U32(r28.u32 + r26.u32, r29.u32);
loc_82553954:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82554B98) {
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
	ctx.lr = 0x82554BA0;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82554BCC;
	sub_825BB860(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82554BDC;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82554BE8;
	sub_8250AD28(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(r27.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffc30
	ctx.lr = 0x82554C00;
	sub_824FFC30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825599F0) {
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
	ctx.lr = 0x825599F8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82559a18
	if (!ctx.cr6.eq) goto loc_82559A18;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x82559A18;
	sub_824E4368(ctx, base);
loc_82559A18:
	// lwz r9,616(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 616);
	// li r8,68
	ctx.r8.s64 = 68;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r9,r31
	ctx.r11.u64 = r31.u64 - ctx.r9.u64;
	// divw r11,r11,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r11.s32 / ctx.r8.s32 : 0);
loc_82559A2C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82559a68
	if (ctx.cr6.eq) goto loc_82559A68;
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r25,r11,27
	r25.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 + 21;
	// rlwinm r27,r9,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r27,r30
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + r30.u32);
	// srw r9,r9,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r25.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82559a60
	if (ctx.cr0.eq) goto loc_82559A60;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82559a2c
	goto loc_82559A2C;
loc_82559A60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82559a74
	if (!ctx.cr6.eq) goto loc_82559A74;
loc_82559A68:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824e4368
	ctx.lr = 0x82559A74;
	sub_824E4368(ctx, base);
loc_82559A74:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82559a88
	if (ctx.cr0.eq) goto loc_82559A88;
	// lwz r29,52(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 52);
loc_82559A88:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r26,92(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 92);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82559AA8;
	sub_8257C0C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82559ad8
	if (!ctx.cr6.eq) goto loc_82559AD8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8257c0c0
	ctx.lr = 0x82559AD4;
	sub_8257C0C0(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_82559AD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// blt cr6,0x82559b10
	if (ctx.cr6.lt) goto loc_82559B10;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r25
	ctx.r9.u64 = r25.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r25.u8 & 0x3F));
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stwx r10,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r10.u32);
loc_82559B10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82571D68) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x82571D70;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r17,r10,r11
	r17.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r17)
	REX_STORE_U32(r17.u32 + 48, ctx.r11.u32);
	// bl 0x8255cda0
	ctx.lr = 0x82571DA0;
	sub_8255CDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8256c548
	ctx.lr = 0x82571DAC;
	sub_8256C548(ctx, base);
	// lwz r11,40(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571dc0
	if (ctx.cr0.eq) goto loc_82571DC0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82557ea0
	ctx.lr = 0x82571DC0;
	sub_82557EA0(ctx, base);
loc_82571DC0:
	// lwz r11,44(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825721c4
	if (ctx.cr0.eq) goto loc_825721C4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f7678
	ctx.lr = 0x82571DDC;
	sub_824F7678(ctx, base);
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = r28.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824f7678
	ctx.lr = 0x82571E04;
	sub_824F7678(ctx, base);
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = r27.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571fa8
	if (!ctx.cr0.eq) goto loc_82571FA8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82571fa8
	if (ctx.cr0.eq) goto loc_82571FA8;
loc_82571E38:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571f8c
	if (!ctx.cr0.eq) goto loc_82571F8C;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571f8c
	if (!ctx.cr0.eq) goto loc_82571F8C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82571f8c
	if (ctx.cr0.eq) goto loc_82571F8C;
loc_82571E60:
	// lwz r31,0(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 0);
loc_82571E64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82571f70
	if (ctx.cr6.eq) goto loc_82571F70;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571e8c
	if (ctx.cr0.eq) goto loc_82571E8C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82571e90
	if (!ctx.cr0.eq) goto loc_82571E90;
loc_82571E8C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82571E90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571f68
	if (ctx.cr0.eq) goto loc_82571F68;
	// rlwinm r11,r10,0,7,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FE0000;
	// lis r10,124
	ctx.r10.s64 = 8126464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82571eb0
	if (ctx.cr6.eq) goto loc_82571EB0;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x82571f68
	goto loc_82571F68;
loc_82571EB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825c4c28
	ctx.lr = 0x82571EC0;
	sub_825C4C28(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571ef0
	if (!ctx.cr0.eq) goto loc_82571EF0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82571ef0
	if (ctx.cr0.eq) goto loc_82571EF0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82571efc
	if (!ctx.cr6.gt) goto loc_82571EFC;
loc_82571EF0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82571EFC;
	sub_8251FE00(ctx, base);
loc_82571EFC:
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
	// stwx r26,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r26.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571f44
	if (!ctx.cr0.eq) goto loc_82571F44;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82571f44
	if (ctx.cr0.eq) goto loc_82571F44;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82571f50
	if (!ctx.cr6.gt) goto loc_82571F50;
loc_82571F44:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251fe00
	ctx.lr = 0x82571F50;
	sub_8251FE00(ctx, base);
loc_82571F50:
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
loc_82571F68:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x82571e64
	goto loc_82571E64;
loc_82571F70:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571f8c
	if (!ctx.cr0.eq) goto loc_82571F8C;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82571e60
	if (!ctx.cr6.eq) goto loc_82571E60;
loc_82571F8C:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571fa8
	if (!ctx.cr0.eq) goto loc_82571FA8;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82571e38
	if (!ctx.cr6.eq) goto loc_82571E38;
loc_82571FA8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571fbc
	if (!ctx.cr0.eq) goto loc_82571FBC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82571fcc
	if (!ctx.cr0.eq) goto loc_82571FCC;
loc_82571FBC:
	// lwz r11,44(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 44);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_82571FC4:
	// stw r11,44(r20)
	REX_STORE_U32(r20.u32 + 44, ctx.r11.u32);
	// b 0x82572084
	goto loc_82572084;
loc_82571FCC:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x82571fe0
	if (!ctx.cr6.eq) goto loc_82571FE0;
	// lwz r11,44(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 44);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x82571fc4
	goto loc_82571FC4;
loc_82571FE0:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572084
	if (!ctx.cr0.eq) goto loc_82572084;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82572084
	if (ctx.cr0.eq) goto loc_82572084;
loc_82571FF8:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572068
	if (!ctx.cr0.eq) goto loc_82572068;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82572068
	if (ctx.cr0.eq) goto loc_82572068;
loc_82572010:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8257204c
	if (ctx.cr0.eq) goto loc_8257204C;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82572034
	if (ctx.cr6.eq) goto loc_82572034;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82572038
	if (!ctx.cr6.eq) goto loc_82572038;
loc_82572034:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82572038:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8257204c
	if (ctx.cr0.eq) goto loc_8257204C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82550760
	ctx.lr = 0x8257204C;
	sub_82550760(ctx, base);
loc_8257204C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572068
	if (!ctx.cr0.eq) goto loc_82572068;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82572010
	if (!ctx.cr6.eq) goto loc_82572010;
loc_82572068:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572084
	if (!ctx.cr0.eq) goto loc_82572084;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82571ff8
	if (!ctx.cr6.eq) goto loc_82571FF8;
loc_82572084:
	// lwz r8,4(r20)
	ctx.r8.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572170
	if (!ctx.cr0.eq) goto loc_82572170;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82572170
	if (ctx.cr0.eq) goto loc_82572170;
loc_82572098:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825720c8
	if (ctx.cr0.eq) goto loc_825720C8;
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825720bc
	if (ctx.cr0.eq) goto loc_825720BC;
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// b 0x825720d0
	goto loc_825720D0;
loc_825720BC:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r8,24
	ctx.r10.s64 = ctx.r8.s64 + 24;
	// b 0x825720d0
	goto loc_825720D0;
loc_825720C8:
	// lwz r11,20(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
loc_825720D0:
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// b 0x82572150
	goto loc_82572150;
loc_825720E4:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r7,r9,6,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x825720f8
	if (ctx.cr0.eq) goto loc_825720F8;
	// rlwinm r9,r9,0,6,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
loc_825720F8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82572110
	if (!ctx.cr0.eq) goto loc_82572110;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825720e4
	if (!ctx.cr6.eq) goto loc_825720E4;
loc_82572110:
	// addi r7,r8,32
	ctx.r7.s64 = ctx.r8.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82572158
	if (ctx.cr6.eq) goto loc_82572158;
	// addi r9,r8,24
	ctx.r9.s64 = ctx.r8.s64 + 24;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82572140
	if (ctx.cr6.eq) goto loc_82572140;
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572140
	if (!ctx.cr0.eq) goto loc_82572140;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82572148
	goto loc_82572148;
loc_82572140:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82572148:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82572158
	if (!ctx.cr0.eq) goto loc_82572158;
loc_82572150:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825720e4
	if (!ctx.cr6.eq) goto loc_825720E4;
loc_82572158:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572170
	if (!ctx.cr0.eq) goto loc_82572170;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82572098
	if (!ctx.cr6.eq) goto loc_82572098;
loc_82572170:
	// lwz r10,336(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 336);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825721c4
	if (!ctx.cr6.gt) goto loc_825721C4;
	// addi r10,r20,128
	ctx.r10.s64 = r20.s64 + 128;
loc_82572184:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r9,992
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 992, ctx.xer);
	// beq cr6,0x825721ac
	if (ctx.cr6.eq) goto loc_825721AC;
	// lwz r9,336(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82572184
	if (ctx.cr6.lt) goto loc_82572184;
	// b 0x825721c4
	goto loc_825721C4;
loc_825721AC:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// addi r10,r11,124
	ctx.r10.s64 = ctx.r11.s64 + 124;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r10,r10,0,14,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
loc_825721C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
loc_825721CC:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
loc_825721D0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r18,r10,r11
	r18.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x82572bdc
	if (ctx.cr6.eq) goto loc_82572BDC;
	// lwz r11,40(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 40);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572320
	if (!ctx.cr0.eq) goto loc_82572320;
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 8);
	// addi r29,r18,8
	r29.s64 = r18.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82572218
	if (ctx.cr6.eq) goto loc_82572218;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8257221c
	if (!ctx.cr6.eq) goto loc_8257221C;
loc_82572218:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257221C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572244
	if (!ctx.cr0.eq) goto loc_82572244;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82572244
	if (ctx.cr6.eq) goto loc_82572244;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572244
	if (ctx.cr6.eq) goto loc_82572244;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572320
	if (!ctx.cr0.eq) goto loc_82572320;
loc_82572244:
	// lwz r11,36(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572320
	if (!ctx.cr0.eq) goto loc_82572320;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82572320
	if (ctx.cr0.eq) goto loc_82572320;
loc_8257225C:
	// lwz r19,0(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
loc_82572260:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82572304
	if (ctx.cr6.eq) goto loc_82572304;
	// lwz r10,0(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82572288
	if (ctx.cr0.eq) goto loc_82572288;
	// lwz r11,12(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8257228c
	if (!ctx.cr0.eq) goto loc_8257228C;
loc_82572288:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257228C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825722fc
	if (ctx.cr0.eq) goto loc_825722FC;
	// lwz r21,12(r19)
	r21.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825722fc
	if (!ctx.cr0.eq) goto loc_825722FC;
	// lwz r9,336(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 336);
	// rlwinm r8,r10,15,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825722e0
	if (ctx.cr6.eq) goto loc_825722E0;
	// addi r10,r20,128
	ctx.r10.s64 = r20.s64 + 128;
loc_825722BC:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x825722e0
	if (ctx.cr6.eq) goto loc_825722E0;
	// lwz r6,336(r20)
	ctx.r6.u64 = REX_LOAD_U32(r20.u32 + 336);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825722bc
	if (ctx.cr6.lt) goto loc_825722BC;
loc_825722E0:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825722fc
	if (ctx.cr6.eq) goto loc_825722FC;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8257232c
	if (!ctx.cr0.eq) goto loc_8257232C;
loc_825722FC:
	// lwz r19,4(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 4);
	// b 0x82572260
	goto loc_82572260;
loc_82572304:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572320
	if (!ctx.cr0.eq) goto loc_82572320;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257225c
	if (!ctx.cr6.eq) goto loc_8257225C;
loc_82572320:
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x825721d0
	goto loc_825721D0;
loc_8257232C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825c4c28
	ctx.lr = 0x8257233C;
	sub_825C4C28(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825723e0
	if (!ctx.cr0.eq) goto loc_825723E0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825723e0
	if (ctx.cr0.eq) goto loc_825723E0;
loc_82572354:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825723c4
	if (!ctx.cr0.eq) goto loc_825723C4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825723c4
	if (ctx.cr0.eq) goto loc_825723C4;
loc_8257236C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825723a8
	if (ctx.cr0.eq) goto loc_825723A8;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82572390
	if (ctx.cr6.eq) goto loc_82572390;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82572394
	if (!ctx.cr6.eq) goto loc_82572394;
loc_82572390:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82572394:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825723a8
	if (ctx.cr0.eq) goto loc_825723A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82550760
	ctx.lr = 0x825723A8;
	sub_82550760(ctx, base);
loc_825723A8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825723c4
	if (!ctx.cr0.eq) goto loc_825723C4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8257236c
	if (!ctx.cr6.eq) goto loc_8257236C;
loc_825723C4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825723e0
	if (!ctx.cr0.eq) goto loc_825723E0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82572354
	if (!ctx.cr6.eq) goto loc_82572354;
loc_825723E0:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r22,92(r20)
	r22.u64 = REX_LOAD_U32(r20.u32 + 92);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8255cfe0
	ctx.lr = 0x8257241C;
	sub_8255CFE0(ctx, base);
	// rlwinm r11,r18,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82572434
	if (ctx.cr0.eq) goto loc_82572434;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8257243c
	goto loc_8257243C;
loc_82572434:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_8257243C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82553720
	ctx.lr = 0x82572444;
	sub_82553720(ctx, base);
	// lwz r11,48(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 48);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82572468
	if (ctx.cr0.eq) goto loc_82572468;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,48(r18)
	REX_STORE_U32(r18.u32 + 48, ctx.r11.u32);
	// lwz r11,48(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 48);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,48(r24)
	REX_STORE_U32(r24.u32 + 48, ctx.r11.u32);
loc_82572468:
	// lwz r10,20(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 20);
	// addi r7,r18,16
	ctx.r7.s64 = r18.s64 + 16;
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825725d0
	if (!ctx.cr0.eq) goto loc_825725D0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825725d0
	if (ctx.cr0.eq) goto loc_825725D0;
loc_82572488:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82572554
	if (!ctx.cr6.eq) goto loc_82572554;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572554
	if (ctx.cr6.eq) goto loc_82572554;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825724d4
	if (!ctx.cr6.eq) goto loc_825724D4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r23.u32, ctx.xer);
	// beq cr6,0x82572554
	if (ctx.cr6.eq) goto loc_82572554;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bge cr6,0x82572554
	if (!ctx.cr6.lt) goto loc_82572554;
loc_825724D4:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r24,16
	ctx.r9.s64 = r24.s64 + 16;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// ori r5,r9,1
	ctx.r5.u64 = ctx.r9.u64 | 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r3,r3,0,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r4,16(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 16);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r4,16(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 16);
	// rlwinm r4,r4,0,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r9,16(r24)
	REX_STORE_U32(r24.u32 + 16, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r24,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, r24.u32);
	// beq 0x82572554
	if (ctx.cr0.eq) goto loc_82572554;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
loc_82572554:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82572588
	if (ctx.cr6.eq) goto loc_82572588;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825725a4
	if (ctx.cr6.eq) goto loc_825725A4;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825725d0
	if (!ctx.cr0.eq) goto loc_825725D0;
	// b 0x825725c4
	goto loc_825725C4;
loc_82572588:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825725bc
	if (!ctx.cr6.eq) goto loc_825725BC;
loc_825725A4:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825725d0
	if (!ctx.cr0.eq) goto loc_825725D0;
	// b 0x825725c8
	goto loc_825725C8;
loc_825725BC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x825725d0
	if (!ctx.cr6.eq) goto loc_825725D0;
loc_825725C4:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_825725C8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82572488
	if (!ctx.cr6.eq) goto loc_82572488;
loc_825725D0:
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82572698
	if (ctx.cr6.eq) goto loc_82572698;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c67e8
	ctx.lr = 0x825725F0;
	sub_825C67E8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572684
	if (!ctx.cr0.eq) goto loc_82572684;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82572684
	if (ctx.cr0.eq) goto loc_82572684;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82572648
	if (ctx.cr6.eq) goto loc_82572648;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82572648
	if (ctx.cr6.eq) goto loc_82572648;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82572648
	if (ctx.cr6.eq) goto loc_82572648;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82572648
	if (ctx.cr6.eq) goto loc_82572648;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82572648
	if (ctx.cr6.eq) goto loc_82572648;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8257264c
	if (!ctx.cr6.eq) goto loc_8257264C;
loc_82572648:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257264C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82572684
	if (ctx.cr0.eq) goto loc_82572684;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8257266C;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// bne cr6,0x82572684
	if (!ctx.cr6.eq) goto loc_82572684;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
loc_82572684:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x825725d0
	if (!ctx.cr6.eq) goto loc_825725D0;
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// b 0x825725d0
	goto loc_825725D0;
loc_82572698:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825728ac
	if (!ctx.cr0.eq) goto loc_825728AC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825728ac
	if (ctx.cr0.eq) goto loc_825728AC;
loc_825726B0:
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 44);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bne cr6,0x82572890
	if (!ctx.cr6.eq) goto loc_82572890;
	// lwz r28,80(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 80);
	// addi r27,r28,12
	r27.s64 = r28.s64 + 12;
	// mr r26,r27
	r26.u64 = r27.u64;
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_825726CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82572868
	if (ctx.cr6.eq) goto loc_82572868;
	// lwz r30,0(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// clrlwi r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bge cr6,0x82572850
	if (!ctx.cr6.lt) goto loc_82572850;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825726fc
	if (ctx.cr0.eq) goto loc_825726FC;
	// li r31,0
	r31.s64 = 0;
	// b 0x82572708
	goto loc_82572708;
loc_825726FC:
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_82572708:
	// rlwinm. r11,r10,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572850
	if (!ctx.cr0.eq) goto loc_82572850;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_82572714:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572738
	if (ctx.cr6.eq) goto loc_82572738;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82572730
	if (ctx.cr6.eq) goto loc_82572730;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82572714
	goto loc_82572714;
loc_82572730:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8257273c
	goto loc_8257273C;
loc_82572738:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257273C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x825727c4
	if (ctx.cr0.eq) goto loc_825727C4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x82572754;
	sub_825C6828(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82572850
	if (ctx.cr6.eq) goto loc_82572850;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x82572798
	if (ctx.cr6.eq) goto loc_82572798;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// beq cr6,0x82572798
	if (ctx.cr6.eq) goto loc_82572798;
	// cmplwi cr6,r10,89
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 89, ctx.xer);
	// beq cr6,0x82572798
	if (ctx.cr6.eq) goto loc_82572798;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x82572798
	if (ctx.cr6.eq) goto loc_82572798;
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// beq cr6,0x82572798
	if (ctx.cr6.eq) goto loc_82572798;
	// cmplwi cr6,r10,85
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8257279c
	if (!ctx.cr6.eq) goto loc_8257279C;
loc_82572798:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8257279C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82572850
	if (ctx.cr0.eq) goto loc_82572850;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bne cr6,0x82572bcc
	if (!ctx.cr6.eq) goto loc_82572BCC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x825727C0;
	sub_825C2288(ctx, base);
	// b 0x82572850
	goto loc_82572850;
loc_825727C4:
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c67e8
	ctx.lr = 0x825727D0;
	sub_825C67E8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82572850
	if (ctx.cr6.eq) goto loc_82572850;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x82572814
	if (ctx.cr6.eq) goto loc_82572814;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x82572814
	if (ctx.cr6.eq) goto loc_82572814;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x82572814
	if (ctx.cr6.eq) goto loc_82572814;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x82572814
	if (ctx.cr6.eq) goto loc_82572814;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x82572814
	if (ctx.cr6.eq) goto loc_82572814;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82572818
	if (!ctx.cr6.eq) goto loc_82572818;
loc_82572814:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82572818:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82572850
	if (ctx.cr0.eq) goto loc_82572850;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82572838;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// bne cr6,0x82572850
	if (!ctx.cr6.eq) goto loc_82572850;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
loc_82572850:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82572860
	if (!ctx.cr6.eq) goto loc_82572860;
	// addi r26,r29,8
	r26.s64 = r29.s64 + 8;
loc_82572860:
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x825726cc
	goto loc_825726CC;
loc_82572868:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572880
	if (ctx.cr6.eq) goto loc_82572880;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82572890
	if (!ctx.cr6.eq) goto loc_82572890;
loc_82572880:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82572890;
	sub_825C69A0(ctx, base);
loc_82572890:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825728ac
	if (!ctx.cr0.eq) goto loc_825728AC;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825726b0
	if (!ctx.cr6.eq) goto loc_825726B0;
loc_825728AC:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r29,32(r21)
	r29.u64 = REX_LOAD_U32(r21.u32 + 32);
	// bl 0x8257dfd8
	ctx.lr = 0x825728B8;
	sub_8257DFD8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82552930
	ctx.lr = 0x825728C8;
	sub_82552930(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,27,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// bl 0x82503da0
	ctx.lr = 0x825728F0;
	sub_82503DA0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r4,28(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 28);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// rlwinm r8,r11,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x825bb860
	ctx.lr = 0x82572924;
	sub_825BB860(ctx, base);
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82572968;
	sub_8250AD28(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(r30.u32 + 44, ctx.r3.u32);
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,28(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,48(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82572a28
	if (!ctx.cr0.eq) goto loc_82572A28;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8254a430
	ctx.lr = 0x825729B0;
	sub_8254A430(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x825c1a18
	ctx.lr = 0x825729CC;
	sub_825C1A18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825729DC;
	sub_8250AC70(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r24,24
	ctx.r5.s64 = r24.s64 + 24;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250c998
	ctx.lr = 0x825729F4;
	sub_8250C998(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250ac70
	ctx.lr = 0x82572A04;
	sub_8250AC70(ctx, base);
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82572a98
	if (!ctx.cr6.eq) goto loc_82572A98;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82572A28;
	sub_8250AD28(ctx, base);
loc_82572A28:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82572A34;
	sub_8250AB60(ctx, base);
	// lwz r11,44(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 44);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r11,44(r20)
	REX_STORE_U32(r20.u32 + 44, ctx.r11.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82530ae0
	ctx.lr = 0x82572A58;
	sub_82530AE0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82572A74:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572b04
	if (ctx.cr6.eq) goto loc_82572B04;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82572af0
	if (!ctx.cr0.eq) goto loc_82572AF0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82572ad0
	goto loc_82572AD0;
loc_82572A98:
	// li r31,0
	r31.s64 = 0;
	// addi r28,r29,40
	r28.s64 = r29.s64 + 40;
loc_82572AA0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82572a28
	if (!ctx.cr6.lt) goto loc_82572A28;
	// lwzu r11,4(r28)
	ea = 4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8250ad28
	ctx.lr = 0x82572AC0;
	sub_8250AD28(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82572aa0
	goto loc_82572AA0;
loc_82572AC8:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82572AD0:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82572ac8
	if (!ctx.cr6.eq) goto loc_82572AC8;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_82572AF0:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82572a74
	if (!ctx.cr6.eq) goto loc_82572A74;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82572a74
	goto loc_82572A74;
loc_82572B04:
	// addi r8,r21,4
	ctx.r8.s64 = r21.s64 + 4;
loc_82572B08:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82572b6c
	if (ctx.cr6.eq) goto loc_82572B6C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82572b58
	if (ctx.cr6.eq) goto loc_82572B58;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82572b38
	goto loc_82572B38;
loc_82572B30:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82572B38:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82572b30
	if (!ctx.cr6.eq) goto loc_82572B30;
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
loc_82572B58:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82572b08
	if (!ctx.cr6.eq) goto loc_82572B08;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x82572b08
	goto loc_82572B08;
loc_82572B6C:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm. r11,r11,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82572bb4
	if (ctx.cr0.eq) goto loc_82572BB4;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r18,92
	ctx.r11.s64 = r18.s64 + 92;
	// oris r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 33554432;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82572B90:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x82572ba0
	if (!ctx.cr6.eq) goto loc_82572BA0;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_82572BA0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82572b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82572B90;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,8(r21)
	REX_STORE_U32(r21.u32 + 8, ctx.r11.u32);
loc_82572BB4:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8255cda0
	ctx.lr = 0x82572BBC;
	sub_8255CDA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8256c548
	ctx.lr = 0x82572BC8;
	sub_8256C548(ctx, base);
	// b 0x825721cc
	goto loc_825721CC;
loc_82572BCC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-20880
	ctx.r5.s64 = ctx.r11.s64 + -20880;
	// bl 0x824e4368
	ctx.lr = 0x82572BDC;
	sub_824E4368(ctx, base);
loc_82572BDC:
	// lwz r11,40(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 40);
	// lwz r10,44(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 44);
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,40(r20)
	REX_STORE_U32(r20.u32 + 40, ctx.r11.u32);
	// bne 0x82572c00
	if (!ctx.cr0.eq) goto loc_82572C00;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm r11,r11,0,4,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// stw r11,48(r17)
	REX_STORE_U32(r17.u32 + 48, ctx.r11.u32);
loc_82572C00:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_825D6600) {
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
	ctx.lr = 0x825D6608;
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
	// bne cr6,0x825d6654
	if (!ctx.cr6.eq) goto loc_825D6654;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,23184
	ctx.r5.s64 = ctx.r11.s64 + 23184;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6654;
	sub_824EA978(ctx, base);
loc_825D6654:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x825d6678
	if (ctx.cr6.lt) goto loc_825D6678;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,6300
	ctx.r5.s64 = ctx.r11.s64 + 6300;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,620
	ctx.r7.s64 = 620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D6678;
	sub_824EA978(ctx, base);
loc_825D6678:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x825d669c
	if (!ctx.cr6.lt) goto loc_825D669C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,6288
	ctx.r5.s64 = ctx.r11.s64 + 6288;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D669C;
	sub_824EA978(ctx, base);
loc_825D669C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f02c0
	ctx.lr = 0x825D66A8;
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
	ctx.lr = 0x825D66BC;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x825d672c
	if (!ctx.cr6.eq) goto loc_825D672C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// bne cr6,0x825d672c
	if (!ctx.cr6.eq) goto loc_825D672C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d66e8
	if (ctx.cr6.eq) goto loc_825D66E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D66E8;
	sub_824F0950(ctx, base);
loc_825D66E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d6724
	if (ctx.cr6.eq) goto loc_825D6724;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d6724
	if (ctx.cr6.eq) goto loc_825D6724;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x825D6724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6724:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825d6788
	goto loc_825D6788;
loc_825D672C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d6748
	if (ctx.cr6.eq) goto loc_825D6748;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D6748;
	sub_824F0950(ctx, base);
loc_825D6748:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x825d6784
	if (ctx.cr6.eq) goto loc_825D6784;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x825d6784
	if (ctx.cr6.eq) goto loc_825D6784;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x825D6784;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D6784:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825D6788:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825E16D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825E16D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r11.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// stb r30,48(r3)
	REX_STORE_U8(ctx.r3.u32 + 48, r30.u8);
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r30.u32);
	// stw r30,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r30.u32);
	// stw r30,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r30.u32);
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r30.u32);
	// stw r30,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r30.u32);
	// stw r30,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r30.u32);
	// stw r30,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r30.u32);
	// stw r30,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r30.u32);
	// stw r30,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r30.u32);
	// stw r30,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r30.u32);
	// stw r30,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, r30.u32);
	// stb r30,124(r3)
	REX_STORE_U8(ctx.r3.u32 + 124, r30.u8);
	// stb r30,125(r3)
	REX_STORE_U8(ctx.r3.u32 + 125, r30.u8);
	// stw r30,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, r30.u32);
	// stw r10,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E1754;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e1774
	if (ctx.cr0.eq) goto loc_825E1774;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E1770;
	sub_825D7A48(ctx, base);
	// b 0x825e1778
	goto loc_825E1778;
loc_825E1774:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825E1778:
	// stw r29,112(r31)
	REX_STORE_U32(r31.u32 + 112, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E1790;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e17b0
	if (ctx.cr0.eq) goto loc_825E17B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E17AC;
	sub_825D7A48(ctx, base);
	// b 0x825e17b4
	goto loc_825E17B4;
loc_825E17B0:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825E17B4:
	// stw r29,116(r31)
	REX_STORE_U32(r31.u32 + 116, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E17CC;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e17ec
	if (ctx.cr0.eq) goto loc_825E17EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E17E8;
	sub_825D7A48(ctx, base);
	// b 0x825e17f0
	goto loc_825E17F0;
loc_825E17EC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825E17F0:
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E1808;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e1828
	if (ctx.cr0.eq) goto loc_825E1828;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E1824;
	sub_825D7A48(ctx, base);
	// b 0x825e182c
	goto loc_825E182C;
loc_825E1828:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_825E182C:
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1456(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E1844;
	sub_825B33A0(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e1864
	if (ctx.cr0.eq) goto loc_825E1864;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x825E1860;
	sub_825D7A48(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E1864:
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,1376(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1376);
	// mulli r30,r11,3
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// mulli r29,r30,12
	r29.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(12));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825b3ab0
	ctx.lr = 0x825E1880;
	sub_825B3AB0(ctx, base);
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b3ab0
	ctx.lr = 0x825E1890;
	sub_825B3AB0(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825b3ab0
	ctx.lr = 0x825E18A0;
	sub_825B3AB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F4058) {
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
	ctx.lr = 0x825F4060;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825f42a8
	if (!ctx.cr0.eq) goto loc_825F42A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,1876(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1876);
	// mulli r10,r5,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,-17760
	ctx.r11.s64 = ctx.r11.s64 + -17760;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r9,18644
	ctx.r4.s64 = ctx.r9.s64 + 18644;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82130e88
	ctx.lr = 0x825F40A8;
	sub_82130E88(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(r20.s32, 15, ctx.xer);
	// bge cr6,0x825f4178
	if (!ctx.cr6.lt) goto loc_825F4178;
	// addi r11,r20,228
	ctx.r11.s64 = r20.s64 + 228;
	// subfic r29,r31,-632
	ctx.xer.ca = r31.u32 <= 4294966664;
	r29.u64 = static_cast<uint64_t>(-632) - r31.u64;
	// subfic r28,r31,-636
	ctx.xer.ca = r31.u32 <= 4294966660;
	r28.u64 = static_cast<uint64_t>(-636) - r31.u64;
	// subfic r27,r31,-568
	ctx.xer.ca = r31.u32 <= 4294966728;
	r27.u64 = static_cast<uint64_t>(-568) - r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r26,r31,-572
	ctx.xer.ca = r31.u32 <= 4294966724;
	r26.u64 = static_cast<uint64_t>(-572) - r31.u64;
	// subfic r25,r31,-504
	ctx.xer.ca = r31.u32 <= 4294966792;
	r25.u64 = static_cast<uint64_t>(-504) - r31.u64;
	// subfic r24,r31,-508
	ctx.xer.ca = r31.u32 <= 4294966788;
	r24.u64 = static_cast<uint64_t>(-508) - r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subfic r23,r20,15
	ctx.xer.ca = r20.u32 <= 15;
	r23.u64 = static_cast<uint64_t>(15) - r20.u64;
loc_825F40DC:
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r18,4(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// add r7,r29,r11
	ctx.r7.u64 = r29.u64 + ctx.r11.u64;
	// add r6,r28,r11
	ctx.r6.u64 = r28.u64 + ctx.r11.u64;
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// add r5,r27,r11
	ctx.r5.u64 = r27.u64 + ctx.r11.u64;
	// stw r3,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r3.u32);
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + ctx.r11.u64;
	// add r3,r25,r11
	ctx.r3.u64 = r25.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r18.u32);
loc_825F411C:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r18,r3,r10
	r18.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r6,r10
	r17.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r16,r4,r10
	r16.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r15,r30,r10
	r15.u64 = r30.u64 + ctx.r10.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r18,r31
	r18.u64 = REX_LOAD_U32(r18.u32 + r31.u32);
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r15,2,0,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r17,r31
	REX_STORE_U32(r17.u32 + r31.u32, ctx.r11.u32);
	// stwx r9,r16,r31
	REX_STORE_U32(r16.u32 + r31.u32, ctx.r9.u32);
	// stwx r18,r15,r31
	REX_STORE_U32(r15.u32 + r31.u32, r18.u32);
	// bdnz 0x825f411c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F411C;
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x825f40dc
	if (!ctx.cr0.eq) goto loc_825F40DC;
loc_825F4178:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r22,972(r31)
	REX_STORE_U32(r31.u32 + 972, r22.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r22,1036(r31)
	REX_STORE_U32(r31.u32 + 1036, r22.u32);
	// addi r11,r31,1852
	ctx.r11.s64 = r31.s64 + 1852;
	// stw r9,1100(r31)
	REX_STORE_U32(r31.u32 + 1100, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825F4194:
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r22,-508(r11)
	REX_STORE_U32(ctx.r11.u32 + -508, r22.u32);
	// stw r10,-252(r11)
	REX_STORE_U32(ctx.r11.u32 + -252, ctx.r10.u32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825f4194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825F4194;
	// lbz r11,2072(r21)
	ctx.r11.u64 = REX_LOAD_U8(r21.u32 + 2072);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825f41e0
	if (ctx.cr0.eq) goto loc_825F41E0;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(r19.s32, 18, ctx.xer);
	// beq cr6,0x825f41e0
	if (ctx.cr6.eq) goto loc_825F41E0;
	// lwz r4,2084(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 2084);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,2084(r21)
	REX_STORE_U32(r21.u32 + 2084, ctx.r11.u32);
	// bl 0x825e9588
	ctx.lr = 0x825F41D0;
	sub_825E9588(ctx, base);
	// lwz r11,2076(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2076);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2076(r21)
	REX_STORE_U32(r21.u32 + 2076, ctx.r11.u32);
	// b 0x825f4218
	goto loc_825F4218;
loc_825F41E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825f4204
	if (ctx.cr6.eq) goto loc_825F4204;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(r19.s32, 18, ctx.xer);
	// bne cr6,0x825f4204
	if (!ctx.cr6.eq) goto loc_825F4204;
	// lwz r4,2084(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 2084);
	// stb r22,2072(r21)
	REX_STORE_U8(r21.u32 + 2072, r22.u8);
	// stb r22,2073(r21)
	REX_STORE_U8(r21.u32 + 2073, r22.u8);
	// stw r22,2076(r21)
	REX_STORE_U32(r21.u32 + 2076, r22.u32);
	// b 0x825f4210
	goto loc_825F4210;
loc_825F4204:
	// lwz r11,2084(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 2084);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,2084(r21)
	REX_STORE_U32(r21.u32 + 2084, ctx.r4.u32);
loc_825F4210:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825e9588
	ctx.lr = 0x825F4218;
	sub_825E9588(ctx, base);
loc_825F4218:
	// lwz r11,164(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 164);
	// lwz r30,28(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x825f4284
	goto loc_825F4284;
loc_825F4224:
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825f4280
	if (ctx.cr0.eq) goto loc_825F4280;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F4244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825f4280
	if (ctx.cr0.eq) goto loc_825F4280;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825f4280
	if (ctx.cr6.eq) goto loc_825F4280;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f4280
	if (!ctx.cr6.eq) goto loc_825F4280;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r20.s32, ctx.xer);
	// ble cr6,0x825f4280
	if (!ctx.cr6.gt) goto loc_825F4280;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r30)
	REX_STORE_U32(r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r10.u32);
loc_825F4280:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_825F4284:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825f4224
	if (!ctx.cr6.eq) goto loc_825F4224;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,1876(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1876);
	// addi r4,r11,18612
	ctx.r4.s64 = ctx.r11.s64 + 18612;
	// bl 0x82130e88
	ctx.lr = 0x825F42A0;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f3728
	ctx.lr = 0x825F42A8;
	sub_825F3728(ctx, base);
loc_825F42A8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_825FCF98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-30956
	ctx.r3.s64 = ctx.r11.s64 + -30956;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825FD0B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
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

DEFINE_REX_FUNC(sub_825FDE90) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825fded8
	if (!ctx.cr6.eq) goto loc_825FDED8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,9976
	ctx.r6.s64 = ctx.r11.s64 + 9976;
	// addi r5,r10,10068
	ctx.r5.s64 = ctx.r10.s64 + 10068;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1932
	ctx.r7.s64 = 1932;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FDED8;
	sub_824EA978(ctx, base);
loc_825FDED8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r4.u32);
	// bl 0x825f9f38
	ctx.lr = 0x825FDEF0;
	sub_825F9F38(ctx, base);
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

DEFINE_REX_FUNC(sub_826085A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826085A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82608608
	if (!ctx.cr6.gt) goto loc_82608608;
	// li r30,0
	r30.s64 = 0;
loc_826085C4:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x826085e0
	if (!ctx.cr6.lt) goto loc_826085E0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// b 0x826085e8
	goto loc_826085E8;
loc_826085E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x826085E8;
	sub_825F7718(ctx, base);
loc_826085E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826085c4
	if (ctx.cr6.lt) goto loc_826085C4;
loc_82608608:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260B760) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x827938a4
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8260B890) {
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
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8260b8b8
	if (!ctx.cr6.eq) goto loc_8260B8B8;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// b 0x8260b918
	goto loc_8260B918;
loc_8260B8B8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r31,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,-15956
	ctx.r10.s64 = ctx.r10.s64 + -15956;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_8260B8CC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8260b8ec
	if (!ctx.cr0.eq) goto loc_8260B8EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8260b8cc
	if (!ctx.cr6.eq) goto loc_8260B8CC;
loc_8260B8EC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8260b90c
	if (!ctx.cr0.eq) goto loc_8260B90C;
	// stw r3,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260B908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8260b918
	goto loc_8260B918;
loc_8260B90C:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8260b7c8
	ctx.lr = 0x8260B914;
	sub_8260B7C8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8260B918:
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

DEFINE_REX_FUNC(sub_8260E4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260E4F0;
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
	ctx.lr = 0x8260E508;
	sub_8260B4A0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8260e51c
	if (!ctx.cr6.eq) goto loc_8260E51C;
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16387
	r31.u64 = r31.u64 | 16387;
	// b 0x8260e558
	goto loc_8260E558;
loc_8260E51C:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x8260b5b8
	ctx.lr = 0x8260E534;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8260e544
	if (ctx.cr0.eq) goto loc_8260E544;
	// bl 0x82617f10
	ctx.lr = 0x8260E540;
	sub_82617F10(ctx, base);
	// b 0x8260e548
	goto loc_8260E548;
loc_8260E544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260E548:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8260e56c
	if (ctx.cr6.eq) goto loc_8260E56C;
	// li r31,0
	r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_8260E558:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260b538
	ctx.lr = 0x8260E560;
	sub_8260B538(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_8260E56C:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8260e558
	goto loc_8260E558;
}

DEFINE_REX_FUNC(sub_826108D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826108ec
	if (ctx.cr0.eq) goto loc_826108EC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82610900
	goto loc_82610900;
loc_826108EC:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r4,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82610900:
	// rlwinm r11,r11,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82612EB8) {
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
	ctx.lr = 0x82612EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260f988
	ctx.lr = 0x82612EF4;
	sub_8260F988(ctx, base);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82612f14
	if (ctx.cr6.eq) goto loc_82612F14;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82612f14
	if (ctx.cr6.eq) goto loc_82612F14;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82612f18
	goto loc_82612F18;
loc_82612F14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82612F18:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82612F3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 ? ctx.r10.u64 / ctx.r11.u64 : 0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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
	ctx.lr = 0x82612F70;
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

DEFINE_REX_FUNC(sub_82616A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82616A80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,384(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 384);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x826268c0
	ctx.lr = 0x82616ABC;
	sub_826268C0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82616ae4
	if (ctx.cr0.lt) goto loc_82616AE4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82616608
	ctx.lr = 0x82616AD4;
	sub_82616608(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82616ae4
	if (ctx.cr0.lt) goto loc_82616AE4;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// bl 0x82616350
	ctx.lr = 0x82616AE4;
	sub_82616350(ctx, base);
loc_82616AE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8261AB50) {
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
	// bl 0x8261a458
	ctx.lr = 0x8261AB70;
	sub_8261A458(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8261ab80
	if (ctx.cr0.eq) goto loc_8261AB80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261AB80;
	sub_8264C3D0(ctx, base);
loc_8261AB80:
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

DEFINE_REX_FUNC(sub_8261C438) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8261C440;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8261b320
	ctx.lr = 0x8261C480;
	sub_8261B320(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8261C48C;
	sub_8261B718(ctx, base);
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
	ctx.lr = 0x8261C4A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82625088) {
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
	ctx.lr = 0x82625090;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82640cb0
	ctx.lr = 0x826250A4;
	sub_82640CB0(ctx, base);
	// lwz r25,0(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lhz r7,2(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82624380
	ctx.lr = 0x826250C4;
	sub_82624380(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r27,-1
	r27.s64 = -1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x826250ec
	if (ctx.cr6.eq) goto loc_826250EC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826250ec
	if (!ctx.cr6.eq) goto loc_826250EC;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x826250f8
	goto loc_826250F8;
loc_826250EC:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_826250F8:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// beq cr6,0x82625114
	if (ctx.cr6.eq) goto loc_82625114;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// bne cr6,0x82625118
	if (!ctx.cr6.eq) goto loc_82625118;
	// li r31,16
	r31.s64 = 16;
	// b 0x82625118
	goto loc_82625118;
loc_82625114:
	// li r31,8
	r31.s64 = 8;
loc_82625118:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8262512c
	if (!ctx.cr6.eq) goto loc_8262512C;
loc_82625120:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8262512C:
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82625120
	if (ctx.cr6.eq) goto loc_82625120;
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
loc_82625144:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 21);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r3,r26,0,31,29
	ctx.r3.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r3.u64 & 0x2);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826251c0
	if (ctx.cr6.eq) goto loc_826251C0;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826251c0
	if (ctx.cr6.eq) goto loc_826251C0;
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lhz r3,14(r28)
	ctx.r3.u64 = REX_LOAD_U16(r28.u32 + 14);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826251c0
	if (!ctx.cr6.eq) goto loc_826251C0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82625188
	if (ctx.cr6.eq) goto loc_82625188;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8262518c
	goto loc_8262518C;
loc_82625188:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8262518C:
	// subf r11,r10,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r10.u64;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826251d4
	if (ctx.cr0.eq) goto loc_826251D4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x826251c0
	if (!ctx.cr6.gt) goto loc_826251C0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x826251b8
	if (ctx.cr6.eq) goto loc_826251B8;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826251c0
	if (ctx.cr6.gt) goto loc_826251C0;
loc_826251B8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_826251C0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,25
	ctx.r8.s64 = ctx.r8.s64 + 25;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82625144
	if (ctx.cr6.lt) goto loc_82625144;
	// b 0x826251d8
	goto loc_826251D8;
loc_826251D4:
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
loc_826251D8:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x82625120
	if (ctx.cr6.eq) goto loc_82625120;
	// mulli r11,r27,25
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(25));
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8262B788) {
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
	ctx.lr = 0x8262B790;
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r27,24(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r22,32(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8262b7bc
	if (ctx.cr6.eq) goto loc_8262B7BC;
	// li r29,1
	r29.s64 = 1;
	// li r27,1
	r27.s64 = 1;
loc_8262B7BC:
	// lwz r24,12(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8262b868
	if (!ctx.cr6.eq) goto loc_8262B868;
	// divwu. r10,r10,r27
	ctx.r10.u64 = uint32_t(r27.u32 ? ctx.r10.u32 / r27.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8262b938
	if (ctx.cr0.eq) goto loc_8262B938;
	// lwz r30,8(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r29,2,0,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8262B7DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262b854
	if (ctx.cr6.eq) goto loc_8262B854;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// addi r31,r8,108
	r31.s64 = ctx.r8.s64 + 108;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r7,r30,-4
	ctx.r7.s64 = r30.s64 + -4;
loc_8262B7FC:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// ble cr6,0x8262b82c
	if (!ctx.cr6.gt) goto loc_8262B82C;
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8262B81C:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfsu f12,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x8262b81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262B81C;
loc_8262B82C:
	// dcbt r0,r3
	// dcbt r0,r31
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8262b844
	if (ctx.cr6.eq) goto loc_8262B844;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8262B844:
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
	// bne 0x8262b7fc
	if (!ctx.cr0.eq) goto loc_8262B7FC;
loc_8262B854:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// add r8,r26,r8
	ctx.r8.u64 = r26.u64 + ctx.r8.u64;
	// bne 0x8262b7dc
	if (!ctx.cr0.eq) goto loc_8262B7DC;
	// b 0x8262b938
	goto loc_8262B938;
loc_8262B868:
	// divwu. r23,r10,r27
	r23.u64 = uint32_t(r27.u32 ? ctx.r10.u32 / r27.u32 : 0);
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8262b938
	if (ctx.cr0.eq) goto loc_8262B938;
	// lwz r28,8(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r26,r27,2,0,29
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_8262B880:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8262b924
	if (ctx.cr6.eq) goto loc_8262B924;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// lfs f10,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,48
	r31.s64 = ctx.r11.s64 + 48;
	// std r10,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// lfd f0,-96(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r30,r8,108
	r30.s64 = ctx.r8.s64 + 108;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// addi r9,r28,-4
	ctx.r9.s64 = r28.s64 + -4;
loc_8262B8B8:
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
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// ble cr6,0x8262b8fc
	if (!ctx.cr6.gt) goto loc_8262B8FC;
	// addi r5,r27,-1
	ctx.r5.s64 = r27.s64 + -1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8262B8E4:
	// lfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f12.f64)));
	// lfsu f13,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// bdnz 0x8262b8e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262B8E4;
loc_8262B8FC:
	// dcbt r0,r31
	// dcbt r0,r30
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x8262b914
	if (ctx.cr6.eq) goto loc_8262B914;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8262B914:
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
	// bne 0x8262b8b8
	if (!ctx.cr0.eq) goto loc_8262B8B8;
loc_8262B924:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// add r8,r25,r8
	ctx.r8.u64 = r25.u64 + ctx.r8.u64;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r23.u32, ctx.xer);
	// blt cr6,0x8262b880
	if (ctx.cr6.lt) goto loc_8262B880;
loc_8262B938:
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8263C0D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8263C0D8;
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
	// bl 0x826f4fa0
	ctx.lr = 0x8263C0F8;
	sub_826F4FA0(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x8263c13c
	if (!ctx.cr6.gt) goto loc_8263C13C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8263C104:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,632(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 632);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
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
	// blt cr6,0x8263c104
	if (ctx.cr6.lt) goto loc_8263C104;
loc_8263C13C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8263F890) {
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
	ctx.lr = 0x8263F898;
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
	// beq cr6,0x8263faf8
	if (ctx.cr6.eq) goto loc_8263FAF8;
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
loc_8263F8F4:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8263faec
	if (ctx.cr6.gt) goto loc_8263FAEC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8263f98c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F98C;
	// bdzf 4*cr6+eq,0x8263f9d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8263F9D4;
	// bne cr6,0x8263fa60
	if (!ctx.cr6.eq) goto loc_8263FA60;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r3,464(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 464);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r11.u32);
	// beq cr6,0x8263f940
	if (ctx.cr6.eq) goto loc_8263F940;
	// lwz r4,448(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8263f940
	if (ctx.cr6.eq) goto loc_8263F940;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8263F940;
	sub_826A1E70(ctx, base);
loc_8263F940:
	// lwz r3,448(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 448);
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,444(r31)
	REX_STORE_U32(r31.u32 + 444, r27.u32);
	// beq cr6,0x8263f964
	if (ctx.cr6.eq) goto loc_8263F964;
	// mullw r11,r26,r26
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8263F964;
	sub_826A2E60(ctx, base);
loc_8263F964:
	// lwz r11,60(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8263fae8
	if (!ctx.cr6.gt) goto loc_8263FAE8;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x8263fae8
	if (ctx.cr6.lt) goto loc_8263FAE8;
	// lwz r11,176(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263fae8
	if (ctx.cr6.eq) goto loc_8263FAE8;
	// stw r21,436(r31)
	REX_STORE_U32(r31.u32 + 436, r21.u32);
	// b 0x8263faec
	goto loc_8263FAEC;
loc_8263F98C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x8263F9A0;
	sub_82638D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263faf8
	if (ctx.cr6.lt) goto loc_8263FAF8;
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
	// b 0x8263faec
	goto loc_8263FAEC;
loc_8263F9D4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82638d80
	ctx.lr = 0x8263F9E8;
	sub_82638D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263faf8
	if (ctx.cr6.lt) goto loc_8263FAF8;
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
	// beq 0x8263fa14
	if (ctx.cr0.eq) goto loc_8263FA14;
	// stw r27,452(r31)
	REX_STORE_U32(r31.u32 + 452, r27.u32);
	// stw r22,436(r31)
	REX_STORE_U32(r31.u32 + 436, r22.u32);
	// b 0x8263faec
	goto loc_8263FAEC;
loc_8263FA14:
	// lhz r11,34(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 34);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x8263fa58
	if (!ctx.cr6.eq) goto loc_8263FA58;
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 104);
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x8263fa58
	if (!ctx.cr6.eq) goto loc_8263FA58;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8263fae8
	if (ctx.cr6.eq) goto loc_8263FAE8;
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
	// b 0x8263fae8
	goto loc_8263FAE8;
loc_8263FA58:
	// stw r27,440(r31)
	REX_STORE_U32(r31.u32 + 440, r27.u32);
	// b 0x8263fae8
	goto loc_8263FAE8;
loc_8263FA60:
	// lwz r11,452(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 452);
	// mullw r30,r26,r26
	r30.s64 = int64_t(r26.s32) * int64_t(r26.s32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x8263fae8
	if (!ctx.cr6.lt) goto loc_8263FAE8;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_8263FA74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263FA84;
	sub_82638D80(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263faf8
	if (ctx.cr6.lt) goto loc_8263FAF8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8263faa8
	if (ctx.cr6.eq) goto loc_8263FAA8;
	// or r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 | r23.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8263FAA8:
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
	// blt cr6,0x8263fa74
	if (ctx.cr6.lt) goto loc_8263FA74;
loc_8263FAE8:
	// stw r25,436(r31)
	REX_STORE_U32(r31.u32 + 436, r25.u32);
loc_8263FAEC:
	// lwz r11,436(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8263f8f4
	if (!ctx.cr6.eq) goto loc_8263F8F4;
loc_8263FAF8:
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

DEFINE_REX_FUNC(sub_8264DFE8) {
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
	ctx.lr = 0x8264DFF0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8264e0ac
	if (ctx.cr6.eq) goto loc_8264E0AC;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,3592
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3592, ctx.xer);
	// blt cr6,0x8264e0ac
	if (ctx.cr6.lt) goto loc_8264E0AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82794164
	ctx.lr = 0x8264E024;
	__imp__XamSessionRefObjByHandle(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8264e0b8
	if (!ctx.cr0.eq) goto loc_8264E0B8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,300
	ctx.r10.s64 = 300;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// li r7,32
	ctx.r7.s64 = 32;
	// std r26,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r26.u64);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// ori r4,r4,26
	ctx.r4.u64 = ctx.r4.u64 | 26;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r31,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// bl 0x827937c4
	ctx.lr = 0x8264E06C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8264e07c
	if (!ctx.cr0.lt) goto loc_8264E07C;
	// li r29,1627
	r29.s64 = 1627;
	// b 0x8264e0a0
	goto loc_8264E0A0;
loc_8264E07C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8264e09c
	if (!ctx.cr6.eq) goto loc_8264E09C;
	// bl 0x823f0058
	ctx.lr = 0x8264E088;
	sub_823F0058(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8264e0a0
	goto loc_8264E0A0;
loc_8264E09C:
	// li r29,997
	r29.s64 = 997;
loc_8264E0A0:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82793974
	ctx.lr = 0x8264E0A8;
	__imp__ObDereferenceObject(ctx, base);
	// b 0x8264e0b8
	goto loc_8264E0B8;
loc_8264E0AC:
	// li r11,3592
	ctx.r11.s64 = 3592;
	// li r29,122
	r29.s64 = 122;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8264E0B8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82650908) {
	REX_FUNC_PROLOGUE();
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// addi r9,r3,248
	ctx.r9.s64 = ctx.r3.s64 + 248;
	// b 0x82650928
	goto loc_82650928;
loc_82650914:
	// ld r8,-76(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + -76);
	// addi r10,r11,-92
	ctx.r10.s64 = ctx.r11.s64 + -92;
	// cmpld cr6,r8,r4
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8265093c
	if (ctx.cr6.eq) goto loc_8265093C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82650928:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82650948
	if (ctx.cr6.eq) goto loc_82650948;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82650914
	if (!ctx.cr0.eq) goto loc_82650914;
	// b 0x82650948
	goto loc_82650948;
loc_8265093C:
	// lwz r11,396(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265094c
	if (!ctx.cr0.eq) goto loc_8265094C;
loc_82650948:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8265094C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826533C0) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82652710
	ctx.lr = 0x826533DC;
	sub_82652710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82653430
	if (ctx.cr0.eq) goto loc_82653430;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,32(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
	// bl 0x8264e3e0
	ctx.lr = 0x826533F0;
	sub_8264E3E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82653428
	if (ctx.cr0.eq) goto loc_82653428;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x8265341c
	if (ctx.cr6.eq) goto loc_8265341C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ede70
	ctx.lr = 0x82653408;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82653438
	if (ctx.cr0.lt) goto loc_82653438;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82653438
	goto loc_82653438;
loc_8265341C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,997
	ctx.r3.u64 = ctx.r3.u64 | 997;
	// b 0x82653438
	goto loc_82653438;
loc_82653428:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82653438
	goto loc_82653438;
loc_82653430:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
loc_82653438:
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

DEFINE_REX_FUNC(sub_82657C38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82657C40;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657c80
	if (ctx.cr6.eq) goto loc_82657C80;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// addi r10,r10,-27872
	ctx.r10.s64 = ctx.r10.s64 + -27872;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82657c80
	if (ctx.cr6.eq) goto loc_82657C80;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// addi r10,r10,24696
	ctx.r10.s64 = ctx.r10.s64 + 24696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82657c80
	if (ctx.cr6.eq) goto loc_82657C80;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82657d54
	goto loc_82657D54;
loc_82657C80:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x82657C8C;
	sub_82650370(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r29,0
	r29.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82657CBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82657d44
	if (ctx.cr6.eq) goto loc_82657D44;
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82657d34
	if (!ctx.cr6.eq) goto loc_82657D34;
	// std r29,200(r31)
	REX_STORE_U64(r31.u32 + 200, r29.u64);
	// addi r30,r31,200
	r30.s64 = r31.s64 + 200;
	// std r29,208(r31)
	REX_STORE_U64(r31.u32 + 208, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,216(r31)
	REX_STORE_U64(r31.u32 + 216, r29.u64);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8264e0c8
	ctx.lr = 0x82657CF8;
	sub_8264E0C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82657d24
	if (ctx.cr0.eq) goto loc_82657D24;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82657d24
	if (ctx.cr6.eq) goto loc_82657D24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x82657D10;
	sub_823EDE70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82657d54
	if (ctx.cr0.lt) goto loc_82657D54;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82657d54
	goto loc_82657D54;
loc_82657D24:
	// lis r11,-32154
	ctx.r11.s64 = -2107244544;
	// addi r11,r11,-23160
	ctx.r11.s64 = ctx.r11.s64 + -23160;
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// b 0x82657d50
	goto loc_82657D50;
loc_82657D34:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// b 0x82657d50
	goto loc_82657D50;
loc_82657D44:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265a588
	ctx.lr = 0x82657D50;
	sub_8265A588(ctx, base);
loc_82657D50:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82657D54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8265D850) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// oris r4,r11,8340
	ctx.r4.u64 = ctx.r11.u64 | 546570240;
	// ori r4,r4,8192
	ctx.r4.u64 = ctx.r4.u64 | 8192;
	// b 0x823f0350
	sub_823F0350(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265DD20) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8265DD28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8265dd70
	if (ctx.cr6.eq) goto loc_8265DD70;
	// clrlwi r31,r11,27
	r31.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(r31.u32, 31, ctx.xer);
	// bge cr6,0x8265dd5c
	if (!ctx.cr6.lt) goto loc_8265DD5C;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r3
	r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// ble cr6,0x8265dd68
	if (!ctx.cr6.gt) goto loc_8265DD68;
loc_8265DD5C:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8265ddc4
	goto loc_8265DDC4;
loc_8265DD68:
	// rlwinm r29,r11,0,24,26
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// b 0x8265dda8
	goto loc_8265DDA8;
loc_8265DD70:
	// li r31,0
	r31.s64 = 0;
loc_8265DD74:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// ble cr6,0x8265dd94
	if (!ctx.cr6.gt) goto loc_8265DD94;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(r31.u32, 31, ctx.xer);
	// blt cr6,0x8265dd74
	if (ctx.cr6.lt) goto loc_8265DD74;
loc_8265DD94:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r11,5,24,26
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xE0;
loc_8265DDA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264fec0
	ctx.lr = 0x8265DDB0;
	sub_8264FEC0(ctx, base);
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// stb r11,394(r28)
	REX_STORE_U8(r28.u32 + 394, ctx.r11.u8);
loc_8265DDC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82661180) {
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
	// bl 0x823ef900
	ctx.lr = 0x826611A0;
	sub_823EF900(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// subf. r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826611c0
	if (ctx.cr0.eq) goto loc_826611C0;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_826611C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82670580
	ctx.lr = 0x826611CC;
	sub_82670580(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823ef900
	ctx.lr = 0x826611D4;
	sub_823EF900(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82663B58) {
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
	ctx.lr = 0x82663B60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// clrlwi. r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663b80
	if (!ctx.cr0.eq) goto loc_82663B80;
	// ori r28,r28,3
	r28.u64 = r28.u64 | 3;
loc_82663B80:
	// rlwinm. r11,r28,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82663b8c
	if (!ctx.cr0.eq) goto loc_82663B8C;
	// ori r28,r28,12
	r28.u64 = r28.u64 | 12;
loc_82663B8C:
	// addi r27,r31,132
	r27.s64 = r31.s64 + 132;
	// li r26,0
	r26.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x827938a4
	ctx.lr = 0x82663BA0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82663c5c
	if (ctx.cr6.eq) goto loc_82663C5C;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r8,r31,240
	ctx.r8.s64 = r31.s64 + 240;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82663c5c
	if (ctx.cr6.eq) goto loc_82663C5C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82663c5c
	if (ctx.cr0.eq) goto loc_82663C5C;
loc_82663BC8:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lwz r11,288(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// subf r9,r7,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm. r6,r11,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// bne 0x82663c54
	if (!ctx.cr0.eq) goto loc_82663C54;
	// rlwinm. r7,r11,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82663c54
	if (!ctx.cr0.eq) goto loc_82663C54;
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82663c54
	if (!ctx.cr0.eq) goto loc_82663C54;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82663c0c
	if (ctx.cr0.eq) goto loc_82663C0C;
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x82663c10
	goto loc_82663C10;
loc_82663C0C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82663C10:
	// beq 0x82663c54
	if (ctx.cr0.eq) goto loc_82663C54;
	// lwz r11,236(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82663c28
	if (ctx.cr6.eq) goto loc_82663C28;
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82663C28:
	// beq 0x82663c54
	if (ctx.cr0.eq) goto loc_82663C54;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82663c44
	if (!ctx.cr6.lt) goto loc_82663C44;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82663c4c
	goto loc_82663C4C;
loc_82663C44:
	// lis r26,-32646
	r26.s64 = -2139488256;
	// ori r26,r26,4097
	r26.u64 = r26.u64 | 4097;
loc_82663C4C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_82663C54:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82663bc8
	if (!ctx.cr6.eq) goto loc_82663BC8;
loc_82663C5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827938b4
	ctx.lr = 0x82663C64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8266F400) {
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
	// lwz r11,160(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 160);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,160(r4)
	REX_STORE_U32(ctx.r4.u32 + 160, ctx.r11.u32);
	// bne 0x8266f4fc
	if (!ctx.cr0.eq) goto loc_8266F4FC;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266f4fc
	if (!ctx.cr0.eq) goto loc_8266F4FC;
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266f4fc
	if (ctx.cr0.eq) goto loc_8266F4FC;
	// lwz r10,428(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266f458
	if (ctx.cr0.eq) goto loc_8266F458;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8266f458
	if (!ctx.cr6.eq) goto loc_8266F458;
	// bl 0x8266c148
	ctx.lr = 0x8266F454;
	sub_8266C148(ctx, base);
	// b 0x8266f4fc
	goto loc_8266F4FC;
loc_8266F458:
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8266f4ec
	if (ctx.cr6.eq) goto loc_8266F4EC;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266f4fc
	if (ctx.cr0.eq) goto loc_8266F4FC;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f4e4
	if (ctx.cr0.eq) goto loc_8266F4E4;
	// lwz r11,112(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// bl 0x82663088
	ctx.lr = 0x8266F484;
	sub_82663088(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r4)
	REX_STORE_U32(ctx.r4.u32 + 56, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
loc_8266F490:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r4
	ea = ctx.r4.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r4
	ea = ctx.r4.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266f490
	if (!ctx.cr0.eq) goto loc_8266F490;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8266c148
	ctx.lr = 0x8266F4B4;
	sub_8266C148(ctx, base);
loc_8266F4B4:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x8266f4b4
	if (!ctx.cr0.eq) goto loc_8266F4B4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266f4fc
	if (!ctx.cr6.eq) goto loc_8266F4FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266F4E0;
	sub_82670CD8(ctx, base);
	// b 0x8266f4fc
	goto loc_8266F4FC;
loc_8266F4E4:
	// bl 0x82663088
	ctx.lr = 0x8266F4E8;
	sub_82663088(ctx, base);
	// b 0x8266f4fc
	goto loc_8266F4FC;
loc_8266F4EC:
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// bl 0x82663030
	ctx.lr = 0x8266F4FC;
	sub_82663030(ctx, base);
loc_8266F4FC:
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

DEFINE_REX_FUNC(sub_82675A88) {
	REX_FUNC_PROLOGUE();
	// b 0x8267f008
	sub_8267F008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675B10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82675b28
	if (ctx.cr6.eq) goto loc_82675B28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82675B28:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675F58) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10684
	ctx.r11.s64 = ctx.r11.s64 + -10684;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82675fb8
	if (ctx.cr6.eq) goto loc_82675FB8;
loc_82675F84:
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
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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
	// bne 0x82675f84
	if (!ctx.cr0.eq) goto loc_82675F84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82675fb0
	if (!ctx.cr6.eq) goto loc_82675FB0;
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x82675FB0;
	sub_8265D850(ctx, base);
loc_82675FB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82675FB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826718f8
	ctx.lr = 0x82675FC0;
	sub_826718F8(ctx, base);
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

DEFINE_REX_FUNC(sub_826788A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826788A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,254
	ctx.r5.s64 = 254;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce50
	ctx.lr = 0x826788C0;
	sub_8264CE50(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r3.u32);
	// beq cr6,0x8267892c
	if (ctx.cr6.eq) goto loc_8267892C;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lhz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 276);
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 272);
	// li r28,0
	r28.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r28,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r28.u64);
	// std r28,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r28.u64);
	// sth r10,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// sth r8,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r8.u16);
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// bl 0x8264ceb0
	ctx.lr = 0x82678900;
	sub_8264CEB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8267892c
	if (ctx.cr6.eq) goto loc_8267892C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x8264ce78
	ctx.lr = 0x82678924;
	sub_8264CE78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267893c
	if (ctx.cr0.eq) goto loc_8267893C;
loc_8267892C:
	// bl 0x8264d050
	ctx.lr = 0x82678930;
	sub_8264D050(ctx, base);
	// bl 0x826610a8
	ctx.lr = 0x82678934;
	sub_826610A8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82678964
	goto loc_82678964;
loc_8267893C:
	// addi r30,r31,244
	r30.s64 = r31.s64 + 244;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x82678948;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82678658
	ctx.lr = 0x82678950;
	sub_82678658(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267895C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x82678980
	if (!ctx.cr6.lt) goto loc_82678980;
loc_82678964:
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82678984
	if (ctx.cr6.eq) goto loc_82678984;
	// bl 0x8264ce68
	ctx.lr = 0x82678974;
	sub_8264CE68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// b 0x82678984
	goto loc_82678984;
loc_82678980:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_82678984:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267C710) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10436
	ctx.r11.s64 = ctx.r11.s64 + -10436;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82670628
	ctx.lr = 0x8267C744;
	sub_82670628(ctx, base);
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

DEFINE_REX_FUNC(sub_8267E780) {
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
	ctx.lr = 0x8267E788;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// addi r19,r3,40
	r19.s64 = ctx.r3.s64 + 40;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267E7B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8267e7c0
	if (!ctx.cr6.eq) goto loc_8267E7C0;
	// lwz r24,532(r26)
	r24.u64 = REX_LOAD_U32(r26.u32 + 532);
	// b 0x8267e810
	goto loc_8267E810;
loc_8267E7C0:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267e7fc
	if (ctx.cr0.eq) goto loc_8267E7FC;
	// lwz r11,532(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 532);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8267e7f4
	if (!ctx.cr6.gt) goto loc_8267E7F4;
loc_8267E7D4:
	// lis r21,-32646
	r21.s64 = -2139488256;
	// ori r21,r21,4111
	r21.u64 = r21.u64 | 4111;
loc_8267E7DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8267E7E0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8267eafc
	if (ctx.cr6.eq) goto loc_8267EAFC;
	// bl 0x82130e88
	ctx.lr = 0x8267E7EC;
	sub_82130E88(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8267eaf4
	goto loc_8267EAF4;
loc_8267E7F4:
	// subf r24,r25,r11
	r24.u64 = ctx.r11.u64 - r25.u64;
	// b 0x8267e810
	goto loc_8267E810;
loc_8267E7FC:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r24,r25
	r24.u64 = r25.u64;
	// bne 0x8267e810
	if (!ctx.cr0.eq) goto loc_8267E810;
	// lwz r11,568(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 568);
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
loc_8267E810:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826865a0
	ctx.lr = 0x8267E820;
	sub_826865A0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x8267e7dc
	if (!ctx.cr0.eq) goto loc_8267E7DC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8267E830:
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
	// bne 0x8267e830
	if (!ctx.cr0.eq) goto loc_8267E830;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r26,572
	ctx.r9.s64 = r26.s64 + 572;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// rlwinm. r27,r31,0,30,30
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r9,576(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 576);
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,576(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 576);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,576(r26)
	REX_STORE_U32(r26.u32 + 576, ctx.r11.u32);
	// bne 0x8267e884
	if (!ctx.cr0.eq) goto loc_8267E884;
	// lwz r11,584(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 584);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,584(r26)
	REX_STORE_U32(r26.u32 + 584, ctx.r11.u32);
loc_8267E884:
	// rlwinm. r23,r31,0,29,29
	r23.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne 0x8267e920
	if (!ctx.cr0.eq) goto loc_8267E920;
	// mr r30,r20
	r30.u64 = r20.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8267e920
	if (ctx.cr6.eq) goto loc_8267E920;
	// addi r28,r26,536
	r28.s64 = r26.s64 + 536;
	// addi r29,r26,476
	r29.s64 = r26.s64 + 476;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8267E8A4:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267E8BC;
	sub_826825C0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8267e8d8
	if (!ctx.cr0.eq) goto loc_8267E8D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82682570
	ctx.lr = 0x8267E8D0;
	sub_82682570(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8267e7d4
	if (ctx.cr0.eq) goto loc_8267E7D4;
loc_8267E8D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8267e90c
	if (ctx.cr6.eq) goto loc_8267E90C;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8267E8F0:
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8267e9f0
	if (ctx.cr6.eq) goto loc_8267E9F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x8267e8f0
	if (ctx.cr6.lt) goto loc_8267E8F0;
loc_8267E90C:
	// bl 0x82686430
	ctx.lr = 0x8267E910;
	sub_82686430(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8267e8a4
	if (ctx.cr6.lt) goto loc_8267E8A4;
loc_8267E920:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x8267e938
	if (!ctx.cr6.eq) goto loc_8267E938;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8267e938
	if (ctx.cr6.eq) goto loc_8267E938;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8267ead4
	if (!ctx.cr6.eq) goto loc_8267EAD4;
loc_8267E938:
	// lwz r11,516(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 516);
	// addi r30,r26,516
	r30.s64 = r26.s64 + 516;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8267ea10
	if (ctx.cr6.eq) goto loc_8267EA10;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ea10
	if (ctx.cr0.eq) goto loc_8267EA10;
loc_8267E954:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8267ea08
	if (ctx.cr6.eq) goto loc_8267EA08;
	// lwz r7,204(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// rlwinm. r11,r7,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267ea08
	if (!ctx.cr0.eq) goto loc_8267EA08;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8267ea04
	if (ctx.cr6.eq) goto loc_8267EA04;
	// lwz r8,156(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 156);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8267E99C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8267e9ac
	if (!ctx.cr6.eq) goto loc_8267E9AC;
	// lwz r10,152(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
loc_8267E9AC:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267e9c8
	if (ctx.cr6.eq) goto loc_8267E9C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8267e99c
	if (ctx.cr6.lt) goto loc_8267E99C;
loc_8267E9C8:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8267ea08
	if (ctx.cr6.lt) goto loc_8267EA08;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8267e9fc
	if (ctx.cr6.eq) goto loc_8267E9FC;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// blt cr6,0x8267ea04
	if (ctx.cr6.lt) goto loc_8267EA04;
loc_8267E9E4:
	// lis r21,-32646
	r21.s64 = -2139488256;
	// ori r21,r21,4111
	r21.u64 = r21.u64 | 4111;
	// b 0x8267e7e0
	goto loc_8267E7E0;
loc_8267E9F0:
	// lis r21,-32646
	r21.s64 = -2139488256;
	// ori r21,r21,4105
	r21.u64 = r21.u64 | 4105;
	// b 0x8267e7e0
	goto loc_8267E7E0;
loc_8267E9FC:
	// rlwinm. r11,r7,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267ea08
	if (ctx.cr0.eq) goto loc_8267EA08;
loc_8267EA04:
	// bl 0x82686430
	ctx.lr = 0x8267EA08;
	sub_82686430(ctx, base);
loc_8267EA08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8267e954
	if (!ctx.cr6.eq) goto loc_8267E954;
loc_8267EA10:
	// lwz r11,524(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 524);
	// addi r30,r26,524
	r30.s64 = r26.s64 + 524;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x8267ead4
	if (ctx.cr6.eq) goto loc_8267EAD4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8267ead4
	if (ctx.cr0.eq) goto loc_8267EAD4;
loc_8267EA2C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,-20
	ctx.r4.s64 = r31.s64 + -20;
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// subf r9,r11,r30
	ctx.r9.u64 = r30.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8267eacc
	if (ctx.cr6.eq) goto loc_8267EACC;
	// lwz r7,204(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// rlwinm. r11,r7,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267eacc
	if (!ctx.cr0.eq) goto loc_8267EACC;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8267eac8
	if (ctx.cr6.eq) goto loc_8267EAC8;
	// lwz r8,156(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 156);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8267EA74:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bne cr6,0x8267ea84
	if (!ctx.cr6.eq) goto loc_8267EA84;
	// lwz r10,152(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
loc_8267EA84:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8267eaa0
	if (ctx.cr6.eq) goto loc_8267EAA0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8267ea74
	if (ctx.cr6.lt) goto loc_8267EA74;
loc_8267EAA0:
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, ctx.xer);
	// blt cr6,0x8267eacc
	if (ctx.cr6.lt) goto loc_8267EACC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8267eac0
	if (ctx.cr6.eq) goto loc_8267EAC0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// bge cr6,0x8267e9e4
	if (!ctx.cr6.lt) goto loc_8267E9E4;
	// b 0x8267eac8
	goto loc_8267EAC8;
loc_8267EAC0:
	// rlwinm. r11,r7,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267eacc
	if (ctx.cr0.eq) goto loc_8267EACC;
loc_8267EAC8:
	// bl 0x82686430
	ctx.lr = 0x8267EACC;
	sub_82686430(ctx, base);
loc_8267EACC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8267ea2c
	if (!ctx.cr6.eq) goto loc_8267EA2C;
loc_8267EAD4:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8267eaf0
	if (!ctx.cr6.eq) goto loc_8267EAF0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8267c588
	ctx.lr = 0x8267EAEC;
	sub_8267C588(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8267EAF0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_8267EAF4:
	// bl 0x82676d18
	ctx.lr = 0x8267EAF8;
	sub_82676D18(ctx, base);
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_8267EAFC:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267EB04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_826989C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r5,256
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 256, ctx.xer);
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bne cr6,0x82698a28
	if (!ctx.cr6.eq) goto loc_82698A28;
	// addi r6,r11,7680
	ctx.r6.s64 = ctx.r11.s64 + 7680;
	// b 0x82698a30
	goto loc_82698A30;
loc_82698A28:
	// addi r11,r11,7680
	ctx.r11.s64 = ctx.r11.s64 + 7680;
	// addi r6,r11,1016
	ctx.r6.s64 = ctx.r11.s64 + 1016;
loc_82698A30:
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f0,3804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3804);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r7,r3
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r4
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f13,r7,r3
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, temp.u32);
	// stfsx f0,r7,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// ble cr6,0x82698adc
	if (!ctx.cr6.gt) goto loc_82698ADC;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// addi r11,r31,-4
	ctx.r11.s64 = r31.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82698A78:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfsu f0,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f10,f9,f12
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f8,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f10.f64)));
	// fmsubs f12,f9,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, -ctx.f12.f64)));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfsu f0,-4(r9)
	ea = -4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fneg f0,f10
	ctx.f0.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfsu f0,-4(r8)
	ea = -4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82698a78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82698A78;
loc_82698ADC:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269EE60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8269EE68;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8269ee94
	if (!ctx.cr6.eq) goto loc_8269EE94;
	// bl 0x826a33d0
	ctx.lr = 0x8269EE80;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269EE8C;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8269eef4
	goto loc_8269EEF4;
loc_8269EE94:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269eeec
	if (ctx.cr0.eq) goto loc_8269EEEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ea68
	ctx.lr = 0x8269EEB0;
	sub_8269EA68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aa3d8
	ctx.lr = 0x8269EEBC;
	sub_826AA3D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3320
	ctx.lr = 0x8269EEC4;
	sub_826A3320(ctx, base);
	// bl 0x826aa6a0
	ctx.lr = 0x8269EEC8;
	sub_826AA6A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8269eed8
	if (!ctx.cr0.lt) goto loc_8269EED8;
	// li r30,-1
	r30.s64 = -1;
	// b 0x8269eeec
	goto loc_8269EEEC;
loc_8269EED8:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8269eeec
	if (ctx.cr6.eq) goto loc_8269EEEC;
	// bl 0x8269d770
	ctx.lr = 0x8269EEE8;
	sub_8269D770(ctx, base);
	// stw r29,28(r31)
	REX_STORE_U32(r31.u32 + 28, r29.u32);
loc_8269EEEC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
loc_8269EEF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__restgprlr_22) {
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
	// ld r22,-88(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_31) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_23) {
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
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A3AA8) {
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
	// beq cr6,0x826a3b54
	if (ctx.cr6.eq) goto loc_826A3B54;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3ad4
	if (ctx.cr6.eq) goto loc_826A3AD4;
	// bl 0x8269d770
	ctx.lr = 0x826A3AD4;
	sub_8269D770(ctx, base);
loc_826A3AD4:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3ae4
	if (ctx.cr6.eq) goto loc_826A3AE4;
	// bl 0x8269d770
	ctx.lr = 0x826A3AE4;
	sub_8269D770(ctx, base);
loc_826A3AE4:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3af4
	if (ctx.cr6.eq) goto loc_826A3AF4;
	// bl 0x8269d770
	ctx.lr = 0x826A3AF4;
	sub_8269D770(ctx, base);
loc_826A3AF4:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3b04
	if (ctx.cr6.eq) goto loc_826A3B04;
	// bl 0x8269d770
	ctx.lr = 0x826A3B04;
	sub_8269D770(ctx, base);
loc_826A3B04:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3b14
	if (ctx.cr6.eq) goto loc_826A3B14;
	// bl 0x8269d770
	ctx.lr = 0x826A3B14;
	sub_8269D770(ctx, base);
loc_826A3B14:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3b24
	if (ctx.cr6.eq) goto loc_826A3B24;
	// bl 0x8269d770
	ctx.lr = 0x826A3B24;
	sub_8269D770(ctx, base);
loc_826A3B24:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826a3b34
	if (ctx.cr6.eq) goto loc_826A3B34;
	// bl 0x8269d770
	ctx.lr = 0x826A3B34;
	sub_8269D770(ctx, base);
loc_826A3B34:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,21872
	ctx.r11.s64 = ctx.r11.s64 + 21872;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826a3b4c
	if (ctx.cr6.eq) goto loc_826A3B4C;
	// bl 0x8269d770
	ctx.lr = 0x826A3B4C;
	sub_8269D770(ctx, base);
loc_826A3B4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d770
	ctx.lr = 0x826A3B54;
	sub_8269D770(ctx, base);
loc_826A3B54:
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

DEFINE_REX_FUNC(__restvmx_66) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v66{};
	PPCVRegister v67{};
	PPCVRegister v68{};
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
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826B9D18) {
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
	ctx.lr = 0x826B9D20;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f31,32352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32352);
	f31.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826b9d60
	if (ctx.cr6.eq) goto loc_826B9D60;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9D60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B9D60:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b9d94
	if (ctx.cr6.eq) goto loc_826B9D94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9d94
	if (ctx.cr6.lt) goto loc_826B9D94;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a5470
	ctx.lr = 0x826B9D78;
	sub_822A5470(ctx, base);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 60);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9D94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B9D94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826b9dbc
	if (ctx.cr6.eq) goto loc_826B9DBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9dbc
	if (ctx.cr6.lt) goto loc_826B9DBC;
	// lwz r3,64(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B9DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826B9DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826b9e6c
	if (ctx.cr6.eq) goto loc_826B9E6C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9e6c
	if (ctx.cr6.lt) goto loc_826B9E6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82147138
	ctx.lr = 0x826B9DD4;
	sub_82147138(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b63c0
	ctx.lr = 0x826B9DE0;
	sub_826B63C0(ctx, base);
	// cmplwi cr6,r3,24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 24, ctx.xer);
	// bne cr6,0x826b9df0
	if (!ctx.cr6.eq) goto loc_826B9DF0;
	// li r29,32
	r29.s64 = 32;
	// b 0x826b9dfc
	goto loc_826B9DFC;
loc_826B9DF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b63c0
	ctx.lr = 0x826B9DF8;
	sub_826B63C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826B9DFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r31,r29,29,3,31
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x826b63b8
	ctx.lr = 0x826B9E08;
	sub_826B63B8(ctx, base);
	// mullw r9,r3,r31
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mullw r7,r3,r29
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// fdivs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 / f31.f64));
	// fctidz f10,f11
	ctx.f10.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// andc r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r10.u64;
	// mulli r10,r11,8000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(8000));
	// divwu r9,r10,r7
	ctx.r9.u64 = uint32_t(ctx.r7.u32 ? ctx.r10.u32 / ctx.r7.u32 : 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// stw r9,332(r30)
	REX_STORE_U32(r30.u32 + 332, ctx.r9.u32);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x826c1d50
	ctx.lr = 0x826B9E6C;
	sub_826C1D50(ctx, base);
loc_826B9E6C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826b9edc
	if (ctx.cr6.eq) goto loc_826B9EDC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9ee8
	if (ctx.cr6.lt) goto loc_826B9EE8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82147138
	ctx.lr = 0x826B9E84;
	sub_82147138(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b9ef4
	if (!ctx.cr6.eq) goto loc_826B9EF4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b63b8
	ctx.lr = 0x826B9E98;
	sub_826B63B8(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826b9ef4
	if (!ctx.cr6.eq) goto loc_826B9EF4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82147138
	ctx.lr = 0x826B9EAC;
	sub_82147138(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826b63b8
	ctx.lr = 0x826B9EB8;
	sub_826B63B8(ctx, base);
	// mullw r11,r31,r3
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r3.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// rlwinm r11,r11,31,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1FFFFFFF;
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x826c1d50
	ctx.lr = 0x826B9EDC;
	sub_826C1D50(ctx, base);
loc_826B9EDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b9ee8
	if (ctx.cr6.lt) goto loc_826B9EE8;
	// stfs f31,336(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 336, temp.u32);
loc_826B9EE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_826B9EF4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826C9CC0) {
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
	ctx.lr = 0x826C9CC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x826c9cec
	if (!ctx.cr6.eq) goto loc_826C9CEC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826C9CEC:
	// addi r27,r4,-24
	r27.s64 = ctx.r4.s64 + -24;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// bge cr6,0x826c9d08
	if (!ctx.cr6.lt) goto loc_826C9D08;
loc_826C9CFC:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
loc_826C9D08:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9D1C;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,4
	r28.s64 = 4;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r9,r5,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c9dbc
	if (ctx.cr6.eq) goto loc_826C9DBC;
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9D98;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// addi r3,r31,118
	ctx.r3.s64 = r31.s64 + 118;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a1e70
	ctx.lr = 0x826C9DBC;
	sub_826A1E70(ctx, base);
loc_826C9DBC:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9DE4;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826c9e70
	if (ctx.cr0.eq) goto loc_826C9E70;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9E4C;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// add r29,r29,r3
	r29.u64 = r29.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a1e70
	ctx.lr = 0x826C9E70;
	sub_826A1E70(ctx, base);
loc_826C9E70:
	// addi r28,r29,4
	r28.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9E98;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826c9f24
	if (ctx.cr0.eq) goto loc_826C9F24;
	// add r11,r28,r30
	ctx.r11.u64 = r28.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9F00;
	sub_826B9678(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// add r28,r28,r3
	r28.u64 = r28.u64 + ctx.r3.u64;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// addi r3,r31,172
	ctx.r3.s64 = r31.s64 + 172;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a1e70
	ctx.lr = 0x826C9F24;
	sub_826A1E70(ctx, base);
loc_826C9F24:
	// addi r29,r28,4
	r29.s64 = r28.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r28,32
	ctx.r11.u64 = r28.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9F4C;
	sub_826B9678(ctx, base);
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x826c9cfc
	if (!ctx.cr6.eq) goto loc_826C9CFC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lbz r5,3(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r8,r5,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add. r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826c9fc8
	if (ctx.cr0.eq) goto loc_826C9FC8;
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x826c9cfc
	if (ctx.cr6.gt) goto loc_826C9CFC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826c9fc8
	if (ctx.cr6.eq) goto loc_826C9FC8;
loc_826C9FA0:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9678
	ctx.lr = 0x826C9FBC;
	sub_826B9678(ctx, base);
	// subf. r30,r3,r30
	r30.u64 = r30.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r29,r3
	r29.u64 = r29.u64 + ctx.r3.u64;
	// bne 0x826c9fa0
	if (!ctx.cr0.eq) goto loc_826C9FA0;
loc_826C9FC8:
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E0A20) {
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
	ctx.lr = 0x826E0A28;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826e0a9c
	if (ctx.cr6.eq) goto loc_826E0A9C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e0a9c
	if (ctx.cr6.eq) goto loc_826E0A9C;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826e0a94
	if (ctx.cr6.eq) goto loc_826E0A94;
	// li r29,0
	r29.s64 = 0;
loc_826E0A54:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// li r31,0
	r31.s64 = 0;
loc_826E0A60:
	// mulli r11,r31,56
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bl 0x826f4280
	ctx.lr = 0x826E0A70;
	sub_826F4280(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// blt cr6,0x826e0a60
	if (ctx.cr6.lt) goto loc_826E0A60;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e0a54
	if (ctx.cr6.lt) goto loc_826E0A54;
loc_826E0A94:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82634e78
	ctx.lr = 0x826E0A9C;
	sub_82634E78(ctx, base);
loc_826E0A9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826E43C8) {
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
	ctx.lr = 0x826E43D0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x826e4520
	if (!ctx.cr6.gt) goto loc_826E4520;
	// addic. r15,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	r15.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// ble 0x826e4520
	if (!ctx.cr0.gt) goto loc_826E4520;
	// mullw r27,r15,r6
	r27.s64 = int64_t(r15.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// add r20,r11,r4
	r20.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// rlwinm r22,r5,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	r28.s64 = 0;
	// rlwinm r14,r6,2,0,29
	r14.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r19,r10,17400
	r19.s64 = ctx.r10.s64 + 17400;
	// addi r18,r11,17144
	r18.s64 = ctx.r11.s64 + 17144;
loc_826E442C:
	// lbzx r11,r23,r16
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + r16.u32);
	// addi r10,r18,128
	ctx.r10.s64 = r18.s64 + 128;
	// addi r9,r19,128
	ctx.r9.s64 = r19.s64 + 128;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r29,r7,r10
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r31,r7,r9
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x826a1e70
	ctx.lr = 0x826E4458;
	sub_826A1E70(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826E4468;
	sub_826A1E70(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x826e450c
	if (!ctx.cr6.gt) goto loc_826E450C;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// extsw r5,r31
	ctx.r5.s64 = r31.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// extsw r9,r29
	ctx.r9.s64 = r29.s32;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r8,r25,r21
	ctx.r8.u64 = r21.u64 - r25.u64;
loc_826E4490:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r31,r27,r10
	r31.u64 = r27.u64 + ctx.r10.u64;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r7,r7,r9
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// mulld r6,r6,r5
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r5.u64);
	// sradi r7,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s64 >> 30;
	// sradi r6,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s64 >> 30;
	// extsw r7,r7
	ctx.r7.s64 = ctx.r7.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r7,r3,r30
	REX_STORE_U32(ctx.r3.u32 + r30.u32, ctx.r7.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mulld r3,r7,r9
	ctx.r3.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// mulld r7,r6,r4
	ctx.r7.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r4.u64);
	// sradi r6,r3,30
	ctx.xer.ca = (ctx.r3.s64 < 0) & ((ctx.r3.u64 & 0x3FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s64 >> 30;
	// sradi r3,r7,30
	ctx.xer.ca = (ctx.r7.s64 < 0) & ((ctx.r7.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r7.s64 >> 30;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r7,r31,r30
	REX_STORE_U32(r31.u32 + r30.u32, ctx.r7.u32);
	// bdnz 0x826e4490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826E4490;
loc_826E450C:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// add r28,r28,r17
	r28.u64 = r28.u64 + r17.u64;
	// add r24,r14,r24
	r24.u64 = r14.u64 + r24.u64;
	// cmpw cr6,r23,r15
	ctx.cr6.compare<int32_t>(r23.s32, r15.s32, ctx.xer);
	// blt cr6,0x826e442c
	if (ctx.cr6.lt) goto loc_826E442C;
loc_826E4520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826F2E00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826F2E08;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r28,28(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,4228(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4228);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r5,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r3,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r8,10
	ctx.r8.s64 = 10;
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r29,r31,104
	r29.s64 = r31.s64 + 104;
	// stw r7,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r7,r31,100
	ctx.r7.s64 = r31.s64 + 100;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827030c8
	ctx.lr = 0x826F2EA4;
	sub_827030C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f2f04
	if (ctx.cr6.lt) goto loc_826F2F04;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// lwz r4,4228(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4228);
	// addi r7,r31,36
	ctx.r7.s64 = r31.s64 + 36;
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82703328
	ctx.lr = 0x826F2ECC;
	sub_82703328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f2f04
	if (ctx.cr6.lt) goto loc_826F2F04;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4228);
	// lis r5,9
	ctx.r5.s64 = 589824;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826c65a8
	ctx.lr = 0x826F2EE8;
	sub_826C65A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f2f04
	if (ctx.cr6.lt) goto loc_826F2F04;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f2f04
	if (ctx.cr6.eq) goto loc_826F2F04;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_826F2F04:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826F8D20) {
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
	ctx.lr = 0x826F8D28;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r7,r10,-21760
	ctx.r7.s64 = ctx.r10.s64 + -21760;
	// addi r4,r8,-21776
	ctx.r4.s64 = ctx.r8.s64 + -21776;
	// addi r28,r3,34
	r28.s64 = ctx.r3.s64 + 34;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x826f9014
	if (ctx.cr6.eq) goto loc_826F9014;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x826f8e44
	if (ctx.cr6.eq) goto loc_826F8E44;
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826f91f4
	if (!ctx.cr6.gt) goto loc_826F91F4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// lfs f13,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_826F8D84:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f8e2c
	if (!ctx.cr6.gt) goto loc_826F8E2C;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-2
	ctx.r7.s64 = ctx.r11.s64 + -2;
loc_826F8DA0:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r8,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826f8dec
	if (!ctx.cr6.lt) goto loc_826F8DEC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f8e10
	if (!ctx.cr6.lt) goto loc_826F8E10;
	// b 0x826f8e0c
	goto loc_826F8E0C;
loc_826F8DEC:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f8e10
	if (!ctx.cr6.gt) goto loc_826F8E10;
loc_826F8E0C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826F8E10:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// sthu r11,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r7.u32 = ea;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f8da0
	if (ctx.cr6.lt) goto loc_826F8DA0;
loc_826F8E2C:
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x826f8d84
	if (ctx.cr6.lt) goto loc_826F8D84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf4
	return;
loc_826F8E44:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// subf r7,r31,r11
	ctx.r7.u64 = ctx.r11.u64 - r31.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// extsh r29,r7
	r29.s64 = ctx.r7.s16;
	// ble cr6,0x826f8f34
	if (!ctx.cr6.gt) goto loc_826F8F34;
	// addi r30,r3,320
	r30.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_826F8E70:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// rlwinm r27,r6,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,60(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// addi r25,r1,-96
	r25.s64 = ctx.r1.s64 + -96;
	// lwz r8,1836(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 1836);
	// addi r23,r1,-96
	r23.s64 = ctx.r1.s64 + -96;
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r26,r1,-112
	r26.s64 = ctx.r1.s64 + -112;
	// addi r24,r1,-112
	r24.s64 = ctx.r1.s64 + -112;
	// lfsx f0,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f13,r27,r10
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lfs f9,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f9,-88(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// lfs f7,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,-92(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f7,-84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v60,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f12,r5,r8
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// lfsx f11,r27,r8
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stfs f13,-104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// stfs f12,-108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lvx128 v61,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v58,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v58.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v59,v63,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vminfp128 v56,v62,v58
	simde_mm_store_ps(ctx.v56.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vminfp128 v57,v62,v59
	simde_mm_store_ps(ctx.v57.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vcfpsxws128 v61,v56,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v60,v57,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v57.f32)));
	// stvx128 v61,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v55,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v60.s32)));
	// stvx128 v60,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v55,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x826f8e70
	if (ctx.cr6.lt) goto loc_826F8E70;
loc_826F8F34:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826f91f4
	if (!ctx.cr6.lt) goto loc_826F91F4;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,1
	r30.s64 = 1;
	// lfs f13,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_826F8F64:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f8ffc
	if (!ctx.cr6.gt) goto loc_826F8FFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826F8F74:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826f8fc0
	if (!ctx.cr6.lt) goto loc_826F8FC0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f8fe4
	if (!ctx.cr6.lt) goto loc_826F8FE4;
	// b 0x826f8fe0
	goto loc_826F8FE0;
loc_826F8FC0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f8fe4
	if (!ctx.cr6.gt) goto loc_826F8FE4;
loc_826F8FE0:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826F8FE4:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f8f74
	if (ctx.cr6.lt) goto loc_826F8F74;
loc_826F8FFC:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f8f64
	if (ctx.cr6.lt) goto loc_826F8F64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf4
	return;
loc_826F9014:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// ble cr6,0x826f911c
	if (!ctx.cr6.gt) goto loc_826F911C;
	// addi r6,r3,320
	ctx.r6.s64 = ctx.r3.s64 + 320;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
loc_826F9040:
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,6
	r30.s64 = ctx.r11.s64 + 6;
	// rlwinm r27,r8,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,5
	r31.s64 = ctx.r11.s64 + 5;
	// addi r29,r11,7
	r29.s64 = ctx.r11.s64 + 7;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r1,-112
	r26.s64 = ctx.r1.s64 + -112;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r27,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r11,2
	r27.s64 = ctx.r11.s64 + 2;
	// lfsx f12,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r27,r1,-112
	r27.s64 = ctx.r1.s64 + -112;
	// stfs f0,-112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// addi r31,r11,3
	r31.s64 = ctx.r11.s64 + 3;
	// stfs f13,-108(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// addi r29,r1,-96
	r29.s64 = ctx.r1.s64 + -96;
	// stfs f12,-104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,-100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// addi r25,r1,-96
	r25.s64 = ctx.r1.s64 + -96;
	// lvx128 v52,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f10,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lfsx f8,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r10
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stfs f10,-96(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stfs f9,-92(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// stfs f8,-88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f7,-84(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// lvx128 v54,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v53,v63,v54
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v53.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// vmaxfp128 v50,v63,v52
	simde_mm_store_ps(ctx.v50.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vminfp128 v51,v62,v53
	simde_mm_store_ps(ctx.v51.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vminfp128 v49,v62,v50
	simde_mm_store_ps(ctx.v49.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v61,v51,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v60,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkswss128 v48,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v48.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.s32), simde_mm_load_si128((simde__m128i*)ctx.v61.s32)));
	// stvx128 v60,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v48,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvrx128 v48,r9,r4
	ea = ctx.r9.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v48.u8[i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// blt cr6,0x826f9040
	if (ctx.cr6.lt) goto loc_826F9040;
loc_826F911C:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r6,r8
	ctx.r6.s64 = ctx.r8.s16;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x826f91f4
	if (!ctx.cr6.lt) goto loc_826F91F4;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,1
	r30.s64 = 1;
	// lfs f13,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_826F914C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f91e4
	if (!ctx.cr6.gt) goto loc_826F91E4;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826F915C:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r10,r9,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826f91a8
	if (!ctx.cr6.lt) goto loc_826F91A8;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f91cc
	if (!ctx.cr6.lt) goto loc_826F91CC;
	// b 0x826f91c8
	goto loc_826F91C8;
loc_826F91A8:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r10,r30,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f11.u64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,-108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f91cc
	if (!ctx.cr6.gt) goto loc_826F91CC;
loc_826F91C8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826F91CC:
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f915c
	if (ctx.cr6.lt) goto loc_826F915C;
loc_826F91E4:
	// addi r10,r6,1
	ctx.r10.s64 = ctx.r6.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x826f914c
	if (ctx.cr6.lt) goto loc_826F914C;
loc_826F91F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82735080) {
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
	ctx.lr = 0x82735088;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3756(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3756);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x827350a8
	if (ctx.cr6.eq) goto loc_827350A8;
	// lwz r26,3780(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// b 0x827350b4
	goto loc_827350B4;
loc_827350A8:
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_827350B4:
	// lwz r9,3760(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3760);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x827350c4
	if (!ctx.cr6.eq) goto loc_827350C4;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3748);
loc_827350C4:
	// lwz r11,3764(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3764);
	// lwz r10,224(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bne cr6,0x827350dc
	if (!ctx.cr6.eq) goto loc_827350DC;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3752);
loc_827350DC:
	// lwz r9,3784(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3784);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827350f4
	if (ctx.cr6.eq) goto loc_827350F4;
	// lwz r24,3796(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 3796);
	// b 0x82735100
	goto loc_82735100;
loc_827350F4:
	// lwz r9,3744(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// add r24,r9,r11
	r24.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82735100:
	// lwz r9,3788(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3788);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82735110
	if (!ctx.cr6.eq) goto loc_82735110;
	// lwz r9,3748(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3748);
loc_82735110:
	// lwz r11,3792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3792);
	// add r25,r10,r9
	r25.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82735124
	if (!ctx.cr6.eq) goto loc_82735124;
	// lwz r11,3752(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3752);
loc_82735124:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82734980
	ctx.lr = 0x82735134;
	sub_82734980(ctx, base);
	// lwz r5,360(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 360);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r7,r30,2928
	ctx.r7.s64 = r30.s64 + 2928;
	// addi r6,r30,2940
	ctx.r6.s64 = r30.s64 + 2940;
	// stw r5,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// lwz r8,364(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 364);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lwz r8,368(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 368);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 372);
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mulli r9,r8,504
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(504));
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 252);
	// lwz r4,248(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 248);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r10,255
	ctx.r3.s64 = ctx.r10.s64 + 255;
	// stb r3,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r3.u8);
	// lwz r9,348(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 348);
	// stb r9,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r9.u8);
	// lwz r5,344(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 344);
	// stb r5,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r5.u8);
	// lwz r3,2400(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 2400);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// lwz r10,21192(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21192);
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// lwz r9,21212(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 21212);
	// stw r9,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r9.u32);
	// lwz r8,280(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 280);
	// stb r8,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r8.u8);
	// lwz r4,392(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 392);
	// stb r4,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r4.u8);
	// lwz r10,328(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 328);
	// stb r10,29(r31)
	REX_STORE_U8(r31.u32 + 29, ctx.r10.u8);
	// lwz r10,3984(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3984);
	// addi r8,r10,-3
	ctx.r8.s64 = ctx.r10.s64 + -3;
	// addi r5,r10,-2
	ctx.r5.s64 = ctx.r10.s64 + -2;
	// cntlzw r4,r8
	ctx.r4.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r3,r5
	ctx.r3.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r10,r4,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// rlwinm r9,r3,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r8,30(r31)
	REX_STORE_U8(r31.u32 + 30, ctx.r8.u8);
	// lwz r5,2164(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2164);
	// stw r5,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// lwz r4,2540(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 2540);
	// stw r4,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r4.u32);
	// sth r11,46(r31)
	REX_STORE_U16(r31.u32 + 46, ctx.r11.u16);
	// sth r11,44(r31)
	REX_STORE_U16(r31.u32 + 44, ctx.r11.u16);
	// lwz r3,416(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 416);
	// sth r3,62(r31)
	REX_STORE_U16(r31.u32 + 62, ctx.r3.u16);
	// lwz r9,420(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 420);
	// sth r9,64(r31)
	REX_STORE_U16(r31.u32 + 64, ctx.r9.u16);
	// lwz r5,424(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 424);
	// sth r5,66(r31)
	REX_STORE_U16(r31.u32 + 66, ctx.r5.u16);
	// lwz r3,428(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 428);
	// sth r3,68(r31)
	REX_STORE_U16(r31.u32 + 68, ctx.r3.u16);
	// lwz r9,408(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 408);
	// sth r9,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r9.u16);
	// lwz r5,412(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 412);
	// sth r5,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r5.u16);
	// lwz r3,14804(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 14804);
	// stb r3,32(r31)
	REX_STORE_U8(r31.u32 + 32, ctx.r3.u8);
	// lwz r9,1792(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1792);
	// stb r9,31(r31)
	REX_STORE_U8(r31.u32 + 31, ctx.r9.u8);
	// lwz r5,336(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 336);
	// stb r5,34(r31)
	REX_STORE_U8(r31.u32 + 34, ctx.r5.u8);
	// lwz r3,6576(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6576);
	// stw r3,388(r31)
	REX_STORE_U32(r31.u32 + 388, ctx.r3.u32);
	// lwz r10,14784(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14784);
	// stw r10,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r10.u32);
	// stw r7,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r7.u32);
	// stw r6,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r6.u32);
	// lwz r9,2904(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 2904);
	// stw r9,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r9.u32);
	// lwz r8,2908(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2908);
	// stw r8,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r8.u32);
	// lwz r7,2912(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 2912);
	// stw r7,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r7.u32);
	// lwz r6,2916(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 2916);
	// stw r6,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r6.u32);
	// lwz r5,2920(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2920);
	// stw r5,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r5.u32);
	// lwz r4,2924(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 2924);
	// stw r4,424(r31)
	REX_STORE_U32(r31.u32 + 424, ctx.r4.u32);
	// lwz r3,1940(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1940);
	// stw r3,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// lwz r10,2992(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2992);
	// stb r10,33(r31)
	REX_STORE_U8(r31.u32 + 33, ctx.r10.u8);
	// lwz r8,1832(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1832);
	// stw r8,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r8.u32);
	// lwz r7,456(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 456);
	// stb r11,49(r31)
	REX_STORE_U8(r31.u32 + 49, ctx.r11.u8);
	// stb r7,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r7.u8);
	// lwz r5,3928(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3928);
	// stb r5,35(r31)
	REX_STORE_U8(r31.u32 + 35, ctx.r5.u8);
	// lwz r3,136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mulli r10,r3,-6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(-6));
	// sth r10,368(r31)
	REX_STORE_U16(r31.u32 + 368, ctx.r10.u16);
	// lwz r8,136(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,370(r31)
	REX_STORE_U16(r31.u32 + 370, ctx.r7.u16);
	// lwz r5,136(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r4,372(r31)
	REX_STORE_U16(r31.u32 + 372, ctx.r4.u16);
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 136);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r9,374(r31)
	REX_STORE_U16(r31.u32 + 374, ctx.r9.u16);
	// lwz r7,136(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 136);
	// neg r6,r7
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// sth r6,364(r31)
	REX_STORE_U16(r31.u32 + 364, ctx.r6.u16);
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// sth r4,366(r31)
	REX_STORE_U16(r31.u32 + 366, ctx.r4.u16);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,464(r31)
	REX_STORE_U32(r31.u32 + 464, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,468(r31)
	REX_STORE_U32(r31.u32 + 468, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,472(r31)
	REX_STORE_U32(r31.u32 + 472, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// stw r7,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r7.u32);
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + r28.u64;
	// stw r3,484(r31)
	REX_STORE_U32(r31.u32 + 484, ctx.r3.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// stw r10,512(r31)
	REX_STORE_U32(r31.u32 + 512, ctx.r10.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwz r8,512(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 512);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r7.u32);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,520(r31)
	REX_STORE_U32(r31.u32 + 520, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,524(r31)
	REX_STORE_U32(r31.u32 + 524, ctx.r3.u32);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// add r7,r10,r25
	ctx.r7.u64 = ctx.r10.u64 + r25.u64;
	// stw r7,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r7.u32);
	// lwz r4,20912(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r6,208(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// mullw r10,r5,r4
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// stw r3,532(r31)
	REX_STORE_U32(r31.u32 + 532, ctx.r3.u32);
	// lwz r10,21928(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21928);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x827354b4
	if (!ctx.cr6.eq) goto loc_827354B4;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r7,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r7.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r6,204(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r5,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r5.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r3,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r3.u32);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r27
	ctx.r6.u64 = ctx.r10.u64 + r27.u64;
	// stw r6,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r6.u32);
	// lwz r3,20912(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// xori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 ^ 1;
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// b 0x827355f4
	goto loc_827355F4;
loc_827354B4:
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 284);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8273554c
	if (!ctx.cr6.eq) goto loc_8273554C;
	// lwz r10,20952(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8273554c
	if (ctx.cr6.eq) goto loc_8273554C;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r9.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r7,204(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r6.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r4,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r4.u32);
	// lwz r3,208(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 ^ 1;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + r27.u64;
	// stw r7,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r7.u32);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// mullw r10,r4,r3
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r10,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r10.u32);
	// b 0x827355f4
	goto loc_827355F4;
loc_8273554C:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r7,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 1;
	// lwz r10,3744(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r8,220(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 220);
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// stw r10,488(r31)
	REX_STORE_U32(r31.u32 + 488, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r6,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r6.u32);
	// lwz r8,488(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r4.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r10,3748(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3748);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r5,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r5.u32);
	// lwz r10,3752(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3752);
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r4,208(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r9,20912(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r7,r9,1
	ctx.r7.u64 = ctx.r9.u64 ^ 1;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r6.u32);
loc_827355F4:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// stw r10,536(r31)
	REX_STORE_U32(r31.u32 + 536, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r4,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r4.u32);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 536);
	// stw r10,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r10.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r8.u32);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r3,r6,1
	ctx.r3.u64 = ctx.r6.u64 ^ 1;
	// mullw r10,r4,r3
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r3.s32);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r10,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r10.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// lwz r8,20912(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// xori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 ^ 1;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// stw r4,556(r31)
	REX_STORE_U32(r31.u32 + 556, ctx.r4.u32);
	// sth r7,1176(r31)
	REX_STORE_U16(r31.u32 + 1176, ctx.r7.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r3,r10,32
	ctx.r3.s64 = ctx.r10.s64 + 32;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1178(r31)
	REX_STORE_U16(r31.u32 + 1178, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1180(r31)
	REX_STORE_U16(r31.u32 + 1180, ctx.r5.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1182(r31)
	REX_STORE_U16(r31.u32 + 1182, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// rlwinm r6,r7,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1184(r31)
	REX_STORE_U16(r31.u32 + 1184, ctx.r5.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// sth r9,1186(r31)
	REX_STORE_U16(r31.u32 + 1186, ctx.r9.u16);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// srawi r5,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 6;
	// sth r5,1188(r31)
	REX_STORE_U16(r31.u32 + 1188, ctx.r5.u16);
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mulli r10,r3,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(28));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// li r10,16
	ctx.r10.s64 = 16;
	// sth r8,1190(r31)
	REX_STORE_U16(r31.u32 + 1190, ctx.r8.u16);
	// addi r8,r31,1190
	ctx.r8.s64 = r31.s64 + 1190;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82735734:
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// sthu r6,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82735734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735734;
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// lwz r6,20912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lis r5,64
	ctx.r5.s64 = 4194304;
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// lwz r8,3744(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3744);
	// lwz r9,220(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lis r3,8
	ctx.r3.s64 = 524288;
	// mullw r10,r4,r6
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// lbz r6,35(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 35);
	// vspltish v13,8
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x8)));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// ori r8,r7,32
	ctx.r8.u64 = ctx.r7.u64 | 32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r7,r5,64
	ctx.r7.u64 = ctx.r5.u64 | 64;
	// stw r10,560(r31)
	REX_STORE_U32(r31.u32 + 560, ctx.r10.u32);
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// ori r5,r3,8
	ctx.r5.u64 = ctx.r3.u64 | 8;
	// subf r27,r6,r8
	r27.u64 = ctx.r8.u64 - ctx.r6.u64;
	// stw r9,564(r31)
	REX_STORE_U32(r31.u32 + 564, ctx.r9.u32);
	// addis r4,r6,31
	ctx.r4.s64 = ctx.r6.s64 + 2031616;
	// addis r29,r6,15
	r29.s64 = ctx.r6.s64 + 983040;
	// addis r28,r6,7
	r28.s64 = ctx.r6.s64 + 458752;
	// addis r3,r6,3
	ctx.r3.s64 = ctx.r6.s64 + 196608;
	// subf r7,r6,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r4,31
	ctx.r4.s64 = ctx.r4.s64 + 31;
	// addi r29,r29,15
	r29.s64 = r29.s64 + 15;
	// addi r28,r28,7
	r28.s64 = r28.s64 + 7;
	// addi r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 3;
	// lwz r5,204(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 204);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,568(r31)
	REX_STORE_U32(r31.u32 + 568, ctx.r10.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r5,572(r31)
	REX_STORE_U32(r31.u32 + 572, ctx.r5.u32);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// lwz r10,20912(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// mullw r10,r5,r10
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r8,3748(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3748);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,576(r31)
	REX_STORE_U32(r31.u32 + 576, ctx.r10.u32);
	// lwz r8,3752(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3752);
	// lwz r5,20912(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 224);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r9,580(r31)
	REX_STORE_U32(r31.u32 + 580, ctx.r9.u32);
	// lwz r8,3004(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 3004);
	// stw r8,588(r31)
	REX_STORE_U32(r31.u32 + 588, ctx.r8.u32);
	// stw r8,584(r31)
	REX_STORE_U32(r31.u32 + 584, ctx.r8.u32);
	// lwz r5,3012(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3012);
	// stw r5,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r5.u32);
	// stw r5,596(r31)
	REX_STORE_U32(r31.u32 + 596, ctx.r5.u32);
	// lwz r10,3016(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3016);
	// stw r10,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r10.u32);
	// lwz r9,3024(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3024);
	// stw r9,604(r31)
	REX_STORE_U32(r31.u32 + 604, ctx.r9.u32);
	// lwz r8,2580(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 2580);
	// stw r8,608(r31)
	REX_STORE_U32(r31.u32 + 608, ctx.r8.u32);
	// lwz r5,2500(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 2500);
	// stw r5,612(r31)
	REX_STORE_U32(r31.u32 + 612, ctx.r5.u32);
	// lwz r10,1852(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1852);
	// stw r10,620(r31)
	REX_STORE_U32(r31.u32 + 620, ctx.r10.u32);
	// lwz r9,1856(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1856);
	// stw r9,624(r31)
	REX_STORE_U32(r31.u32 + 624, ctx.r9.u32);
	// lwz r8,1860(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1860);
	// stw r8,632(r31)
	REX_STORE_U32(r31.u32 + 632, ctx.r8.u32);
	// stw r4,1136(r31)
	REX_STORE_U32(r31.u32 + 1136, ctx.r4.u32);
	// stw r29,1140(r31)
	REX_STORE_U32(r31.u32 + 1140, r29.u32);
	// stw r3,1148(r31)
	REX_STORE_U32(r31.u32 + 1148, ctx.r3.u32);
	// addi r10,r31,1120
	ctx.r10.s64 = r31.s64 + 1120;
	// stw r7,1156(r31)
	REX_STORE_U32(r31.u32 + 1156, ctx.r7.u32);
	// li r7,1104
	ctx.r7.s64 = 1104;
	// stw r28,1144(r31)
	REX_STORE_U32(r31.u32 + 1144, r28.u32);
	// addi r5,r30,2140
	ctx.r5.s64 = r30.s64 + 2140;
	// stw r27,1152(r31)
	REX_STORE_U32(r31.u32 + 1152, r27.u32);
	// addi r4,r30,24448
	ctx.r4.s64 = r30.s64 + 24448;
	// stw r6,1160(r31)
	REX_STORE_U32(r31.u32 + 1160, ctx.r6.u32);
	// addi r6,r30,24192
	ctx.r6.s64 = r30.s64 + 24192;
	// lbz r3,35(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 35);
	// sth r3,1134(r31)
	REX_STORE_U16(r31.u32 + 1134, ctx.r3.u16);
	// lvx128 v12,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsplth v0,v12,7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_set1_epi16(short(0x100))));
	// vsubshs v11,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r7
	ea = (r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,2116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2116);
	// stw r10,1224(r31)
	REX_STORE_U32(r31.u32 + 1224, ctx.r10.u32);
	// lwz r9,2120(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 2120);
	// stw r9,1228(r31)
	REX_STORE_U32(r31.u32 + 1228, ctx.r9.u32);
	// lwz r8,21936(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 21936);
	// stw r8,1236(r31)
	REX_STORE_U32(r31.u32 + 1236, ctx.r8.u32);
	// lwz r7,21940(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 21940);
	// stw r7,1240(r31)
	REX_STORE_U32(r31.u32 + 1240, ctx.r7.u32);
	// lwz r3,248(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 248);
	// stb r3,1244(r31)
	REX_STORE_U8(r31.u32 + 1244, ctx.r3.u8);
	// lwz r9,4004(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4004);
	// stb r9,1245(r31)
	REX_STORE_U8(r31.u32 + 1245, ctx.r9.u8);
	// lwz r7,4012(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4012);
	// stb r7,1246(r31)
	REX_STORE_U8(r31.u32 + 1246, ctx.r7.u8);
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 252);
	// stb r10,1249(r31)
	REX_STORE_U8(r31.u32 + 1249, ctx.r10.u8);
	// lwz r8,472(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 472);
	// stb r8,1250(r31)
	REX_STORE_U8(r31.u32 + 1250, ctx.r8.u8);
	// lwz r3,22192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22192);
	// stw r3,1304(r31)
	REX_STORE_U32(r31.u32 + 1304, ctx.r3.u32);
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 284);
	// stw r10,1308(r31)
	REX_STORE_U32(r31.u32 + 1308, ctx.r10.u32);
	// lwz r9,1972(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1972);
	// stb r9,1247(r31)
	REX_STORE_U8(r31.u32 + 1247, ctx.r9.u8);
	// lwz r7,1976(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1976);
	// stb r7,1248(r31)
	REX_STORE_U8(r31.u32 + 1248, ctx.r7.u8);
	// lwz r10,1968(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1968);
	// stb r10,1251(r31)
	REX_STORE_U8(r31.u32 + 1251, ctx.r10.u8);
	// stw r6,1260(r31)
	REX_STORE_U32(r31.u32 + 1260, ctx.r6.u32);
	// stw r5,1232(r31)
	REX_STORE_U32(r31.u32 + 1232, ctx.r5.u32);
	// lwz r8,20932(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20932);
	// stb r8,1254(r31)
	REX_STORE_U8(r31.u32 + 1254, ctx.r8.u8);
	// lwz r6,21868(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 21868);
	// stb r6,1255(r31)
	REX_STORE_U8(r31.u32 + 1255, ctx.r6.u8);
	// stw r4,1264(r31)
	REX_STORE_U32(r31.u32 + 1264, ctx.r4.u32);
	// lwz r4,20904(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20904);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82735998
	if (ctx.cr6.eq) goto loc_82735998;
	// lwz r10,20908(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20908);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82735998
	if (!ctx.cr6.eq) goto loc_82735998;
	// lwz r10,1832(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1832);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,20976(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20976);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,20980(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20980);
	// stw r8,1300(r31)
	REX_STORE_U32(r31.u32 + 1300, ctx.r8.u32);
	// b 0x82735a18
	goto loc_82735A18;
loc_82735998:
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x827359e8
	if (!ctx.cr6.eq) goto loc_827359E8;
	// lwz r10,1812(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1812(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1820(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r8,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1820(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r6,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1816(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r5,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r5.u32);
	// lwz r4,1820(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r4,1292(r31)
	REX_STORE_U32(r31.u32 + 1292, ctx.r4.u32);
	// lwz r3,1816(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r3,1296(r31)
	REX_STORE_U32(r31.u32 + 1296, ctx.r3.u32);
	// b 0x82735a18
	goto loc_82735A18;
loc_827359E8:
	// lwz r10,1808(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1808);
	// stw r10,1268(r31)
	REX_STORE_U32(r31.u32 + 1268, ctx.r10.u32);
	// lwz r9,1820(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 1820);
	// stw r9,1272(r31)
	REX_STORE_U32(r31.u32 + 1272, ctx.r9.u32);
	// lwz r8,1804(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1804);
	// stw r8,1276(r31)
	REX_STORE_U32(r31.u32 + 1276, ctx.r8.u32);
	// lwz r7,1816(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1816);
	// stw r7,1280(r31)
	REX_STORE_U32(r31.u32 + 1280, ctx.r7.u32);
	// lwz r6,1800(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 1800);
	// stw r6,1284(r31)
	REX_STORE_U32(r31.u32 + 1284, ctx.r6.u32);
	// lwz r5,1812(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1812);
	// stw r5,1288(r31)
	REX_STORE_U32(r31.u32 + 1288, ctx.r5.u32);
loc_82735A18:
	// sth r11,1256(r31)
	REX_STORE_U16(r31.u32 + 1256, ctx.r11.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r30,24512
	ctx.r6.s64 = r30.s64 + 24512;
	// addi r3,r30,24704
	ctx.r3.s64 = r30.s64 + 24704;
	// lwz r8,1796(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1796);
	// stb r8,1252(r31)
	REX_STORE_U8(r31.u32 + 1252, ctx.r8.u8);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// addi r8,r8,-25684
	ctx.r8.s64 = ctx.r8.s64 + -25684;
	// lwz r5,1936(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 1936);
	// stb r5,1253(r31)
	REX_STORE_U8(r31.u32 + 1253, ctx.r5.u8);
	// lwz r7,22508(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 22508);
	// stw r7,1312(r31)
	REX_STORE_U32(r31.u32 + 1312, ctx.r7.u32);
	// lwz r5,3940(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3940);
	// stw r5,1316(r31)
	REX_STORE_U32(r31.u32 + 1316, ctx.r5.u32);
	// lwz r4,3944(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3944);
	// stw r4,1320(r31)
	REX_STORE_U32(r31.u32 + 1320, ctx.r4.u32);
	// lwz r10,20916(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20916);
	// stw r10,1380(r31)
	REX_STORE_U32(r31.u32 + 1380, ctx.r10.u32);
	// lwz r7,15252(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 15252);
	// stw r7,1384(r31)
	REX_STORE_U32(r31.u32 + 1384, ctx.r7.u32);
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// addi r5,r10,-7
	ctx.r5.s64 = ctx.r10.s64 + -7;
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r7,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r7,r9
	ctx.r5.u64 = ctx.r7.u64 & ctx.r9.u64;
	// stb r5,1324(r31)
	REX_STORE_U8(r31.u32 + 1324, ctx.r5.u8);
	// lwz r4,3004(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3004);
	// stw r4,1328(r31)
	REX_STORE_U32(r31.u32 + 1328, ctx.r4.u32);
	// lwz r10,3008(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3008);
	// stw r10,1332(r31)
	REX_STORE_U32(r31.u32 + 1332, ctx.r10.u32);
	// lwz r9,3012(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 3012);
	// stw r9,1336(r31)
	REX_STORE_U32(r31.u32 + 1336, ctx.r9.u32);
	// lwz r7,3016(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 3016);
	// stw r7,1340(r31)
	REX_STORE_U32(r31.u32 + 1340, ctx.r7.u32);
	// lwz r5,3020(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3020);
	// stw r5,1344(r31)
	REX_STORE_U32(r31.u32 + 1344, ctx.r5.u32);
	// lwz r4,3024(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3024);
	// stw r4,1348(r31)
	REX_STORE_U32(r31.u32 + 1348, ctx.r4.u32);
	// lwz r10,3028(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3028);
	// stw r10,1352(r31)
	REX_STORE_U32(r31.u32 + 1352, ctx.r10.u32);
	// stw r6,1356(r31)
	REX_STORE_U32(r31.u32 + 1356, ctx.r6.u32);
	// stw r3,1360(r31)
	REX_STORE_U32(r31.u32 + 1360, ctx.r3.u32);
	// lwz r9,20992(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20992);
	// stw r9,1388(r31)
	REX_STORE_U32(r31.u32 + 1388, ctx.r9.u32);
	// lwz r7,3984(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 3984);
	// stw r7,1392(r31)
	REX_STORE_U32(r31.u32 + 1392, ctx.r7.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,380(r31)
	REX_STORE_U32(r31.u32 + 380, ctx.r6.u32);
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U16(r31.u32 + 52);
	// rlwinm r4,r5,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// divw r9,r4,r3
	ctx.r9.u64 = uint32_t((ctx.r3.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r4.s32 / ctx.r3.s32 : 0);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// stw r9,384(r31)
	REX_STORE_U32(r31.u32 + 384, ctx.r9.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r5,3416(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3416);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// andc r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// twlgei r7,-1
	if (ctx.r7.s32 == -1 || ctx.r7.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r6,14808(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 14808);
	// mullw r4,r6,r5
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// stw r4,1788(r31)
	REX_STORE_U32(r31.u32 + 1788, ctx.r4.u32);
	// lwz r3,15308(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 15308);
	// stw r3,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r3.u32);
	// lwz r10,15312(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15312);
	// stw r10,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r10.u32);
	// lwz r9,15316(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15316);
	// stw r9,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r9.u32);
	// lwz r8,15320(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15320);
	// stw r8,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r8.u32);
	// lwz r7,21124(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 21124);
	// stw r7,1404(r31)
	REX_STORE_U32(r31.u32 + 1404, ctx.r7.u32);
	// lwz r6,21924(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 21924);
	// stw r6,1396(r31)
	REX_STORE_U32(r31.u32 + 1396, ctx.r6.u32);
	// lwz r5,21920(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 21920);
	// stw r5,1400(r31)
	REX_STORE_U32(r31.u32 + 1400, ctx.r5.u32);
	// lwz r4,3988(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3988);
	// stw r4,1752(r31)
	REX_STORE_U32(r31.u32 + 1752, ctx.r4.u32);
	// lwz r3,20952(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20952);
	// stw r3,1756(r31)
	REX_STORE_U32(r31.u32 + 1756, ctx.r3.u32);
	// lwz r10,20956(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20956);
	// stw r10,1760(r31)
	REX_STORE_U32(r31.u32 + 1760, ctx.r10.u32);
	// lwz r9,20960(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20960);
	// stw r9,1764(r31)
	REX_STORE_U32(r31.u32 + 1764, ctx.r9.u32);
	// lwz r8,20964(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20964);
	// stw r8,1768(r31)
	REX_STORE_U32(r31.u32 + 1768, ctx.r8.u32);
	// lwz r7,20968(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20968);
	// stw r7,1772(r31)
	REX_STORE_U32(r31.u32 + 1772, ctx.r7.u32);
	// lwz r6,20972(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20972);
	// stw r6,1776(r31)
	REX_STORE_U32(r31.u32 + 1776, ctx.r6.u32);
	// lwz r5,20912(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20912);
	// stw r5,1368(r31)
	REX_STORE_U32(r31.u32 + 1368, ctx.r5.u32);
	// lwz r4,21928(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21928);
	// stw r4,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r4.u32);
	// lwz r3,22364(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 22364);
	// stw r3,1780(r31)
	REX_STORE_U32(r31.u32 + 1780, ctx.r3.u32);
	// lwz r10,22364(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22364);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82735bdc
	if (!ctx.cr6.eq) goto loc_82735BDC;
	// lwz r10,22040(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 22040);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r9,40248
	ctx.r7.u64 = ctx.r9.u64 | 40248;
	// ori r6,r8,40252
	ctx.r6.u64 = ctx.r8.u64 | 40252;
	// stw r10,1456(r31)
	REX_STORE_U32(r31.u32 + 1456, ctx.r10.u32);
	// lwz r5,22396(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 22396);
	// stw r5,1460(r31)
	REX_STORE_U32(r31.u32 + 1460, ctx.r5.u32);
	// lwz r4,22068(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 22068);
	// stw r4,1464(r31)
	REX_STORE_U32(r31.u32 + 1464, ctx.r4.u32);
	// lwzx r3,r30,r7
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r7.u32);
	// stw r3,1484(r31)
	REX_STORE_U32(r31.u32 + 1484, ctx.r3.u32);
	// lwzx r10,r30,r6
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r6.u32);
	// stw r10,1480(r31)
	REX_STORE_U32(r31.u32 + 1480, ctx.r10.u32);
loc_82735BDC:
	// lwz r10,15504(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15504);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x82735c04
	if (!ctx.cr6.eq) goto loc_82735C04;
	// lwz r10,2992(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 2992);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82735c04
	if (!ctx.cr6.eq) goto loc_82735C04;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r10,29988(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 29988);
	// b 0x82735c0c
	goto loc_82735C0C;
loc_82735C04:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lwz r10,29984(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 29984);
loc_82735C0C:
	// stw r10,1364(r31)
	REX_STORE_U32(r31.u32 + 1364, ctx.r10.u32);
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1356(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1356);
	// addi r5,r7,31104
	ctx.r5.s64 = ctx.r7.s64 + 31104;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,204(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 204);
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_82735C34:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735c74
	if (ctx.cr6.eq) goto loc_82735C74;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// stw r8,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r8.u32);
loc_82735C74:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735cb4
	if (ctx.cr6.eq) goto loc_82735CB4;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r3.u8);
	// stw r8,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r8.u32);
loc_82735CB4:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735cf4
	if (ctx.cr6.eq) goto loc_82735CF4;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r3.u8);
	// stw r8,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r8.u32);
loc_82735CF4:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// stb r3,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r3.u8);
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r4,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r4.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82735d34
	if (ctx.cr6.eq) goto loc_82735D34;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r4,r8,0,24,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r3,r8,24,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r8,r4,r9
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r3,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r3.u8);
	// stw r8,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r8.u32);
loc_82735D34:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82735c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735C34;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r10,1360(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1360);
	// lwz r9,208(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 208);
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82735D58:
	// lwz r8,-4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r4.u8);
	// stw r3,3(r10)
	REX_STORE_U32(ctx.r10.u32 + 3, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82735d98
	if (ctx.cr6.eq) goto loc_82735D98;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stw r3,7(r10)
	REX_STORE_U32(ctx.r10.u32 + 7, ctx.r3.u32);
loc_82735D98:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stb r6,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,11(r10)
	REX_STORE_U8(ctx.r10.u32 + 11, ctx.r4.u8);
	// stw r3,15(r10)
	REX_STORE_U32(ctx.r10.u32 + 15, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82735dd8
	if (ctx.cr6.eq) goto loc_82735DD8;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,12(r10)
	REX_STORE_U8(ctx.r10.u32 + 12, ctx.r4.u8);
	// stw r3,19(r10)
	REX_STORE_U32(ctx.r10.u32 + 19, ctx.r3.u32);
loc_82735DD8:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stb r6,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,23(r10)
	REX_STORE_U8(ctx.r10.u32 + 23, ctx.r4.u8);
	// stw r3,27(r10)
	REX_STORE_U32(ctx.r10.u32 + 27, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82735e18
	if (ctx.cr6.eq) goto loc_82735E18;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,24(r10)
	REX_STORE_U8(ctx.r10.u32 + 24, ctx.r4.u8);
	// stw r3,31(r10)
	REX_STORE_U32(ctx.r10.u32 + 31, ctx.r3.u32);
loc_82735E18:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r6.u8);
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,35(r10)
	REX_STORE_U8(ctx.r10.u32 + 35, ctx.r4.u8);
	// stw r3,39(r10)
	REX_STORE_U32(ctx.r10.u32 + 39, ctx.r3.u32);
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82735e58
	if (ctx.cr6.eq) goto loc_82735E58;
	// rlwinm r8,r8,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r8,0,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFE;
	// rlwinm r4,r8,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// mullw r3,r5,r9
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stb r4,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r4.u8);
	// stw r3,43(r10)
	REX_STORE_U32(ctx.r10.u32 + 43, ctx.r3.u32);
loc_82735E58:
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// bdnz 0x82735d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735D58;
	// lwz r10,1792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1792);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x827360f8
	if (ctx.cr6.eq) goto loc_827360F8;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x827360f8
	if (!ctx.cr6.eq) goto loc_827360F8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,620(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 620);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25508
	ctx.r8.s64 = ctx.r8.s64 + -25508;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1796(r31)
	REX_STORE_U32(r31.u32 + 1796, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82735EB4:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,4,26,27
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0x30;
	// rlwinm r27,r27,31,1,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,25,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + r28.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,4,26,27
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x30;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82735eb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735EB4;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r9,624(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 624);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25476
	ctx.r8.s64 = ctx.r8.s64 + -25476;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82735F58:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,24,28
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xF8;
	// rlwinm r27,r27,30,2,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,26,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + r28.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,24,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xF8;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82735f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735F58;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r9,632(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 632);
	// addis r8,r30,2
	ctx.r8.s64 = r30.s64 + 131072;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r8,r8,-25444
	ctx.r8.s64 = ctx.r8.s64 + -25444;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// stw r8,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r8.u32);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// addi r29,r8,3
	r29.s64 = ctx.r8.s64 + 3;
	// subf r28,r9,r8
	r28.u64 = ctx.r8.u64 - ctx.r9.u64;
loc_82735FFC:
	// lbzx r27,r10,r9
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r26,r27,3,27,28
	r26.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0x18;
	// rlwinm r27,r27,31,1,31
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// or r27,r26,r27
	r27.u64 = r26.u64 | r27.u64;
	// rlwinm r27,r27,0,25,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x7E;
	// stbx r27,r8,r28
	REX_STORE_U8(ctx.r8.u32 + r28.u32, r27.u8);
	// lbzx r8,r7,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r6,r10
	REX_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r5,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r4,r10
	REX_STORE_U8(ctx.r4.u32 + ctx.r10.u32, ctx.r8.u8);
	// lbzx r8,r3,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r27,r8,3,27,28
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x18;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r8,r27,r8
	ctx.r8.u64 = r27.u64 | ctx.r8.u64;
	// rlwinm r8,r8,0,25,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7E;
	// stbx r8,r29,r10
	REX_STORE_U8(r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82735ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82735FFC;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r10,444(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 444);
	// addis r9,r30,2
	ctx.r9.s64 = r30.s64 + 131072;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,-25572
	ctx.r9.s64 = ctx.r9.s64 + -25572;
	// addi r4,r10,3
	ctx.r4.s64 = ctx.r10.s64 + 3;
	// stw r9,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r9.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// addi r5,r9,2
	ctx.r5.s64 = ctx.r9.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// subf r31,r10,r9
	r31.u64 = ctx.r9.u64 - ctx.r10.u64;
loc_8273609C:
	// lbzx r30,r11,r10
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r30,30,2,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r30,r30,4,25,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x70;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stbx r30,r9,r31
	REX_STORE_U8(ctx.r9.u32 + r31.u32, r30.u8);
	// lbzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r6,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r9.u8);
	// lbzx r9,r4,r11
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r30,r9,30,2,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFE;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// or r9,r30,r9
	ctx.r9.u64 = r30.u64 | ctx.r9.u64;
	// stbx r9,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8273609c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8273609C;
loc_827360F8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_827B1700) {
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
	ctx.lr = 0x827B1708;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// vspltish v12,4
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x4)));
	// li r5,1120
	ctx.r5.s64 = 1120;
	// vspltish v13,15
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0xF)));
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// vspltish v11,5
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x5)));
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v1,7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x7)));
	// subf r9,r4,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r4.u64;
	// vrlh v9,v12,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i sh = simde_mm_and_si128(
			simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_set1_epi16(0xF));
		simde__m128i rsh = simde_mm_sub_epi16(simde_mm_set1_epi16(16), sh);
		simde__m128i result = simde_mm_or_si128(
			rex::ppc::simde_mm_sllv_epi16(a, sh),
			rex::ppc::simde_mm_srlv_epi16(a, rsh));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, result);
	}
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lvx128 v10,r6,r5
	ea = (ctx.r6.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// vaddshs v4,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r3,1
	ctx.r3.s64 = 1;
	// vspltish v3,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_set1_epi16(short(0x1)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// vsubshs v2,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// slw r5,r3,r4
	ctx.r5.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bne cr6,0x827b18b8
	if (!ctx.cr6.eq) goto loc_827B18B8;
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
	// vperm128 v9,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
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
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b1a9c
	if (!ctx.cr6.gt) goto loc_827B1A9C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B17D0:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v31,v8,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v8,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// vor v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v7,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v5,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v28,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vperm128 v6,v56,v57,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vslh v26,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v21,v28,v5
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vmrglb v23,v0,v6
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v20,v27,v10
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v17,v25,v26
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v24,v9
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vslh v22,v8,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v23,v23
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)v23.u8));
	// vslh v29,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v28,v20,v21
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v21.u16)));
	// vslh v15,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v18,v19
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v26,v16,v17
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v29,v22,v29
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vslh v25,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v31,v15
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vadduhm v22,v28,v29
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vsubshs v21,v30,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vadduhm v20,v26,v27
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vsubshs v19,v0,v25
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v0,v24
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v17,v22,v4
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v16,v20,v4
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v15,v23,v19
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v31,v17,v15
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v30,v16,v14
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsrah v29,v31,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v28,v30,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v29,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x827b17d0
	if (ctx.cr6.lt) goto loc_827B17D0;
	// b 0x827b1a9c
	goto loc_827B1A9C;
loc_827B18B8:
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
	// vor128 v8,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v30,v50,v51
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v9,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v5,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v29,v46,v47
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v31,v44,v45
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v29
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v29,v0,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b1a9c
	if (!ctx.cr6.gt) goto loc_827B1A9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_827B1944:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v28,v7,v7
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vor v27,v6,v6
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vor v6,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vor v9,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v42,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v2,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v26,v5,v5
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// lvx128 v41,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v43,v63,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v29,v10,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v20,v63,v41,v5
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v21,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v19,v0,v30
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v24,v10
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vmrghb v30,v0,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v25,v29
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vadduhm v24,v22,v23
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
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
	// vadduhm v23,v21,v9
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vor v5,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vslh v14,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v6,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v8,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// vmrghb v31,v0,v20
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v29,v19,v19
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// vslh v22,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v19,v15,v16
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v18,v25,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v17,v23,v24
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vslh v16,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v8,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v23,v28,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v22,v19,v20
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v20,v17,v18
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v21,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v15,v16
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vslh v24,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v16,v14,v8
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vslh v19,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v5,v3
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v15,v0,v25
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v21,v27,v21
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v14,v0,v24
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v28,v22,v4
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v27,v20,v4
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vadduhm v22,v18,v19
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vslh v24,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v20,v16,v17
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vslh v25,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v19,v23,v15
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v18,v21,v14
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vsubshs v16,v26,v24
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v17,v0,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vadduhm v15,v20,v22
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v14,v28,v19
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v19.u16)));
	// vadduhm v28,v27,v18
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v27,v16,v17
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v26,v15,v4
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)ctx.v4.u16)));
	// vsrah v25,v14,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v23,v26,v27
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// stvx128 v25,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v22,v23,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// blt cr6,0x827b1944
	if (ctx.cr6.lt) goto loc_827B1944;
loc_827B1A9C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827afe10
	ctx.lr = 0x827B1AAC;
	sub_827AFE10(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

