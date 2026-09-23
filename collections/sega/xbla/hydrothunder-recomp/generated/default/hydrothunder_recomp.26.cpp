#include "hydrothunder_funcs.26.h"

DEFINE_REX_FUNC(sub_82121610) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82121618;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82121634;
	sub_82120AC0(ctx, base);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8212163C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8212163c
	if (!ctx.cr6.eq) goto loc_8212163C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821216f8
	ctx.lr = 0x82121664;
	sub_821216F8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121dd0
	ctx.lr = 0x82121678;
	sub_82121DD0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121928
	ctx.lr = 0x82121684;
	sub_82121928(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212A018) {
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
	// li r30,0
	r30.s64 = 0;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8212A040;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8212a090
	if (ctx.cr0.eq) goto loc_8212A090;
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
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
loc_8212A090:
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
	ctx.lr = 0x8212A0A8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8212E0C8) {
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
	ctx.lr = 0x8212E0D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r11,r11,-22492
	ctx.r11.s64 = ctx.r11.s64 + -22492;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,148(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6044(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6044);
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212E134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E13C;
	sub_8269D1B8(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E144;
	sub_8269D1B8(ctx, base);
	// addi r30,r31,24
	r30.s64 = r31.s64 + 24;
	// li r29,1
	r29.s64 = 1;
	// addi r28,r30,68
	r28.s64 = r30.s64 + 68;
loc_8212E150:
	// lwzu r3,-12(r28)
	ea = -12 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// bl 0x8269d1b8
	ctx.lr = 0x8212E158;
	sub_8269D1B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8212e150
	if (!ctx.cr0.lt) goto loc_8212E150;
	// addi r28,r30,44
	r28.s64 = r30.s64 + 44;
	// li r29,1
	r29.s64 = 1;
loc_8212E168:
	// lwzu r3,-12(r28)
	ea = -12 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// bl 0x8269d1b8
	ctx.lr = 0x8212E170;
	sub_8269D1B8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8212e168
	if (!ctx.cr0.lt) goto loc_8212E168;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E180;
	sub_8269D1B8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8269d1b8
	ctx.lr = 0x8212E188;
	sub_8269D1B8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-22472
	ctx.r11.s64 = ctx.r11.s64 + -22472;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8212e1a4
	if (ctx.cr0.eq) goto loc_8212E1A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212E1A4;
	sub_8269CE98(ctx, base);
loc_8212E1A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82135390) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82135398;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821353c0
	if (!ctx.cr6.eq) goto loc_821353C0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-19836
	ctx.r4.s64 = ctx.r11.s64 + -19836;
	// bl 0x82120600
	ctx.lr = 0x821353BC;
	sub_82120600(ctx, base);
	// b 0x821354a8
	goto loc_821354A8;
loc_821353C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821353D0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-19812
	ctx.r4.s64 = ctx.r11.s64 + -19812;
	// bl 0x82121928
	ctx.lr = 0x821353E0;
	sub_82121928(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x823ff258
	ctx.lr = 0x821353E8;
	sub_823FF258(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,-19768
	ctx.r4.s64 = ctx.r11.s64 + -19768;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120600
	ctx.lr = 0x821353FC;
	sub_82120600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121928
	ctx.lr = 0x82135404;
	sub_82121928(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r28,r11,-19772
	r28.s64 = ctx.r11.s64 + -19772;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82121928
	ctx.lr = 0x82135414;
	sub_82121928(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121dd0
	ctx.lr = 0x8213542C;
	sub_82121DD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8213543C;
	sub_82120AC0(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x823ff248
	ctx.lr = 0x82135444;
	sub_823FF248(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-19740
	ctx.r4.s64 = ctx.r11.s64 + -19740;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120600
	ctx.lr = 0x82135458;
	sub_82120600(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121928
	ctx.lr = 0x82135460;
	sub_82121928(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82121928
	ctx.lr = 0x82135468;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82121dd0
	ctx.lr = 0x8213547C;
	sub_82121DD0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82120ac0
	ctx.lr = 0x8213548C;
	sub_82120AC0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120670
	ctx.lr = 0x82135498;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821354A8;
	sub_82120AC0(ctx, base);
loc_821354A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8213D318) {
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
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8213D33C;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82120ac0
	ctx.lr = 0x8213D34C;
	sub_82120AC0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8213e150
	ctx.lr = 0x8213D354;
	sub_8213E150(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82122800
	ctx.lr = 0x8213D35C;
	sub_82122800(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-17520
	ctx.r11.s64 = ctx.r11.s64 + -17520;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x8213d378
	if (ctx.cr0.eq) goto loc_8213D378;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213D378;
	sub_8269CE98(ctx, base);
loc_8213D378:
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

DEFINE_REX_FUNC(sub_821416D0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,68(r3)
	REX_STORE_U8(ctx.r3.u32 + 68, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141F30) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82141F50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821443F8) {
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
	// bl 0x826a1c94
	ctx.lr = 0x82144400;
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,272(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r4,r8,-15784
	ctx.r4.s64 = ctx.r8.s64 + -15784;
	// lfs f31,1480(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1480);
	f31.f64 = double(temp.f32);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f2,f13,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bctrl 
	ctx.lr = 0x82144478;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,292(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 292);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-15764
	ctx.r4.s64 = ctx.r11.s64 + -15764;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,288(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 288);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// fmuls f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfd f2,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bctrl 
	ctx.lr = 0x821444D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,248(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 248);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82144674
	if (!ctx.cr6.gt) goto loc_82144674;
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
	// addi r19,r25,244
	r19.s64 = r25.s64 + 244;
	// addi r21,r11,-25252
	r21.s64 = ctx.r11.s64 + -25252;
	// addi r20,r10,-25320
	r20.s64 = ctx.r10.s64 + -25320;
	// addi r23,r9,-15684
	r23.s64 = ctx.r9.s64 + -15684;
	// addi r22,r8,-15696
	r22.s64 = ctx.r8.s64 + -15696;
	// addi r24,r7,-15736
	r24.s64 = ctx.r7.s64 + -15736;
loc_82144514:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82144520;
	sub_8228CA78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f2,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// ld r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lfs f1,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// ld r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 32);
	// stfd f2,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144564;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82144634
	if (!ctx.cr6.gt) goto loc_82144634;
	// li r27,0
	r27.s64 = 0;
loc_82144578:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82144588;
	sub_82120AC0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8214459c
	if (ctx.cr6.lt) goto loc_8214459C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821445ac
	if (ctx.cr6.lt) goto loc_821445AC;
loc_8214459C:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x821445AC;
	sub_821231D0(ctx, base);
loc_821445AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821445C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x821445dc
	goto loc_821445DC;
loc_821445D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82170f90
	ctx.lr = 0x821445D8;
	sub_82170F90(ctx, base);
	// lhzu r3,2(r28)
	ea = 2 + r28.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	r28.u32 = ea;
loc_821445DC:
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821445d0
	if (!ctx.cr0.eq) goto loc_821445D0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821445f8
	if (!ctx.cr6.lt) goto loc_821445F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_821445F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82144620;
	sub_82120AC0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82144578
	if (ctx.cr6.lt) goto loc_82144578;
loc_82144634:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82144648
	if (ctx.cr6.lt) goto loc_82144648;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
loc_82144648:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82144664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,248(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 248);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82144514
	if (ctx.cr6.lt) goto loc_82144514;
loc_82144674:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82155EC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82155ED0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r29,-25092
	r29.s64 = r29.s64 + -25092;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82155f04
	if (ctx.cr6.eq) goto loc_82155F04;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-9312
	ctx.r4.s64 = ctx.r11.s64 + -9312;
	// addi r3,r10,-8688
	ctx.r3.s64 = ctx.r10.s64 + -8688;
	// li r5,772
	ctx.r5.s64 = 772;
	// bl 0x821231d0
	ctx.lr = 0x82155F04;
	sub_821231D0(ctx, base);
loc_82155F04:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,20896
	ctx.r10.s64 = ctx.r10.s64 + 20896;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r30,6048(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x822f6280
	ctx.lr = 0x82155F28;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82155f50
	if (ctx.cr0.eq) goto loc_82155F50;
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
	// b 0x82155f54
	goto loc_82155F54;
loc_82155F50:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82155F54:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,-23868
	ctx.r5.s64 = ctx.r10.s64 + -23868;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155F70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82155F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x82155FA0;
	sub_823ED568(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r11,r11,40436
	ctx.r11.u64 = ctx.r11.u64 | 40436;
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bne 0x82155fbc
	if (!ctx.cr0.eq) goto loc_82155FBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82155fc8
	goto loc_82155FC8;
loc_82155FBC:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82155FC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215C728) {
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,18636
	ctx.r10.s64 = ctx.r10.s64 + 18636;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ble cr6,0x8215c760
	if (!ctx.cr6.gt) goto loc_8215C760;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x8269d770
	ctx.lr = 0x8215C75C;
	sub_8269D770(ctx, base);
	// b 0x8215c76c
	goto loc_8215C76C;
loc_8215C760:
	// bge cr6,0x8215c76c
	if (!ctx.cr6.lt) goto loc_8215C76C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8269d6a0
	ctx.lr = 0x8215C76C;
	sub_8269D6A0(ctx, base);
loc_8215C76C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
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

DEFINE_REX_FUNC(sub_8215F1B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8215f1f0
	if (!ctx.cr6.eq) goto loc_8215F1F0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8215f1f0
	if (ctx.cr6.lt) goto loc_8215F1F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8215f1f0
	if (!ctx.cr6.lt) goto loc_8215F1F0;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
loc_8215F1F0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,1008
	ctx.r3.s64 = ctx.r11.s64 + 1008;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82160858) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82160728
	ctx.lr = 0x82160878;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bgt cr6,0x82160940
	if (ctx.cr6.gt) goto loc_82160940;
	// beq cr6,0x82160930
	if (ctx.cr6.eq) goto loc_82160930;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82160910
	if (ctx.cr6.eq) goto loc_82160910;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// beq cr6,0x821608c0
	if (ctx.cr6.eq) goto loc_821608C0;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x821608b0
	if (ctx.cr6.eq) goto loc_821608B0;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// ble cr6,0x821609b0
	if (!ctx.cr6.gt) goto loc_821609B0;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x821609b0
	if (ctx.cr6.gt) goto loc_821609B0;
loc_821608B0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160c70
	ctx.lr = 0x821608BC;
	sub_82160C70(ctx, base);
	// b 0x821609d4
	goto loc_821609D4;
loc_821608C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821608D0;
	sub_82120AC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160fc8
	ctx.lr = 0x821608DC;
	sub_82160FC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160918
	if (ctx.cr0.eq) goto loc_82160918;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x821608f8
	if (!ctx.cr6.lt) goto loc_821608F8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_821608F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82160900;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160910;
	sub_82120AC0(ctx, base);
loc_82160910:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821609d4
	goto loc_821609D4;
loc_82160918:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160928;
	sub_82120AC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821609d4
	goto loc_821609D4;
loc_82160930:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160bb0
	ctx.lr = 0x8216093C;
	sub_82160BB0(ctx, base);
	// b 0x821609d4
	goto loc_821609D4;
loc_82160940:
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// beq cr6,0x821609c8
	if (ctx.cr6.eq) goto loc_821609C8;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82160970
	if (ctx.cr6.eq) goto loc_82160970;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// beq cr6,0x821609c8
	if (ctx.cr6.eq) goto loc_821609C8;
	// cmpwi cr6,r11,123
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 123, ctx.xer);
	// bne cr6,0x821609b0
	if (!ctx.cr6.eq) goto loc_821609B0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821609f0
	ctx.lr = 0x8216096C;
	sub_821609F0(ctx, base);
	// b 0x821609d4
	goto loc_821609D4;
loc_82160970:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,19128
	ctx.r4.s64 = ctx.r11.s64 + 19128;
	// bl 0x8269f180
	ctx.lr = 0x82160984;
	sub_8269F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821609b0
	if (!ctx.cr0.eq) goto loc_821609B0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,1008
	ctx.r4.s64 = ctx.r11.s64 + 1008;
	// bl 0x8215efb0
	ctx.lr = 0x8216099C;
	sub_8215EFB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x821609d4
	goto loc_821609D4;
loc_821609B0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18904
	ctx.r4.s64 = ctx.r11.s64 + 18904;
	// bl 0x82160698
	ctx.lr = 0x821609C4;
	sub_82160698(ctx, base);
	// b 0x821609d4
	goto loc_821609D4;
loc_821609C8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160ef8
	ctx.lr = 0x821609D4;
	sub_82160EF8(ctx, base);
loc_821609D4:
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

DEFINE_REX_FUNC(sub_8216FAB8) {
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
	// blt cr6,0x8216fae8
	if (ctx.cr6.lt) goto loc_8216FAE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216fb00
	if (ctx.cr6.lt) goto loc_8216FB00;
loc_8216FAE8:
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
	ctx.lr = 0x8216FB00;
	sub_821231D0(ctx, base);
loc_8216FB00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
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

DEFINE_REX_FUNC(sub_82171A70) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x823ee100
	ctx.lr = 0x82171AA0;
	sub_823EE100(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82172DA8) {
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
	ctx.lr = 0x82172DB0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r29,2
	r29.s64 = 2;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r31,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// sth r31,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r31.u16);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stb r31,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172DEC;
	sub_82154800(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r27,r11,-12216
	r27.s64 = ctx.r11.s64 + -12216;
	// addi r4,r10,-12800
	ctx.r4.s64 = ctx.r10.s64 + -12800;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// bl 0x82172bd0
	ctx.lr = 0x82172E0C;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82172E20;
	sub_82154908(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x82172e30
	if (ctx.cr0.eq) goto loc_82172E30;
loc_82172E28:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821731b0
	goto loc_821731B0;
loc_82172E30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82172d18
	ctx.lr = 0x82172E38;
	sub_82172D18(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r24,r11,-11168
	r24.s64 = ctx.r11.s64 + -11168;
	// addi r25,r10,-11848
	r25.s64 = ctx.r10.s64 + -11848;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// bl 0x82172bd0
	ctx.lr = 0x82172E60;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82172E74;
	sub_82154908(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172EA8;
	sub_82154800(ctx, base);
	// li r28,12
	r28.s64 = 12;
	// li r26,5
	r26.s64 = 5;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// li r23,8
	r23.s64 = 8;
	// sth r28,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r28.u16);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172ED4;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r10,-10696
	ctx.r4.s64 = ctx.r10.s64 + -10696;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// bl 0x82172bd0
	ctx.lr = 0x82172EF0;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r22,r11,27,31,31
	r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82172F04;
	sub_82154908(ctx, base);
	// cmplwi r22,0
	ctx.cr0.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82172d18
	ctx.lr = 0x82172F14;
	sub_82172D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r10,-10104
	ctx.r5.s64 = ctx.r10.s64 + -10104;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82172bd0
	ctx.lr = 0x82172F30;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82172F44;
	sub_82154908(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172F78;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r10,-9544
	ctx.r4.s64 = ctx.r10.s64 + -9544;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x82172bd0
	ctx.lr = 0x82172F94;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82172FA8;
	sub_82154908(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82172FDC;
	sub_82154800(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r28,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r28.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r26,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82173000;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r10,-8944
	ctx.r4.s64 = ctx.r10.s64 + -8944;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x82172bd0
	ctx.lr = 0x8217301C;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82173030;
	sub_82154908(ctx, base);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82173064;
	sub_82154800(ctx, base);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r28,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r28.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82173084;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r10,-8248
	ctx.r4.s64 = ctx.r10.s64 + -8248;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82172bd0
	ctx.lr = 0x821730A0;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x821730B4;
	sub_82154908(ctx, base);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x821730E8;
	sub_82154800(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// sth r28,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r28.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x8217310C;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,-6736
	ctx.r5.s64 = ctx.r10.s64 + -6736;
	// addi r4,r9,-7648
	ctx.r4.s64 = ctx.r9.s64 + -7648;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x82172bd0
	ctx.lr = 0x8217312C;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x82173140;
	sub_82154908(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne 0x82172e28
	if (!ctx.cr0.eq) goto loc_82172E28;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82173174;
	sub_82154800(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r5,r10,-5704
	ctx.r5.s64 = ctx.r10.s64 + -5704;
	// addi r4,r9,-6368
	ctx.r4.s64 = ctx.r9.s64 + -6368;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x82172bd0
	ctx.lr = 0x82173194;
	sub_82172BD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82154908
	ctx.lr = 0x821731A8;
	sub_82154908(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821731B0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82191850) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,44(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219187C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82191888;
	sub_8215F0F0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,8(r31)
	REX_STORE_U8(r31.u32 + 8, r30.u8);
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

DEFINE_REX_FUNC(sub_82194858) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82194860;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r3,6124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6124);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r5,r9,-17116
	ctx.r5.s64 = ctx.r9.s64 + -17116;
	// lfs f3,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r8,-31800
	ctx.r4.s64 = ctx.r8.s64 + -31800;
	// lfs f1,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f2,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821948A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6124);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r5,r11,-15556
	ctx.r5.s64 = ctx.r11.s64 + -15556;
	// addi r4,r10,-31776
	ctx.r4.s64 = ctx.r10.s64 + -31776;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821948CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-31760
	ctx.r4.s64 = ctx.r11.s64 + -31760;
	// bl 0x82120600
	ctx.lr = 0x821948DC;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,6040(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6040);
	// bl 0x82154b70
	ctx.lr = 0x821948EC;
	sub_82154B70(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82194900;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82194918
	if (!ctx.cr6.eq) goto loc_82194918;
loc_8219490C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82194910:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82194918:
	// bl 0x82153030
	ctx.lr = 0x8219491C;
	sub_82153030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a4270
	ctx.lr = 0x8219492C;
	sub_821A4270(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219490c
	if (ctx.cr0.eq) goto loc_8219490C;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82153080
	ctx.lr = 0x82194940;
	sub_82153080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82194950;
	sub_821A4270(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82194964
	if (!ctx.cr0.eq) goto loc_82194964;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_82194964:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8219490c
	if (ctx.cr6.eq) goto loc_8219490C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r4,r9,-9616
	ctx.r4.s64 = ctx.r9.s64 + -9616;
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
	ctx.lr = 0x82194994;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// addi r4,r10,-31744
	ctx.r4.s64 = ctx.r10.s64 + -31744;
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
	ctx.lr = 0x821949C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r3,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r3.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, r31.u16);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x821949F4;
	sub_82154800(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r31,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r31,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, r31.u8);
	// bl 0x82154800
	ctx.lr = 0x82194A20;
	sub_82154800(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a48f8
	ctx.lr = 0x82194A28;
	sub_821A48F8(ctx, base);
	// stw r3,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82194a44
	if (!ctx.cr0.eq) goto loc_82194A44;
loc_82194A34:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82154908
	ctx.lr = 0x82194A3C;
	sub_82154908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82194910
	goto loc_82194910;
loc_82194A44:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r29,6048(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 6048);
	// bl 0x822f6280
	ctx.lr = 0x82194A54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82194a80
	if (ctx.cr0.eq) goto loc_82194A80;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,19128
	ctx.r10.s64 = ctx.r10.s64 + 19128;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82194a84
	goto loc_82194A84;
loc_82194A80:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82194A84:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r10,-23804
	ctx.r5.s64 = ctx.r10.s64 + -23804;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82194AA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r31,1
	r31.s64 = 1;
	// b 0x82194a34
	goto loc_82194A34;
}

DEFINE_REX_FUNC(sub_821A2F80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15400
	ctx.r3.s64 = ctx.r11.s64 + -15400;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3248) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821A3250;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x821613d8
	ctx.lr = 0x821A326C;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x821613d8
	ctx.lr = 0x821A327C;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x821613d8
	ctx.lr = 0x821A328C;
	sub_821613D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821A329C;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A32AC;
	sub_821613D8(ctx, base);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x822f6280
	ctx.lr = 0x821A32B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a32d8
	if (ctx.cr0.eq) goto loc_821A32D8;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82176d98
	ctx.lr = 0x821A32D0;
	sub_82176D98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x821a32dc
	goto loc_821A32DC;
loc_821A32D8:
	// li r30,0
	r30.s64 = 0;
loc_821A32DC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821a3304
	if (ctx.cr6.eq) goto loc_821A3304;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,27796
	ctx.r4.s64 = ctx.r11.s64 + 27796;
	// addi r3,r10,27856
	ctx.r3.s64 = ctx.r10.s64 + 27856;
	// li r5,139
	ctx.r5.s64 = 139;
	// bl 0x821231d0
	ctx.lr = 0x821A3304;
	sub_821231D0(ctx, base);
loc_821A3304:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 80);
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 84);
	// bl 0x821613d8
	ctx.lr = 0x821A3314;
	sub_821613D8(ctx, base);
	// stw r30,96(r29)
	REX_STORE_U32(r29.u32 + 96, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215ef60
	ctx.lr = 0x821A3320;
	sub_8215EF60(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18800
	ctx.r4.s64 = ctx.r11.s64 + 18800;
	// bl 0x8215f338
	ctx.lr = 0x821A332C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x821A3330;
	sub_8215FA30(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821a3344
	if (ctx.cr6.lt) goto loc_821A3344;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x821a3348
	goto loc_821A3348;
loc_821A3344:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821A3348:
	// lwz r3,96(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A335C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821A8C10) {
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
	// blt cr6,0x821a8c40
	if (ctx.cr6.lt) goto loc_821A8C40;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a8c58
	if (ctx.cr6.lt) goto loc_821A8C58;
loc_821A8C40:
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
	ctx.lr = 0x821A8C58;
	sub_821231D0(ctx, base);
loc_821A8C58:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
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

DEFINE_REX_FUNC(sub_821ABBA8) {
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
	ctx.lr = 0x821ABBB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r4,100(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 100);
	// bl 0x821d7f08
	ctx.lr = 0x821ABBC8;
	sub_821D7F08(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r31,96(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 96);
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// bl 0x821626c0
	ctx.lr = 0x821ABBD8;
	sub_821626C0(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r30,r11,5,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,16(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821ABBF4;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821ABC00;
	sub_82125C98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ABC0C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821ABC28;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821ABC34;
	sub_82125C98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ABC40;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mulli r30,r11,48
	r30.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,24(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 24);
	// add r4,r29,r30
	ctx.r4.u64 = r29.u64 + r30.u64;
	// bl 0x82125c20
	ctx.lr = 0x821ABC5C;
	sub_82125C20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821ABC68;
	sub_82125C98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821ABC74;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x82125c20
	ctx.lr = 0x821ABC84;
	sub_82125C20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x82125c98
	ctx.lr = 0x821ABC90;
	sub_82125C98(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x826a1e70
	ctx.lr = 0x821ABC9C;
	sub_826A1E70(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,100(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 100);
	// bl 0x821eafc8
	ctx.lr = 0x821ABCA8;
	sub_821EAFC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821B3D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,172(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lfs f13,312(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// lfs f13,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-40(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-28(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r10,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r10.u64);
	// std r7,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r7.u64);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// ld r5,24(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r8,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r8.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r7,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r7.u64);
	// std r5,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r5.u64);
	// std r10,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r10.u64);
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821B8048) {
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
	ctx.lr = 0x821B8050;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// bl 0x821b70f0
	ctx.lr = 0x821B8068;
	sub_821B70F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r27,168(r31)
	REX_STORE_U32(r31.u32 + 168, r27.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r9,r9,-20364
	ctx.r9.s64 = ctx.r9.s64 + -20364;
	// addi r8,r8,-20376
	ctx.r8.s64 = ctx.r8.s64 + -20376;
	// lfs f0,-7264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// stw r8,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r8.u32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// addi r26,r31,164
	r26.s64 = r31.s64 + 164;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B80C0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821b80f0
	if (ctx.cr0.eq) goto loc_821B80F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-20636
	ctx.r4.s64 = ctx.r11.s64 + -20636;
	// bl 0x82120600
	ctx.lr = 0x821B80D8;
	sub_82120600(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x821B80EC;
	sub_82196BA8(ctx, base);
	// b 0x821b80f4
	goto loc_821B80F4;
loc_821B80F0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B80F4:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B8108;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B8114;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B811C;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,-13900
	r25.s64 = ctx.r11.s64 + -13900;
	// beq 0x821b8144
	if (ctx.cr0.eq) goto loc_821B8144;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b8148
	goto loc_821B8148;
loc_821B8144:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B8148:
	// clrlwi. r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r27,33(r30)
	REX_STORE_U8(r30.u32 + 33, r27.u8);
	// beq 0x821b816c
	if (ctx.cr0.eq) goto loc_821B816C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821B816C;
	sub_82120AC0(ctx, base);
loc_821B816C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B8184;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821b81b4
	if (ctx.cr0.eq) goto loc_821B81B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-20628
	ctx.r4.s64 = ctx.r11.s64 + -20628;
	// bl 0x82120600
	ctx.lr = 0x821B819C;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x821a0530
	ctx.lr = 0x821B81B0;
	sub_821A0530(ctx, base);
	// b 0x821b81b8
	goto loc_821B81B8;
loc_821B81B4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_821B81B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821B81C8;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821B81D4;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821B81DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b81fc
	if (ctx.cr0.eq) goto loc_821B81FC;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821b8200
	goto loc_821B8200;
loc_821B81FC:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B8200:
	// rlwinm. r10,r28,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r27,33(r30)
	REX_STORE_U8(r30.u32 + 33, r27.u8);
	// beq 0x821b8220
	if (ctx.cr0.eq) goto loc_821B8220;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821B8220;
	sub_82120AC0(ctx, base);
loc_821B8220:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821B8228;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b8240
	if (ctx.cr0.eq) goto loc_821B8240;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821B8238;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b8244
	goto loc_821B8244;
loc_821B8240:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B8244:
	// stw r4,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B8254;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821B825C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b8288
	if (ctx.cr0.eq) goto loc_821B8288;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-31288
	ctx.r11.s64 = ctx.r11.s64 + -31288;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821B8280;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821b828c
	goto loc_821B828C;
loc_821B8288:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_821B828C:
	// stw r4,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821B8298;
	sub_821D3988(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r11,r11,22008
	ctx.r11.s64 = ctx.r11.s64 + 22008;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,152(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x822f6280
	ctx.lr = 0x821B82B4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b82d8
	if (ctx.cr0.eq) goto loc_821B82D8;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r25.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821b82dc
	goto loc_821B82DC;
loc_821B82D8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_821B82DC:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,152(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 152);
	// bl 0x821a1ff8
	ctx.lr = 0x821B82EC;
	sub_821A1FF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b8468
	ctx.lr = 0x821B82F4;
	sub_821B8468(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821CAAC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14732
	ctx.r3.s64 = ctx.r11.s64 + -14732;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CAFE8) {
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
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x822f6280
	ctx.lr = 0x821CAFFC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb00c
	if (ctx.cr0.eq) goto loc_821CB00C;
	// bl 0x821cb020
	ctx.lr = 0x821CB008;
	sub_821CB020(ctx, base);
	// b 0x821cb010
	goto loc_821CB010;
loc_821CB00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CB010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CD8A8) {
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
	ctx.lr = 0x821CD8B0;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r27,r25
	r27.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821CD8CC;
	sub_82178268(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-18396
	ctx.r11.s64 = ctx.r11.s64 + -18396;
	// addi r10,r10,-14184
	ctx.r10.s64 = ctx.r10.s64 + -14184;
	// addi r9,r9,-14144
	ctx.r9.s64 = ctx.r9.s64 + -14144;
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r24,r31,112
	r24.s64 = r31.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821CD908;
	sub_82120AC0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stb r28,160(r31)
	REX_STORE_U8(r31.u32 + 160, r28.u8);
	// li r3,100
	ctx.r3.s64 = 100;
	// stb r28,164(r31)
	REX_STORE_U8(r31.u32 + 164, r28.u8);
	// addi r11,r11,-8560
	ctx.r11.s64 = ctx.r11.s64 + -8560;
	// stw r25,168(r31)
	REX_STORE_U32(r31.u32 + 168, r25.u32);
	// addi r26,r31,160
	r26.s64 = r31.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CD934;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cd974
	if (ctx.cr0.eq) goto loc_821CD974;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-15936
	ctx.r4.s64 = ctx.r11.s64 + -15936;
	// bl 0x82120600
	ctx.lr = 0x821CD94C;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x821bf110
	ctx.lr = 0x821CD960;
	sub_821BF110(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// addi r10,r10,-14480
	ctx.r10.s64 = ctx.r10.s64 + -14480;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x821cd978
	goto loc_821CD978;
loc_821CD974:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CD978:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821CD98C;
	sub_82145710(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821CD998;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821CD9A0;
	sub_822F6280(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r23,r11,-13900
	r23.s64 = ctx.r11.s64 + -13900;
	// beq 0x821cd9c8
	if (ctx.cr0.eq) goto loc_821CD9C8;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821cd9cc
	goto loc_821CD9CC;
loc_821CD9C8:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CD9CC:
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// stb r25,33(r30)
	REX_STORE_U8(r30.u32 + 33, r25.u8);
	// beq 0x821cd9f0
	if (ctx.cr0.eq) goto loc_821CD9F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r27,r27,0,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CD9F0;
	sub_82120AC0(ctx, base);
loc_821CD9F0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CD9F8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cda28
	if (ctx.cr0.eq) goto loc_821CDA28;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821CDA10;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821CDA24;
	sub_82191600(ctx, base);
	// b 0x821cda2c
	goto loc_821CDA2C;
loc_821CDA28:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821CDA2C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145710
	ctx.lr = 0x821CDA3C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cda54
	if (ctx.cr0.eq) goto loc_821CDA54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821CDA54;
	sub_82120AC0(ctx, base);
loc_821CDA54:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821CDA5C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cda74
	if (ctx.cr0.eq) goto loc_821CDA74;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821CDA6C;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cda78
	goto loc_821CDA78;
loc_821CDA74:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CDA78:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CDA88;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CDA90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdab0
	if (ctx.cr0.eq) goto loc_821CDAB0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CDAA8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cdab4
	goto loc_821CDAB4;
loc_821CDAB0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CDAB4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CDAC0;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821CDAC8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdaf4
	if (ctx.cr0.eq) goto loc_821CDAF4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-8496
	ctx.r11.s64 = ctx.r11.s64 + -8496;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x82233df8
	ctx.lr = 0x821CDAEC;
	sub_82233DF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cdaf8
	goto loc_821CDAF8;
loc_821CDAF4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CDAF8:
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CDB04;
	sub_821D3988(ctx, base);
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x822f6280
	ctx.lr = 0x821CDB0C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdb28
	if (ctx.cr0.eq) goto loc_821CDB28;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dd570
	ctx.lr = 0x821CDB20;
	sub_821DD570(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cdb2c
	goto loc_821CDB2C;
loc_821CDB28:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821CDB2C:
	// stw r4,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CDB38;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CDB40;
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
	// beq 0x821cdbc0
	if (ctx.cr0.eq) goto loc_821CDBC0;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r11,r11,-8816
	ctx.r11.s64 = ctx.r11.s64 + -8816;
	// addi r4,r10,-20928
	ctx.r4.s64 = ctx.r10.s64 + -20928;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CDB84;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821CDB90;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdbb0
	if (ctx.cr0.eq) goto loc_821CDBB0;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821cdbb4
	goto loc_821CDBB4;
loc_821CDBB0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CDBB4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cdbc4
	goto loc_821CDBC4;
loc_821CDBC0:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CDBC4:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CDBDC;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CDBE4;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cdc54
	if (ctx.cr0.eq) goto loc_821CDC54;
	// stw r25,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r11,r11,-8632
	ctx.r11.s64 = ctx.r11.s64 + -8632;
	// addi r4,r10,-17844
	ctx.r4.s64 = ctx.r10.s64 + -17844;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CDC18;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x821CDC24;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdc44
	if (ctx.cr0.eq) goto loc_821CDC44;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x821cdc48
	goto loc_821CDC48;
loc_821CDC44:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CDC48:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cdc58
	goto loc_821CDC58;
loc_821CDC54:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821CDC58:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CDC70;
	sub_82264568(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x821a1ff8
	ctx.lr = 0x821CDC7C;
	sub_821A1FF8(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r11,r11,-8560
	ctx.r11.s64 = ctx.r11.s64 + -8560;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r30,116(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 116);
	// bl 0x822f6280
	ctx.lr = 0x821CDC98;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cdcbc
	if (ctx.cr0.eq) goto loc_821CDCBC;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// std r9,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r9.u64);
	// b 0x821cdcc0
	goto loc_821CDCC0;
loc_821CDCBC:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CDCC0:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_821E9778) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r4,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x82264638
	ctx.lr = 0x821E97B0;
	sub_82264638(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// lbz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e97cc
	if (!ctx.cr0.eq) goto loc_821E97CC;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
loc_821E97CC:
	// bl 0x82264638
	ctx.lr = 0x821E97D0;
	sub_82264638(ctx, base);
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

DEFINE_REX_FUNC(sub_821EB868) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821EB870;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r11,r11,15780
	ctx.r11.s64 = ctx.r11.s64 + 15780;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821eb898
	if (ctx.cr6.eq) goto loc_821EB898;
	// bl 0x821357c8
	ctx.lr = 0x821EB898;
	sub_821357C8(ctx, base);
loc_821EB898:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r29,r31,116
	r29.s64 = r31.s64 + 116;
	// lwz r30,0(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821eb8b8
	goto loc_821EB8B8;
loc_821EB8A8:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x821357c8
	ctx.lr = 0x821EB8B0;
	sub_821357C8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_821EB8B8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb8a8
	if (!ctx.cr6.eq) goto loc_821EB8A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8214ab00
	ctx.lr = 0x821EB8C8;
	sub_8214AB00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x821EB8D8;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214e4b0
	ctx.lr = 0x821EB8E0;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821eb8f0
	if (ctx.cr0.eq) goto loc_821EB8F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821EB8F0;
	sub_8269CE98(ctx, base);
loc_821EB8F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821F43C0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c94
	ctx.lr = 0x821F43C8;
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r19,-32106
	r19.s64 = -2104098816;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// lwz r9,6056(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 6056);
	// lwz r20,4(r9)
	r20.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x821f4540
	if (!ctx.cr6.gt) goto loc_821F4540;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r8,r10,16592
	ctx.r8.s64 = ctx.r10.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r26,0
	r26.s64 = 0;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lfs f30,1260(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1260);
	f30.f64 = double(temp.f32);
	// lis r23,-32106
	r23.s64 = -2104098816;
	// addi r22,r11,-25252
	r22.s64 = ctx.r11.s64 + -25252;
	// addi r21,r10,-25320
	r21.s64 = ctx.r10.s64 + -25320;
	// b 0x821f4428
	goto loc_821F4428;
loc_821F4424:
	// lwz r9,6056(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 6056);
loc_821F4428:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r11,r26,r9
	ctx.r11.u64 = r26.u64 + ctx.r9.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,48
	r30.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821f44a4
	if (!ctx.cr6.gt) goto loc_821F44A4;
	// li r29,0
	r29.s64 = 0;
loc_821F4444:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x821f4458
	if (ctx.cr6.lt) goto loc_821F4458;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f4468
	if (ctx.cr6.lt) goto loc_821F4468;
loc_821F4458:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x821F4468;
	sub_821231D0(ctx, base);
loc_821F4468:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F4484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fmadds f0,f1,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, ctx.f0.f64)));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f4444
	if (ctx.cr6.lt) goto loc_821F4444;
loc_821F44A4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,6168(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 6168);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821497c0
	ctx.lr = 0x821F44B4;
	sub_821497C0(ctx, base);
	// lfs f13,440(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821f44d8
	if (!ctx.cr6.gt) goto loc_821F44D8;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f31,f30,f0
	ctx.f0.f64 = double(float(std::fma(f31.f64, f30.f64, ctx.f0.f64)));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_821F44D8:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x821f452c
	if (!ctx.cr6.gt) goto loc_821F452C;
	// lwz r3,6196(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6196);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F450C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r31
	ctx.r11.s64 = r31.s32;
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_821F452C:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r26,r26,720
	r26.s64 = r26.s64 + 720;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(r25.s32, r20.s32, ctx.xer);
	// blt cr6,0x821f4424
	if (ctx.cr6.lt) goto loc_821F4424;
loc_821F4540:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_821FE608) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u8 = (ctx.r10.u32 + 0xFFFFFFFFu < ctx.r10.u32) | (ctx.r10.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r10.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822002F8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cac
	ctx.lr = 0x82200300;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82200348
	if (ctx.cr6.eq) goto loc_82200348;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82200348
	if (ctx.cr6.eq) goto loc_82200348;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,26968
	ctx.r4.s64 = ctx.r11.s64 + 26968;
	// addi r3,r10,28064
	ctx.r3.s64 = ctx.r10.s64 + 28064;
	// li r5,611
	ctx.r5.s64 = 611;
	// bl 0x821231d0
	ctx.lr = 0x82200348;
	sub_821231D0(ctx, base);
loc_82200348:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82200444
	if (!ctx.cr6.gt) goto loc_82200444;
	// lfs f30,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f30.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r29,0
	r29.s64 = 0;
	// lfs f29,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f29.f64 = double(temp.f32);
loc_82200378:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// lwzx r31,r11,r29
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// beq cr6,0x82200394
	if (ctx.cr6.eq) goto loc_82200394;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x82200430
	if (!ctx.cr6.eq) goto loc_82200430;
loc_82200394:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lbz r11,167(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 167);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82200430
	if (ctx.cr0.eq) goto loc_82200430;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82250498
	ctx.lr = 0x822003B0;
	sub_82250498(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bge cr6,0x822003c0
	if (!ctx.cr6.lt) goto loc_822003C0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// b 0x8220042c
	goto loc_8220042C;
loc_822003C0:
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// bne cr6,0x82200430
	if (!ctx.cr6.eq) goto loc_82200430;
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f12,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f10,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f13.f64)));
	// fmadds f0,f7,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f0.f64)));
	// fadds f13,f13,f6
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x82200430
	if (ctx.cr6.lt) goto loc_82200430;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x82200430
	if (ctx.cr6.gt) goto loc_82200430;
loc_8220042C:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82200430:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82200378
	if (ctx.cr6.lt) goto loc_82200378;
loc_82200444:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82209288) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,12288(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12288);
	// lfs f0,12292(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822092c4
	if (!ctx.cr6.gt) goto loc_822092C4;
loc_822092A4:
	// lfs f13,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822092f8
	if (ctx.cr6.lt) goto loc_822092F8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822092a4
	if (ctx.cr6.lt) goto loc_822092A4;
loc_822092C4:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// ld r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 64);
	// std r11,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r11.u64);
	// ld r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 72);
loc_822092F0:
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// blr 
	return;
loc_822092F8:
	// fdivs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f11,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f13,f12
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f8,f7,f5
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f7,f6,f5
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f11,-12(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,-8(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r9,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r9.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// lfs f12,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,80(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadds f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f12,-16(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f12,f9,f11
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f12,-12(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// ld r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r9.u64);
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// ld r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// ld r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// b 0x822092f0
	goto loc_822092F0;
}

DEFINE_REX_FUNC(sub_82219170) {
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
	ctx.lr = 0x82219178;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r4,r11,20320
	ctx.r4.s64 = ctx.r11.s64 + 20320;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// beq 0x8221921c
	if (ctx.cr0.eq) goto loc_8221921C;
	// bl 0x8215f670
	ctx.lr = 0x822191A4;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f670
	ctx.lr = 0x822191B0;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f200
	ctx.lr = 0x822191BC;
	sub_8215F200(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82219214
	if (ctx.cr6.eq) goto loc_82219214;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822191D4;
	sub_8215F200(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r11,-26816
	r29.s64 = ctx.r11.s64 + -26816;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822191E4;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822191E8;
	sub_8215F990(ctx, base);
	// add r28,r3,r27
	r28.u64 = ctx.r3.u64 + r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822191F8;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x82219200;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82219208;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82219214:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_8221921C:
	// bl 0x8215f670
	ctx.lr = 0x82219220;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26728
	ctx.r4.s64 = ctx.r11.s64 + -26728;
	// bl 0x8215f670
	ctx.lr = 0x8221922C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r28,r11,-26828
	r28.s64 = ctx.r11.s64 + -26828;
	// addi r29,r10,-26816
	r29.s64 = ctx.r10.s64 + -26816;
loc_82219244:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82219268
	if (!ctx.cr6.eq) goto loc_82219268;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8221926c
	goto loc_8221926C;
loc_82219268:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221926C:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82219214
	if (!ctx.cr6.lt) goto loc_82219214;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x82219280;
	sub_8215F200(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82219288;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221928C;
	sub_8215FA30(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82120780
	ctx.lr = 0x82219294;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822192e0
	if (!ctx.cr0.eq) goto loc_822192E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822192A8;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822192B0;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x822192B4;
	sub_8215F990(ctx, base);
	// add r25,r3,r27
	r25.u64 = ctx.r3.u64 + r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f200
	ctx.lr = 0x822192C4;
	sub_8215F200(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f670
	ctx.lr = 0x822192CC;
	sub_8215F670(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x822192D4;
	sub_8215F0F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r25,8(r24)
	REX_STORE_U32(r24.u32 + 8, r25.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
loc_822192E0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x82219244
	goto loc_82219244;
}

DEFINE_REX_FUNC(sub_82226C10) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,6272(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82226c6c
	if (ctx.cr6.eq) goto loc_82226C6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,16176
	ctx.r4.s64 = ctx.r11.s64 + 16176;
	// bl 0x82125d00
	ctx.lr = 0x82226C48;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82226c6c
	if (!ctx.cr0.eq) goto loc_82226C6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82226C68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82226c70
	goto loc_82226C70;
loc_82226C6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82226C70:
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

DEFINE_REX_FUNC(sub_82228EC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13892
	ctx.r3.s64 = ctx.r11.s64 + -13892;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229358) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13884
	ctx.r3.s64 = ctx.r11.s64 + -13884;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229648) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-23388
	ctx.r3.s64 = ctx.r11.s64 + -23388;
	// bl 0x8216bc98
	ctx.lr = 0x82229678;
	sub_8216BC98(ctx, base);
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

DEFINE_REX_FUNC(sub_8222A138) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8222A140;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r30,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r30.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8222A164;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25260
	ctx.r4.s64 = ctx.r11.s64 + -25260;
	// bl 0x8215f338
	ctx.lr = 0x8222A170;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8222A174;
	sub_8215FA30(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-23184
	ctx.r4.s64 = ctx.r11.s64 + -23184;
	// bl 0x82125d00
	ctx.lr = 0x8222A184;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222a1e0
	if (ctx.cr0.eq) goto loc_8222A1E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-25268
	ctx.r4.s64 = ctx.r11.s64 + -25268;
	// bl 0x82125d00
	ctx.lr = 0x8222A19C;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222a1b0
	if (!ctx.cr0.eq) goto loc_8222A1B0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// b 0x8222a1e4
	goto loc_8222A1E4;
loc_8222A1B0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-23176
	ctx.r4.s64 = ctx.r11.s64 + -23176;
	// bl 0x82125d00
	ctx.lr = 0x8222A1C0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222a1e0
	if (ctx.cr0.eq) goto loc_8222A1E0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-23168
	ctx.r4.s64 = ctx.r11.s64 + -23168;
	// addi r3,r10,-23124
	ctx.r3.s64 = ctx.r10.s64 + -23124;
	// li r5,266
	ctx.r5.s64 = 266;
	// bl 0x821231d0
	ctx.lr = 0x8222A1E0;
	sub_821231D0(ctx, base);
loc_8222A1E0:
	// stb r30,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r30.u8);
loc_8222A1E4:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x8222A1F8;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-23068
	ctx.r3.s64 = ctx.r11.s64 + -23068;
	// bl 0x8216bc98
	ctx.lr = 0x8222A208;
	sub_8216BC98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8222F608) {
	REX_FUNC_PROLOGUE();
	// lwz r9,196(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f634
	if (ctx.cr6.eq) goto loc_8222F634;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13604
	ctx.r10.s64 = ctx.r10.s64 + -13604;
loc_8222F620:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222f654
	if (ctx.cr6.eq) goto loc_8222F654;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222f620
	if (!ctx.cr6.eq) goto loc_8222F620;
loc_8222F634:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8222F638:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222f65c
	if (ctx.cr0.eq) goto loc_8222F65C;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222f65c
	if (ctx.cr6.eq) goto loc_8222F65C;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_8222F654:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8222f638
	goto loc_8222F638;
loc_8222F65C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822323C0) {
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
	// bl 0x821c7cc0
	ctx.lr = 0x822323D8;
	sub_821C7CC0(ctx, base);
	// lwz r10,680(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 680);
	// lwz r11,724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 724);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,680(r31)
	REX_STORE_U32(r31.u32 + 680, ctx.r10.u32);
	// beq cr6,0x822323f4
	if (ctx.cr6.eq) goto loc_822323F4;
	// stw r10,720(r11)
	REX_STORE_U32(ctx.r11.u32 + 720, ctx.r10.u32);
loc_822323F4:
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

DEFINE_REX_FUNC(sub_82233F40) {
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
	ctx.lr = 0x82233F48;
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// bl 0x822355d0
	ctx.lr = 0x82233F60;
	sub_822355D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// addi r11,r11,-19396
	ctx.r11.s64 = ctx.r11.s64 + -19396;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-19336
	ctx.r10.s64 = ctx.r10.s64 + -19336;
	// addi r9,r9,-19180
	ctx.r9.s64 = ctx.r9.s64 + -19180;
	// addi r11,r8,-19324
	ctx.r11.s64 = ctx.r8.s64 + -19324;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// addi r29,r31,880
	r29.s64 = r31.s64 + 880;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82233FA4;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r25,r31,916
	r25.s64 = r31.s64 + 916;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f13,-19392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f0,1300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1300);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r31,908
	r27.s64 = r31.s64 + 908;
	// stfs f0,908(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 908, temp.u32);
	// addi r26,r31,912
	r26.s64 = r31.s64 + 912;
	// stfs f13,912(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 912, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82233FDC;
	sub_82120AC0(ctx, base);
	// addi r24,r31,944
	r24.s64 = r31.s64 + 944;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82233FF0;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,992
	ctx.r3.s64 = r31.s64 + 992;
	// addi r23,r31,972
	r23.s64 = r31.s64 + 972;
	// addi r21,r31,976
	r21.s64 = r31.s64 + 976;
	// addi r20,r31,980
	r20.s64 = r31.s64 + 980;
	// lfs f9,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f9.f64 = double(temp.f32);
	// addi r19,r31,984
	r19.s64 = r31.s64 + 984;
	// stfs f9,972(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 972, temp.u32);
	// addi r18,r31,988
	r18.s64 = r31.s64 + 988;
	// stfs f9,976(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 976, temp.u32);
	// stfs f9,980(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 980, temp.u32);
	// stfs f9,984(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 984, temp.u32);
	// stfs f9,988(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 988, temp.u32);
	// bl 0x822ee8f0
	ctx.lr = 0x82234028;
	sub_822EE8F0(ctx, base);
	// stfs f9,1124(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 1124, temp.u32);
	// stw r22,1120(r31)
	REX_STORE_U32(r31.u32 + 1120, r22.u32);
	// stfs f9,1136(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 1136, temp.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// stfs f9,1140(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 1140, temp.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// stfs f9,1144(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 1144, temp.u32);
	// stw r22,1152(r31)
	REX_STORE_U32(r31.u32 + 1152, r22.u32);
	// addi r11,r11,20312
	ctx.r11.s64 = ctx.r11.s64 + 20312;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82234058;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8223409c
	if (ctx.cr0.eq) goto loc_8223409C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,-19520
	ctx.r4.s64 = ctx.r11.s64 + -19520;
	// bl 0x82120600
	ctx.lr = 0x82234070;
	sub_82120600(ctx, base);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lwz r4,-15376(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -15376);
	// bl 0x82120600
	ctx.lr = 0x82234080;
	sub_82120600(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,3
	r30.s64 = 3;
	// bl 0x821d58c8
	ctx.lr = 0x82234098;
	sub_821D58C8(ctx, base);
	// b 0x822340a0
	goto loc_822340A0;
loc_8223409C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822340A0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822340B4;
	sub_82145710(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x822340C0;
	sub_8269CE98(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x822340C8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822340f0
	if (ctx.cr0.eq) goto loc_822340F0;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
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
	// b 0x822340f4
	goto loc_822340F4;
loc_822340F0:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_822340F4:
	// rlwinm. r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// stb r22,33(r29)
	REX_STORE_U8(r29.u32 + 33, r22.u8);
	// beq 0x82234118
	if (ctx.cr0.eq) goto loc_82234118;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82234118;
	sub_82120AC0(ctx, base);
loc_82234118:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234134
	if (ctx.cr0.eq) goto loc_82234134;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82234134;
	sub_82120AC0(ctx, base);
loc_82234134:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8223413C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223416c
	if (ctx.cr0.eq) goto loc_8223416C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-19496
	ctx.r4.s64 = ctx.r11.s64 + -19496;
	// bl 0x82120600
	ctx.lr = 0x82234154;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x82234168;
	sub_82196BA8(ctx, base);
	// b 0x82234170
	goto loc_82234170;
loc_8223416C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234170:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234180;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223419c
	if (ctx.cr0.eq) goto loc_8223419C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8223419C;
	sub_82120AC0(ctx, base);
loc_8223419C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822341A4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822341d4
	if (ctx.cr0.eq) goto loc_822341D4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,-19464
	ctx.r4.s64 = ctx.r11.s64 + -19464;
	// bl 0x82120600
	ctx.lr = 0x822341BC;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x822341D0;
	sub_82196BA8(ctx, base);
	// b 0x822341d8
	goto loc_822341D8;
loc_822341D4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822341D8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822341E8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234204
	if (ctx.cr0.eq) goto loc_82234204;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82234204;
	sub_82120AC0(ctx, base);
loc_82234204:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8223420C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223424c
	if (ctx.cr0.eq) goto loc_8223424C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,-19444
	ctx.r4.s64 = ctx.r11.s64 + -19444;
	// bl 0x82120600
	ctx.lr = 0x82234224;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x821bf110
	ctx.lr = 0x82234238;
	sub_821BF110(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-14480
	ctx.r10.s64 = ctx.r10.s64 + -14480;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x82234250
	goto loc_82234250;
loc_8223424C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82234250:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234260;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223427c
	if (ctx.cr0.eq) goto loc_8223427C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8223427C;
	sub_82120AC0(ctx, base);
loc_8223427C:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x82234284;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822342b4
	if (ctx.cr0.eq) goto loc_822342B4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,-19416
	ctx.r4.s64 = ctx.r11.s64 + -19416;
	// bl 0x82120600
	ctx.lr = 0x8223429C;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x821bf110
	ctx.lr = 0x822342B0;
	sub_821BF110(ctx, base);
	// b 0x822342b8
	goto loc_822342B8;
loc_822342B4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822342B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822342C8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822342e4
	if (ctx.cr0.eq) goto loc_822342E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x822342E4;
	sub_82120AC0(ctx, base);
loc_822342E4:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x822342EC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223431c
	if (ctx.cr0.eq) goto loc_8223431C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,-19860
	ctx.r4.s64 = ctx.r11.s64 + -19860;
	// bl 0x82120600
	ctx.lr = 0x82234304;
	sub_82120600(ctx, base);
	// addi r5,r31,1024
	ctx.r5.s64 = r31.s64 + 1024;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x8219db58
	ctx.lr = 0x82234318;
	sub_8219DB58(ctx, base);
	// b 0x82234320
	goto loc_82234320;
loc_8223431C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234320:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234330;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223434c
	if (ctx.cr0.eq) goto loc_8223434C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x8223434C;
	sub_82120AC0(ctx, base);
loc_8223434C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82234354;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82234384
	if (ctx.cr0.eq) goto loc_82234384;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,-19840
	ctx.r4.s64 = ctx.r11.s64 + -19840;
	// bl 0x82120600
	ctx.lr = 0x8223436C;
	sub_82120600(ctx, base);
	// addi r5,r31,1040
	ctx.r5.s64 = r31.s64 + 1040;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x8219db58
	ctx.lr = 0x82234380;
	sub_8219DB58(ctx, base);
	// b 0x82234388
	goto loc_82234388;
loc_82234384:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234388:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234398;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822343b4
	if (ctx.cr0.eq) goto loc_822343B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x822343B4;
	sub_82120AC0(ctx, base);
loc_822343B4:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x822343BC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822343ec
	if (ctx.cr0.eq) goto loc_822343EC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-19820
	ctx.r4.s64 = ctx.r11.s64 + -19820;
	// bl 0x82120600
	ctx.lr = 0x822343D4;
	sub_82120600(ctx, base);
	// addi r5,r31,1056
	ctx.r5.s64 = r31.s64 + 1056;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x8219e240
	ctx.lr = 0x822343E8;
	sub_8219E240(ctx, base);
	// b 0x822343f0
	goto loc_822343F0;
loc_822343EC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822343F0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234400;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223441c
	if (ctx.cr0.eq) goto loc_8223441C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x8223441C;
	sub_82120AC0(ctx, base);
loc_8223441C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x822f6280
	ctx.lr = 0x82234424;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82234454
	if (ctx.cr0.eq) goto loc_82234454;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,-19800
	ctx.r4.s64 = ctx.r11.s64 + -19800;
	// bl 0x82120600
	ctx.lr = 0x8223443C;
	sub_82120600(ctx, base);
	// addi r5,r31,1072
	ctx.r5.s64 = r31.s64 + 1072;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x8219e240
	ctx.lr = 0x82234450;
	sub_8219E240(ctx, base);
	// b 0x82234458
	goto loc_82234458;
loc_82234454:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234458:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234468;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234484
	if (ctx.cr0.eq) goto loc_82234484;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x82234484;
	sub_82120AC0(ctx, base);
loc_82234484:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8223448C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822344bc
	if (ctx.cr0.eq) goto loc_822344BC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-19780
	ctx.r4.s64 = ctx.r11.s64 + -19780;
	// bl 0x82120600
	ctx.lr = 0x822344A4;
	sub_82120600(ctx, base);
	// addi r5,r31,1088
	ctx.r5.s64 = r31.s64 + 1088;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x82196ba8
	ctx.lr = 0x822344B8;
	sub_82196BA8(ctx, base);
	// b 0x822344c0
	goto loc_822344C0;
loc_822344BC:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822344C0:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822344D0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822344ec
	if (ctx.cr0.eq) goto loc_822344EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x822344EC;
	sub_82120AC0(ctx, base);
loc_822344EC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822344F4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82234524
	if (ctx.cr0.eq) goto loc_82234524;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-19756
	ctx.r4.s64 = ctx.r11.s64 + -19756;
	// bl 0x82120600
	ctx.lr = 0x8223450C;
	sub_82120600(ctx, base);
	// addi r5,r31,1092
	ctx.r5.s64 = r31.s64 + 1092;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x82196ba8
	ctx.lr = 0x82234520;
	sub_82196BA8(ctx, base);
	// b 0x82234528
	goto loc_82234528;
loc_82234524:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234528:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234538;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234554
	if (ctx.cr0.eq) goto loc_82234554;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x82234554;
	sub_82120AC0(ctx, base);
loc_82234554:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8223455C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223458c
	if (ctx.cr0.eq) goto loc_8223458C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-23100
	ctx.r4.s64 = ctx.r11.s64 + -23100;
	// bl 0x82120600
	ctx.lr = 0x82234574;
	sub_82120600(ctx, base);
	// addi r5,r31,1096
	ctx.r5.s64 = r31.s64 + 1096;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x82196ba8
	ctx.lr = 0x82234588;
	sub_82196BA8(ctx, base);
	// b 0x82234590
	goto loc_82234590;
loc_8223458C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234590:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822345A0;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822345bc
	if (ctx.cr0.eq) goto loc_822345BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x822345BC;
	sub_82120AC0(ctx, base);
loc_822345BC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822345C4;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822345f4
	if (ctx.cr0.eq) goto loc_822345F4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-19700
	ctx.r4.s64 = ctx.r11.s64 + -19700;
	// bl 0x82120600
	ctx.lr = 0x822345DC;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x822345F0;
	sub_82196BA8(ctx, base);
	// b 0x822345f8
	goto loc_822345F8;
loc_822345F4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822345F8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234608;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82234624
	if (ctx.cr0.eq) goto loc_82234624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82234624;
	sub_82120AC0(ctx, base);
loc_82234624:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x8223462C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223465c
	if (ctx.cr0.eq) goto loc_8223465C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-19680
	ctx.r4.s64 = ctx.r11.s64 + -19680;
	// bl 0x82120600
	ctx.lr = 0x82234644;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x82234658;
	sub_82196BA8(ctx, base);
	// b 0x82234660
	goto loc_82234660;
loc_8223465C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234660:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234670;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223468c
	if (ctx.cr0.eq) goto loc_8223468C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r30,r30,0,18,16
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8223468C;
	sub_82120AC0(ctx, base);
loc_8223468C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82234694;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822346c4
	if (ctx.cr0.eq) goto loc_822346C4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,-19660
	ctx.r4.s64 = ctx.r11.s64 + -19660;
	// bl 0x82120600
	ctx.lr = 0x822346AC;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
	// bl 0x82196ba8
	ctx.lr = 0x822346C0;
	sub_82196BA8(ctx, base);
	// b 0x822346c8
	goto loc_822346C8;
loc_822346C4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_822346C8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822346D8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822346f4
	if (ctx.cr0.eq) goto loc_822346F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rlwinm r30,r30,0,17,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x822346F4;
	sub_82120AC0(ctx, base);
loc_822346F4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822346FC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8223472c
	if (ctx.cr0.eq) goto loc_8223472C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,-19636
	ctx.r4.s64 = ctx.r11.s64 + -19636;
	// bl 0x82120600
	ctx.lr = 0x82234714;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,1
	r30.u64 = r30.u64 | 65536;
	// bl 0x82196ba8
	ctx.lr = 0x82234728;
	sub_82196BA8(ctx, base);
	// b 0x82234730
	goto loc_82234730;
loc_8223472C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234730:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82234740;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223475c
	if (ctx.cr0.eq) goto loc_8223475C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// rlwinm r30,r30,0,16,14
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x8223475C;
	sub_82120AC0(ctx, base);
loc_8223475C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82234764;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82234794
	if (ctx.cr0.eq) goto loc_82234794;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,-19620
	ctx.r4.s64 = ctx.r11.s64 + -19620;
	// bl 0x82120600
	ctx.lr = 0x8223477C;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// oris r30,r30,2
	r30.u64 = r30.u64 | 131072;
	// bl 0x82196ba8
	ctx.lr = 0x82234790;
	sub_82196BA8(ctx, base);
	// b 0x82234798
	goto loc_82234798;
loc_82234794:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_82234798:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822347A8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822347c0
	if (ctx.cr0.eq) goto loc_822347C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x822347C0;
	sub_82120AC0(ctx, base);
loc_822347C0:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x822347C8;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82234848
	if (ctx.cr0.eq) goto loc_82234848;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r11,r11,18904
	ctx.r11.s64 = ctx.r11.s64 + 18904;
	// addi r4,r10,-19600
	ctx.r4.s64 = ctx.r10.s64 + -19600;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x822347FC;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r11,r11,-23836
	ctx.r11.s64 = ctx.r11.s64 + -23836;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82234810;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82234838
	if (ctx.cr0.eq) goto loc_82234838;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-19528
	ctx.r9.s64 = ctx.r9.s64 + -19528;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// b 0x8223483c
	goto loc_8223483C;
loc_82234838:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_8223483C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x8223484c
	goto loc_8223484C;
loc_82234848:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_8223484C:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x82234864;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8223486C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x822348a4
	if (ctx.cr0.eq) goto loc_822348A4;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19592
	ctx.r4.s64 = ctx.r11.s64 + -19592;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x82234890;
	sub_821DBB48(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r11,r11,-23824
	ctx.r11.s64 = ctx.r11.s64 + -23824;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x822348a8
	goto loc_822348A8;
loc_822348A4:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_822348A8:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x822348C0;
	sub_82264568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_82277A30) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,-16904
	ctx.r9.s64 = ctx.r9.s64 + -16904;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f0,172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,20(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stfs f31,24(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r30,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, r30.u8);
	// stfs f31,32(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// stfs f31,36(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,40(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f31,64(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82277ABC;
	sub_82120AC0(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82277ACC;
	sub_82120AC0(ctx, base);
	// stfs f31,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82277AE0;
	sub_82120AC0(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82277AF0;
	sub_82120AC0(ctx, base);
	// stfs f31,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f31,192(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82120ac0
	ctx.lr = 0x82277B08;
	sub_82120AC0(ctx, base);
	// stb r30,224(r31)
	REX_STORE_U8(r31.u32 + 224, r30.u8);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_822806D0) {
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
	ctx.lr = 0x822806D8;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// lwz r31,468(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 468);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x821c3de8
	ctx.lr = 0x82280704;
	sub_821C3DE8(ctx, base);
	// lfs f0,576(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,580(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,584(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 584);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8216d040
	ctx.lr = 0x82280734;
	sub_8216D040(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82280d70
	ctx.lr = 0x82280768;
	sub_82280D70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82280f80
	ctx.lr = 0x82280778;
	sub_82280F80(ctx, base);
	// lfs f0,328(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x822807a4
	if (ctx.cr6.eq) goto loc_822807A4;
	// lfs f13,320(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822807d0
	if (!ctx.cr6.gt) goto loc_822807D0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822811d0
	ctx.lr = 0x822807A0;
	sub_822811D0(ctx, base);
	// b 0x822807d0
	goto loc_822807D0;
loc_822807A4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82281390
	ctx.lr = 0x822807B4;
	sub_82281390(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822815e8
	ctx.lr = 0x822807C4;
	sub_822815E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822817d8
	ctx.lr = 0x822807D0;
	sub_822817D8(ctx, base);
loc_822807D0:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lwz r11,436(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 436);
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,468(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// addi r6,r8,320
	ctx.r6.s64 = ctx.r8.s64 + 320;
	// lfs f0,260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,240
	ctx.r8.s64 = ctx.r11.s64 + 240;
	// lfs f13,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f8,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 264);
	ctx.f12.f64 = double(temp.f32);
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// lfs f7,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f7.f64 = double(temp.f32);
	// ld r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// lfs f5,240(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// ld r6,8(r6)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// lfs f6,256(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// std r8,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r8.u64);
	// std r6,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lfs f2,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f8,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f9.f64, ctx.f13.f64)));
	// lfs f29,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f29.f64 = double(temp.f32);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fsubs f8,f1,f6
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f6.f64));
	// fmadds f13,f5,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f0,f4,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f0.f64)));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// fmadds f0,f5,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f8.f64, ctx.f0.f64)));
	// ble cr6,0x822808d0
	if (!ctx.cr6.gt) goto loc_822808D0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x822808d0
	if (!ctx.cr6.lt) goto loc_822808D0;
	// lwz r10,468(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 468);
	// lfs f12,228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 352);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822808d0
	if (!ctx.cr6.gt) goto loc_822808D0;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x822808d0
	if (!ctx.cr6.gt) goto loc_822808D0;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_822808D0:
	// lfs f13,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x8228094c
	if (!ctx.cr6.gt) goto loc_8228094C;
	// lfs f13,1436(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8228094c
	if (!ctx.cr6.lt) goto loc_8228094C;
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f13,680(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 680);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r9,256
	ctx.r10.s64 = ctx.r9.s64 + 256;
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r9,256
	ctx.r8.s64 = ctx.r9.s64 + 256;
	// fsubs f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfsx f12,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
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
	// rlwinm r7,r10,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// lfsx f13,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// stfs f0,348(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 348, temp.u32);
loc_8228094C:
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82280960
	if (!ctx.cr6.gt) goto loc_82280960;
	// lfs f2,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// b 0x82280964
	goto loc_82280964;
loc_82280960:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
loc_82280964:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822c0838
	ctx.lr = 0x82280970;
	sub_822C0838(ctx, base);
	// lfs f0,368(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,372(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f12,376(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 376);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// addi r11,r31,432
	ctx.r11.s64 = r31.s64 + 432;
	// addi r11,r31,448
	ctx.r11.s64 = r31.s64 + 448;
	// lfs f11,432(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,436(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 436);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,432(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 432, temp.u32);
	// fadds f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lfs f9,440(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 440);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,436(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 436, temp.u32);
	// fadds f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 440, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,612(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,616(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 616);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,448(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 448);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,452(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 452);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,608(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 448, temp.u32);
	// fadds f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f12,456(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 456, temp.u32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 452, temp.u32);
	// lbz r11,344(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 344);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82280a20
	if (ctx.cr0.eq) goto loc_82280A20;
	// lwz r11,436(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 436);
	// lfs f0,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82280a20
	if (!ctx.cr6.gt) goto loc_82280A20;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,344(r30)
	REX_STORE_U8(r30.u32 + 344, ctx.r11.u8);
loc_82280A20:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

DEFINE_REX_FUNC(sub_822A4470) {
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
	ctx.lr = 0x822A4478;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A44A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// ld r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 48);
	// ld r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 56);
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fabs f10,f13
	ctx.f10.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// fadds f7,f0,f1
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f6,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fabs f8,f13
	ctx.f8.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fabs f6,f6
	ctx.f6.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fabs f5,f5
	ctx.f5.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fabs f4,f0
	ctx.f4.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,32(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f31,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f31.f64 = double(temp.f32);
	// fabs f2,f2
	ctx.f2.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lfs f3,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fabs f31,f31
	f31.u64 = f31.u64 & ~0x8000000000000000;
	// fmuls f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fabs f3,f3
	ctx.f3.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lfs f0,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f11,f6,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f9.f64)));
	// fmadds f10,f7,f4,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f9,f7,f5,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f8.f64)));
	// fmadds f11,f2,f1,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f11.f64)));
	// fmadds f10,f1,f3,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmadds f9,f31,f1,f9
	ctx.f9.f64 = double(float(std::fma(f31.f64, ctx.f1.f64, ctx.f9.f64)));
	// fsubs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// ld r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fadds f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r6.u32 + 8);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,0(r29)
	REX_STORE_U64(r29.u32 + 0, ctx.r11.u64);
	// std r8,8(r29)
	REX_STORE_U64(r29.u32 + 8, ctx.r8.u64);
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// std r9,8(r28)
	REX_STORE_U64(r28.u32 + 8, ctx.r9.u64);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822B07F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B0A40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B37A0) {
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
	// bl 0x826a1c90
	ctx.lr = 0x822B37A8;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2c94
	ctx.lr = 0x822B37B0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f6,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f5,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// li r18,1
	r18.s64 = 1;
	// lfs f7,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lfs f4,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f5,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f11,f4,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// lfs f1,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	f27.f64 = double(temp.f32);
	// fsubs f9,f1,f7
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// lfs f8,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f26,f1,f27
	f26.f64 = double(float(ctx.f1.f64 - f27.f64));
	// lfs f3,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f27,f7
	ctx.f7.f64 = double(float(f27.f64 - ctx.f7.f64));
	// lfs f2,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f3,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f10,f2,f6
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfs f30,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f30.f64 = double(temp.f32);
	// lfs f29,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	f29.f64 = double(temp.f32);
	// fsubs f4,f30,f4
	ctx.f4.f64 = double(float(f30.f64 - ctx.f4.f64));
	// fsubs f13,f29,f8
	ctx.f13.f64 = double(float(f29.f64 - ctx.f8.f64));
	// lfs f25,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f25.f64 = double(temp.f32);
	// fsubs f28,f2,f30
	f28.f64 = double(float(ctx.f2.f64 - f30.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fsubs f6,f30,f6
	ctx.f6.f64 = double(float(f30.f64 - ctx.f6.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmuls f27,f11,f12
	f27.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f29,f3,f29
	f29.f64 = double(float(ctx.f3.f64 - f29.f64));
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f8,f25,f8
	ctx.f8.f64 = double(float(f25.f64 - ctx.f8.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f1,f5,f1
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmuls f24,f9,f10
	f24.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fsubs f3,f25,f3
	ctx.f3.f64 = double(float(f25.f64 - ctx.f3.f64));
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f6,148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f9,f26,f28
	ctx.f9.f64 = double(float(f26.f64 * f28.f64));
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f30,f27,f0
	f30.f64 = double(float(f27.f64 * ctx.f0.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// fmuls f27,f1,f29
	f27.f64 = double(float(ctx.f1.f64 * f29.f64));
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// fmsubs f9,f4,f1,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, -ctx.f9.f64)));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmadds f13,f24,f13,f30
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f13.f64, f30.f64)));
	// fmsubs f3,f26,f3,f27
	ctx.f3.f64 = double(float(std::fma(f26.f64, ctx.f3.f64, -f27.f64)));
	// fmuls f9,f25,f9
	ctx.f9.f64 = double(float(f25.f64 * ctx.f9.f64));
	// fmsubs f4,f28,f29,f4
	ctx.f4.f64 = double(float(std::fma(f28.f64, f29.f64, -ctx.f4.f64)));
	// fnmsubs f13,f11,f8,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f8.f64, -ctx.f13.f64)));
	// fmadds f11,f2,f3,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f9.f64)));
	// fnmsubs f0,f10,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmadds f13,f5,f4,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f11.f64)));
	// fmadds f0,f7,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f0.f64)));
	// fnmsubs f30,f12,f6,f0
	f30.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f6.f64, -ctx.f0.f64)));
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822b38ec
	if (!ctx.cr6.gt) goto loc_822B38EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B38EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b3b30
	if (ctx.cr0.eq) goto loc_822B3B30;
	// fabs f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822b3b30
	if (!ctx.cr6.gt) goto loc_822B3B30;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r19,r11,16592
	r19.s64 = ctx.r11.s64 + 16592;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r20,0
	r20.s64 = 0;
	// addi r23,r1,132
	r23.s64 = ctx.r1.s64 + 132;
	// li r29,0
	r29.s64 = 0;
	// lfs f29,8(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8);
	f29.f64 = double(temp.f32);
	// addi r22,r11,7052
	r22.s64 = ctx.r11.s64 + 7052;
loc_822B3934:
	// lwzx r27,r29,r22
	r27.u64 = REX_LOAD_U32(r29.u32 + r22.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,-4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmsubs f13,f5,f13,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, -ctx.f7.f64)));
	// fmsubs f12,f8,f12,f4
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f4.f64)));
	// fmsubs f0,f6,f0,f3
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, -ctx.f3.f64)));
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f9,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x822b3a28
	if (!ctx.cr6.gt) goto loc_822B3A28;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r29,r10
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x822b34b0
	ctx.lr = 0x822B39BC;
	sub_822B34B0(ctx, base);
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// blt cr6,0x822b39cc
	if (ctx.cr6.lt) goto loc_822B39CC;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x822b3a28
	if (!ctx.cr6.lt) goto loc_822B3A28;
loc_822B39CC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// slw r9,r18,r20
	ctx.r9.u64 = r20.u8 & 0x20 ? 0 : (r18.u32 << (r20.u8 & 0x3F));
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b39e4
	if (!ctx.cr0.eq) goto loc_822B39E4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822B39E4:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r10,r18,r27
	ctx.r10.u64 = r27.u8 & 0x20 ? 0 : (r18.u32 << (r27.u8 & 0x3F));
	// bne 0x822b39f4
	if (!ctx.cr0.eq) goto loc_822B39F4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822B39F4:
	// lwzx r8,r28,r22
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + r22.u32);
	// rlwinm r11,r11,1,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x8;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfsx f0,r29,r30
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + r30.u32, temp.u32);
	// stfsx f13,r28,r30
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + r30.u32, temp.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f31,r8,r30
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r8.u32 + r30.u32, temp.u32);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
loc_822B3A28:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r23,r23,16
	r23.s64 = r23.s64 + 16;
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(r29.u32, 12, ctx.xer);
	// blt cr6,0x822b3934
	if (ctx.cr6.lt) goto loc_822B3934;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f31.f64);
	// bge cr6,0x822b3b28
	if (!ctx.cr6.lt) goto loc_822B3B28;
	// lfs f0,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,15
	ctx.r11.s64 = 15;
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f7,8(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f8,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r11.u32);
	// lfs f6,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// lfs f1,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f28,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	f28.f64 = double(temp.f32);
	// fmuls f31,f5,f0
	f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f27,f28,f0
	f27.f64 = double(float(f28.f64 * ctx.f0.f64));
	// lfs f26,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f25,f11,f8
	f25.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfs f0,12(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f24,f10,f9
	f24.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f23,f13,f1
	f23.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f6,f6,f26
	ctx.f6.f64 = double(float(ctx.f6.f64 * f26.f64));
	// fmuls f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 * f26.f64));
	// fmuls f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * f28.f64));
	// fmuls f26,f26,f28
	f26.f64 = double(float(f26.f64 * f28.f64));
	// fdivs f30,f0,f30
	f30.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fmadds f4,f4,f2,f25
	ctx.f4.f64 = double(float(std::fma(ctx.f4.f64, ctx.f2.f64, f25.f64)));
	// fmadds f3,f3,f2,f24
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, f24.f64)));
	// fmadds f28,f27,f2,f23
	f28.f64 = double(float(std::fma(f27.f64, ctx.f2.f64, f23.f64)));
	// fnmsubs f10,f10,f1,f4
	ctx.f10.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f1.f64, -ctx.f4.f64)));
	// fnmsubs f13,f13,f8,f3
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f3.f64)));
	// fnmsubs f11,f11,f9,f28
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f9.f64, -f28.f64)));
	// fnmsubs f10,f6,f8,f10
	ctx.f10.f64 = double(float(-std::fma(ctx.f6.f64, ctx.f8.f64, -ctx.f10.f64)));
	// fnmsubs f13,f5,f9,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f9.f64, -ctx.f13.f64)));
	// fnmsubs f11,f26,f1,f11
	ctx.f11.f64 = double(float(-std::fma(f26.f64, ctx.f1.f64, -ctx.f11.f64)));
	// fmadds f10,f5,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f13,f26,f8,f13
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f11,f6,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f11.f64)));
	// fnmsubs f10,f31,f2,f10
	ctx.f10.f64 = double(float(-std::fma(f31.f64, ctx.f2.f64, -ctx.f10.f64)));
	// fnmsubs f13,f12,f2,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f2.f64, -ctx.f13.f64)));
	// fnmsubs f12,f7,f2,f11
	ctx.f12.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f2.f64, -ctx.f11.f64)));
	// fmuls f11,f10,f30
	ctx.f11.f64 = double(float(ctx.f10.f64 * f30.f64));
	// stfs f11,8(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
loc_822B3B28:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// b 0x822b3b3c
	goto loc_822B3B3C;
loc_822B3B30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
loc_822B3B3C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x826a2ce0
	ctx.lr = 0x822B3B48;
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_822CF950) {
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
	ctx.lr = 0x822CF958;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// bl 0x82793a84
	ctx.lr = 0x822CF96C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r11,16772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16772);
	// addi r10,r3,-2
	ctx.r10.s64 = ctx.r3.s64 + -2;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,16772(r31)
	REX_STORE_U32(r31.u32 + 16772, ctx.r11.u32);
	// addic r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r5,24
	ctx.r5.s64 = 24;
	// subfe r18,r11,r10
	temp.u8 = (~ctx.r11.u32 + ctx.r10.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	r18.u64 = ~ctx.r11.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x826a1e70
	ctx.lr = 0x822CF994;
	sub_826A1E70(ctx, base);
	// lwz r11,13820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13820);
	// li r17,3
	r17.s64 = 3;
	// lwz r29,132(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r10,r29,26
	ctx.r10.u64 = r29.u32 & 0x3F;
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x822cf9b4
	if (!ctx.cr6.eq) goto loc_822CF9B4;
	// rlwimi r29,r17,1,26,31
	r29.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0x3F) | (r29.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x822cf9c4
	goto loc_822CF9C4;
loc_822CF9B4:
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822cf9c8
	if (!ctx.cr6.eq) goto loc_822CF9C8;
	// li r10,27
	ctx.r10.s64 = 27;
	// rlwimi r29,r10,1,26,31
	r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3F) | (r29.u64 & 0xFFFFFFFFFFFFFFC0);
loc_822CF9C4:
	// stw r29,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r29.u32);
loc_822CF9C8:
	// rlwinm r30,r11,15,17,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// lwz r10,140(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r31,15056
	ctx.r3.s64 = r31.s64 + 15056;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwimi r9,r11,25,22,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r8,r10,0,31,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE001) | (ctx.r8.u64 & 0x1FFE);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// rlwimi r30,r8,0,0,30
	r30.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x826a1e70
	ctx.lr = 0x822CF9FC;
	sub_826A1E70(ctx, base);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r30,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x2;
	// lwz r10,13824(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13824);
	// clrlwi r7,r9,19
	ctx.r7.u64 = ctx.r9.u32 & 0x1FFF;
	// lwz r5,21840(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 21840);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r9,19,19,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r9,r29,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// clrlwi r8,r29,26
	ctx.r8.u64 = r29.u32 & 0x3F;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// li r19,0
	r19.s64 = 0;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r29,r19
	r29.u64 = r19.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// beq cr6,0x822cfb18
	if (ctx.cr6.eq) goto loc_822CFB18;
	// lwz r10,21832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21832);
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21836);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bge cr6,0x822cfb18
	if (!ctx.cr6.lt) goto loc_822CFB18;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r19.u32);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21836);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r19.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21836);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x822cfad4
	if (!ctx.cr6.gt) goto loc_822CFAD4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CFAD4;
	sub_822D5B28(ctx, base);
loc_822CFAD4:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r11,22528
	ctx.r9.u64 = ctx.r11.u64 | 22528;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r8,48879
	ctx.r10.u64 = ctx.r8.u64 | 48879;
	// li r29,1
	r29.s64 = 1;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822CFB18:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x822cfb58
	if (ctx.cr6.eq) goto loc_822CFB58;
	// addi r10,r31,13852
	ctx.r10.s64 = r31.s64 + 13852;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// addi r8,r20,28
	ctx.r8.s64 = r20.s64 + 28;
loc_822CFB2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cfb4c
	if (!ctx.cr0.eq) goto loc_822CFB4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822cfb2c
	if (!ctx.cr6.eq) goto loc_822CFB2C;
loc_822CFB4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r26,1
	r26.s64 = 1;
	// bne 0x822cfb5c
	if (!ctx.cr0.eq) goto loc_822CFB5C;
loc_822CFB58:
	// mr r26,r19
	r26.u64 = r19.u64;
loc_822CFB5C:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x822cfbb0
	if (ctx.cr6.eq) goto loc_822CFBB0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cfb90
	if (ctx.cr6.eq) goto loc_822CFB90;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cfb8c
	if (!ctx.cr6.gt) goto loc_822CFB8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CFB8C;
	sub_822D5B28(ctx, base);
loc_822CFB8C:
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_822CFB90:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822cfba4
	if (ctx.cr6.eq) goto loc_822CFBA4;
	// lwz r11,24168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24168);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,24168(r31)
	REX_STORE_U32(r31.u32 + 24168, ctx.r11.u32);
loc_822CFBA4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e5788
	ctx.lr = 0x822CFBB0;
	sub_822E5788(ctx, base);
loc_822CFBB0:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82793cc4
	ctx.lr = 0x822CFBBC;
	__imp__VdGetSystemCommandBuffer(ctx, base);
	// lwz r11,21744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfc08
	if (ctx.cr6.eq) goto loc_822CFC08;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cfbec
	if (!ctx.cr6.gt) goto loc_822CFBEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CFBEC;
	sub_822D5B28(ctx, base);
loc_822CFBEC:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x822cfc58
	goto loc_822CFC58;
loc_822CFC08:
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d48b8
	ctx.lr = 0x822CFC14;
	sub_822D48B8(ctx, base);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82793cb4
	ctx.lr = 0x822CFC50;
	__imp__VdSwap(ctx, base);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_822CFC58:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,23560(r31)
	REX_STORE_U32(r31.u32 + 23560, ctx.r11.u32);
	// beq cr6,0x822cfce8
	if (ctx.cr6.eq) goto loc_822CFCE8;
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21836);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 56);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x822cfc9c
	if (!ctx.cr6.gt) goto loc_822CFC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CFC9C;
	sub_822D5B28(ctx, base);
loc_822CFC9C:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r9,r11,22528
	ctx.r9.u64 = ctx.r11.u64 | 22528;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r8,-8531
	ctx.r8.s64 = -559087616;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r10,r8,48879
	ctx.r10.u64 = ctx.r8.u64 | 48879;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,21836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21836);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stw r11,21836(r31)
	REX_STORE_U32(r31.u32 + 21836, ctx.r11.u32);
loc_822CFCE8:
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfcf8
	if (ctx.cr6.eq) goto loc_822CFCF8;
	// stw r11,24188(r31)
	REX_STORE_U32(r31.u32 + 24188, ctx.r11.u32);
loc_822CFCF8:
	// lwz r27,16920(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 16920);
	// stw r19,16920(r31)
	REX_STORE_U32(r31.u32 + 16920, r19.u32);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfd90
	if (ctx.cr0.eq) goto loc_822CFD90;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x822cfd68
	if (ctx.cr6.eq) goto loc_822CFD68;
	// lwz r11,13820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13820);
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x822cfd2c
	if (ctx.cr6.eq) goto loc_822CFD2C;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x822cfd30
	if (!ctx.cr6.eq) goto loc_822CFD30;
loc_822CFD2C:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_822CFD30:
	// lwz r11,13824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13824);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,13756(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 13756);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 720, ctx.xer);
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x822cfd64
	if (!ctx.cr6.eq) goto loc_822CFD64;
	// lwz r11,13760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13760);
	// cmplwi cr6,r11,480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 480, ctx.xer);
	// beq cr6,0x822cfd60
	if (ctx.cr6.eq) goto loc_822CFD60;
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x822cfd64
	if (!ctx.cr6.eq) goto loc_822CFD64;
loc_822CFD60:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_822CFD64:
	// bl 0x82793d74
	ctx.lr = 0x822CFD68;
	__imp__VdSetDisplayMode(ctx, base);
loc_822CFD68:
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82793d94
	ctx.lr = 0x822CFD70;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,440(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 440);
	// lhz r10,442(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 442);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r9,454(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 454);
	// stw r11,21756(r31)
	REX_STORE_U32(r31.u32 + 21756, ctx.r11.u32);
	// stw r10,21760(r31)
	REX_STORE_U32(r31.u32 + 21760, ctx.r10.u32);
	// stw r9,21764(r31)
	REX_STORE_U32(r31.u32 + 21764, ctx.r9.u32);
	// bl 0x822d5b28
	ctx.lr = 0x822CFD90;
	sub_822D5B28(ctx, base);
loc_822CFD90:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x822cfdb4
	if (ctx.cr6.eq) goto loc_822CFDB4;
	// addi r3,r31,13852
	ctx.r3.s64 = r31.s64 + 13852;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x826a1e70
	ctx.lr = 0x822CFDA8;
	sub_826A1E70(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e38f0
	ctx.lr = 0x822CFDB4;
	sub_822E38F0(ctx, base);
loc_822CFDB4:
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfe8c
	if (ctx.cr6.eq) goto loc_822CFE8C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x822cfe8c
	if (!ctx.cr6.eq) goto loc_822CFE8C;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r3,r31,13880
	ctx.r3.s64 = r31.s64 + 13880;
	// mr r26,r19
	r26.u64 = r19.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// lis r29,10280
	r29.s64 = 673710080;
	// bne cr6,0x822cfdf0
	if (!ctx.cr6.eq) goto loc_822CFDF0;
	// ori r29,r29,310
	r29.u64 = r29.u64 | 310;
	// b 0x822cfdf4
	goto loc_822CFDF4;
loc_822CFDF0:
	// ori r29,r29,262
	r29.u64 = r29.u64 | 262;
loc_822CFDF4:
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cfe50
	if (ctx.cr6.eq) goto loc_822CFE50;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,56
	ctx.r8.s64 = ctx.r11.s64 + 56;
loc_822CFE0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822cfe2c
	if (!ctx.cr0.eq) goto loc_822CFE2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x822cfe0c
	if (!ctx.cr6.eq) goto loc_822CFE0C;
loc_822CFE2C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822cfe50
	if (ctx.cr0.eq) goto loc_822CFE50;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x826a1e70
	ctx.lr = 0x822CFE40;
	sub_826A1E70(ctx, base);
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
	// b 0x822cfe6c
	goto loc_822CFE6C;
loc_822CFE50:
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cfe70
	if (ctx.cr0.eq) goto loc_822CFE70;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cfe70
	if (!ctx.cr6.eq) goto loc_822CFE70;
	// addi r28,r31,13936
	r28.s64 = r31.s64 + 13936;
loc_822CFE6C:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
loc_822CFE70:
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cfe80
	if (!ctx.cr0.eq) goto loc_822CFE80;
	// ori r27,r27,3
	r27.u64 = r27.u64 | 3;
loc_822CFE80:
	// lwz r30,108(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x822cfef0
	goto loc_822CFEF0;
loc_822CFE8C:
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r29,13820(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 13820);
	// addi r28,r31,13936
	r28.s64 = r31.s64 + 13936;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r23,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// addi r26,r31,15216
	r26.s64 = r31.s64 + 15216;
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// beq 0x822cfedc
	if (ctx.cr0.eq) goto loc_822CFEDC;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,13880
	ctx.r3.s64 = r31.s64 + 13880;
	// bl 0x826a2e60
	ctx.lr = 0x822CFECC;
	sub_826A2E60(ctx, base);
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
loc_822CFEDC:
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822cfeec
	if (ctx.cr0.eq) goto loc_822CFEEC;
	// ori r27,r27,3
	r27.u64 = r27.u64 | 3;
loc_822CFEEC:
	// andi. r11,r11,191
	ctx.r11.u64 = ctx.r11.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_822CFEF0:
	// stb r11,10943(r31)
	REX_STORE_U8(r31.u32 + 10943, ctx.r11.u8);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822cff10
	if (!ctx.cr6.eq) goto loc_822CFF10;
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff14
	if (ctx.cr0.eq) goto loc_822CFF14;
loc_822CFF10:
	// mr r27,r19
	r27.u64 = r19.u64;
loc_822CFF14:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x822cff58
	if (ctx.cr6.eq) goto loc_822CFF58;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cf780
	ctx.lr = 0x822CFF54;
	sub_822CF780(ctx, base);
	// b 0x822cffc0
	goto loc_822CFFC0;
loc_822CFF58:
	// lwz r11,24192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24192);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cff74
	if (ctx.cr0.eq) goto loc_822CFF74;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cf418
	ctx.lr = 0x822CFF70;
	sub_822CF418(ctx, base);
	// b 0x822cffc0
	goto loc_822CFFC0;
loc_822CFF74:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cff8c
	if (!ctx.cr6.gt) goto loc_822CFF8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CFF8C;
	sub_822D5B28(ctx, base);
loc_822CFF8C:
	// li r10,6212
	ctx.r10.s64 = 6212;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// bl 0x822cf5e0
	ctx.lr = 0x822CFFC0;
	sub_822CF5E0(ctx, base);
loc_822CFFC0:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e0970
	ctx.lr = 0x822CFFE8;
	sub_822E0970(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0068
	if (ctx.cr0.eq) goto loc_822D0068;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq cr6,0x822d0068
	if (ctx.cr6.eq) goto loc_822D0068;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d0010
	if (!ctx.cr6.gt) goto loc_822D0010;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D0010;
	sub_822D5B28(ctx, base);
loc_822D0010:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r10,7758
	ctx.r10.s64 = 7758;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r19,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r7.u32 = ea;
	// std r19,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r19.u64);
	// stw r19,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r19.u32);
	// stw r7,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r7.u32);
	// bl 0x82793c84
	ctx.lr = 0x822D0054;
	__imp__VdPersistDisplay(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0068
	if (ctx.cr0.eq) goto loc_822D0068;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82793a34
	ctx.lr = 0x822D0068;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_822D0068:
	// lwz r30,10908(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,10928(r31)
	REX_STORE_U32(r31.u32 + 10928, r30.u32);
	// bl 0x822d5b28
	ctx.lr = 0x822D0078;
	sub_822D5B28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e5868
	ctx.lr = 0x822D0088;
	sub_822E5868(ctx, base);
	// lwz r11,15124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x822d5048
	ctx.lr = 0x822D0098;
	sub_822D5048(ctx, base);
	// lwz r4,15152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 15152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d00b4
	if (ctx.cr6.eq) goto loc_822D00B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5c28
	ctx.lr = 0x822D00B4;
	sub_822D5C28(ctx, base);
loc_822D00B4:
	// lwz r11,24192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24192);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d011c
	if (ctx.cr0.eq) goto loc_822D011C;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r17,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r17.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_822D00EC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822c5318
	ctx.lr = 0x822D00F4;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d0110
	if (ctx.cr0.eq) goto loc_822D0110;
	// lwz r11,16780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16780);
	// lwz r10,16772(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16772);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bge cr6,0x822d00ec
	if (!ctx.cr6.lt) goto loc_822D00EC;
loc_822D0110:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822c5250
	ctx.lr = 0x822D0118;
	sub_822C5250(ctx, base);
	// b 0x822d0120
	goto loc_822D0120;
loc_822D011C:
	// stw r30,15152(r31)
	REX_STORE_U32(r31.u32 + 15152, r30.u32);
loc_822D0120:
	// lbz r11,10941(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10941);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andi. r11,r11,239
	ctx.r11.u64 = ctx.r11.u64 & 239;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10941(r31)
	REX_STORE_U8(r31.u32 + 10941, ctx.r11.u8);
	// bl 0x822e1d70
	ctx.lr = 0x822D0134;
	sub_822E1D70(ctx, base);
	// lwz r11,13724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0148
	if (ctx.cr6.eq) goto loc_822D0148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D0148:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c1ad8
	ctx.lr = 0x822D0154;
	sub_822C1AD8(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82308BF8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82308c08
	if (!ctx.cr6.eq) goto loc_82308C08;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82308C08:
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82309570) {
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
	ctx.lr = 0x82309578;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823095a0
	if (ctx.cr6.eq) goto loc_823095A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_823095A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332540
	ctx.lr = 0x823095A8;
	sub_82332540(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823095C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82309620
	if (!ctx.cr0.eq) goto loc_82309620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823095E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82309620
	if (!ctx.cr0.eq) goto loc_82309620;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82309600
	if (ctx.cr6.eq) goto loc_82309600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82309600;
	sub_826A1E70(ctx, base);
loc_82309600:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230961c
	if (ctx.cr6.eq) goto loc_8230961C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82332188
	ctx.lr = 0x82309618;
	sub_82332188(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_8230961C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82309620:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8230F640) {
	REX_FUNC_PROLOGUE();
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8230f658
	if (!ctx.cr6.eq) goto loc_8230F658;
loc_8230F650:
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230F658:
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8230f650
	if (ctx.cr6.lt) goto loc_8230F650;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8230f650
	if (ctx.cr6.eq) goto loc_8230F650;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8230f68c
	if (!ctx.cr6.gt) goto loc_8230F68C;
loc_8230F67C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8230f650
	if (ctx.cr6.eq) goto loc_8230F650;
	// bdnz 0x8230f67c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8230F67C;
loc_8230F68C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f650
	if (ctx.cr6.eq) goto loc_8230F650;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230f6c4
	if (ctx.cr6.eq) goto loc_8230F6C4;
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// beq 0x8230f6bc
	if (ctx.cr0.eq) goto loc_8230F6BC;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-10820(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// b 0x82303ea8
	sub_82303EA8(ctx, base);
	return;
loc_8230F6BC:
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// b 0x8230a640
	sub_8230A640(ctx, base);
	return;
loc_8230F6C4:
	// li r3,91
	ctx.r3.s64 = 91;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82312D88) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82312dd0
	if (ctx.cr6.eq) goto loc_82312DD0;
	// lbz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82312df8
	if (!ctx.cr0.eq) goto loc_82312DF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312dfc
	if (!ctx.cr0.eq) goto loc_82312DFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82312df4
	goto loc_82312DF4;
loc_82312DD0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82312DE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82312dfc
	if (!ctx.cr0.eq) goto loc_82312DFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82312DF4:
	// stb r11,16(r31)
	REX_STORE_U8(r31.u32 + 16, ctx.r11.u8);
loc_82312DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312DFC:
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

DEFINE_REX_FUNC(sub_82314828) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82314858
	if (!ctx.cr6.eq) goto loc_82314858;
	// li r3,95
	ctx.r3.s64 = 95;
	// b 0x82314874
	goto loc_82314874;
loc_82314858:
	// bl 0x823165f0
	ctx.lr = 0x8231485C;
	sub_823165F0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82314874:
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

DEFINE_REX_FUNC(sub_82316630) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// stw r3,-10788(r11)
	REX_STORE_U32(ctx.r11.u32 + -10788, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82316A60) {
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
	ctx.lr = 0x82316A68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lfs f0,5916(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5916);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpld cr6,r27,r26
	ctx.cr6.compare<uint64_t>(r27.u64, r26.u64, ctx.xer);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// ble cr6,0x82316a98
	if (!ctx.cr6.gt) goto loc_82316A98;
	// subf r4,r26,r27
	ctx.r4.u64 = r27.u64 - r26.u64;
loc_82316A98:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82316ad4
	if (ctx.cr0.eq) goto loc_82316AD4;
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// li r8,8
	ctx.r8.s64 = 8;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// li r5,-1
	ctx.r5.s64 = -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r11,r8,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82316ad4
	if (!ctx.cr0.eq) goto loc_82316AD4;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r28,r11,2
	r28.u64 = ctx.r11.u64 | 2;
loc_82316AD4:
	// rlwinm. r11,r28,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// beq 0x82316b9c
	if (ctx.cr0.eq) goto loc_82316B9C;
	// lbz r11,1(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,3712(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f13,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// divdu r8,r4,r11
	ctx.r8.u64 = ctx.r11.u64 ? ctx.r4.u64 / ctx.r11.u64 : 0;
	// mulld r8,r8,r11
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r11.u64);
	// subf r8,r8,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r8.u64;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// beq cr6,0x82316b90
	if (ctx.cr6.eq) goto loc_82316B90;
	// clrlwi. r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// divdu r5,r4,r11
	ctx.r5.u64 = ctx.r11.u64 ? ctx.r4.u64 / ctx.r11.u64 : 0;
	// tdllei r11,0
	if (ctx.r11.s64 == 0ll || ctx.r11.u64 < 0ull) ppc_trap(ctx, base, 0);
	// beq 0x82316b8c
	if (ctx.cr0.eq) goto loc_82316B8C;
	// addi r8,r5,1
	ctx.r8.s64 = ctx.r5.s64 + 1;
	// mulld r5,r8,r11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r11.u64);
	// b 0x82316b90
	goto loc_82316B90;
loc_82316B8C:
	// mulld r5,r5,r11
	ctx.r5.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r11.u64);
loc_82316B90:
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r29,2
	r29.s64 = 2;
	// li r31,1
	r31.s64 = 1;
loc_82316B9C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82316bd8
	if (ctx.cr0.eq) goto loc_82316BD8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// bl 0x82316308
	ctx.lr = 0x82316BB0;
	sub_82316308(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82316bc0
	if (ctx.cr0.eq) goto loc_82316BC0;
	// cmpld cr6,r3,r30
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, r30.u64, ctx.xer);
	// bge cr6,0x82316bcc
	if (!ctx.cr6.lt) goto loc_82316BCC;
loc_82316BC0:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpld cr6,r3,r3
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r3.u64, ctx.xer);
loc_82316BCC:
	// bne cr6,0x82316bd4
	if (!ctx.cr6.eq) goto loc_82316BD4;
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
loc_82316BD4:
	// li r31,1
	r31.s64 = 1;
loc_82316BD8:
	// rlwinm. r11,r28,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82316c08
	if (ctx.cr0.eq) goto loc_82316C08;
	// clrlwi. r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r26,r27
	ctx.r11.u64 = r27.u64 - r26.u64;
	// beq 0x82316bf4
	if (ctx.cr0.eq) goto loc_82316BF4;
	// cmpld cr6,r11,r30
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r30.u64, ctx.xer);
	// bge cr6,0x82316c00
	if (!ctx.cr6.lt) goto loc_82316C00;
loc_82316BF4:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpld cr6,r11,r11
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r11.u64, ctx.xer);
loc_82316C00:
	// bne cr6,0x82316c08
	if (!ctx.cr6.eq) goto loc_82316C08;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
loc_82316C08:
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82316c18
	if (ctx.cr6.eq) goto loc_82316C18;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82316C18:
	// add r3,r30,r26
	ctx.r3.u64 = r30.u64 + r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82328DE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82328DF0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// beq cr6,0x82328e38
	if (ctx.cr6.eq) goto loc_82328E38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r28,-32129
	r28.s64 = -2105606144;
	// addi r29,r11,7904
	r29.s64 = ctx.r11.s64 + 7904;
loc_82328E10:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r31,0(r4)
	r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r6,84
	ctx.r6.s64 = 84;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82328E2C;
	sub_82330D00(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82328e10
	if (!ctx.cr6.eq) goto loc_82328E10;
loc_82328E38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8232ADB0) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8232aa00
	sub_8232AA00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232AE18) {
	REX_FUNC_PROLOGUE();
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B0A8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82331a00
	ctx.lr = 0x8232B0C8;
	sub_82331A00(ctx, base);
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

DEFINE_REX_FUNC(sub_8232CA70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,8328
	ctx.r9.s64 = ctx.r9.s64 + 8328;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D5E0) {
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
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232d60c
	if (ctx.cr6.eq) goto loc_8232D60C;
	// bl 0x82316cf0
	ctx.lr = 0x8232D604;
	sub_82316CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8232d618
	goto loc_8232D618;
loc_8232D60C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
loc_8232D618:
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

DEFINE_REX_FUNC(sub_8232F640) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8232F648;
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
	// bl 0x82332760
	ctx.lr = 0x8232F660;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f67c
	if (!ctx.cr6.eq) goto loc_8232F67C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82333fc8
	ctx.lr = 0x8232F67C;
	sub_82333FC8(ctx, base);
loc_8232F67C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82330398) {
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
	// bl 0x82351018
	ctx.lr = 0x823303B4;
	sub_82351018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823303c8
	if (!ctx.cr6.eq) goto loc_823303C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82351798
	ctx.lr = 0x823303C8;
	sub_82351798(ctx, base);
loc_823303C8:
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

DEFINE_REX_FUNC(sub_82333AD0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82333ae8
	if (!ctx.cr6.eq) goto loc_82333AE8;
	// addi r3,r3,23440
	ctx.r3.s64 = ctx.r3.s64 + 23440;
	// b 0x82354f18
	sub_82354F18(ctx, base);
	return;
loc_82333AE8:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82333af8
	if (!ctx.cr6.eq) goto loc_82333AF8;
	// addi r3,r3,24000
	ctx.r3.s64 = ctx.r3.s64 + 24000;
	// b 0x82354f18
	sub_82354F18(ctx, base);
	return;
loc_82333AF8:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82333b08
	if (!ctx.cr6.eq) goto loc_82333B08;
	// addi r3,r3,23720
	ctx.r3.s64 = ctx.r3.s64 + 23720;
	// b 0x82354f18
	sub_82354F18(ctx, base);
	return;
loc_82333B08:
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82333b18
	if (!ctx.cr6.eq) goto loc_82333B18;
	// addi r3,r3,24280
	ctx.r3.s64 = ctx.r3.s64 + 24280;
	// b 0x82354f18
	sub_82354F18(ctx, base);
	return;
loc_82333B18:
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82338328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82338330;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,8872
	ctx.r5.s64 = ctx.r10.s64 + 8872;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,3704
	ctx.r6.s64 = 3704;
	// li r4,708
	ctx.r4.s64 = 708;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82338360;
	sub_82330A38(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338374
	if (ctx.cr6.eq) goto loc_82338374;
	// bl 0x82357408
	ctx.lr = 0x82338370;
	sub_82357408(ctx, base);
	// b 0x82338378
	goto loc_82338378;
loc_82338374:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82338378:
	// addi r31,r29,21364
	r31.s64 = r29.s64 + 21364;
	// stw r3,21364(r29)
	REX_STORE_U32(r29.u32 + 21364, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338394
	if (!ctx.cr6.eq) goto loc_82338394;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82338394:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82356648
	ctx.lr = 0x823383A0;
	sub_82356648(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823383d4
	if (ctx.cr6.eq) goto loc_823383D4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823383c8
	if (ctx.cr6.eq) goto loc_823383C8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823383c8
	if (ctx.cr6.eq) goto loc_823383C8;
	// bl 0x823574a8
	ctx.lr = 0x823383C4;
	sub_823574A8(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_823383C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823383D4:
	// addi r4,r29,21368
	ctx.r4.s64 = r29.s64 + 21368;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356658
	ctx.lr = 0x823383E0;
	sub_82356658(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8239bcc0
	ctx.lr = 0x823383E8;
	sub_8239BCC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82338408
	if (ctx.cr6.eq) goto loc_82338408;
loc_823383F4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82337270
	ctx.lr = 0x823383FC;
	sub_82337270(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82338408:
	// bl 0x8239bbf0
	ctx.lr = 0x8233840C;
	sub_8239BBF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82357160
	ctx.lr = 0x8233841C;
	sub_82357160(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8239b7c0
	ctx.lr = 0x8233842C;
	sub_8239B7C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82357160
	ctx.lr = 0x8233843C;
	sub_82357160(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8239b450
	ctx.lr = 0x8233844C;
	sub_8239B450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,100
	ctx.r6.s64 = 100;
	// bl 0x82356de0
	ctx.lr = 0x82338460;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8239a6c8
	ctx.lr = 0x82338470;
	sub_8239A6C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,21624
	ctx.r5.s64 = r29.s64 + 21624;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,300
	ctx.r6.s64 = 300;
	// bl 0x82356de0
	ctx.lr = 0x82338484;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// lis r8,-32129
	ctx.r8.s64 = -2105606144;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r7,r8,16216
	ctx.r7.s64 = ctx.r8.s64 + 16216;
	// stw r7,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stw r7,16216(r8)
	REX_STORE_U32(ctx.r8.u32 + 16216, ctx.r7.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r28,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r28.u32);
	// bl 0x82395fe0
	ctx.lr = 0x823384B4;
	sub_82395FE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,500
	ctx.r6.s64 = 500;
	// bl 0x82356de0
	ctx.lr = 0x823384C8;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82395858
	ctx.lr = 0x823384D8;
	sub_82395858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,21628
	ctx.r5.s64 = r29.s64 + 21628;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,600
	ctx.r6.s64 = 600;
	// bl 0x82356de0
	ctx.lr = 0x823384EC;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x823945f0
	ctx.lr = 0x823384FC;
	sub_823945F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,800
	ctx.r6.s64 = 800;
	// bl 0x82356de0
	ctx.lr = 0x82338510;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x823939e0
	ctx.lr = 0x82338520;
	sub_823939E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1000
	ctx.r6.s64 = 1000;
	// bl 0x82356de0
	ctx.lr = 0x82338534;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82392d00
	ctx.lr = 0x82338544;
	sub_82392D00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1100
	ctx.r6.s64 = 1100;
	// bl 0x82356de0
	ctx.lr = 0x82338558;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82392198
	ctx.lr = 0x82338568;
	sub_82392198(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1200
	ctx.r6.s64 = 1200;
	// bl 0x82356de0
	ctx.lr = 0x8233857C;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8238f590
	ctx.lr = 0x8233858C;
	sub_8238F590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1300
	ctx.r6.s64 = 1300;
	// bl 0x82356de0
	ctx.lr = 0x823385A0;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8238c050
	ctx.lr = 0x823385B0;
	sub_8238C050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1400
	ctx.r6.s64 = 1400;
	// bl 0x82356de0
	ctx.lr = 0x823385C4;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82387bd8
	ctx.lr = 0x823385D4;
	sub_82387BD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1500
	ctx.r6.s64 = 1500;
	// bl 0x82356de0
	ctx.lr = 0x823385E8;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82380270
	ctx.lr = 0x823385F8;
	sub_82380270(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1600
	ctx.r6.s64 = 1600;
	// bl 0x82356de0
	ctx.lr = 0x8233860C;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8237bf58
	ctx.lr = 0x8233861C;
	sub_8237BF58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,1700
	ctx.r6.s64 = 1700;
	// bl 0x82356de0
	ctx.lr = 0x82338630;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82379ef8
	ctx.lr = 0x82338640;
	sub_82379EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2000
	ctx.r6.s64 = 2000;
	// bl 0x82356de0
	ctx.lr = 0x82338654;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x823784f8
	ctx.lr = 0x82338664;
	sub_823784F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,21632
	ctx.r5.s64 = r29.s64 + 21632;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2400
	ctx.r6.s64 = 2400;
	// bl 0x82356de0
	ctx.lr = 0x82338678;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x823769f0
	ctx.lr = 0x82338688;
	sub_823769F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2450
	ctx.r6.s64 = 2450;
	// bl 0x82356de0
	ctx.lr = 0x8233869C;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82375288
	ctx.lr = 0x823386AC;
	sub_82375288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2500
	ctx.r6.s64 = 2500;
	// bl 0x82356de0
	ctx.lr = 0x823386C0;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82374db8
	ctx.lr = 0x823386D0;
	sub_82374DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r29,21636
	ctx.r5.s64 = r29.s64 + 21636;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2600
	ctx.r6.s64 = 2600;
	// bl 0x82356de0
	ctx.lr = 0x823386E4;
	sub_82356DE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82374628
	ctx.lr = 0x823386F4;
	sub_82374628(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338704;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82373900
	ctx.lr = 0x82338714;
	sub_82373900(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338724;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x823722f0
	ctx.lr = 0x82338734;
	sub_823722F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338744;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82371898
	ctx.lr = 0x82338754;
	sub_82371898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338764;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82370ed8
	ctx.lr = 0x82338774;
	sub_82370ED8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338784;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236f950
	ctx.lr = 0x82338794;
	sub_8236F950(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823387A4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236e588
	ctx.lr = 0x823387B4;
	sub_8236E588(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823387C4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236d4c8
	ctx.lr = 0x823387D4;
	sub_8236D4C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823387E4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236c7f0
	ctx.lr = 0x823387F4;
	sub_8236C7F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338804;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236b380
	ctx.lr = 0x82338814;
	sub_8236B380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338824;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236af48
	ctx.lr = 0x82338834;
	sub_8236AF48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338844;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x8236a8a8
	ctx.lr = 0x82338854;
	sub_8236A8A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338864;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82369858
	ctx.lr = 0x82338874;
	sub_82369858(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338884;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82365de8
	ctx.lr = 0x82338894;
	sub_82365DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823388A4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82364fd0
	ctx.lr = 0x823388B4;
	sub_82364FD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823388C4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82364a40
	ctx.lr = 0x823388D4;
	sub_82364A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x823388E4;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82363fa0
	ctx.lr = 0x823388F4;
	sub_82363FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338904;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82363300
	ctx.lr = 0x82338914;
	sub_82363300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82356fb8
	ctx.lr = 0x82338924;
	sub_82356FB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823383f4
	if (!ctx.cr6.eq) goto loc_823383F4;
	// bl 0x82361558
	ctx.lr = 0x82338934;
	sub_82361558(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,2600
	ctx.r6.s64 = 2600;
	// bl 0x82356de0
	ctx.lr = 0x82338948;
	sub_82356DE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82338968
	if (ctx.cr6.eq) goto loc_82338968;
	// bl 0x82337270
	ctx.lr = 0x8233895C;
	sub_82337270(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_82338968:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stb r11,22(r29)
	REX_STORE_U8(r29.u32 + 22, ctx.r11.u8);
	// bl 0x82337270
	ctx.lr = 0x82338978;
	sub_82337270(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82360BF8) {
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
	// addi r3,r3,360
	ctx.r3.s64 = ctx.r3.s64 + 360;
	// bl 0x82353708
	ctx.lr = 0x82360C14;
	sub_82353708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360c38
	if (!ctx.cr6.eq) goto loc_82360C38;
	// lwz r3,668(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82360c34
	if (ctx.cr6.eq) goto loc_82360C34;
	// bl 0x8233e8c8
	ctx.lr = 0x82360C2C;
	sub_8233E8C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82360c38
	if (!ctx.cr6.eq) goto loc_82360C38;
loc_82360C34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360C38:
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

DEFINE_REX_FUNC(sub_82363490) {
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
	ctx.lr = 0x82363498;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f8,312(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 312);
	ctx.f8.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lfs f0,336(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 336);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f7,320(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,328(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 328);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,344(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// beq cr6,0x82363ce0
	if (ctx.cr6.eq) goto loc_82363CE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823634f4
	if (!ctx.cr6.eq) goto loc_823634F4;
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823634E8;
	sub_823EF2F8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823634F4:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823639b8
	if (ctx.cr6.eq) goto loc_823639B8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82363ce0
	if (ctx.cr6.eq) goto loc_82363CE0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r29,r4,r11
	r29.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r28,r7,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f12,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
loc_82363524:
	// add r31,r29,r30
	r31.u64 = r29.u64 + r30.u64;
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363684
	if (ctx.cr6.lt) goto loc_82363684;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82363558:
	// lhz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// and r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8236359c
	if (ctx.cr6.eq) goto loc_8236359C;
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x8236358c
	if (!ctx.cr6.gt) goto loc_8236358C;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_8236358C:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8236359c
	if (!ctx.cr6.gt) goto loc_8236359C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8236359C:
	// lhz r4,36(r3)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823635e4
	if (ctx.cr6.eq) goto loc_823635E4;
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x823635d4
	if (!ctx.cr6.gt) goto loc_823635D4;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823635D4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823635e4
	if (!ctx.cr6.gt) goto loc_823635E4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823635E4:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8236362c
	if (ctx.cr6.eq) goto loc_8236362C;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x8236361c
	if (!ctx.cr6.gt) goto loc_8236361C;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8236361C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8236362c
	if (!ctx.cr6.gt) goto loc_8236362C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8236362C:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// and r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82363674
	if (ctx.cr6.eq) goto loc_82363674;
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363664
	if (!ctx.cr6.gt) goto loc_82363664;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82363664:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363674
	if (!ctx.cr6.gt) goto loc_82363674;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363674:
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82363558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363558;
loc_82363684:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823636fc
	if (!ctx.cr6.lt) goto loc_823636FC;
	// addi r10,r5,88
	ctx.r10.s64 = ctx.r5.s64 + 88;
	// subf r4,r5,r7
	ctx.r4.u64 = ctx.r7.u64 - ctx.r5.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_823636A8:
	// lhz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823636ec
	if (ctx.cr6.eq) goto loc_823636EC;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x823636dc
	if (!ctx.cr6.gt) goto loc_823636DC;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823636DC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823636ec
	if (!ctx.cr6.gt) goto loc_823636EC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_823636EC:
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823636a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823636A8;
loc_823636FC:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ble cr6,0x82363718
	if (!ctx.cr6.gt) goto loc_82363718;
	// fmadds f4,f5,f7,f0
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f0.f64)));
	// b 0x8236371c
	goto loc_8236371C;
loc_82363718:
	// fmadds f4,f5,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f0.f64)));
loc_8236371C:
	// stfs f4,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// ble cr6,0x82363880
	if (!ctx.cr6.gt) goto loc_82363880;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363828
	if (ctx.cr6.lt) goto loc_82363828;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r9,r30,12
	ctx.r9.s64 = r30.s64 + 12;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r4,r31,r30
	ctx.r4.u64 = r30.u64 - r31.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8236375C:
	// lhz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lfs f0,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82363778
	if (!ctx.cr6.eq) goto loc_82363778;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// b 0x82363788
	goto loc_82363788;
loc_82363778:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,-4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_82363788:
	// lhz r27,36(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lfsx f0,r4,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r27,r10
	ctx.r8.u64 = r27.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823637a8
	if (!ctx.cr6.eq) goto loc_823637A8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x823637b8
	goto loc_823637B8;
loc_823637A8:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823637B8:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823637d8
	if (!ctx.cr6.eq) goto loc_823637D8;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x823637e8
	goto loc_823637E8;
loc_823637D8:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_823637E8:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82363808
	if (!ctx.cr6.eq) goto loc_82363808;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82363818
	goto loc_82363818;
loc_82363808:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82363818:
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8236375c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236375C;
loc_82363828:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823639a0
	if (!ctx.cr6.lt) goto loc_823639A0;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363844:
	// lhz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82363860
	if (!ctx.cr6.eq) goto loc_82363860;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82363870
	goto loc_82363870;
loc_82363860:
	// lfs f13,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82363870:
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363844;
	// b 0x823639a0
	goto loc_823639A0;
loc_82363880:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363954
	if (ctx.cr6.lt) goto loc_82363954;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r9,r30,12
	ctx.r9.s64 = r30.s64 + 12;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r4,r31,r30
	ctx.r4.u64 = r30.u64 - r31.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823638A8:
	// lhz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lfs f0,-12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823638c4
	if (!ctx.cr6.eq) goto loc_823638C4;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// b 0x823638cc
	goto loc_823638CC;
loc_823638C4:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_823638CC:
	// lhz r27,36(r3)
	r27.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lfsx f0,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r27,r10
	ctx.r8.u64 = r27.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x823638ec
	if (!ctx.cr6.eq) goto loc_823638EC;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x823638f4
	goto loc_823638F4;
loc_823638EC:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_823638F4:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82363914
	if (!ctx.cr6.eq) goto loc_82363914;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// b 0x8236391c
	goto loc_8236391C;
loc_82363914:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8236391C:
	// lhz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// and r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8236393c
	if (!ctx.cr6.eq) goto loc_8236393C;
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x82363944
	goto loc_82363944;
loc_8236393C:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82363944:
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x823638a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823638A8;
loc_82363954:
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823639a0
	if (!ctx.cr6.lt) goto loc_823639A0;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363970:
	// lhz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 36);
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// and r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236398c
	if (!ctx.cr6.eq) goto loc_8236398C;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82363994
	goto loc_82363994;
loc_8236398C:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82363994:
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363970;
loc_823639A0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// bne 0x82363524
	if (!ctx.cr0.eq) goto loc_82363524;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_823639B8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82363ce0
	if (ctx.cr6.eq) goto loc_82363CE0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r30,r4,r11
	r30.u64 = ctx.r11.u64 - ctx.r4.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r29,r7,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f12,3704(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
loc_823639E4:
	// add r4,r30,r5
	ctx.r4.u64 = r30.u64 + ctx.r5.u64;
	// fmr f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363af0
	if (ctx.cr6.lt) goto loc_82363AF0;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r3,356
	ctx.r11.s64 = ctx.r3.s64 + 356;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82363A14:
	// lfs f13,-8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363a38
	if (!ctx.cr6.gt) goto loc_82363A38;
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_82363A38:
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363a48
	if (!ctx.cr6.gt) goto loc_82363A48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363A48:
	// lfs f13,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363a6c
	if (!ctx.cr6.gt) goto loc_82363A6C;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82363A6C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363a7c
	if (!ctx.cr6.gt) goto loc_82363A7C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363A7C:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363aa0
	if (!ctx.cr6.gt) goto loc_82363AA0;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_82363AA0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363ab0
	if (!ctx.cr6.gt) goto loc_82363AB0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363AB0:
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363ad4
	if (!ctx.cr6.gt) goto loc_82363AD4;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82363AD4:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363ae4
	if (!ctx.cr6.gt) goto loc_82363AE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363AE4:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x82363a14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363A14;
loc_82363AF0:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82363b54
	if (!ctx.cr6.lt) goto loc_82363B54;
	// addi r10,r8,88
	ctx.r10.s64 = ctx.r8.s64 + 88;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82363B14:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f5,f13
	ctx.f5.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsel f13,f13,f13,f5
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// fcmpu cr6,f13,f3
	ctx.cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// ble cr6,0x82363b38
	if (!ctx.cr6.gt) goto loc_82363B38;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82363B38:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82363b48
	if (!ctx.cr6.gt) goto loc_82363B48;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82363B48:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363B14;
loc_82363B54:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// fsubs f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ble cr6,0x82363b70
	if (!ctx.cr6.gt) goto loc_82363B70;
	// fmadds f4,f5,f7,f0
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f0.f64)));
	// b 0x82363b74
	goto loc_82363B74;
loc_82363B70:
	// fmadds f4,f5,f6,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f6.f64, ctx.f0.f64)));
loc_82363B74:
	// stfs f4,348(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 348, temp.u32);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// fcmpu cr6,f4,f12
	ctx.cr6.compare(ctx.f4.f64, ctx.f12.f64);
	// li r8,0
	ctx.r8.s64 = 0;
	// ble cr6,0x82363c44
	if (!ctx.cr6.gt) goto loc_82363C44;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363c08
	if (ctx.cr6.lt) goto loc_82363C08;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r4,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363BB0:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,-4(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f3,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// fmuls f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// lfs f2,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82363bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363BB0;
loc_82363C08:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82363cd4
	if (!ctx.cr6.lt) goto loc_82363CD4;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363C24:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,348(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363C24;
	// b 0x82363cd4
	goto loc_82363CD4;
loc_82363C44:
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x82363ca4
	if (ctx.cr6.lt) goto loc_82363CA4;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r4,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363C6C:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfsx f5,r11,r6
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f1,8(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82363c6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363C6C;
loc_82363CA4:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82363cd4
	if (!ctx.cr6.lt) goto loc_82363CD4;
	// subf r9,r8,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82363CC0:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82363cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363CC0;
loc_82363CD4:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// bne 0x823639e4
	if (!ctx.cr0.eq) goto loc_823639E4;
loc_82363CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823C5E18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c5e40
	if (!ctx.cr6.eq) goto loc_823C5E40;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c5e38
	if (!ctx.cr6.eq) goto loc_823C5E38;
loc_823C5E30:
	// li r3,19
	ctx.r3.s64 = 19;
	// blr 
	return;
loc_823C5E38:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823c5e4c
	goto loc_823C5E4C;
loc_823C5E40:
	// lwz r11,64(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x823c5e30
	if (ctx.cr0.lt) goto loc_823C5E30;
loc_823C5E4C:
	// addi r11,r4,72
	ctx.r11.s64 = ctx.r4.s64 + 72;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823c5ff4
	if (ctx.cr6.eq) goto loc_823C5FF4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// lis r9,-32121
	ctx.r9.s64 = -2105081856;
	// addi r10,r10,13360
	ctx.r10.s64 = ctx.r10.s64 + 13360;
	// addi r9,r9,19584
	ctx.r9.s64 = ctx.r9.s64 + 19584;
loc_823C5E6C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f0,f11,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64)));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f0,f13,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f4,f0,f6,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f5.f64)));
	// stfs f4,-8(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f0,f8,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f3.f64)));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f0,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f11,-12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f9,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f0,f2,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f10.f64)));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,-16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f5,f0,f7,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, -ctx.f6.f64)));
	// stfs f5,-16(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f3,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f0,f9,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f4.f64)));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f1,-20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f0,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f12,f0,f1,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, -ctx.f13.f64)));
	// stfs f12,-20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lfs f0,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f10,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f0,f3,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f8,-24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f0,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f6,f0,f8,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f7.f64)));
	// stfs f6,-24(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f4,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f0,f10,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f5.f64)));
	// stfs f3,20(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f2,-28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f0,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f0,f0,f2,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, -ctx.f1.f64)));
	// stfs f0,-28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f0,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f0,f4,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f13.f64)));
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f11,-32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f0,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f8,f0,f11,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f9.f64)));
	// stfs f8,-32(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -32, temp.u32);
	// lfs f0,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f0,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f0,f11,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f7.f64)));
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// bdnz 0x823c5e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5E6C;
loc_823C5FF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823D1378) {
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
	ctx.lr = 0x823D1380;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823d17e4
	if (ctx.cr6.eq) goto loc_823D17E4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r19,r7,-1
	r19.s64 = ctx.r7.s64 + -1;
	// addi r27,r11,-28912
	r27.s64 = ctx.r11.s64 + -28912;
loc_823D139C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// mr r21,r19
	r21.u64 = r19.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
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
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r30,r11,16,24,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// extsh r31,r11
	r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x823d13e0
	if (ctx.cr6.lt) goto loc_823D13E0;
	// cmpwi cr6,r30,89
	ctx.cr6.compare<int32_t>(r30.s32, 89, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823d13e4
	if (ctx.cr6.lt) goto loc_823D13E4;
loc_823D13E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D13E4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d17e0
	if (ctx.cr6.eq) goto loc_823D17E0;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// addi r23,r20,8
	r23.s64 = r20.s64 + 8;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
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
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r29,r11,16,24,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF;
	// extsh r24,r11
	r24.s64 = ctx.r11.s16;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x823d1430
	if (ctx.cr6.lt) goto loc_823D1430;
	// cmpwi cr6,r29,89
	ctx.cr6.compare<int32_t>(r29.s32, 89, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x823d1434
	if (ctx.cr6.lt) goto loc_823D1434;
loc_823D1430:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823D1434:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823d17e0
	if (ctx.cr6.eq) goto loc_823D17E0;
	// sth r31,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// sthu r24,2(r4)
	ea = 2 + ctx.r4.u32;
	REX_STORE_U16(ea, r24.u16);
	ctx.r4.u32 = ea;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq cr6,0x823d17d0
	if (ctx.cr6.eq) goto loc_823D17D0;
loc_823D1454:
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// li r22,8
	r22.s64 = 8;
	// lwzu r11,4(r23)
	ea = 4 + r23.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r23.u32 = ea;
	// cmplwi cr6,r21,8
	ctx.cr6.compare<uint32_t>(r21.u32, 8, ctx.xer);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// rlwimi r9,r10,16,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r28,r10,16,0,15
	r28.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r28.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r9,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r10,r28,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r28,r9,r8
	r28.u64 = ctx.r9.u64 | ctx.r8.u64;
	// bge cr6,0x823d14b0
	if (!ctx.cr6.lt) goto loc_823D14B0;
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x823d17c8
	if (ctx.cr6.eq) goto loc_823D17C8;
loc_823D14B0:
	// mr r25,r22
	r25.u64 = r22.u64;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_823D14B8:
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// clrlwi r7,r26,28
	ctx.r7.u64 = r26.u32 & 0xF;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// lhzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// bgt cr6,0x823d15e4
	if (ctx.cr6.gt) goto loc_823D15E4;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5360
	ctx.r12.s64 = ctx.r12.s64 + 5360;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823D152C;
	case 1:
		goto loc_823D1538;
	case 2:
		goto loc_823D1544;
	case 3:
		goto loc_823D1560;
	case 4:
		goto loc_823D1558;
	case 5:
		goto loc_823D1568;
	case 6:
		goto loc_823D1578;
	case 7:
		goto loc_823D15E0;
	case 8:
		goto loc_823D1590;
	case 9:
		goto loc_823D159C;
	case 10:
		goto loc_823D15A8;
	case 11:
		goto loc_823D15DC;
	case 12:
		goto loc_823D15BC;
	case 13:
		goto loc_823D15C4;
	case 14:
		goto loc_823D15CC;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D152C:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1538:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1544:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1558:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D1560:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1568:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1578:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d15e4
	goto loc_823D15E4;
loc_823D1590:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e0
	goto loc_823D15E0;
loc_823D159C:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e0
	goto loc_823D15E0;
loc_823D15A8:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d15e0
	goto loc_823D15E0;
loc_823D15BC:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// b 0x823d15d8
	goto loc_823D15D8;
loc_823D15C4:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// b 0x823d15d8
	goto loc_823D15D8;
loc_823D15CC:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_823D15D8:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D15DC:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823D15E0:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823D15E4:
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// extsh r10,r31
	ctx.r10.s64 = r31.s16;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r31.s32, ctx.xer);
	// beq cr6,0x823d1604
	if (ctx.cr6.eq) goto loc_823D1604;
	// cmpwi cr6,r31,-32768
	ctx.cr6.compare<int32_t>(r31.s32, -32768, ctx.xer);
	// li r31,-32768
	r31.s64 = -32768;
	// blt cr6,0x823d1604
	if (ctx.cr6.lt) goto loc_823D1604;
	// li r31,32767
	r31.s64 = 32767;
loc_823D1604:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// add. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823d161c
	if (!ctx.cr0.lt) goto loc_823D161C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d1628
	goto loc_823D1628;
loc_823D161C:
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// blt cr6,0x823d1628
	if (ctx.cr6.lt) goto loc_823D1628;
	// li r11,88
	ctx.r11.s64 = 88;
loc_823D1628:
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi r7,r28,28
	ctx.r7.u64 = r28.u32 & 0xF;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// lhzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// srawi r11,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 3;
	// bgt cr6,0x823d175c
	if (ctx.cr6.gt) goto loc_823D175C;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r9,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5736
	ctx.r12.s64 = ctx.r12.s64 + 5736;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r9.u32) {
	case 0:
		goto loc_823D16A4;
	case 1:
		goto loc_823D16B0;
	case 2:
		goto loc_823D16BC;
	case 3:
		goto loc_823D16D8;
	case 4:
		goto loc_823D16D0;
	case 5:
		goto loc_823D16E0;
	case 6:
		goto loc_823D16F0;
	case 7:
		goto loc_823D1758;
	case 8:
		goto loc_823D1708;
	case 9:
		goto loc_823D1714;
	case 10:
		goto loc_823D1720;
	case 11:
		goto loc_823D1754;
	case 12:
		goto loc_823D1734;
	case 13:
		goto loc_823D173C;
	case 14:
		goto loc_823D1744;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823D16A4:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D16B0:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D16BC:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D16D0:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D16D8:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D16E0:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D16F0:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823d175c
	goto loc_823D175C;
loc_823D1708:
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1758
	goto loc_823D1758;
loc_823D1714:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1758
	goto loc_823D1758;
loc_823D1720:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823d1758
	goto loc_823D1758;
loc_823D1734:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// b 0x823d1750
	goto loc_823D1750;
loc_823D173C:
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// b 0x823d1750
	goto loc_823D1750;
loc_823D1744:
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_823D1750:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_823D1754:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_823D1758:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
loc_823D175C:
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + r24.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823d177c
	if (ctx.cr6.eq) goto loc_823D177C;
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// li r10,-32768
	ctx.r10.s64 = -32768;
	// blt cr6,0x823d177c
	if (ctx.cr6.lt) goto loc_823D177C;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_823D177C:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// add. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823d1798
	if (!ctx.cr0.lt) goto loc_823D1798;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823d17a4
	goto loc_823D17A4;
loc_823D1798:
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// blt cr6,0x823d17a4
	if (ctx.cr6.lt) goto loc_823D17A4;
	// li r11,88
	ctx.r11.s64 = 88;
loc_823D17A4:
	// sth r31,0(r4)
	REX_STORE_U16(ctx.r4.u32 + 0, r31.u16);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// sthu r10,2(r4)
	ea = 2 + ctx.r4.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r4.u32 = ea;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// rlwinm r26,r26,28,4,31
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 28) & 0xFFFFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// rlwinm r28,r28,28,4,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x823d14b8
	if (!ctx.cr0.eq) goto loc_823D14B8;
loc_823D17C8:
	// subf. r21,r22,r21
	r21.u64 = r21.u64 - r22.u64;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne 0x823d1454
	if (!ctx.cr0.eq) goto loc_823D1454;
loc_823D17D0:
	// add r20,r20,r6
	r20.u64 = r20.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823d139c
	if (!ctx.cr6.eq) goto loc_823D139C;
	// b 0x826a1ce4
	return;
loc_823D17E0:
	// li r3,19
	ctx.r3.s64 = 19;
loc_823D17E4:
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_823EB9C0) {
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
	// beq cr6,0x823eba00
	if (ctx.cr6.eq) goto loc_823EBA00;
	// li r5,1052
	ctx.r5.s64 = 1052;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823EB9F4;
	sub_823EF5F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823EBA00;
	sub_82393BF0(ctx, base);
loc_823EBA00:
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

DEFINE_REX_FUNC(sub_823ED0C0) {
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
	// bl 0x827939b4
	ctx.lr = 0x823ED0D4;
	__imp__NtSuspendThread(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ed0e8
	if (!ctx.cr0.lt) goto loc_823ED0E8;
	// bl 0x823eff48
	ctx.lr = 0x823ED0E0;
	sub_823EFF48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ed0ec
	goto loc_823ED0EC;
loc_823ED0E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823ED0EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EDA58) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823f0250
	sub_823F0250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823EDC98) {
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
	// bl 0x82793754
	ctx.lr = 0x823EDCA8;
	__imp__XamUserGetSigninInfo(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823edcb8
	if (ctx.cr0.lt) goto loc_823EDCB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823edcd0
	goto loc_823EDCD0;
loc_823EDCB8:
	// rlwinm r11,r3,0,3,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FFF0000;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823edcd0
	if (ctx.cr6.eq) goto loc_823EDCD0;
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_823EDCD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EEA88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EED08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82793934
	ctx.lr = 0x823EED28;
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-3
	ctx.r11.s64 = -3;
	// li r10,64
	ctx.r10.s64 = 64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,-30824(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30824);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EED5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823eed9c
	if (ctx.cr0.lt) goto loc_823EED9C;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// std r10,4(r31)
	REX_STORE_U64(r31.u32 + 4, ctx.r10.u64);
	// std r9,12(r31)
	REX_STORE_U64(r31.u32 + 12, ctx.r9.u64);
	// std r8,20(r31)
	REX_STORE_U64(r31.u32 + 20, ctx.r8.u64);
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r6,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r6.u32);
	// b 0x823eeda4
	goto loc_823EEDA4;
loc_823EED9C:
	// bl 0x823f0020
	ctx.lr = 0x823EEDA0;
	sub_823F0020(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EEDA4:
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

DEFINE_REX_FUNC(sub_823F18B0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r31,-32106
	r31.s64 = -2104098816;
	// lwz r11,2104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f192c
	if (ctx.cr0.eq) goto loc_823F192C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F18E8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823f18e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F18E8;
	// lwz r3,13396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13396);
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f1930
	if (!ctx.cr6.eq) goto loc_823F1930;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// bl 0x823f3150
	ctx.lr = 0x823F1924;
	sub_823F3150(ctx, base);
	// stw r3,13396(r31)
	REX_STORE_U32(r31.u32 + 13396, ctx.r3.u32);
	// b 0x823f1930
	goto loc_823F1930;
loc_823F192C:
	// lwz r3,13396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13396);
loc_823F1930:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_823F7D70) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,1108(r3)
	REX_STORE_U8(ctx.r3.u32 + 1108, ctx.r11.u8);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r9,1109(r3)
	REX_STORE_U8(ctx.r3.u32 + 1109, ctx.r9.u8);
	// addi r8,r3,1108
	ctx.r8.s64 = ctx.r3.s64 + 1108;
	// stb r10,1110(r3)
	REX_STORE_U8(ctx.r3.u32 + 1110, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r7,1111(r3)
	REX_STORE_U8(ctx.r3.u32 + 1111, ctx.r7.u8);
	// li r11,4
	ctx.r11.s64 = 4;
loc_823F7D9C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823f7db4
	if (!ctx.cr6.gt) goto loc_823F7DB4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F7DA8:
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823f7da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F7DA8;
loc_823F7DB4:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// ble cr6,0x823f7dd8
	if (!ctx.cr6.gt) goto loc_823F7DD8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823F7DCC:
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823f7dcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F7DCC;
loc_823F7DD8:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// blt cr6,0x823f7d9c
	if (ctx.cr6.lt) goto loc_823F7D9C;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FBA08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823FBA10;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
loc_823FBA28:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r31,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r31.u16);
	// ble cr6,0x823fba28
	if (!ctx.cr6.gt) goto loc_823FBA28;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_823FBA48:
	// lbzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lhzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r9,r10
	REX_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// blt cr6,0x823fba48
	if (ctx.cr6.lt) goto loc_823FBA48;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// sth r31,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, r31.u16);
loc_823FBA78:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,130
	ctx.r5.s64 = ctx.r1.s64 + 130;
	// lhzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lhzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r10,r8,r5
	REX_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u16);
	// ble cr6,0x823fba78
	if (!ctx.cr6.gt) goto loc_823FBA78;
	// lhz r11,162(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 162);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fbac4
	if (ctx.cr0.eq) goto loc_823FBAC4;
loc_823FBABC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823fbbac
	goto loc_823FBBAC;
loc_823FBAC4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_823FBAC8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r8,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r8.u64 = static_cast<uint64_t>(7) - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lhzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r8,r10,r5
	REX_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u16);
	// rlwinm r6,r6,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// sthx r6,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
	// ble cr6,0x823fbac8
	if (!ctx.cr6.gt) goto loc_823FBAC8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x823fbb28
	if (ctx.cr6.gt) goto loc_823FBB28;
loc_823FBB04:
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// sthx r10,r8,r6
	REX_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// ble cr6,0x823fbb04
	if (!ctx.cr6.gt) goto loc_823FBB04;
loc_823FBB28:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823FBB38;
	sub_826A2E60(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823FBB40:
	// lbzx r11,r5,r30
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fbb94
	if (ctx.cr0.eq) goto loc_823FBB94;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bgt cr6,0x823fbabc
	if (ctx.cr6.gt) goto loc_823FBABC;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823fbb90
	if (!ctx.cr6.lt) goto loc_823FBB90;
loc_823FBB7C:
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stbx r6,r11,r29
	REX_STORE_U8(ctx.r11.u32 + r29.u32, ctx.r6.u8);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823fbb7c
	if (ctx.cr6.lt) goto loc_823FBB7C;
loc_823FBB90:
	// sthx r10,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
loc_823FBB94:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// blt cr6,0x823fbb40
	if (ctx.cr6.lt) goto loc_823FBB40;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823FBBAC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82406930) {
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
	// bl 0x826a1ca0
	ctx.lr = 0x82406938;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2c84
	ctx.lr = 0x82406940;
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
	// beq cr6,0x82406c10
	if (ctx.cr6.eq) goto loc_82406C10;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82406c10
	if (ctx.cr6.eq) goto loc_82406C10;
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
	// lfs f24,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f24.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f26,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	f26.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// frsp f22,f13
	f22.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f22,f21
	f27.f64 = double(float(f22.f64 / f21.f64));
	// fdivs f19,f24,f27
	f19.f64 = double(float(f24.f64 / f27.f64));
	// beq cr6,0x82406a1c
	if (ctx.cr6.eq) goto loc_82406A1C;
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
loc_824069D0:
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
	// bdnz 0x824069d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824069D0;
loc_82406A1C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x82406A24;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82406c10
	if (ctx.cr0.eq) goto loc_82406C10;
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
	// lfs f25,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f25.f64 = double(temp.f32);
	// fmr f28,f25
	f28.f64 = f25.f64;
	// beq cr6,0x82406c04
	if (ctx.cr6.eq) goto loc_82406C04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f20,17272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17272);
	f20.f64 = double(temp.f32);
loc_82406A54:
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
loc_82406A78:
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
	// bne cr6,0x82406abc
	if (!ctx.cr6.eq) goto loc_82406ABC;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(f30.f64, f25.f64);
	// bge cr6,0x82406ab0
	if (!ctx.cr6.lt) goto loc_82406AB0;
	// fmr f30,f25
	f30.f64 = f25.f64;
loc_82406AB0:
	// fcmpu cr6,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f22.f64);
	// ble cr6,0x82406abc
	if (!ctx.cr6.gt) goto loc_82406ABC;
	// fmr f31,f22
	f31.f64 = f22.f64;
loc_82406ABC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82406AC4;
	sub_826A2F00(ctx, base);
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
	// bge cr6,0x82406bc8
	if (!ctx.cr6.lt) goto loc_82406BC8;
	// subf r8,r23,r10
	ctx.r8.u64 = ctx.r10.u64 - r23.u64;
loc_82406AF4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fadds f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bge cr6,0x82406b0c
	if (!ctx.cr6.lt) goto loc_82406B0C;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + r23.u64;
	// b 0x82406b1c
	goto loc_82406B1C;
loc_82406B0C:
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// bge cr6,0x82406b1c
	if (!ctx.cr6.lt) goto loc_82406B1C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82406B1C:
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// beq cr6,0x82406b44
	if (ctx.cr6.eq) goto loc_82406B44;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x82406b3c
	if (!ctx.cr6.gt) goto loc_82406B3C;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_82406B3C:
	// fmr f28,f25
	ctx.fpscr.disableFlushMode();
	f28.f64 = f25.f64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
loc_82406B44:
	// fcmpu cr6,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, f30.f64);
	// bge cr6,0x82406b50
	if (!ctx.cr6.lt) goto loc_82406B50;
	// fmr f12,f30
	ctx.f12.f64 = f30.f64;
loc_82406B50:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// ble cr6,0x82406b5c
	if (!ctx.cr6.gt) goto loc_82406B5C;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82406B5C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82406b88
	if (!ctx.cr6.eq) goto loc_82406B88;
	// fcmpu cr6,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f25.f64);
	// bge cr6,0x82406b74
	if (!ctx.cr6.lt) goto loc_82406B74;
	// fmr f0,f26
	ctx.f0.f64 = f26.f64;
	// b 0x82406b90
	goto loc_82406B90;
loc_82406B74:
	// fadds f0,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f29.f64 + f26.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, f21.f64);
	// blt cr6,0x82406b88
	if (ctx.cr6.lt) goto loc_82406B88;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
	// b 0x82406b90
	goto loc_82406B90;
loc_82406B88:
	// fadds f0,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmsubs f0,f0,f19,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f19.f64, -f29.f64)));
loc_82406B90:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82406b9c
	if (ctx.cr6.eq) goto loc_82406B9C;
	// fsubs f0,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f26.f64 - ctx.f0.f64));
loc_82406B9C:
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
	// blt cr6,0x82406af4
	if (ctx.cr6.lt) goto loc_82406AF4;
loc_82406BC8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x82406a78
	if (ctx.cr6.lt) goto loc_82406A78;
	// fcmpu cr6,f28,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f20.f64);
	// ble cr6,0x82406bec
	if (!ctx.cr6.gt) goto loc_82406BEC;
	// add r11,r31,r28
	ctx.r11.u64 = r31.u64 + r28.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stfs f28,4(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
loc_82406BEC:
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
	// blt cr6,0x82406a54
	if (ctx.cr6.lt) goto loc_82406A54;
loc_82406C04:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x82406c14
	goto loc_82406C14;
loc_82406C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82406C14:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x826a2cd0
	ctx.lr = 0x82406C20;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_82414998) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824149ac
	if (ctx.cr6.eq) goto loc_824149AC;
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_824149AC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824149c0
	if (ctx.cr6.eq) goto loc_824149C0;
	// lwz r11,632(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824149C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824159E8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82415a0c
	if (ctx.cr6.eq) goto loc_82415A0C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82415a3c
	goto loc_82415A3C;
loc_82415A0C:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82415a38
	if (!ctx.cr6.eq) goto loc_82415A38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,23496
	ctx.r6.s64 = ctx.r11.s64 + 23496;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82415A30;
	sub_8241A4F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
loc_82415A38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82415A3C:
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

DEFINE_REX_FUNC(sub_82417638) {
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
	// lwz r3,3032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82417028
	ctx.lr = 0x82417674;
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

DEFINE_REX_FUNC(sub_82419CF8) {
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
	ctx.lr = 0x82419D00;
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419d64
	if (!ctx.cr6.lt) goto loc_82419D64;
	// lbz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x826a0800
	ctx.lr = 0x82419D28;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82419d8c
	if (!ctx.cr0.eq) goto loc_82419D8C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82419d8c
	if (ctx.cr6.eq) goto loc_82419D8C;
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82419d64
	if (ctx.cr6.eq) goto loc_82419D64;
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 40);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82419d64
	if (!ctx.cr0.eq) goto loc_82419D64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x826a0880
	ctx.lr = 0x82419D5C;
	sub_826A0880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82419d8c
	if (!ctx.cr0.eq) goto loc_82419D8C;
loc_82419D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82419D68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_82419D70:
	// lbz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + 0);
	// bl 0x826a0880
	ctx.lr = 0x82419D78;
	sub_826A0880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82419d8c
	if (!ctx.cr0.eq) goto loc_82419D8C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82419d9c
	if (!ctx.cr6.eq) goto loc_82419D9C;
loc_82419D8C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419d70
	if (ctx.cr6.lt) goto loc_82419D70;
loc_82419D9C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r31,2
	r30.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82419df0
	if (!ctx.cr6.lt) goto loc_82419DF0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82419df0
	if (!ctx.cr6.eq) goto loc_82419DF0;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82419df0
	if (!ctx.cr6.eq) goto loc_82419DF0;
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// bl 0x826a0880
	ctx.lr = 0x82419DCC;
	sub_826A0880(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82419de0
	if (!ctx.cr0.eq) goto loc_82419DE0;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x82419df0
	if (!ctx.cr6.eq) goto loc_82419DF0;
loc_82419DE0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82419d8c
	if (ctx.cr6.lt) goto loc_82419D8C;
loc_82419DF0:
	// subf r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// blt cr6,0x82419d64
	if (ctx.cr6.lt) goto loc_82419D64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 44);
	// bl 0x82444608
	ctx.lr = 0x82419E0C;
	sub_82444608(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82419d64
	if (ctx.cr0.eq) goto loc_82419D64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82419E24;
	sub_826A1E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r11,r30,r31
	REX_STORE_U8(r30.u32 + r31.u32, ctx.r11.u8);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x82419d68
	goto loc_82419D68;
}

DEFINE_REX_FUNC(sub_82423E50) {
	REX_FUNC_PROLOGUE();
	// b 0x82423ae0
	sub_82423AE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82423EE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82423EF0;
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
	ctx.lr = 0x82423F30;
	sub_824009E0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r11,28576
	ctx.r6.s64 = ctx.r11.s64 + 28576;
	// stb r10,351(r1)
	REX_STORE_U8(ctx.r1.u32 + 351, ctx.r10.u8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x82423788
	ctx.lr = 0x82423F50;
	sub_82423788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x8241a718
	ctx.lr = 0x82423F60;
	sub_8241A718(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82437520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82437528;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82437550:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82437550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82437550;
	// li r30,0
	r30.s64 = 0;
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// stw r8,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// addi r7,r31,44
	ctx.r7.s64 = r31.s64 + 44;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// addi r8,r31,52
	ctx.r8.s64 = r31.s64 + 52;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// bl 0x82437410
	ctx.lr = 0x8243758C;
	sub_82437410(ctx, base);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 8);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82439B60) {
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
	ctx.lr = 0x82439B68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82439e54
	if (ctx.cr6.lt) goto loc_82439E54;
	// beq cr6,0x82439dd4
	if (ctx.cr6.eq) goto loc_82439DD4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82439d30
	if (ctx.cr6.lt) goto loc_82439D30;
	// beq cr6,0x82439c94
	if (ctx.cr6.eq) goto loc_82439C94;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x82439bb8
	if (ctx.cr6.eq) goto loc_82439BB8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x8243a054
	goto loc_8243A054;
loc_82439BB8:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 52);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 8);
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82439bd8
	if (!ctx.cr6.gt) goto loc_82439BD8;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_82439BD8:
	// mullw. r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82439c14
	if (ctx.cr0.eq) goto loc_82439C14;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_82439BEC:
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82439bec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439BEC;
loc_82439C14:
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82439c8c
	if (ctx.cr6.eq) goto loc_82439C8C;
loc_82439C24:
	// lhz r11,10(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 10);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82439c80
	if (ctx.cr0.eq) goto loc_82439C80;
	// li r30,0
	r30.s64 = 0;
loc_82439C38:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r31,r11,r30
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x82438da8
	ctx.lr = 0x82439C58;
	sub_82438DA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8243a054
	if (ctx.cr0.lt) goto loc_8243A054;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lhz r10,10(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 10);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// blt cr6,0x82439c38
	if (ctx.cr6.lt) goto loc_82439C38;
loc_82439C80:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(r26.u32, r27.u32, ctx.xer);
	// blt cr6,0x82439c24
	if (ctx.cr6.lt) goto loc_82439C24;
loc_82439C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243a054
	goto loc_8243A054;
loc_82439C94:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439ca8
	if (!ctx.cr6.gt) goto loc_82439CA8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82439CA8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439ea4
	if (ctx.cr6.eq) goto loc_82439EA4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_82439CB8:
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82439d24
	if (ctx.cr0.eq) goto loc_82439D24;
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
loc_82439CCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439d14
	if (ctx.cr6.eq) goto loc_82439D14;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_82439CDC:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82439cf8
	if (ctx.cr6.gt) goto loc_82439CF8;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// bgt cr6,0x82439cf8
	if (ctx.cr6.gt) goto loc_82439CF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// b 0x82439cfc
	goto loc_82439CFC;
loc_82439CF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82439CFC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439cdc
	if (ctx.cr6.lt) goto loc_82439CDC;
loc_82439D14:
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82439ccc
	if (ctx.cr6.lt) goto loc_82439CCC;
loc_82439D24:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x82439cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439CB8;
	// b 0x82439ea4
	goto loc_82439EA4;
loc_82439D30:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439d44
	if (!ctx.cr6.gt) goto loc_82439D44;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82439D44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439ea4
	if (ctx.cr6.eq) goto loc_82439EA4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_82439D54:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82439dc8
	if (ctx.cr0.eq) goto loc_82439DC8;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82439D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82439db4
	if (ctx.cr6.eq) goto loc_82439DB4;
loc_82439D78:
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bgt cr6,0x82439d9c
	if (ctx.cr6.gt) goto loc_82439D9C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82439d9c
	if (ctx.cr6.gt) goto loc_82439D9C;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// b 0x82439da0
	goto loc_82439DA0;
loc_82439D9C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82439DA0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82439d78
	if (ctx.cr6.lt) goto loc_82439D78;
loc_82439DB4:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439d6c
	if (ctx.cr6.lt) goto loc_82439D6C;
loc_82439DC8:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x82439d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439D54;
	// b 0x82439ea4
	goto loc_82439EA4;
loc_82439DD4:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439de8
	if (!ctx.cr6.gt) goto loc_82439DE8;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82439DE8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439ea4
	if (ctx.cr6.eq) goto loc_82439EA4;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_82439DFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82439e44
	if (ctx.cr6.eq) goto loc_82439E44;
loc_82439E08:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x82439e18
	if (!ctx.cr6.gt) goto loc_82439E18;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82439e30
	goto loc_82439E30;
loc_82439E18:
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r4
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_82439E30:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82439e08
	if (ctx.cr6.lt) goto loc_82439E08;
loc_82439E44:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// blt cr6,0x82439dfc
	if (ctx.cr6.lt) goto loc_82439DFC;
	// b 0x82439ea4
	goto loc_82439EA4;
loc_82439E54:
	// lhz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 8);
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82439e68
	if (!ctx.cr6.gt) goto loc_82439E68;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_82439E68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439ea4
	if (ctx.cr6.eq) goto loc_82439EA4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_82439E7C:
	// rlwinm r8,r11,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r7,r11,30,2,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r4
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82439e7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439E7C;
loc_82439EA4:
	// lhz r10,2(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x82439f28
	if (ctx.cr6.eq) goto loc_82439F28;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// beq cr6,0x82439ef4
	if (ctx.cr6.eq) goto loc_82439EF4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82439f28
	if (!ctx.cr6.eq) goto loc_82439F28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439f28
	if (ctx.cr6.eq) goto loc_82439F28;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82439ED8:
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82439ed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439ED8;
	// b 0x82439f28
	goto loc_82439F28;
loc_82439EF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439f28
	if (ctx.cr6.eq) goto loc_82439F28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_82439F0C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82439f20
	if (!ctx.cr6.eq) goto loc_82439F20;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82439F20:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82439f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439F0C;
loc_82439F28:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8243a004
	if (ctx.cr0.eq) goto loc_8243A004;
	// lhz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82439f4c
	if (ctx.cr6.eq) goto loc_82439F4C;
	// lhz r11,6(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 6);
	// lhz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 4);
	// b 0x82439f54
	goto loc_82439F54;
loc_82439F4C:
	// lhz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 4);
	// lhz r10,6(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 6);
loc_82439F54:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8243a004
	if (ctx.cr0.eq) goto loc_8243A004;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82439f70
	if (!ctx.cr6.eq) goto loc_82439F70;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21408
	ctx.r3.s64 = ctx.r9.s64 + -21408;
	// b 0x82439f78
	goto loc_82439F78;
loc_82439F70:
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,-21424
	ctx.r3.s64 = ctx.r9.s64 + -21424;
loc_82439F78:
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
	// mullw. r9,r10,r31
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r7,r8,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x8243a004
	if (ctx.cr0.eq) goto loc_8243A004;
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_82439F90:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r4,r11,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82439fcc
	if (!ctx.cr6.gt) goto loc_82439FCC;
	// subf r5,r11,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82439FB0:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r5,r10,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x82439fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439FB0;
loc_82439FCC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439ffc
	if (ctx.cr6.eq) goto loc_82439FFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82439FDC:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r5,r30,r6
	REX_STORE_U32(r30.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x82439fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82439FDC;
loc_82439FFC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82439f90
	if (!ctx.cr6.eq) goto loc_82439F90;
loc_8243A004:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 12);
	// mullw r7,r10,r31
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8243a01c
	if (!ctx.cr6.gt) goto loc_8243A01C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8243A01C:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8243a034
	if (!ctx.cr6.eq) goto loc_8243A034;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8243a054
	goto loc_8243A054;
loc_8243A034:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 10);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + r22.u64;
	// bctrl 
	ctx.lr = 0x8243A04C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_8243A054:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8245A480) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,16492
	ctx.r4.s64 = ctx.r10.s64 + 16492;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245A4A4;
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

DEFINE_REX_FUNC(sub_8245D530) {
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
	ctx.lr = 0x8245D538;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// addi r7,r1,188
	ctx.r7.s64 = ctx.r1.s64 + 188;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8245D574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r29,15
	r29.s64 = 983040;
	// li r24,0
	r24.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8245d5dc
	if (!ctx.cr6.eq) goto loc_8245D5DC;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8245d5dc
	if (!ctx.cr6.eq) goto loc_8245D5DC;
	// lwz r11,1812(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245d5e0
	if (!ctx.cr6.gt) goto loc_8245D5E0;
loc_8245D5DC:
	// li r28,1
	r28.s64 = 1;
loc_8245D5E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,180(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455830
	ctx.lr = 0x8245D5F8;
	sub_82455830(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r23,38
	r23.s64 = 38;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r25,r11,14096
	r25.s64 = ctx.r11.s64 + 14096;
	// addi r26,r10,14172
	r26.s64 = ctx.r10.s64 + 14172;
	// addi r27,r9,14372
	r27.s64 = ctx.r9.s64 + 14372;
	// beq cr6,0x8245d6c8
	if (ctx.cr6.eq) goto loc_8245D6C8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8245d6c8
	if (!ctx.cr6.gt) goto loc_8245D6C8;
loc_8245D62C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245D634;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82404168
	ctx.lr = 0x8245D654;
	sub_82404168(ctx, base);
	// stb r23,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r23.u8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245D66C;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D67C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,472(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 472);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D6B0;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245d62c
	if (ctx.cr6.lt) goto loc_8245D62C;
loc_8245D6C8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
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
	ctx.lr = 0x8245D6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r5,r9,12
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// addi r6,r1,184
	ctx.r6.s64 = ctx.r1.s64 + 184;
	// stw r24,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245ba78
	ctx.lr = 0x8245D770;
	sub_8245BA78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r4,r29
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, ctx.xer);
	// beq cr6,0x8245d794
	if (ctx.cr6.eq) goto loc_8245D794;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455928
	ctx.lr = 0x8245D78C;
	sub_82455928(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
loc_8245D794:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r29,r11,14148
	r29.s64 = ctx.r11.s64 + 14148;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d844
	if (ctx.cr6.eq) goto loc_8245D844;
loc_8245D7AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245D7B4;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82404168
	ctx.lr = 0x8245D7D4;
	sub_82404168(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245D7E8;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D7F8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,404(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 404);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D82C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245d7ac
	if (ctx.cr6.lt) goto loc_8245D7AC;
loc_8245D844:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d8d4
	if (ctx.cr6.eq) goto loc_8245D8D4;
loc_8245D850:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245D858;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245D874;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D884;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 420);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D8A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D8BC;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245d850
	if (ctx.cr6.lt) goto loc_8245D850;
loc_8245D8D4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8245da28
	if (ctx.cr6.eq) goto loc_8245DA28;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245d978
	if (ctx.cr6.eq) goto loc_8245D978;
loc_8245D8E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245D8F0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245D90C;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D91C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8245d940
	if (!ctx.cr0.eq) goto loc_8245D940;
	// lwz r11,428(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 428);
	// b 0x8245d944
	goto loc_8245D944;
loc_8245D940:
	// lwz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 432);
loc_8245D944:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245D94C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8245db54
	if (ctx.cr6.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245D960;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245d8e8
	if (ctx.cr6.lt) goto loc_8245D8E8;
loc_8245D978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824559d0
	ctx.lr = 0x8245D980;
	sub_824559D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8244a6e0
	ctx.lr = 0x8245D998;
	sub_8244A6E0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455d10
	ctx.lr = 0x8245D9B0;
	sub_82455D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455e48
	ctx.lr = 0x8245D9CC;
	sub_82455E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8245da28
	if (ctx.cr6.eq) goto loc_8245DA28;
	// rlwinm r11,r5,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF0000;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8245da08
	if (ctx.cr0.eq) goto loc_8245DA08;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455a90
	ctx.lr = 0x8245D9FC;
	sub_82455A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_8245DA08:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455b90
	ctx.lr = 0x8245DA20;
	sub_82455B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
loc_8245DA28:
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245dabc
	if (ctx.cr6.eq) goto loc_8245DABC;
loc_8245DA38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245DA40;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245DA5C;
	sub_82404168(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245DA6C;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,424(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245DA90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245DAA4;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245da38
	if (ctx.cr6.lt) goto loc_8245DA38;
loc_8245DABC:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8245db50
	if (ctx.cr6.eq) goto loc_8245DB50;
loc_8245DAC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x8245DAD0;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// li r4,31
	ctx.r4.s64 = 31;
	// addi r3,r1,209
	ctx.r3.s64 = ctx.r1.s64 + 209;
	// bl 0x82404168
	ctx.lr = 0x8245DAF0;
	sub_82404168(ctx, base);
	// stb r23,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r23.u8);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82404168
	ctx.lr = 0x8245DB08;
	sub_82404168(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245DB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x8245DB38;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8245db54
	if (ctx.cr0.lt) goto loc_8245DB54;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8245dac8
	if (ctx.cr6.lt) goto loc_8245DAC8;
loc_8245DB50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8245DB54:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824849D8) {
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
	ctx.lr = 0x824849E0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r23,-1
	r23.s64 = -1;
	// li r17,1
	r17.s64 = 1;
	// li r18,0
	r18.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82484a74
	if (!ctx.cr6.gt) goto loc_82484A74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82484A08:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r6,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r7,r10,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82484a44
	if (ctx.cr0.eq) goto loc_82484A44;
	// stw r17,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r17.u32);
	// b 0x82484a5c
	goto loc_82484A5C;
loc_82484A44:
	// lis r12,1
	ctx.r12.s64 = 65536;
	// ori r12,r12,4136
	ctx.r12.u64 = ctx.r12.u64 | 4136;
	// and. r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82484a60
	if (!ctx.cr0.eq) goto loc_82484A60;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
loc_82484A5C:
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r23.u32);
loc_82484A60:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484a08
	if (ctx.cr6.lt) goto loc_82484A08;
loc_82484A74:
	// lwz r25,12(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lis r22,8304
	r22.s64 = 544210944;
	// lis r19,8320
	r19.s64 = 545259520;
	// lis r20,4432
	r20.s64 = 290455552;
	// lis r21,4384
	r21.s64 = 287309824;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82484e78
	if (ctx.cr6.eq) goto loc_82484E78;
	// rlwinm r24,r25,2,0,29
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82484A94:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// lwzx r31,r11,r24
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82484e70
	if (ctx.cr0.eq) goto loc_82484E70;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82484b00
	if (!ctx.cr6.gt) goto loc_82484B00;
	// li r29,4
	r29.s64 = 4;
loc_82484AC4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484AEC;
	sub_8247D870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484ac4
	if (ctx.cr6.lt) goto loc_82484AC4;
loc_82484B00:
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82484b74
	if (!ctx.cr6.gt) goto loc_82484B74;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82484B10:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r8,20(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484b10
	if (ctx.cr6.lt) goto loc_82484B10;
loc_82484B74:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r22.u32, ctx.xer);
	// beq cr6,0x82484ddc
	if (ctx.cr6.eq) goto loc_82484DDC;
	// cmplw cr6,r9,r19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, ctx.xer);
	// beq cr6,0x82484ddc
	if (ctx.cr6.eq) goto loc_82484DDC;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r20.u32, ctx.xer);
	// beq cr6,0x82484ddc
	if (ctx.cr6.eq) goto loc_82484DDC;
	// cmplw cr6,r9,r21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r21.u32, ctx.xer);
	// bne cr6,0x82484c4c
	if (!ctx.cr6.eq) goto loc_82484C4C;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	r30.s64 = 0;
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484e70
	if (ctx.cr6.eq) goto loc_82484E70;
loc_82484BB8:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82484c38
	if (ctx.cr6.eq) goto loc_82484C38;
loc_82484BC4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82484c2c
	if (ctx.cr6.eq) goto loc_82484C2C;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82484BE8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484C18;
	sub_8247D870(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484be8
	if (!ctx.cr6.eq) goto loc_82484BE8;
loc_82484C2C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x82484bc4
	if (ctx.cr6.lt) goto loc_82484BC4;
loc_82484C38:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484bb8
	if (ctx.cr6.lt) goto loc_82484BB8;
	// b 0x82484e70
	goto loc_82484E70;
loc_82484C4C:
	// rlwinm r9,r10,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82484d0c
	if (ctx.cr6.lt) goto loc_82484D0C;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82484d0c
	if (ctx.cr6.gt) goto loc_82484D0C;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// li r30,0
	r30.s64 = 0;
	// divwu r27,r9,r10
	r27.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484e70
	if (ctx.cr6.eq) goto loc_82484E70;
loc_82484C84:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82484cf8
	if (ctx.cr6.eq) goto loc_82484CF8;
loc_82484C90:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mullw r11,r29,r11
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82484cec
	if (ctx.cr6.eq) goto loc_82484CEC;
	// rlwinm r28,r30,2,0,29
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82484CB4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r16,r11,2,0,29
	r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lwzx r4,r16,r11
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484CD8;
	sub_8247D870(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r11,r16,r11
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484cb4
	if (!ctx.cr6.eq) goto loc_82484CB4;
loc_82484CEC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// blt cr6,0x82484c90
	if (ctx.cr6.lt) goto loc_82484C90;
loc_82484CF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484c84
	if (ctx.cr6.lt) goto loc_82484C84;
	// b 0x82484e70
	goto loc_82484E70;
loc_82484D0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x82484d84
	if (ctx.cr6.eq) goto loc_82484D84;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82484e70
	if (!ctx.cr6.gt) goto loc_82484E70;
	// li r30,0
	r30.s64 = 0;
loc_82484D28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// b 0x82484d64
	goto loc_82484D64;
loc_82484D34:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484D58;
	sub_8247D870(ctx, base);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82484D64:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484d34
	if (!ctx.cr6.eq) goto loc_82484D34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484d28
	if (ctx.cr6.lt) goto loc_82484D28;
	// b 0x82484e70
	goto loc_82484E70;
loc_82484D84:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82484e70
	if (!ctx.cr6.gt) goto loc_82484E70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82484D94:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r23,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r23.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r17,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, r17.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82484d94
	if (ctx.cr6.lt) goto loc_82484D94;
	// b 0x82484e70
	goto loc_82484E70;
loc_82484DDC:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82484e70
	if (ctx.cr6.eq) goto loc_82484E70;
	// li r30,0
	r30.s64 = 0;
loc_82484DEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484E24;
	sub_8247D870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r5,r9,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8247d870
	ctx.lr = 0x82484E5C;
	sub_8247D870(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484dec
	if (ctx.cr6.lt) goto loc_82484DEC;
loc_82484E70:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x82484a94
	if (!ctx.cr6.eq) goto loc_82484A94;
loc_82484E78:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130e88
	ctx.lr = 0x82484E80;
	sub_82130E88(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824850f4
	if (!ctx.cr6.gt) goto loc_824850F4;
	// li r31,0
	r31.s64 = 0;
loc_82484E94:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824850e0
	if (ctx.cr0.eq) goto loc_824850E0;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// lis r10,4368
	ctx.r10.s64 = 286261248;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// lis r10,4400
	ctx.r10.s64 = 288358400;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r20.u32, ctx.xer);
	// beq cr6,0x824850e0
	if (ctx.cr6.eq) goto loc_824850E0;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824850e0
	if (!ctx.cr0.eq) goto loc_824850E0;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82484f70
	if (ctx.cr6.eq) goto loc_82484F70;
loc_82484F4C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484f4c
	if (!ctx.cr6.eq) goto loc_82484F4C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82484f70
	if (ctx.cr6.eq) goto loc_82484F70;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82484F70:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x82484fb8
	goto loc_82484FB8;
loc_82484F78:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82484fb4
	if (ctx.cr6.eq) goto loc_82484FB4;
loc_82484F90:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484f90
	if (!ctx.cr6.eq) goto loc_82484F90;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82484fb4
	if (!ctx.cr6.lt) goto loc_82484FB4;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82484FB4:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_82484FB8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484f78
	if (!ctx.cr6.eq) goto loc_82484F78;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8248502c
	if (ctx.cr6.eq) goto loc_8248502C;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82484FD4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x8248501c
	goto loc_8248501C;
loc_82484FDC:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82485018
	if (ctx.cr6.eq) goto loc_82485018;
loc_82484FF4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484ff4
	if (!ctx.cr6.eq) goto loc_82484FF4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82485018
	if (!ctx.cr6.lt) goto loc_82485018;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82485018:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8248501C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82484fdc
	if (!ctx.cr6.eq) goto loc_82484FDC;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82484fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82484FD4;
loc_8248502C:
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x824850e0
	if (!ctx.cr6.gt) goto loc_824850E0;
	// subf r10,r6,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82485040:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 20);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824850d0
	if (ctx.cr0.eq) goto loc_824850D0;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824850d0
	if (!ctx.cr6.gt) goto loc_824850D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8248507C:
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,24(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r6,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r6.u32);
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,20(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r6,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8248507c
	if (ctx.cr6.lt) goto loc_8248507C;
loc_824850D0:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bdnz 0x82485040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82485040;
loc_824850E0:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82484e94
	if (ctx.cr6.lt) goto loc_82484E94;
loc_824850F4:
	// lwz r7,8(r26)
	ctx.r7.u64 = REX_LOAD_U32(r26.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8248514c
	if (ctx.cr6.eq) goto loc_8248514C;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248510C:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82485130
	if (!ctx.cr6.eq) goto loc_82485130;
	// lwz r6,64(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82485134
	if (ctx.cr6.eq) goto loc_82485134;
loc_82485130:
	// mr r18,r17
	r18.u64 = r17.u64;
loc_82485134:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8248510c
	if (ctx.cr6.lt) goto loc_8248510C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82485164
	if (!ctx.cr6.eq) goto loc_82485164;
loc_8248514C:
	// mr r31,r17
	r31.u64 = r17.u64;
loc_82485150:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82130e88
	ctx.lr = 0x82485158;
	sub_82130E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd8
	return;
loc_82485164:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82481098
	ctx.lr = 0x8248516C;
	sub_82481098(ctx, base);
loc_8248516C:
	// lwz r31,12(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824852a4
	if (ctx.cr6.eq) goto loc_824852A4;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82485180:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lwzx r5,r11,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82485294
	if (ctx.cr0.eq) goto loc_82485294;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x824851fc
	if (ctx.cr6.eq) goto loc_824851FC;
	// lwz r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_824851BC:
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824851ec
	if (ctx.cr6.eq) goto loc_824851EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824851ec
	if (!ctx.cr6.lt) goto loc_824851EC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_824851EC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824851bc
	if (ctx.cr6.lt) goto loc_824851BC;
loc_824851FC:
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8248524c
	if (ctx.cr6.eq) goto loc_8248524C;
	// lwz r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U32(r26.u32 + 20);
loc_82485218:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8248523c
	if (ctx.cr6.eq) goto loc_8248523C;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8248523c
	if (!ctx.cr6.lt) goto loc_8248523C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_8248523C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485218
	if (ctx.cr6.lt) goto loc_82485218;
loc_8248524C:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82485294
	if (ctx.cr6.eq) goto loc_82485294;
	// bge cr6,0x8248527c
	if (!ctx.cr6.lt) goto loc_8248527C;
	// subf r10,r31,r4
	ctx.r10.u64 = ctx.r4.u64 - r31.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82485264:
	// lwz r10,24(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 24);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x82485264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82485264;
loc_8248527C:
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x82481098
	ctx.lr = 0x82485290;
	sub_82481098(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82485294:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82485180
	if (!ctx.cr6.eq) goto loc_82485180;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8248516c
	if (ctx.cr6.eq) goto loc_8248516C;
loc_824852A4:
	// li r31,0
	r31.s64 = 0;
	// b 0x82485150
	goto loc_82485150;
}

DEFINE_REX_FUNC(sub_824CC0A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824CC0A8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824CC0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r3,460(r31)
	REX_STORE_U32(r31.u32 + 460, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r8,r9,3720
	ctx.r8.s64 = ctx.r9.s64 + 3720;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x824cc134
	if (ctx.cr6.gt) goto loc_824CC134;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x824cc114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CC114;
	// bdzf 4*cr6+eq,0x824cc114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CC114;
	// bdzf 4*cr6+eq,0x824cc124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_824CC124;
	// bne cr6,0x824cc124
	if (!ctx.cr6.eq) goto loc_824CC124;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824cc160
	if (ctx.cr6.eq) goto loc_824CC160;
	// b 0x824cc140
	goto loc_824CC140;
loc_824CC114:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824cc160
	if (ctx.cr6.eq) goto loc_824CC160;
	// b 0x824cc140
	goto loc_824CC140;
loc_824CC124:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824cc160
	if (ctx.cr6.eq) goto loc_824CC160;
	// b 0x824cc140
	goto loc_824CC140;
loc_824CC134:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x824cc160
	if (!ctx.cr6.lt) goto loc_824CC160;
loc_824CC140:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CC160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CC160:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824cc2a8
	if (ctx.cr6.eq) goto loc_824CC2A8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x824cc1e8
	if (ctx.cr6.eq) goto loc_824CC1E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824cc1a4
	if (ctx.cr6.eq) goto loc_824CC1A4;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x824cc2c0
	if (!ctx.cr6.eq) goto loc_824CC2C0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// addi r9,r10,-18656
	ctx.r9.s64 = ctx.r10.s64 + -18656;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC1A4:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824cc1d0
	if (!ctx.cr6.eq) goto loc_824CC1D0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-18384
	ctx.r10.s64 = ctx.r11.s64 + -18384;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x824cb530
	ctx.lr = 0x824CC1CC;
	sub_824CB530(ctx, base);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC1D0:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x824cc2c0
	if (!ctx.cr6.eq) goto loc_824CC2C0;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-18656
	ctx.r10.s64 = ctx.r11.s64 + -18656;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC1E8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x824cc214
	if (!ctx.cr6.eq) goto loc_824CC214;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-18864
	ctx.r10.s64 = ctx.r11.s64 + -18864;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x824cb530
	ctx.lr = 0x824CC210;
	sub_824CB530(ctx, base);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC214:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824cc22c
	if (!ctx.cr6.eq) goto loc_824CC22C;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-18488
	ctx.r10.s64 = ctx.r11.s64 + -18488;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC22C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x824cc244
	if (!ctx.cr6.eq) goto loc_824CC244;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-18656
	ctx.r10.s64 = ctx.r11.s64 + -18656;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC244:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824cc264
	if (!ctx.cr6.eq) goto loc_824CC264;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-17040
	ctx.r10.s64 = ctx.r11.s64 + -17040;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x824cb920
	ctx.lr = 0x824CC260;
	sub_824CB920(ctx, base);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC264:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824cc288
	if (!ctx.cr6.eq) goto loc_824CC288;
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r10,r11,-16680
	ctx.r10.s64 = ctx.r11.s64 + -16680;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x824cb530
	ctx.lr = 0x824CC27C;
	sub_824CB530(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824cb920
	ctx.lr = 0x824CC284;
	sub_824CB920(ctx, base);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC288:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CC2A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC2A8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r29,120(r31)
	REX_STORE_U32(r31.u32 + 120, r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x824cc2e4
	if (ctx.cr6.eq) goto loc_824CC2E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824cc2e4
	if (ctx.cr6.eq) goto loc_824CC2E4;
loc_824CC2C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x824CC2E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824cc328
	goto loc_824CC328;
loc_824CC2E4:
	// lis r10,-32179
	ctx.r10.s64 = -2108882944;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r9,r10,-18520
	ctx.r9.s64 = ctx.r10.s64 + -18520;
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x824cc328
	if (!ctx.cr6.gt) goto loc_824CC328;
	// li r10,84
	ctx.r10.s64 = 84;
	// li r8,0
	ctx.r8.s64 = 0;
loc_824CC308:
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// stw r8,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r8.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x824cc308
	if (ctx.cr6.lt) goto loc_824CC308;
loc_824CC328:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824cc340
	if (ctx.cr6.eq) goto loc_824CC340;
	// stw r29,124(r31)
	REX_STORE_U32(r31.u32 + 124, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_824CC340:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824DA020) {
	REX_FUNC_PROLOGUE();
	// b 0x824d8758
	sub_824D8758(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DA030) {
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
	ctx.lr = 0x824DA038;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// lis r10,20042
	ctx.r10.s64 = 1313472512;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r10,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x824da05c
	if (!ctx.cr6.lt) goto loc_824DA05C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r11.u32);
	// b 0x824da318
	goto loc_824DA318;
loc_824DA05C:
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lis r6,-19687
	ctx.r6.s64 = -1290207232;
	// lwz r9,56(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// mulli r7,r10,40
	ctx.r7.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// ori r10,r6,62707
	ctx.r10.u64 = ctx.r6.u64 | 62707;
	// extsw r29,r9
	r29.s64 = ctx.r9.s32;
	// add r28,r7,r9
	r28.u64 = ctx.r7.u64 + ctx.r9.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// b 0x824da100
	goto loc_824DA100;
loc_824DA084:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824da0c0
	if (ctx.cr6.eq) goto loc_824DA0C0;
	// lbz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U8(r29.u32 + 0);
	// b 0x824da0b8
	goto loc_824DA0B8;
loc_824DA098:
	// rldicl r31,r11,45,19
	r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_824DA0B8:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x824da098
	if (!ctx.cr0.eq) goto loc_824DA098;
loc_824DA0C0:
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// cmpwi cr6,r29,-32
	ctx.cr6.compare<int32_t>(r29.s32, -32, ctx.xer);
	// beq cr6,0x824da0fc
	if (ctx.cr6.eq) goto loc_824DA0FC;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x824da0f4
	goto loc_824DA0F4;
loc_824DA0D4:
	// rldicl r31,r11,45,19
	r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_824DA0F4:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x824da0d4
	if (!ctx.cr0.eq) goto loc_824DA0D4;
loc_824DA0FC:
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
loc_824DA100:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x824da084
	if (ctx.cr6.lt) goto loc_824DA084;
	// lwz r9,36(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r29,r7
	r29.s64 = ctx.r7.s32;
	// add r28,r9,r7
	r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bge cr6,0x824da1e0
	if (!ctx.cr6.lt) goto loc_824DA1E0;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r27,r9,-26856
	r27.s64 = ctx.r9.s64 + -26856;
loc_824DA12C:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824da140
	if (!ctx.cr6.eq) goto loc_824DA140;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x824da148
	goto loc_824DA148;
loc_824DA140:
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_824DA148:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824da180
	if (ctx.cr6.eq) goto loc_824DA180;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x824da178
	goto loc_824DA178;
loc_824DA158:
	// rldicl r31,r11,45,19
	r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_824DA178:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x824da158
	if (!ctx.cr0.eq) goto loc_824DA158;
loc_824DA180:
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824da194
	if (!ctx.cr6.eq) goto loc_824DA194;
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x824da19c
	goto loc_824DA19C;
loc_824DA194:
	// lwz r7,44(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_824DA19C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824da1d4
	if (ctx.cr6.eq) goto loc_824DA1D4;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// b 0x824da1cc
	goto loc_824DA1CC;
loc_824DA1AC:
	// rldicl r31,r11,45,19
	r31.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r30)
	ea = 1 + r30.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	r30.u32 = ea;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_824DA1CC:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x824da1ac
	if (!ctx.cr0.eq) goto loc_824DA1AC;
loc_824DA1D4:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// blt cr6,0x824da12c
	if (ctx.cr6.lt) goto loc_824DA12C;
loc_824DA1E0:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r9,r9,276
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(276));
	// extsw r30,r7
	r30.s64 = ctx.r7.s32;
	// add r29,r9,r7
	r29.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x824da258
	goto loc_824DA258;
loc_824DA1F8:
	// lwz r31,272(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824da254
	if (ctx.cr6.eq) goto loc_824DA254;
	// lbz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 0);
	// b 0x824da24c
	goto loc_824DA24C;
loc_824DA20C:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x824da248
	if (ctx.cr6.eq) goto loc_824DA248;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x824da248
	if (ctx.cr6.eq) goto loc_824DA248;
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// beq cr6,0x824da248
	if (ctx.cr6.eq) goto loc_824DA248;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x824da248
	if (ctx.cr6.eq) goto loc_824DA248;
	// rldicl r6,r11,45,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrldi r7,r7,56
	ctx.r7.u64 = ctx.r7.u64 & 0xFF;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// xor r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r11.u64;
loc_824DA248:
	// lbzu r7,1(r31)
	ea = 1 + r31.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_824DA24C:
	// extsb. r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824da20c
	if (!ctx.cr0.eq) goto loc_824DA20C;
loc_824DA254:
	// addi r30,r30,276
	r30.s64 = r30.s64 + 276;
loc_824DA258:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// blt cr6,0x824da1f8
	if (ctx.cr6.lt) goto loc_824DA1F8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824da310
	if (ctx.cr6.eq) goto loc_824DA310;
	// lbz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x824da290
	goto loc_824DA290;
loc_824DA270:
	// rldicl r4,r11,45,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r7,r11,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// clrldi r6,r9,56
	ctx.r6.u64 = ctx.r9.u64 & 0xFF;
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// xor r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 ^ ctx.r11.u64;
loc_824DA290:
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x824da270
	if (!ctx.cr0.eq) goto loc_824DA270;
	// rldicl r8,r11,45,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u64, 45) & 0x1FFFFFFFFFFF;
	// mulld r9,r11,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * ctx.r10.u64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// rldicl r11,r11,17,47
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 17) & 0x1FFFF;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r8,r5,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// xor r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mulld r8,r7,r10
	ctx.r8.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r7,45,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r8,r7,17,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 17) & 0x1FFFF;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r5,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// xor r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mulld r9,r8,r10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r10.u64);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rldicl r10,r8,45,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 45) & 0x1FFFFFFFFFFF;
	// rldicl r9,r8,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u64, 17) & 0x1FFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_824DA310:
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,164(r3)
	REX_STORE_U32(ctx.r3.u32 + 164, ctx.r10.u32);
loc_824DA318:
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824EE580) {
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
	ctx.lr = 0x824EE588;
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-26736
	r28.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ee5c8
	if (!ctx.cr6.eq) goto loc_824EE5C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26412
	ctx.r5.s64 = ctx.r11.s64 + -26412;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE5C8;
	sub_824EA978(ctx, base);
loc_824EE5C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824ee5dc
	if (!ctx.cr6.eq) goto loc_824EE5DC;
	// li r30,0
	r30.s64 = 0;
	// b 0x824ee5e8
	goto loc_824EE5E8;
loc_824EE5DC:
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x824ee604
	if (!ctx.cr6.eq) goto loc_824EE604;
loc_824EE5E8:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,765
	ctx.r7.s64 = 765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE604;
	sub_824EA978(ctx, base);
loc_824EE604:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ee408
	ctx.lr = 0x824EE614;
	sub_824EE408(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824ee620
	if (!ctx.cr0.eq) goto loc_824EE620;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_824EE620:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r30,16(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824ee668
	if (ctx.cr6.eq) goto loc_824EE668;
	// bl 0x824ee070
	ctx.lr = 0x824EE634;
	sub_824EE070(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824ee64c
	if (!ctx.cr6.eq) goto loc_824EE64C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_824EE64C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824ee65c
	if (ctx.cr6.eq) goto loc_824EE65C;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x825a28c0
	ctx.lr = 0x824EE65C;
	sub_825A28C0(ctx, base);
loc_824EE65C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824EE668:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F14B8) {
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
	ctx.lr = 0x824F14C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-24960
	r27.s64 = ctx.r10.s64 + -24960;
	// bne cr6,0x824f1508
	if (!ctx.cr6.eq) goto loc_824F1508;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,74
	ctx.r7.s64 = 74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1508;
	sub_824EA978(ctx, base);
loc_824F1508:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x824f152c
	if (!ctx.cr6.eq) goto loc_824F152C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F152C;
	sub_824EA978(ctx, base);
loc_824F152C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x824f1550
	if (!ctx.cr6.eq) goto loc_824F1550;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25924
	ctx.r5.s64 = ctx.r11.s64 + -25924;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1550;
	sub_824EA978(ctx, base);
loc_824F1550:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824F1560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824f1588
	if (!ctx.cr0.eq) goto loc_824F1588;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-24968
	ctx.r5.s64 = ctx.r11.s64 + -24968;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1584;
	sub_824EA978(ctx, base);
	// b 0x824f15d8
	goto loc_824F15D8;
loc_824F1588:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,8(r31)
	REX_STORE_U32(r31.u32 + 8, r26.u32);
	// addi r9,r31,-20
	ctx.r9.s64 = r31.s64 + -20;
	// stw r25,12(r31)
	REX_STORE_U32(r31.u32 + 12, r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824F15A8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,36(r9)
	ea = 36 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x824f15a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F15A8;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1156
	ctx.r9.s64 = r31.s64 + 1156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824F15C8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,12(r9)
	ea = 12 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x824f15c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F15C8;
loc_824F15D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FD7D8) {
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
	ctx.lr = 0x824FD7E0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r3,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r4,0,19,31
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1FFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r6,r9,0,20,21
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF3FF);
	// rlwimi r3,r7,0,11,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwimi r6,r9,0,16,19
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r3,r7,0,10,10
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x200000) | (ctx.r3.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_824FD838:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fd858
	if (!ctx.cr0.eq) goto loc_824FD858;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824fd838
	if (!ctx.cr6.eq) goto loc_824FD838;
loc_824FD858:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fd918
	if (!ctx.cr0.eq) goto loc_824FD918;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r30,r10,16,29,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// rlwinm r28,r10,19,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7;
	// ble 0x824fd918
	if (!ctx.cr0.gt) goto loc_824FD918;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bgt cr6,0x824fd918
	if (ctx.cr6.gt) goto loc_824FD918;
	// clrlwi r4,r7,19
	ctx.r4.u64 = ctx.r7.u32 & 0x1FFF;
	// cmplw cr6,r4,r27
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824fd918
	if (ctx.cr6.gt) goto loc_824FD918;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824fd918
	if (!ctx.cr6.lt) goto loc_824FD918;
	// addic. r31,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	r31.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824fd8bc
	if (ctx.cr0.eq) goto loc_824FD8BC;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x824fd8bc
	if (!ctx.cr6.lt) goto loc_824FD8BC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x824fd8c0
	if (ctx.cr6.gt) goto loc_824FD8C0;
loc_824FD8BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FD8C0:
	// rlwinm r10,r7,16,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0x1F;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824fd918
	if (!ctx.cr6.eq) goto loc_824FD918;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824fc9f8
	ctx.lr = 0x824FD8E4;
	sub_824FC9F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824fd918
	if (ctx.cr0.lt) goto loc_824FD918;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824fcb40
	ctx.lr = 0x824FD904;
	sub_824FCB40(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x824fd920
	goto loc_824FD920;
loc_824FD918:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FD920:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825093D0) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// sld r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x82509414
	if (!ctx.cr6.lt) goto loc_82509414;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_825093F0:
	// ld r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8250941c
	if (!ctx.cr6.eq) goto loc_8250941C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x825093f0
	if (ctx.cr6.lt) goto loc_825093F0;
loc_82509414:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8250941C:
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// cntlzd r11,r11
	ctx.r11.u64 = ctx.r11.u64 == 0 ? 64 : __builtin_clzll(ctx.r11.u64);
	// subfic r11,r11,63
	ctx.xer.ca = ctx.r11.u32 <= 63;
	ctx.r11.u64 = static_cast<uint64_t>(63) - ctx.r11.u64;
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// srd r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8250C958) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8250C960;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r4,r30,r3
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// bl 0x8250b470
	ctx.lr = 0x8250C980;
	sub_8250B470(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8250C98C;
	sub_8250AD28(ctx, base);
	// stwx r3,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82510E48) {
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
	ctx.lr = 0x82510E50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// bl 0x82552240
	ctx.lr = 0x82510E80;
	sub_82552240(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,44(r29)
	REX_STORE_U32(r29.u32 + 44, r30.u32);
	// bl 0x82552240
	ctx.lr = 0x82510EA0;
	sub_82552240(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510f40
	if (!ctx.cr0.eq) goto loc_82510F40;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82510f40
	if (ctx.cr0.eq) goto loc_82510F40;
loc_82510EB8:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bne cr6,0x82510f24
	if (!ctx.cr6.eq) goto loc_82510F24;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x82510f24
	if (ctx.cr6.eq) goto loc_82510F24;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510f24
	if (!ctx.cr0.eq) goto loc_82510F24;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r4,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r4.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82510f24
	if (ctx.cr0.eq) goto loc_82510F24;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x82510f04
	if (ctx.cr6.lt) goto loc_82510F04;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82510f08
	if (!ctx.cr6.gt) goto loc_82510F08;
loc_82510F04:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82510F08:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82510f24
	if (ctx.cr0.eq) goto loc_82510F24;
	// rlwinm. r11,r10,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82510f24
	if (!ctx.cr0.eq) goto loc_82510F24;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82510ab0
	ctx.lr = 0x82510F24;
	sub_82510AB0(ctx, base);
loc_82510F24:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82510f40
	if (!ctx.cr0.eq) goto loc_82510F40;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82510eb8
	if (!ctx.cr6.eq) goto loc_82510EB8;
loc_82510F40:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8251F0C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8251F0C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8251e928
	ctx.lr = 0x8251F0EC;
	sub_8251E928(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251f104
	if (ctx.cr0.eq) goto loc_8251F104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x824e4368
	ctx.lr = 0x8251F104;
	sub_824E4368(ctx, base);
loc_8251F104:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82502060
	ctx.lr = 0x8251F114;
	sub_82502060(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82520BE0) {
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
	ctx.lr = 0x82520BE8;
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520c04
	if (ctx.cr6.eq) goto loc_82520C04;
	// bl 0x8251f408
	ctx.lr = 0x82520C04;
	sub_8251F408(ctx, base);
loc_82520C04:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r14,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r14.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// bl 0x826a2e60
	ctx.lr = 0x82520C18;
	sub_826A2E60(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// li r17,0
	r17.s64 = 0;
	// stw r14,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r14.u32);
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// stw r14,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r14.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// lwz r8,4(r14)
	ctx.r8.u64 = REX_LOAD_U32(r14.u32 + 4);
	// mr r30,r17
	r30.u64 = r17.u64;
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r17.u64);
	// std r17,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r17.u64);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// std r17,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, r17.u64);
	// std r17,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, r17.u64);
	// stw r17,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r17.u32);
	// stw r17,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r17.u32);
	// addic r10,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// lwz r31,20(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82520cec
	if (!ctx.cr0.eq) goto loc_82520CEC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x82520cec
	if (ctx.cr0.eq) goto loc_82520CEC;
loc_82520C78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x82520cd4
	if (!ctx.cr6.eq) goto loc_82520CD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82520CA0;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82520cd4
	if (ctx.cr6.eq) goto loc_82520CD4;
	// li r30,1
	r30.s64 = 1;
loc_82520CD4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82520cec
	if (!ctx.cr0.eq) goto loc_82520CEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82520c78
	if (!ctx.cr6.eq) goto loc_82520C78;
loc_82520CEC:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520f84
	if (ctx.cr0.eq) goto loc_82520F84;
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82520dc8
	if (!ctx.cr6.gt) goto loc_82520DC8;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_82520D08:
	// lwz r9,12(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r7,r5,r9
	ctx.r7.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r8,36(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82520db4
	if (ctx.cr6.eq) goto loc_82520DB4;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82520db4
	if (ctx.cr0.eq) goto loc_82520DB4;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82520d60
	if (ctx.cr6.eq) goto loc_82520D60;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82520D38:
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,36(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82520d58
	if (ctx.cr6.eq) goto loc_82520D58;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82520d38
	if (ctx.cr6.lt) goto loc_82520D38;
loc_82520D58:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82520db4
	if (ctx.cr6.lt) goto loc_82520DB4;
loc_82520D60:
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82520db4
	if (!ctx.cr6.gt) goto loc_82520DB4;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_82520D74:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82520da0
	if (!ctx.cr6.eq) goto loc_82520DA0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r4,r9,0,2,2
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82520da0
	if (!ctx.cr0.eq) goto loc_82520DA0;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82520DA0:
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82520d74
	if (ctx.cr6.lt) goto loc_82520D74;
loc_82520DB4:
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82520d08
	if (ctx.cr6.lt) goto loc_82520D08;
loc_82520DC8:
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// mr r28,r17
	r28.u64 = r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82520f84
	if (!ctx.cr6.gt) goto loc_82520F84;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r15,1
	r15.s64 = 1;
loc_82520DE0:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r27,r26,r11
	r27.u64 = r26.u64 + ctx.r11.u64;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520f6c
	if (ctx.cr6.eq) goto loc_82520F6C;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82520f6c
	if (ctx.cr0.eq) goto loc_82520F6C;
	// rlwinm. r11,r11,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r29,r17
	r29.u64 = r17.u64;
	// beq 0x82520f6c
	if (ctx.cr0.eq) goto loc_82520F6C;
loc_82520E10:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x82520E24;
	sub_825BDBE8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82520E2C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82520e54
	if (ctx.cr6.eq) goto loc_82520E54;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82520e4c
	if (ctx.cr6.eq) goto loc_82520E4C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82520f58
	if (!ctx.cr0.eq) goto loc_82520F58;
loc_82520E4C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82520e2c
	goto loc_82520E2C;
loc_82520E54:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82520ee4
	if (!ctx.cr6.eq) goto loc_82520EE4;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// li r6,117
	ctx.r6.s64 = 117;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x825bb860
	ctx.lr = 0x82520E88;
	sub_825BB860(ctx, base);
	// lwz r10,4(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r10,24
	ctx.r8.s64 = ctx.r10.s64 + 24;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,28(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r7.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_82520EE4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8250ab60
	ctx.lr = 0x82520EF0;
	sub_8250AB60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82520EFC;
	sub_8250AD28(ctx, base);
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r8,r11,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r7,r11,0,31,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// slw r11,r15,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r7,0,18,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r9,r10,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_82520F58:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82520e10
	if (ctx.cr6.lt) goto loc_82520E10;
loc_82520F6C:
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,40
	r26.s64 = r26.s64 + 40;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82520de0
	if (ctx.cr6.lt) goto loc_82520DE0;
	// b 0x82520f88
	goto loc_82520F88;
loc_82520F84:
	// li r15,1
	r15.s64 = 1;
loc_82520F88:
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// mr r16,r17
	r16.u64 = r17.u64;
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
	// bne 0x8252152c
	if (!ctx.cr0.eq) goto loc_8252152C;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252152c
	if (ctx.cr0.eq) goto loc_8252152C;
loc_82520FB8:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x825214a0
	if (!ctx.cr6.eq) goto loc_825214A0;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r22,r21,-8
	r22.s64 = r21.s64 + -8;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82520FE4;
	sub_824F71B8(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + r22.u32);
	// lwz r10,8(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// clrlwi r30,r11,17
	r30.u64 = ctx.r11.u32 & 0x7FFF;
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// mulli r20,r30,40
	r20.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(40));
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// add r25,r20,r11
	r25.u64 = r20.u64 + ctx.r11.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82521010;
	sub_824F71B8(ctx, base);
	// lwzx r11,r3,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + r22.u32);
	// lwz r31,4(r21)
	r31.u64 = REX_LOAD_U32(r21.u32 + 4);
	// addi r19,r21,4
	r19.s64 = r21.s64 + 4;
	// rlwinm r11,r11,17,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
	// mr r28,r17
	r28.u64 = r17.u64;
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
loc_82521028:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521088
	if (ctx.cr6.eq) goto loc_82521088;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82521080
	if (ctx.cr6.eq) goto loc_82521080;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82521080
	if (ctx.cr0.eq) goto loc_82521080;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521074
	if (ctx.cr0.eq) goto loc_82521074;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// rlwinm r10,r10,0,15,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82521570
	if (ctx.cr6.gt) goto loc_82521570;
	// addi r18,r11,1
	r18.s64 = ctx.r11.s64 + 1;
loc_82521074:
	// bl 0x8251dfb0
	ctx.lr = 0x82521078;
	sub_8251DFB0(ctx, base);
	// slw r11,r15,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r3.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
loc_82521080:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x82521028
	goto loc_82521028;
loc_82521088:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x825210bc
	if (ctx.cr6.eq) goto loc_825210BC;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x825210b4
	if (!ctx.cr6.eq) goto loc_825210B4;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(r28.u32, 64, ctx.xer);
	// bne cr6,0x825210b4
	if (!ctx.cr6.eq) goto loc_825210B4;
	// rlwimi r11,r10,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
	// b 0x825210bc
	goto loc_825210BC;
loc_825210B4:
	// slw r11,r15,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r10.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = ctx.r11.u64 | r28.u64;
loc_825210BC:
	// rlwinm. r11,r28,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825210d0
	if (ctx.cr0.eq) goto loc_825210D0;
	// rlwinm. r28,r28,0,25,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x825210d8
	if (!ctx.cr0.eq) goto loc_825210D8;
	// li r28,4
	r28.s64 = 4;
loc_825210D0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825212f4
	if (ctx.cr6.eq) goto loc_825212F4;
loc_825210D8:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// subf r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825212c0
	if (!ctx.cr0.eq) goto loc_825212C0;
	// lwz r31,0(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r31,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825215dc
	if (!ctx.cr0.eq) goto loc_825215DC;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825215dc
	if (!ctx.cr6.eq) goto loc_825215DC;
	// rlwinm r11,r31,0,15,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x1FFF8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8252157c
	if (!ctx.cr6.eq) goto loc_8252157C;
loc_82521114:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82521130
	if (ctx.cr6.eq) goto loc_82521130;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r28
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// beq 0x82521134
	if (ctx.cr0.eq) goto loc_82521134;
loc_82521130:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82521134:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825212b8
	if (!ctx.cr0.eq) goto loc_825212B8;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// andc r11,r28,r11
	ctx.r11.u64 = r28.u64 & ~ctx.r11.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// subfic r24,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r24.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x825bc4a0
	ctx.lr = 0x82521160;
	sub_825BC4A0(ctx, base);
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f71b8
	ctx.lr = 0x8252117C;
	sub_824F71B8(ctx, base);
	// add r26,r3,r22
	r26.u64 = ctx.r3.u64 + r22.u64;
	// mr r23,r19
	r23.u64 = r19.u64;
loc_82521184:
	// lwz r31,0(r23)
	r31.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521114
	if (ctx.cr6.eq) goto loc_82521114;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825212a4
	if (ctx.cr6.eq) goto loc_825212A4;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r30,r29,7,29,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x825212a4
	if (ctx.cr0.eq) goto loc_825212A4;
	// bl 0x8251dfb0
	ctx.lr = 0x825211AC;
	sub_8251DFB0(ctx, base);
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r24.s32, ctx.xer);
	// bne cr6,0x825212a4
	if (!ctx.cr6.eq) goto loc_825212A4;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82521210
	if (ctx.cr6.eq) goto loc_82521210;
	// rotlwi r7,r29,0
	ctx.r7.u64 = __builtin_rotateleft32(r29.u32, 0);
	// rlwinm r8,r29,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0xFF;
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_825211D4:
	// srw r6,r8,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r6,r15,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r15.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825211d4
	if (ctx.cr6.lt) goto loc_825211D4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82521210
	if (ctx.cr6.eq) goto loc_82521210;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// beq 0x82521214
	if (ctx.cr0.eq) goto loc_82521214;
loc_82521210:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82521214:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825215d0
	if (ctx.cr0.eq) goto loc_825215D0;
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 4);
	// rlwinm r11,r29,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x3;
	// lwz r9,12(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 12);
	// li r8,40
	ctx.r8.s64 = 40;
	// rlwinm r10,r10,26,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFF;
	// subf r9,r9,r27
	ctx.r9.u64 = r27.u64 - ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// divw r4,r9,r8
	ctx.r4.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x82521248;
	sub_825BDBE8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// rlwinm r11,r11,0,17,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82521278
	goto loc_82521278;
loc_82521270:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82521278:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x82521270
	if (!ctx.cr6.eq) goto loc_82521270;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_825212A4:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82521184
	if (!ctx.cr6.eq) goto loc_82521184;
	// addi r23,r31,8
	r23.s64 = r31.s64 + 8;
	// b 0x82521184
	goto loc_82521184;
loc_825212B8:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r25,r20,r11
	r25.u64 = r20.u64 + ctx.r11.u64;
loc_825212C0:
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(r28.u32, 64, ctx.xer);
	// bne cr6,0x825212d4
	if (!ctx.cr6.eq) goto loc_825212D4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252163c
	if (ctx.cr0.eq) goto loc_8252163C;
loc_825212D4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x825212f4
	if (!ctx.cr6.eq) goto loc_825212F4;
	// cntlzw r10,r28
	ctx.r10.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// subfic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r10.u64;
	// rlwimi r11,r10,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
loc_825212F4:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8252130c
	if (!ctx.cr6.gt) goto loc_8252130C;
	// rlwimi r11,r18,7,16,24
	ctx.r11.u64 = (__builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 7) & 0xFF80) | (ctx.r11.u64 & 0xFFFFFFFFFFFF007F);
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
loc_8252130C:
	// lwz r31,4(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r31,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82521458
	if (!ctx.cr6.eq) goto loc_82521458;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82521334;
	sub_824F71B8(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r22
	r30.u64 = ctx.r3.u64 + r22.u64;
	// bne 0x8252136c
	if (!ctx.cr0.eq) goto loc_8252136C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r11,20,15,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FFF8;
	// lwz r9,28(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 28);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// rlwimi r10,r11,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_8252136C:
	// lwz r29,0(r19)
	r29.u64 = REX_LOAD_U32(r19.u32 + 0);
loc_82521370:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825214a0
	if (ctx.cr6.eq) goto loc_825214A0;
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521450
	if (ctx.cr6.eq) goto loc_82521450;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x825213a8
	if (ctx.cr6.eq) goto loc_825213A8;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x825213a8
	if (ctx.cr6.eq) goto loc_825213A8;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x825213ac
	if (!ctx.cr6.eq) goto loc_825213AC;
loc_825213A8:
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
loc_825213AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// beq 0x82521648
	if (ctx.cr0.eq) goto loc_82521648;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825213CC;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = r31.s64 + -24;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825213fc
	if (ctx.cr6.eq) goto loc_825213FC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82521450
	if (!ctx.cr6.gt) goto loc_82521450;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// ble cr6,0x825213fc
	if (!ctx.cr6.gt) goto loc_825213FC;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x82521450
	if (!ctx.cr6.eq) goto loc_82521450;
loc_825213FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82521424
	if (!ctx.cr0.eq) goto loc_82521424;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwimi r9,r11,22,26,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x30) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFCF);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// b 0x82521450
	goto loc_82521450;
loc_82521424:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82521440
	if (!ctx.cr0.eq) goto loc_82521440;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// beq cr6,0x82521450
	if (ctx.cr6.eq) goto loc_82521450;
loc_82521440:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,18,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82521650
	if (!ctx.cr6.eq) goto loc_82521650;
loc_82521450:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x82521370
	goto loc_82521370;
loc_82521458:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825214a0
	if (!ctx.cr6.eq) goto loc_825214A0;
	// lwz r30,0(r19)
	r30.u64 = REX_LOAD_U32(r19.u32 + 0);
loc_82521464:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x825214a0
	if (ctx.cr6.eq) goto loc_825214A0;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521498
	if (ctx.cr6.eq) goto loc_82521498;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffb10
	ctx.lr = 0x82521480;
	sub_824FFB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521498
	if (ctx.cr0.eq) goto loc_82521498;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x8252165c
	if (!ctx.cr6.eq) goto loc_8252165C;
loc_82521498:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x82521464
	goto loc_82521464;
loc_825214A0:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x825214d8
	if (ctx.cr6.eq) goto loc_825214D8;
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
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
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82521518
	if (!ctx.cr6.eq) goto loc_82521518;
loc_825214C8:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r16,r21
	r16.u64 = r21.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82521518
	goto loc_82521518;
loc_825214D8:
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// cmplw cr6,r21,r9
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x825214c8
	if (ctx.cr6.eq) goto loc_825214C8;
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
loc_82521518:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252152c
	if (!ctx.cr0.eq) goto loc_8252152C;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82520fb8
	if (!ctx.cr6.eq) goto loc_82520FB8;
loc_8252152C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f7120
	ctx.lr = 0x82521534;
	sub_824F7120(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8251e050
	ctx.lr = 0x82521540;
	sub_8251E050(ctx, base);
	// lwz r11,48(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// add r30,r3,r31
	r30.u64 = ctx.r3.u64 + r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bne cr6,0x82521668
	if (!ctx.cr6.eq) goto loc_82521668;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8251f0c0
	ctx.lr = 0x82521568;
	sub_8251F0C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82521674
	goto loc_82521674;
loc_82521570:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252157C;
	sub_824E4368(ctx, base);
loc_8252157C:
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// beq 0x82521590
	if (ctx.cr0.eq) goto loc_82521590;
	// li r4,3548
	ctx.r4.s64 = 3548;
	// bl 0x824e4368
	ctx.lr = 0x82521590;
	sub_824E4368(ctx, base);
loc_82521590:
	// rlwinm. r11,r28,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825215a0
	if (ctx.cr0.eq) goto loc_825215A0;
	// li r4,3598
	ctx.r4.s64 = 3598;
	// bl 0x824e4368
	ctx.lr = 0x825215A0;
	sub_824E4368(ctx, base);
loc_825215A0:
	// rlwinm. r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825215b0
	if (ctx.cr0.eq) goto loc_825215B0;
	// li r4,3533
	ctx.r4.s64 = 3533;
	// bl 0x824e4368
	ctx.lr = 0x825215B0;
	sub_824E4368(ctx, base);
loc_825215B0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825215c8
	if (ctx.cr0.eq) goto loc_825215C8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-21724
	ctx.r5.s64 = ctx.r11.s64 + -21724;
	// bl 0x824e4368
	ctx.lr = 0x825215C8;
	sub_824E4368(ctx, base);
loc_825215C8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x825215D0;
	sub_824E4368(ctx, base);
loc_825215D0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x825215DC;
	sub_824E4368(ctx, base);
loc_825215DC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8251ffc0
	ctx.lr = 0x825215E8;
	sub_8251FFC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82521600
	if (ctx.cr0.eq) goto loc_82521600;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521600;
	sub_824E4368(ctx, base);
loc_82521600:
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r10,r10,-17884
	ctx.r10.s64 = ctx.r10.s64 + -17884;
	// rlwinm r11,r11,30,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1C;
	// addi r5,r9,-21732
	ctx.r5.s64 = ctx.r9.s64 + -21732;
	// rlwinm r7,r31,12,23,31
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x1FF;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x826a1a58
	ctx.lr = 0x8252162C;
	sub_826A1A58(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4556
	ctx.r4.s64 = 4556;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252163C;
	sub_824E4368(ctx, base);
loc_8252163C:
	// li r4,3599
	ctx.r4.s64 = 3599;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521648;
	sub_824E4368(ctx, base);
loc_82521648:
	// li r4,3512
	ctx.r4.s64 = 3512;
	// bl 0x824e4368
	ctx.lr = 0x82521650;
	sub_824E4368(ctx, base);
loc_82521650:
	// li r4,4539
	ctx.r4.s64 = 4539;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x8252165C;
	sub_824E4368(ctx, base);
loc_8252165C:
	// li r4,3548
	ctx.r4.s64 = 3548;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521668;
	sub_824E4368(ctx, base);
loc_82521668:
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x8251f0c0
	ctx.lr = 0x82521670;
	sub_8251F0C0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
loc_82521674:
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251ef40
	ctx.lr = 0x82521680;
	sub_8251EF40(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521698
	if (ctx.cr6.eq) goto loc_82521698;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251ef40
	ctx.lr = 0x82521698;
	sub_8251EF40(ctx, base);
loc_82521698:
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// bge cr6,0x825216b0
	if (!ctx.cr6.lt) goto loc_825216B0;
	// subfic r5,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r5.u64 = static_cast<uint64_t>(32) - r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251ef40
	ctx.lr = 0x825216B0;
	sub_8251EF40(ctx, base);
loc_825216B0:
	// lwz r20,16(r14)
	r20.u64 = REX_LOAD_U32(r14.u32 + 16);
	// mr r23,r17
	r23.u64 = r17.u64;
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// beq cr6,0x825217ec
	if (ctx.cr6.eq) goto loc_825217EC;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_825216CC:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r23,r10,r23
	r23.u64 = ctx.r10.u64 | r23.u64;
	// beq 0x825217dc
	if (ctx.cr0.eq) goto loc_825217DC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,14,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// beq 0x8252170c
	if (ctx.cr0.eq) goto loc_8252170C;
	// rlwinm. r10,r11,0,16,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521c30
	if (!ctx.cr0.eq) goto loc_82521C30;
	// rlwinm r11,r11,0,16,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE00FFFF;
	// b 0x825217d8
	goto loc_825217D8;
loc_8252170C:
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// beq cr6,0x825217d4
	if (ctx.cr6.eq) goto loc_825217D4;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520050
	ctx.lr = 0x8252172C;
	sub_82520050(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm. r10,r11,25,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82521768
	if (ctx.cr0.eq) goto loc_82521768;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,12,23,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x1FF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8252175c
	if (ctx.cr6.gt) goto loc_8252175C;
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82521768
	if (!ctx.cr6.lt) goto loc_82521768;
loc_8252175C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82521c3c
	if (!ctx.cr6.eq) goto loc_82521C3C;
loc_82521768:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// bgt cr6,0x825217dc
	if (ctx.cr6.gt) goto loc_825217DC;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8252178c
	if (!ctx.cr6.lt) goto loc_8252178C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_8252178C:
	// rlwimi r11,r5,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825217c8
	if (ctx.cr6.lt) goto loc_825217C8;
	// beq cr6,0x825217bc
	if (ctx.cr6.eq) goto loc_825217BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x825217dc
	if (!ctx.cr6.eq) goto loc_825217DC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82520308
	ctx.lr = 0x825217B8;
	sub_82520308(ctx, base);
	// b 0x825217d0
	goto loc_825217D0;
loc_825217BC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82520308
	ctx.lr = 0x825217C4;
	sub_82520308(ctx, base);
	// b 0x825217d0
	goto loc_825217D0;
loc_825217C8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82520388
	ctx.lr = 0x825217D0;
	sub_82520388(ctx, base);
loc_825217D0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_825217D4:
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
loc_825217D8:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_825217DC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,40
	r29.s64 = r29.s64 + 40;
	// cmplw cr6,r30,r20
	ctx.cr6.compare<uint32_t>(r30.u32, r20.u32, ctx.xer);
	// blt cr6,0x825216cc
	if (ctx.cr6.lt) goto loc_825216CC;
loc_825217EC:
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r14,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r14.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x826a2e60
	ctx.lr = 0x82521800;
	sub_826A2E60(ctx, base);
	// mr r24,r17
	r24.u64 = r17.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82521900
	if (ctx.cr6.eq) goto loc_82521900;
	// mr r25,r17
	r25.u64 = r17.u64;
loc_82521810:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r26,r25,r11
	r26.u64 = r25.u64 + ctx.r11.u64;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825218f0
	if (!ctx.cr0.eq) goto loc_825218F0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825218f0
	if (ctx.cr0.eq) goto loc_825218F0;
	// rlwinm r11,r11,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF00000;
	// lis r10,4080
	ctx.r10.s64 = 267386880;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x825218f0
	if (ctx.cr6.gt) goto loc_825218F0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x826a1e70
	ctx.lr = 0x82521850;
	sub_826A1E70(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520480
	ctx.lr = 0x8252185C;
	sub_82520480(ctx, base);
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82521864:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r30,r28,r11
	r30.u64 = r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825218e0
	if (ctx.cr0.eq) goto loc_825218E0;
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r10,r29,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825218e0
	if (!ctx.cr0.eq) goto loc_825218E0;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r9,36(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x825218e0
	if (!ctx.cr6.eq) goto loc_825218E0;
	// rlwinm r31,r11,12,23,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(r31.u32, 255, ctx.xer);
	// bgt cr6,0x825218e0
	if (ctx.cr6.gt) goto loc_825218E0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8251e368
	ctx.lr = 0x825218AC;
	sub_8251E368(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825218c4
	if (ctx.cr6.eq) goto loc_825218C4;
	// rlwinm r11,r29,16,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x1FF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82521c48
	if (ctx.cr6.lt) goto loc_82521C48;
loc_825218C4:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x825180e0
	ctx.lr = 0x825218D4;
	sub_825180E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_825218E0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x82521864
	if (ctx.cr6.lt) goto loc_82521864;
loc_825218F0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,40
	r25.s64 = r25.s64 + 40;
	// cmplw cr6,r24,r20
	ctx.cr6.compare<uint32_t>(r24.u32, r20.u32, ctx.xer);
	// blt cr6,0x82521810
	if (ctx.cr6.lt) goto loc_82521810;
loc_82521900:
	// li r21,-1
	r21.s64 = -1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82521b1c
	if (ctx.cr6.eq) goto loc_82521B1C;
	// mr r22,r17
	r22.u64 = r17.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82521b10
	if (ctx.cr6.eq) goto loc_82521B10;
	// mr r23,r17
	r23.u64 = r17.u64;
loc_8252191C:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r24,r23,r11
	r24.u64 = r23.u64 + ctx.r11.u64;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521b00
	if (!ctx.cr0.eq) goto loc_82521B00;
	// lwz r10,36(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82521b00
	if (ctx.cr6.eq) goto loc_82521B00;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82521b00
	if (!ctx.cr0.eq) goto loc_82521B00;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,328
	ctx.r4.s64 = ctx.r1.s64 + 328;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x826a1e70
	ctx.lr = 0x82521954;
	sub_826A1E70(ctx, base);
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82521964:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,6,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8252199c
	if (ctx.cr0.eq) goto loc_8252199C;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r8,36(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 36);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8252199c
	if (!ctx.cr6.eq) goto loc_8252199C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r4,r11,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// bl 0x82520268
	ctx.lr = 0x8252199C;
	sub_82520268(ctx, base);
loc_8252199C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// bne 0x82521964
	if (!ctx.cr0.eq) goto loc_82521964;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520480
	ctx.lr = 0x825219B4;
	sub_82520480(ctx, base);
	// mr r30,r17
	r30.u64 = r17.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_825219BC:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82521a20
	if (ctx.cr0.eq) goto loc_82521A20;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,36(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 36);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82521a20
	if (!ctx.cr6.eq) goto loc_82521A20;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r11,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// rlwinm r4,r10,12,23,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	// bl 0x825180e0
	ctx.lr = 0x825219F4;
	sub_825180E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bge cr6,0x82521a08
	if (!ctx.cr6.lt) goto loc_82521A08;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_82521A08:
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 4);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// ble cr6,0x82521a20
	if (!ctx.cr6.gt) goto loc_82521A20;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
loc_82521A20:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x825219bc
	if (!ctx.cr0.eq) goto loc_825219BC;
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82521A34:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r31,r28,r11
	r31.u64 = r28.u64 + ctx.r11.u64;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r29,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82521af0
	if (!ctx.cr0.eq) goto loc_82521AF0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,36(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82521af0
	if (!ctx.cr6.eq) goto loc_82521AF0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x82521a74
	if (ctx.cr6.eq) goto loc_82521A74;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8251eeb8
	ctx.lr = 0x82521A74;
	sub_8251EEB8(ctx, base);
loc_82521A74:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82521a90
	if (ctx.cr6.eq) goto loc_82521A90;
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(r26.s32, -1, ctx.xer);
	// beq cr6,0x82521aac
	if (ctx.cr6.eq) goto loc_82521AAC;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r25.u32, ctx.xer);
	// ble cr6,0x82521aac
	if (!ctx.cr6.gt) goto loc_82521AAC;
loc_82521A90:
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x1FF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8251eeb8
	ctx.lr = 0x82521AA0;
	sub_8251EEB8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82521aac
	if (ctx.cr6.eq) goto loc_82521AAC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82521AAC:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x82521c54
	if (ctx.cr6.eq) goto loc_82521C54;
	// rlwinm r5,r29,16,23,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x1FF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8251ed40
	ctx.lr = 0x82521AC4;
	sub_8251ED40(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// clrlwi r5,r11,23
	ctx.r5.u64 = ctx.r11.u32 & 0x1FF;
	// bl 0x8251ed40
	ctx.lr = 0x82521AD8;
	sub_8251ED40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r30,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82521AF0:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,40
	r28.s64 = r28.s64 + 40;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x82521a34
	if (ctx.cr6.lt) goto loc_82521A34;
loc_82521B00:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,40
	r23.s64 = r23.s64 + 40;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(r22.u32, r20.u32, ctx.xer);
	// blt cr6,0x8252191c
	if (ctx.cr6.lt) goto loc_8252191C;
loc_82521B10:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520480
	ctx.lr = 0x82521B1C;
	sub_82520480(ctx, base);
loc_82521B1C:
	// lwz r11,44(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 44);
	// stb r17,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521fc8
	if (ctx.cr0.eq) goto loc_82521FC8;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// mr r23,r17
	r23.u64 = r17.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521fc8
	if (!ctx.cr0.eq) goto loc_82521FC8;
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82521fc8
	if (ctx.cr0.eq) goto loc_82521FC8;
loc_82521B48:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521edc
	if (!ctx.cr0.eq) goto loc_82521EDC;
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82521edc
	if (ctx.cr0.eq) goto loc_82521EDC;
loc_82521B60:
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12800
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12800, ctx.xer);
	// bne cr6,0x82521eb8
	if (!ctx.cr6.eq) goto loc_82521EB8;
	// lwz r18,44(r16)
	r18.u64 = REX_LOAD_U32(r16.u32 + 44);
	// lwz r17,12(r18)
	r17.u64 = REX_LOAD_U32(r18.u32 + 12);
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// beq cr6,0x82521eb8
	if (ctx.cr6.eq) goto loc_82521EB8;
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x82521efc
	if (!ctx.cr6.eq) goto loc_82521EFC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// bne cr6,0x82521e4c
	if (!ctx.cr6.eq) goto loc_82521E4C;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// bne 0x82521c60
	if (!ctx.cr0.eq) goto loc_82521C60;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82521c64
	if (ctx.cr0.eq) goto loc_82521C64;
loc_82521BC4:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x82521c10
	if (!ctx.cr6.eq) goto loc_82521C10;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82521BEC;
	sub_824F71B8(ctx, base);
	// addi r11,r23,-8
	ctx.r11.s64 = r23.s64 + -8;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82521c10
	if (ctx.cr0.eq) goto loc_82521C10;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82521e4c
	if (!ctx.cr6.eq) goto loc_82521E4C;
loc_82521C10:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521c60
	if (!ctx.cr0.eq) goto loc_82521C60;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82521bc4
	if (!ctx.cr6.eq) goto loc_82521BC4;
	// b 0x82521c64
	goto loc_82521C64;
loc_82521C30:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521C3C;
	sub_824E4368(ctx, base);
loc_82521C3C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520180
	ctx.lr = 0x82521C48;
	sub_82520180(ctx, base);
loc_82521C48:
	// li r4,3613
	ctx.r4.s64 = 3613;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521C54;
	sub_824E4368(ctx, base);
loc_82521C54:
	// li r4,3566
	ctx.r4.s64 = 3566;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521C60;
	sub_824E4368(ctx, base);
loc_82521C60:
	// li r23,0
	r23.s64 = 0;
loc_82521C64:
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r20,0
	r20.s64 = 0;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521e44
	if (ctx.cr6.eq) goto loc_82521E44;
	// lwz r19,12(r14)
	r19.u64 = REX_LOAD_U32(r14.u32 + 12);
	// mr r22,r19
	r22.u64 = r19.u64;
loc_82521C84:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 4);
	// rlwinm r10,r11,0,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82521dcc
	if (!ctx.cr6.eq) goto loc_82521DCC;
	// lwz r27,0(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 0);
	// rlwinm. r10,r27,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521dcc
	if (!ctx.cr0.eq) goto loc_82521DCC;
	// rlwinm. r21,r11,16,23,31
	r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FF;
	ctx.cr0.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq 0x82521dcc
	if (ctx.cr0.eq) goto loc_82521DCC;
	// rlwinm. r25,r27,29,18,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// beq 0x82521db4
	if (ctx.cr0.eq) goto loc_82521DB4;
	// lwz r26,28(r22)
	r26.u64 = REX_LOAD_U32(r22.u32 + 28);
loc_82521CB8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x82521da4
	if (ctx.cr6.eq) goto loc_82521DA4;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// beq cr6,0x82521da4
	if (ctx.cr6.eq) goto loc_82521DA4;
	// rlwinm. r10,r27,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82521db4
	if (ctx.cr0.eq) goto loc_82521DB4;
	// rlwinm r10,r11,28,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bge cr6,0x82521da4
	if (!ctx.cr6.lt) goto loc_82521DA4;
	// rlwinm r11,r27,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 12) & 0x1FF;
	// li r31,0
	r31.s64 = 0;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_82521CF4:
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r30,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82521d84
	if (!ctx.cr6.eq) goto loc_82521D84;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r4,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521d84
	if (ctx.cr0.eq) goto loc_82521D84;
	// rlwinm. r11,r4,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521d84
	if (ctx.cr0.eq) goto loc_82521D84;
	// cmplw cr6,r8,r22
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r22.u32, ctx.xer);
	// beq cr6,0x82521d84
	if (ctx.cr6.eq) goto loc_82521D84;
	// rlwinm. r6,r4,29,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x3FFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x82521d7c
	if (ctx.cr0.eq) goto loc_82521D7C;
	// lwz r3,28(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82521D34:
	// lwzx r11,r3,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lis r10,592
	ctx.r10.s64 = 38797312;
	// rlwinm r14,r11,0,6,11
	r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00000;
	// cmplw cr6,r14,r10
	ctx.cr6.compare<uint32_t>(r14.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82521d68
	if (!ctx.cr6.eq) goto loc_82521D68;
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// rlwinm r10,r30,16,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0x1FF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82521d68
	if (!ctx.cr6.lt) goto loc_82521D68;
	// rlwinm r10,r4,12,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0x1FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82521d78
	if (ctx.cr6.eq) goto loc_82521D78;
loc_82521D68:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82521d34
	if (ctx.cr6.lt) goto loc_82521D34;
loc_82521D78:
	// lwz r14,628(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
loc_82521D7C:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82521d98
	if (ctx.cr6.lt) goto loc_82521D98;
loc_82521D84:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82521cf4
	if (ctx.cr6.lt) goto loc_82521CF4;
loc_82521D98:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82521db4
	if (!ctx.cr6.lt) goto loc_82521DB4;
loc_82521DA4:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x82521cb8
	if (ctx.cr6.lt) goto loc_82521CB8;
loc_82521DB4:
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// bge cr6,0x82521dcc
	if (!ctx.cr6.lt) goto loc_82521DCC;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82521dcc
	if (!ctx.cr6.lt) goto loc_82521DCC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r24,r20
	r24.u64 = r20.u64;
loc_82521DCC:
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r22,r22,40
	r22.s64 = r22.s64 + 40;
	// cmplw cr6,r20,r31
	ctx.cr6.compare<uint32_t>(r20.u32, r31.u32, ctx.xer);
	// blt cr6,0x82521c84
	if (ctx.cr6.lt) goto loc_82521C84;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x82521e44
	if (ctx.cr6.eq) goto loc_82521E44;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825bdbe8
	ctx.lr = 0x82521DF8;
	sub_825BDBE8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r24,40
	ctx.r11.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(40));
	// rlwinm r10,r10,0,30,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,0,17,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE7FFF;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r10,r10,16386
	ctx.r10.u64 = ctx.r10.u64 | 16386;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 12);
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r10,12(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r8,r9,7,16,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFF80) | (ctx.r8.u64 & 0xFFFFFFFFFFFF007F);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
loc_82521E44:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82521f08
	if (ctx.cr6.eq) goto loc_82521F08;
loc_82521E4C:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82521e64
	goto loc_82521E64;
loc_82521E5C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82521E64:
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, ctx.xer);
	// bne cr6,0x82521e5c
	if (!ctx.cr6.eq) goto loc_82521E5C;
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r11,8(r18)
	REX_STORE_U32(r18.u32 + 8, ctx.r11.u32);
	// stw r18,4(r23)
	REX_STORE_U32(r23.u32 + 4, r18.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r23,12(r18)
	REX_STORE_U32(r18.u32 + 12, r23.u32);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
	// bl 0x824f7708
	ctx.lr = 0x82521E9C;
	sub_824F7708(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521eb8
	if (ctx.cr0.eq) goto loc_82521EB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x825c2288
	ctx.lr = 0x82521EB8;
	sub_825C2288(ctx, base);
loc_82521EB8:
	// rlwinm r11,r16,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521ed4
	if (!ctx.cr0.eq) goto loc_82521ED4;
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82521b60
	if (!ctx.cr6.eq) goto loc_82521B60;
loc_82521ED4:
	// lwz r20,84(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,0
	r17.s64 = 0;
loc_82521EDC:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521fc8
	if (!ctx.cr0.eq) goto loc_82521FC8;
	// mr r15,r11
	r15.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82521b48
	if (!ctx.cr6.eq) goto loc_82521B48;
	// b 0x82521fc8
	goto loc_82521FC8;
loc_82521EFC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521F08;
	sub_824E4368(ctx, base);
loc_82521F08:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521fac
	if (ctx.cr0.eq) goto loc_82521FAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82521fb4
	if (ctx.cr6.eq) goto loc_82521FB4;
	// lwz r7,12(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82521F28:
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm. r8,r10,0,12,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82521f80
	if (ctx.cr0.eq) goto loc_82521F80;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r5,r5,0,14,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3FFF0;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82521f80
	if (!ctx.cr0.eq) goto loc_82521F80;
	// rlwinm. r10,r10,12,23,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1FF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82521f80
	if (!ctx.cr0.eq) goto loc_82521F80;
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r11,r11,23
	ctx.r11.u64 = ctx.r11.u32 & 0x1FF;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82521f80
	if (ctx.cr0.eq) goto loc_82521F80;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// beq cr6,0x82521f94
	if (ctx.cr6.eq) goto loc_82521F94;
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// beq cr6,0x82521fa0
	if (ctx.cr6.eq) goto loc_82521FA0;
loc_82521F80:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, ctx.xer);
	// blt cr6,0x82521f28
	if (ctx.cr6.lt) goto loc_82521F28;
	// b 0x82521fb4
	goto loc_82521FB4;
loc_82521F94:
	// li r4,3601
	ctx.r4.s64 = 3601;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521FA0;
	sub_824E4368(ctx, base);
loc_82521FA0:
	// li r4,3602
	ctx.r4.s64 = 3602;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82521FAC;
	sub_824E4368(ctx, base);
loc_82521FAC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
loc_82521FB4:
	// li r4,3600
	ctx.r4.s64 = 3600;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4270
	ctx.lr = 0x82521FC0;
	sub_824E4270(ctx, base);
	// lwz r20,84(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,0
	r17.s64 = 0;
loc_82521FC8:
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82522174
	if (ctx.cr6.eq) goto loc_82522174;
	// mr r26,r17
	r26.u64 = r17.u64;
loc_82521FD8:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// add r31,r11,r26
	r31.u64 = ctx.r11.u64 + r26.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82522164
	if (!ctx.cr0.eq) goto loc_82522164;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82522164
	if (ctx.cr0.eq) goto loc_82522164;
	// rlwinm r10,r11,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// rlwinm r28,r11,25,23,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82522140
	if (ctx.cr6.lt) goto loc_82522140;
	// beq cr6,0x82522130
	if (ctx.cr6.eq) goto loc_82522130;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8252211c
	if (ctx.cr6.lt) goto loc_8252211C;
	// bne cr6,0x825221fc
	if (!ctx.cr6.eq) goto loc_825221FC;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825220e0
	if (ctx.cr0.eq) goto loc_825220E0;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825220e0
	if (!ctx.cr0.eq) goto loc_825220E0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x825220e0
	if (ctx.cr0.eq) goto loc_825220E0;
loc_82522050:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x825220a8
	if (!ctx.cr6.eq) goto loc_825220A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82522078;
	sub_824F71B8(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,17
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r27.u32, ctx.xer);
	// bne cr6,0x825220a8
	if (!ctx.cr6.eq) goto loc_825220A8;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825220a8
	if (ctx.cr0.eq) goto loc_825220A8;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x825220c4
	if (ctx.cr6.eq) goto loc_825220C4;
loc_825220A8:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825220e0
	if (!ctx.cr0.eq) goto loc_825220E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82522050
	if (!ctx.cr6.eq) goto loc_82522050;
	// b 0x825220e0
	goto loc_825220E0;
loc_825220C4:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825220e0
	if (!ctx.cr0.eq) goto loc_825220E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251f1b0
	ctx.lr = 0x825220DC;
	sub_8251F1B0(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_825220E0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251fe88
	ctx.lr = 0x825220EC;
	sub_8251FE88(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r9,r29,24
	ctx.r9.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x82522164
	if (ctx.cr0.eq) goto loc_82522164;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x82522164
	goto loc_82522164;
loc_8252211C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8251fb88
	ctx.lr = 0x8252212C;
	sub_8251FB88(ctx, base);
	// b 0x8252214c
	goto loc_8252214C;
loc_82522130:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251ff68
	ctx.lr = 0x8252213C;
	sub_8251FF68(ctx, base);
	// b 0x8252214c
	goto loc_8252214C;
loc_82522140:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8251ff10
	ctx.lr = 0x8252214C;
	sub_8251FF10(ctx, base);
loc_8252214C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82522164:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,40
	r26.s64 = r26.s64 + 40;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// blt cr6,0x82521fd8
	if (ctx.cr6.lt) goto loc_82521FD8;
loc_82522174:
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82520480
	ctx.lr = 0x82522180;
	sub_82520480(ctx, base);
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
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
	// bne 0x825222b4
	if (!ctx.cr0.eq) goto loc_825222B4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x825222b4
	if (ctx.cr0.eq) goto loc_825222B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r28,104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r27,r11,-22012
	r27.s64 = ctx.r11.s64 + -22012;
loc_825221B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x82522208
	if (!ctx.cr6.eq) goto loc_82522208;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8251ee38
	ctx.lr = 0x825221D0;
	sub_8251EE38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwimi r3,r28,0,28,31
	ctx.r3.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r28,r3,0,0,27
	r28.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0) | (r28.u64 & 0xFFFFFFFF0000000F);
	// clrlwi r11,r28,28
	ctx.r11.u64 = r28.u32 & 0xF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8252228c
	goto loc_8252228C;
loc_825221FC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x82522208;
	sub_824E4368(ctx, base);
loc_82522208:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x8252229c
	if (!ctx.cr6.eq) goto loc_8252229C;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825297d0
	ctx.lr = 0x8252221C;
	sub_825297D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r30,r31,-8
	r30.s64 = r31.s64 + -8;
	// bl 0x824f71b8
	ctx.lr = 0x82522238;
	sub_824F71B8(ctx, base);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwimi r11,r9,21,14,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x3FFF0) | (ctx.r11.u64 & 0xFFFFFFFFFFFC000F);
	// clrlwi r29,r11,14
	r29.u64 = ctx.r11.u32 & 0x3FFFF;
	// bl 0x824f71b8
	ctx.lr = 0x82522264;
	sub_824F71B8(ctx, base);
	// lwzx r11,r3,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + r30.u32);
	// lwz r10,12(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 12);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,19,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF0;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// rlwimi r11,r29,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_8252228C:
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,-1(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// bl 0x825b93f8
	ctx.lr = 0x8252229C;
	sub_825B93F8(ctx, base);
loc_8252229C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825222b4
	if (!ctx.cr0.eq) goto loc_825222B4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825221b4
	if (!ctx.cr6.eq) goto loc_825221B4;
loc_825222B4:
	// lwz r11,40(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825223d0
	if (ctx.cr0.eq) goto loc_825223D0;
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825223d0
	if (!ctx.cr0.eq) goto loc_825223D0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825223d0
	if (ctx.cr0.eq) goto loc_825223D0;
loc_825222D8:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825223b4
	if (!ctx.cr0.eq) goto loc_825223B4;
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x825223b4
	if (ctx.cr0.eq) goto loc_825223B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x825223b4
	if (!ctx.cr6.eq) goto loc_825223B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824f71b8
	ctx.lr = 0x82522318;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = r31.s64 + -32;
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
loc_82522324:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8252239c
	if (ctx.cr6.eq) goto loc_8252239C;
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x82522380
	if (!ctx.cr6.eq) goto loc_82522380;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82522358;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x82522388
	if (ctx.cr6.eq) goto loc_82522388;
loc_82522380:
	// lwz r30,4(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x82522324
	goto loc_82522324;
loc_82522388:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r10,r11,15,27,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// b 0x825223b4
	goto loc_825223B4;
loc_8252239C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8251f218
	ctx.lr = 0x825223A8;
	sub_8251F218(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwimi r11,r3,28,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
loc_825223B4:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825223d0
	if (!ctx.cr0.eq) goto loc_825223D0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825222d8
	if (!ctx.cr6.eq) goto loc_825222D8;
loc_825223D0:
	// lwz r10,44(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 44);
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825223fc
	if (ctx.cr0.eq) goto loc_825223FC;
	// lwz r11,56(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825223f4
	if (ctx.cr6.eq) goto loc_825223F4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825223fc
	if (!ctx.cr0.eq) goto loc_825223FC;
loc_825223F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82522400
	goto loc_82522400;
loc_825223FC:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82522400:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82522438
	if (ctx.cr0.eq) goto loc_82522438;
	// lwz r11,56(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82522428
	if (ctx.cr6.eq) goto loc_82522428;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8252242c
	if (!ctx.cr0.eq) goto loc_8252242C;
loc_82522428:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8252242C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8252243c
	if (ctx.cr0.eq) goto loc_8252243C;
loc_82522438:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_8252243C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x82522450
	if (!ctx.cr0.eq) goto loc_82522450;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825224dc
	if (ctx.cr0.eq) goto loc_825224DC;
loc_82522450:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8251eda8
	ctx.lr = 0x82522460;
	sub_8251EDA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825224d0
	if (ctx.cr6.eq) goto loc_825224D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8251eda8
	ctx.lr = 0x82522478;
	sub_8251EDA8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x825224d0
	if (ctx.cr6.eq) goto loc_825224D0;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825224dc
	if (ctx.cr0.eq) goto loc_825224DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8251efa0
	ctx.lr = 0x82522498;
	sub_8251EFA0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825224ac
	if (!ctx.cr6.eq) goto loc_825224AC;
	// li r4,3645
	ctx.r4.s64 = 3645;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x825224AC;
	sub_824E4368(ctx, base);
loc_825224AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8251f120
	ctx.lr = 0x825224BC;
	sub_8251F120(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x825224dc
	if (!ctx.cr6.eq) goto loc_825224DC;
	// li r4,3646
	ctx.r4.s64 = 3646;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x825224D0;
	sub_824E4368(ctx, base);
loc_825224D0:
	// li r4,3644
	ctx.r4.s64 = 3644;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824e4368
	ctx.lr = 0x825224DC;
	sub_824E4368(ctx, base);
loc_825224DC:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_825FCCB0) {
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
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r30,0
	r30.s64 = 0;
	// b 0x825fcd08
	goto loc_825FCD08;
loc_825FCCD0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fcd04
	if (ctx.cr0.eq) goto loc_825FCD04;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x825fcd04
	if (!ctx.cr6.eq) goto loc_825FCD04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825FCCFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fcd30
	if (ctx.cr0.eq) goto loc_825FCD30;
loc_825FCD04:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_825FCD08:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825fccd0
	if (!ctx.cr6.eq) goto loc_825FCCD0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825FCD18:
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
loc_825FCD30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825fcd18
	goto loc_825FCD18;
}

DEFINE_REX_FUNC(sub_82607E38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82607E50:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82607e50
	if (ctx.cr6.lt) goto loc_82607E50;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260A650) {
	REX_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-21368
	ctx.r11.s64 = ctx.r11.s64 + -21368;
	// beq 0x8260a66c
	if (ctx.cr0.eq) goto loc_8260A66C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8260a67c
	goto loc_8260A67C;
loc_8260A66C:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8260A67C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8260a694
	if (!ctx.cr0.eq) goto loc_8260A694;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_8260A694:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8260a6b8
	if (ctx.cr0.eq) goto loc_8260A6B8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_8260A6B8:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260C618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260C620;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
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
	ctx.lr = 0x8260C644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bdf8
	ctx.lr = 0x8260C650;
	sub_8260BDF8(ctx, base);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 176);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8260C680;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8261b718
	ctx.lr = 0x8260C688;
	sub_8261B718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8260E828) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260E8F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8260e97c
	if (ctx.cr6.eq) goto loc_8260E97C;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_8260E910:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8260e96c
	if (ctx.cr6.eq) goto loc_8260E96C;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8260E920:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfsx f13,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8260e920
	if (ctx.cr6.lt) goto loc_8260E920;
loc_8260E96C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8260e910
	if (ctx.cr6.lt) goto loc_8260E910;
loc_8260E97C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82613350) {
	REX_FUNC_PROLOGUE();
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826133a4
	if (ctx.cr6.eq) goto loc_826133A4;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
	// beq cr6,0x82613380
	if (ctx.cr6.eq) goto loc_82613380;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// b 0x82613388
	goto loc_82613388;
loc_82613380:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
loc_82613388:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,212(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// stw r10,212(r11)
	REX_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// blr 
	return;
loc_826133A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82614E60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82614E68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r3,-140
	ctx.r3.s64 = ctx.r3.s64 + -140;
	// bl 0x82614b30
	ctx.lr = 0x82614E94;
	sub_82614B30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x82614f18
	if (ctx.cr0.lt) goto loc_82614F18;
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82614eac
	if (ctx.cr6.eq) goto loc_82614EAC;
	// bl 0x82611208
	ctx.lr = 0x82614EAC;
	sub_82611208(ctx, base);
loc_82614EAC:
	// lwz r4,312(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82614efc
	if (ctx.cr6.eq) goto loc_82614EFC;
	// lwz r11,-88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -88);
	// lwz r9,16244(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16244);
loc_82614EC0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82614ed8
	if (ctx.cr6.eq) goto loc_82614ED8;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82614edc
	goto loc_82614EDC;
loc_82614ED8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82614EDC:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82614ec0
	if (ctx.cr6.lt) goto loc_82614EC0;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82614ec0
	if (!ctx.cr6.lt) goto loc_82614EC0;
	// bl 0x82614440
	ctx.lr = 0x82614EFC;
	sub_82614440(ctx, base);
loc_82614EFC:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r11.u32);
	// stw r10,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r10.u32);
	// stw r9,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r9.u32);
	// b 0x82614f78
	goto loc_82614F78;
loc_82614F18:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82614f28
	if (ctx.cr6.eq) goto loc_82614F28;
	// bl 0x82611208
	ctx.lr = 0x82614F28;
	sub_82611208(ctx, base);
loc_82614F28:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82614f78
	if (ctx.cr6.eq) goto loc_82614F78;
	// lwz r11,-88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -88);
	// lwz r9,16244(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16244);
loc_82614F3C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82614f54
	if (ctx.cr6.eq) goto loc_82614F54;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82614f58
	goto loc_82614F58;
loc_82614F54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82614F58:
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82614f3c
	if (ctx.cr6.lt) goto loc_82614F3C;
	// lwz r10,256(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82614f3c
	if (!ctx.cr6.lt) goto loc_82614F3C;
	// bl 0x82614440
	ctx.lr = 0x82614F78;
	sub_82614440(ctx, base);
loc_82614F78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261BE48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261BE50;
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
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261BE78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261ba58
	ctx.lr = 0x8261BE84;
	sub_8261BA58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x8261BEA8;
	sub_826A1E70(ctx, base);
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
	ctx.lr = 0x8261BEC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82624840) {
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
	ctx.lr = 0x82624848;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// lwz r28,108(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r29,112(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// lwz r19,4(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lhz r31,2(r7)
	r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// li r23,2
	r23.s64 = 2;
	// lwz r24,28(r7)
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r22,0
	r22.s64 = 0;
	// lwz r25,32(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r20,36(r7)
	r20.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r27,40(r7)
	r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r5,24(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r18,44(r7)
	r18.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// bne cr6,0x826248ac
	if (!ctx.cr6.eq) goto loc_826248AC;
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826248ac
	if (!ctx.cr6.eq) goto loc_826248AC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82624f10
	if (ctx.cr6.eq) goto loc_82624F10;
loc_826248AC:
	// li r15,8
	r15.s64 = 8;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(r17.u32, 2, ctx.xer);
	// bgt cr6,0x82624914
	if (ctx.cr6.gt) goto loc_82624914;
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 20);
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8262490c
	if (ctx.cr6.eq) goto loc_8262490C;
	// rlwinm r10,r8,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8262490c
	if (ctx.cr6.eq) goto loc_8262490C;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// rlwinm r30,r8,29,30,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x3;
	// bl 0x82624730
	ctx.lr = 0x826248F0;
	sub_82624730(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? ctx.r3.u32 / r31.u32 : 0);
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// blt cr6,0x82624904
	if (ctx.cr6.lt) goto loc_82624904;
	// slw r31,r15,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (r15.u32 << (r30.u8 & 0x3F));
	// b 0x82624968
	goto loc_82624968;
loc_82624904:
	// slw r31,r23,r30
	r31.u64 = r30.u8 & 0x20 ? 0 : (r23.u32 << (r30.u8 & 0x3F));
	// b 0x82624968
	goto loc_82624968;
loc_8262490C:
	// li r31,1
	r31.s64 = 1;
	// b 0x82624968
	goto loc_82624968;
loc_82624914:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,29,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// slw r31,r10,r9
	r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82625078
	if (ctx.cr6.gt) goto loc_82625078;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624968
	if (ctx.cr6.eq) goto loc_82624968;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// bdz 0x82624954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82624954;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// bdz 0x8262495c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8262495C;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// b 0x82624964
	goto loc_82624964;
loc_82624954:
	// li r23,1
	r23.s64 = 1;
	// b 0x82624968
	goto loc_82624968;
loc_8262495C:
	// li r23,4
	r23.s64 = 4;
	// b 0x82624968
	goto loc_82624968;
loc_82624964:
	// mr r23,r15
	r23.u64 = r15.u64;
loc_82624968:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r5,r11,52429
	ctx.r5.u64 = ctx.r11.u64 | 52429;
	// li r3,5
	ctx.r3.s64 = 5;
	// ori r6,r10,43691
	ctx.r6.u64 = ctx.r10.u64 | 43691;
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// bne cr6,0x826249e8
	if (!ctx.cr6.eq) goto loc_826249E8;
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826249e8
	if (ctx.cr6.eq) goto loc_826249E8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826249e8
	if (!ctx.cr6.eq) goto loc_826249E8;
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 96);
	// cmplwi cr6,r11,151
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 151, ctx.xer);
	// bge cr6,0x826249c8
	if (!ctx.cr6.lt) goto loc_826249C8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r24,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x826249dc
	if (!ctx.cr6.eq) goto loc_826249DC;
loc_826249B8:
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624bd8
	if (ctx.cr6.lt) goto loc_82624BD8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// b 0x826249f8
	goto loc_826249F8;
loc_826249C8:
	// cmplwi cr6,r11,251
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 251, ctx.xer);
	// bge cr6,0x826249e8
	if (!ctx.cr6.lt) goto loc_826249E8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x826249b8
	if (ctx.cr6.eq) goto loc_826249B8;
loc_826249DC:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826249e8
	if (ctx.cr6.lt) goto loc_826249E8;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
loc_826249E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82624bd8
	if (ctx.cr6.eq) goto loc_82624BD8;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// bne cr6,0x82624bd8
	if (!ctx.cr6.eq) goto loc_82624BD8;
loc_826249F8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// beq cr6,0x82624bd8
	if (ctx.cr6.eq) goto loc_82624BD8;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x82624b44
	if (!ctx.cr6.eq) goto loc_82624B44;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(r23.u32, 1, ctx.xer);
	// ble cr6,0x82624b44
	if (!ctx.cr6.gt) goto loc_82624B44;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// rlwinm r23,r23,31,1,31
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// rlwinm r18,r18,31,1,31
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82624a3c
	if (!ctx.cr6.eq) goto loc_82624A3C;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bd8
	if (!ctx.cr6.eq) goto loc_82624BD8;
loc_82624A3C:
	// rlwinm r11,r27,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82624a50
	if (ctx.cr6.lt) goto loc_82624A50;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
loc_82624A50:
	// rlwinm r11,r20,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 31) & 0x7FFFFFFF;
	// li r20,1
	r20.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82624a64
	if (ctx.cr6.lt) goto loc_82624A64;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_82624A64:
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(r27.u32, 5, ctx.xer);
	// bgt cr6,0x82624a74
	if (ctx.cr6.gt) goto loc_82624A74;
	// mr r25,r27
	r25.u64 = r27.u64;
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624A74:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.u64 = r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82624a94
	if (!ctx.cr0.eq) goto loc_82624A94;
	// divwu r25,r27,r3
	r25.u64 = uint32_t(ctx.r3.u32 ? r27.u32 / ctx.r3.u32 : 0);
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624A94:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// ble cr6,0x82624ab0
	if (!ctx.cr6.gt) goto loc_82624AB0;
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82624ab0
	if (!ctx.cr6.eq) goto loc_82624AB0;
	// rlwinm r25,r27,30,2,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624AB0:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// ble cr6,0x82624ad8
	if (!ctx.cr6.gt) goto loc_82624AD8;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.u64 = r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82624ad8
	if (!ctx.cr0.eq) goto loc_82624AD8;
	// divwu r25,r27,r4
	r25.u64 = uint32_t(ctx.r4.u32 ? r27.u32 / ctx.r4.u32 : 0);
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624AD8:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624b14
	if (ctx.cr6.lt) goto loc_82624B14;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82624b0c
	if (ctx.cr6.gt) goto loc_82624B0C;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// rlwinm r25,r27,30,2,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82624b30
	goto loc_82624B30;
loc_82624B0C:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82624b28
	if (ctx.cr6.gt) goto loc_82624B28;
loc_82624B14:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82624b28
	if (ctx.cr6.gt) goto loc_82624B28;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// divwu r25,r27,r4
	r25.u64 = uint32_t(ctx.r4.u32 ? r27.u32 / ctx.r4.u32 : 0);
	// b 0x82624b30
	goto loc_82624B30;
loc_82624B28:
	// subf r27,r8,r27
	r27.u64 = r27.u64 - ctx.r8.u64;
	// divwu r25,r27,r3
	r25.u64 = uint32_t(ctx.r3.u32 ? r27.u32 / ctx.r3.u32 : 0);
loc_82624B30:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624bd8
	if (ctx.cr6.lt) goto loc_82624BD8;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624B44:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82624b90
	if (!ctx.cr6.eq) goto loc_82624B90;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(r23.u32, 8, ctx.xer);
	// bge cr6,0x82624b90
	if (!ctx.cr6.lt) goto loc_82624B90;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624b80
	if (!ctx.cr6.eq) goto loc_82624B80;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bd8
	if (!ctx.cr6.eq) goto loc_82624BD8;
loc_82624B80:
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,1,0,30
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82624bd8
	goto loc_82624BD8;
loc_82624B90:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82624bd8
	if (!ctx.cr6.eq) goto loc_82624BD8;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(r23.u32, 4, ctx.xer);
	// bge cr6,0x82624bd8
	if (!ctx.cr6.lt) goto loc_82624BD8;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r22,1
	r22.s64 = 1;
	// rlwinm r23,r23,2,0,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,30,2,31
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bcc
	if (!ctx.cr6.eq) goto loc_82624BCC;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624bd8
	if (!ctx.cr6.eq) goto loc_82624BD8;
loc_82624BCC:
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82624BD8:
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 92);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624db8
	if (ctx.cr6.eq) goto loc_82624DB8;
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 96);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r19.s32);
	// addi r9,r11,999
	ctx.r9.s64 = ctx.r11.s64 + 999;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r10,r9,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r9.u32 / ctx.r7.u32 : 0);
	// bne cr6,0x82624d50
	if (!ctx.cr6.eq) goto loc_82624D50;
loc_82624C04:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82624c30
	if (!ctx.cr6.gt) goto loc_82624C30;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// blt cr6,0x82625078
	if (ctx.cr6.lt) goto loc_82625078;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(r23.u32, 16, ctx.xer);
	// blt cr6,0x82624c04
	if (ctx.cr6.lt) goto loc_82624C04;
loc_82624C30:
	// addi r11,r27,2
	ctx.r11.s64 = r27.s64 + 2;
	// mullw r9,r11,r24
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82624db8
	if (!ctx.cr6.lt) goto loc_82624DB8;
	// divwu r11,r10,r24
	ctx.r11.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// li r22,1
	r22.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82625078
	if (!ctx.cr6.gt) goto loc_82625078;
	// addi r27,r11,-2
	r27.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// blt cr6,0x82625078
	if (ctx.cr6.lt) goto loc_82625078;
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624c70
	if (ctx.cr6.lt) goto loc_82624C70;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_82624C70:
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(r27.u32, 5, ctx.xer);
	// bgt cr6,0x82624c80
	if (ctx.cr6.gt) goto loc_82624C80;
	// mr r25,r27
	r25.u64 = r27.u64;
	// b 0x82624db8
	goto loc_82624DB8;
loc_82624C80:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.u64 = r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82624ca0
	if (!ctx.cr0.eq) goto loc_82624CA0;
	// divwu r25,r27,r3
	r25.u64 = uint32_t(ctx.r3.u32 ? r27.u32 / ctx.r3.u32 : 0);
	// b 0x82624db8
	goto loc_82624DB8;
loc_82624CA0:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(r27.u32, 4, ctx.xer);
	// ble cr6,0x82624cbc
	if (!ctx.cr6.gt) goto loc_82624CBC;
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82624cbc
	if (!ctx.cr6.eq) goto loc_82624CBC;
	// rlwinm r25,r27,30,2,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82624db8
	goto loc_82624DB8;
loc_82624CBC:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(r27.u32, 3, ctx.xer);
	// ble cr6,0x82624ce4
	if (!ctx.cr6.gt) goto loc_82624CE4;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.u64 = r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82624ce4
	if (!ctx.cr0.eq) goto loc_82624CE4;
	// divwu r25,r27,r4
	r25.u64 = uint32_t(ctx.r4.u32 ? r27.u32 / ctx.r4.u32 : 0);
	// b 0x82624db8
	goto loc_82624DB8;
loc_82624CE4:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624d20
	if (ctx.cr6.lt) goto loc_82624D20;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82624d18
	if (ctx.cr6.gt) goto loc_82624D18;
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// rlwinm r25,r27,30,2,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82624d3c
	goto loc_82624D3C;
loc_82624D18:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82624d34
	if (ctx.cr6.gt) goto loc_82624D34;
loc_82624D20:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82624d34
	if (ctx.cr6.gt) goto loc_82624D34;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// divwu r25,r27,r4
	r25.u64 = uint32_t(ctx.r4.u32 ? r27.u32 / ctx.r4.u32 : 0);
	// b 0x82624d3c
	goto loc_82624D3C;
loc_82624D34:
	// subf r27,r8,r27
	r27.u64 = r27.u64 - ctx.r8.u64;
	// divwu r25,r27,r3
	r25.u64 = uint32_t(ctx.r3.u32 ? r27.u32 / ctx.r3.u32 : 0);
loc_82624D3C:
	// addi r11,r27,1
	ctx.r11.s64 = r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624db8
	if (ctx.cr6.lt) goto loc_82624DB8;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
	// b 0x82624db8
	goto loc_82624DB8;
loc_82624D50:
	// lhz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U16(r26.u32 + 0);
loc_82624D54:
	// cmplwi cr6,r9,355
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 355, ctx.xer);
	// beq cr6,0x82624d68
	if (ctx.cr6.eq) goto loc_82624D68;
	// cmplwi cr6,r9,359
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 359, ctx.xer);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82624d6c
	if (!ctx.cr6.eq) goto loc_82624D6C;
loc_82624D68:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82624D6C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82624d90
	if (!ctx.cr6.gt) goto loc_82624D90;
	// li r22,1
	r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// blt cr6,0x82625078
	if (ctx.cr6.lt) goto loc_82625078;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(r23.u32, 16, ctx.xer);
	// blt cr6,0x82624d54
	if (ctx.cr6.lt) goto loc_82624D54;
loc_82624D90:
	// mullw r11,r20,r24
	ctx.r11.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82624db8
	if (!ctx.cr6.lt) goto loc_82624DB8;
	// divwu r20,r10,r24
	r20.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// li r22,1
	r22.s64 = 1;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(r25.u32, r20.u32, ctx.xer);
	// blt cr6,0x82624db0
	if (ctx.cr6.lt) goto loc_82624DB0;
	// mr r25,r20
	r25.u64 = r20.u64;
loc_82624DB0:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(r20.u32, 1, ctx.xer);
	// blt cr6,0x82625078
	if (ctx.cr6.lt) goto loc_82625078;
loc_82624DB8:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624f08
	if (!ctx.cr6.eq) goto loc_82624F08;
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624f08
	if (ctx.cr6.eq) goto loc_82624F08;
	// lwz r10,88(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 88);
	// add r11,r18,r25
	ctx.r11.u64 = r18.u64 + r25.u64;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// addi r9,r10,999
	ctx.r9.s64 = ctx.r10.s64 + 999;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// divwu r10,r9,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r9.u32 / ctx.r7.u32 : 0);
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82624f08
	if (!ctx.cr6.gt) goto loc_82624F08;
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x82624e10
	if (!ctx.cr6.lt) goto loc_82624E10;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(r17.u32, 2, ctx.xer);
	// beq cr6,0x82625078
	if (ctx.cr6.eq) goto loc_82625078;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(r23.u32, 8, ctx.xer);
	// beq cr6,0x82625078
	if (ctx.cr6.eq) goto loc_82625078;
loc_82624E10:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bge cr6,0x82624e34
	if (!ctx.cr6.lt) goto loc_82624E34;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// bne cr6,0x82624e34
	if (!ctx.cr6.eq) goto loc_82624E34;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(r23.u32, 8, ctx.xer);
	// beq cr6,0x82624e34
	if (ctx.cr6.eq) goto loc_82624E34;
	// divwu r9,r15,r23
	ctx.r9.u64 = uint32_t(r23.u32 ? r15.u32 / r23.u32 : 0);
	// mr r23,r15
	r23.u64 = r15.u64;
	// divwu r24,r24,r9
	r24.u64 = uint32_t(ctx.r9.u32 ? r24.u32 / ctx.r9.u32 : 0);
loc_82624E34:
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(r24.u32 ? ctx.r10.u32 / r24.u32 : 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624e48
	if (ctx.cr6.lt) goto loc_82624E48;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_82624E48:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82624e84
	if (!ctx.cr6.gt) goto loc_82624E84;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82625078
	if (ctx.cr6.lt) goto loc_82625078;
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82624ed8
	if (!ctx.cr6.gt) goto loc_82624ED8;
	// subf r11,r25,r9
	ctx.r11.u64 = ctx.r9.u64 - r25.u64;
	// addi r11,r11,253
	ctx.r11.s64 = ctx.r11.s64 + 253;
	// clrlwi r18,r11,24
	r18.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r18,r25
	ctx.r11.u64 = r18.u64 + r25.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82624E78:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82624e84
	if (ctx.cr6.lt) goto loc_82624E84;
	// mr r20,r11
	r20.u64 = ctx.r11.u64;
loc_82624E84:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x82624ea4
	if (!ctx.cr6.eq) goto loc_82624EA4;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(r17.u32, 2, ctx.xer);
	// bgt cr6,0x82624ea4
	if (ctx.cr6.gt) goto loc_82624EA4;
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r10.u16);
loc_82624EA4:
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82625078
	if (ctx.cr6.gt) goto loc_82625078;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82624f1c
	if (ctx.cr6.eq) goto loc_82624F1C;
	// bdz 0x82624f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82624F34;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// bdz 0x82624f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82624F50;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// bdz 0x82625078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82625078;
	// b 0x82624f9c
	goto loc_82624F9C;
loc_82624ED8:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// li r18,1
	r18.s64 = 1;
	// addi r25,r9,-4
	r25.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82624f00
	if (!ctx.cr6.eq) goto loc_82624F00;
	// clrlwi r11,r25,16
	ctx.r11.u64 = r25.u32 & 0xFFFF;
	// divwu r10,r27,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? r27.u32 / ctx.r11.u32 : 0);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r27
	ctx.r8.u64 = r27.u64 - ctx.r9.u64;
	// subf r27,r8,r27
	r27.u64 = r27.u64 - ctx.r8.u64;
loc_82624F00:
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// b 0x82624e78
	goto loc_82624E78;
loc_82624F08:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x82624e84
	if (!ctx.cr6.eq) goto loc_82624E84;
loc_82624F10:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_82624F1C:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r9.u16);
	// b 0x82624fec
	goto loc_82624FEC;
loc_82624F34:
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(r17.u32, 3, ctx.xer);
	// bne cr6,0x82624fec
	if (!ctx.cr6.eq) goto loc_82624FEC;
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r10.u16);
	// b 0x82624fec
	goto loc_82624FEC;
loc_82624F50:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(r31.u32, 8, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// sth r11,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x82624f70
	if (!ctx.cr6.gt) goto loc_82624F70;
	// mr r31,r15
	r31.u64 = r15.u64;
loc_82624F70:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// sth r10,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x82624fdc
	if (!ctx.cr6.gt) goto loc_82624FDC;
loc_82624F88:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82624f88
	if (ctx.cr6.gt) goto loc_82624F88;
	// b 0x82624fdc
	goto loc_82624FDC;
loc_82624F9C:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(r26.u32 + 20);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(r31.u32, 4, ctx.xer);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// sth r11,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x82624fb4
	if (!ctx.cr6.gt) goto loc_82624FB4;
	// li r31,4
	r31.s64 = 4;
loc_82624FB4:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// sth r10,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x82624fdc
	if (!ctx.cr6.gt) goto loc_82624FDC;
loc_82624FCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82624fcc
	if (ctx.cr6.gt) goto loc_82624FCC;
loc_82624FDC:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,20(r26)
	REX_STORE_U16(r26.u32 + 20, ctx.r9.u16);
loc_82624FEC:
	// stw r24,28(r26)
	REX_STORE_U32(r26.u32 + 28, r24.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// stw r18,44(r26)
	REX_STORE_U32(r26.u32 + 44, r18.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r27,40(r26)
	REX_STORE_U32(r26.u32 + 40, r27.u32);
	// stw r25,32(r26)
	REX_STORE_U32(r26.u32 + 32, r25.u32);
	// stw r20,36(r26)
	REX_STORE_U32(r26.u32 + 36, r20.u32);
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 20);
	// lwz r5,24(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 0);
	// bl 0x82624730
	ctx.lr = 0x8262501C;
	sub_82624730(ctx, base);
	// stw r3,8(r26)
	REX_STORE_U32(r26.u32 + 8, ctx.r3.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(r26.u32 + 20);
	// lwz r6,32(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 32);
	// lwz r5,24(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = REX_LOAD_U32(r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(r16.u32 + 0);
	// bl 0x82624630
	ctx.lr = 0x8262503C;
	sub_82624630(ctx, base);
	// sth r3,12(r26)
	REX_STORE_U16(r26.u32 + 12, ctx.r3.u16);
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82625064
	if (ctx.cr6.eq) goto loc_82625064;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// bne cr6,0x82625060
	if (!ctx.cr6.eq) goto loc_82625060;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_82625060:
	// sth r11,12(r26)
	REX_STORE_U16(r26.u32 + 12, ctx.r11.u16);
loc_82625064:
	// lhz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U16(r26.u32 + 0);
	// bl 0x82640d08
	ctx.lr = 0x8262506C;
	sub_82640D08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
loc_82625078:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_8265D278) {
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
	ctx.lr = 0x8265D280;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,1024
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1024, ctx.xer);
	// bgt cr6,0x8265d344
	if (ctx.cr6.gt) goto loc_8265D344;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r22,0
	r22.s64 = 0;
	// ori r20,r9,65001
	r20.u64 = ctx.r9.u64 | 65001;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265d3c4
	if (ctx.cr6.eq) goto loc_8265D3C4;
loc_8265D2CC:
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x8265d344
	if (ctx.cr6.lt) goto loc_8265D344;
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r30,r10,-5
	r30.s64 = ctx.r10.s64 + -5;
	// addi r22,r22,24
	r22.s64 = r22.s64 + 24;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8265d3a4
	if (ctx.cr6.eq) goto loc_8265D3A4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8265d320
	if (ctx.cr6.eq) goto loc_8265D320;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x8265d320
	if (ctx.cr6.eq) goto loc_8265D320;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// beq cr6,0x8265d350
	if (ctx.cr6.eq) goto loc_8265D350;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// beq cr6,0x8265d3a4
	if (ctx.cr6.eq) goto loc_8265D3A4;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x8265d328
	if (ctx.cr6.eq) goto loc_8265D328;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x8265d344
	if (!ctx.cr6.eq) goto loc_8265D344;
loc_8265D320:
	// li r31,8
	r31.s64 = 8;
	// b 0x8265d3a8
	goto loc_8265D3A8;
loc_8265D328:
	// li r31,2
	r31.s64 = 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// ble cr6,0x8265d3a8
	if (!ctx.cr6.gt) goto loc_8265D3A8;
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 0);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x8265d3a8
	if (!ctx.cr6.gt) goto loc_8265D3A8;
loc_8265D344:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x8265d618
	goto loc_8265D618;
loc_8265D350:
	// li r31,2
	r31.s64 = 2;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// ble cr6,0x8265d3a8
	if (!ctx.cr6.gt) goto loc_8265D3A8;
	// lhz r6,0(r29)
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + 0);
	// add r30,r6,r30
	r30.u64 = ctx.r6.u64 + r30.u64;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// ble cr6,0x8265d3a8
	if (!ctx.cr6.gt) goto loc_8265D3A8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r29,2
	ctx.r5.s64 = r29.s64 + 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826b3f38
	ctx.lr = 0x8265D384;
	sub_826B3F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265d344
	if (ctx.cr0.lt) goto loc_8265D344;
	// cmplwi cr6,r3,512
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 512, ctx.xer);
	// bgt cr6,0x8265d344
	if (ctx.cr6.gt) goto loc_8265D344;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + r22.u64;
	// addi r22,r11,3
	r22.s64 = ctx.r11.s64 + 3;
	// b 0x8265d3a8
	goto loc_8265D3A8;
loc_8265D3A4:
	// li r31,4
	r31.s64 = 4;
loc_8265D3A8:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// blt cr6,0x8265d344
	if (ctx.cr6.lt) goto loc_8265D344;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(r28.u32, r21.u32, ctx.xer);
	// blt cr6,0x8265d2cc
	if (ctx.cr6.lt) goto loc_8265D2CC;
loc_8265D3C4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8265d41c
	if (ctx.cr6.eq) goto loc_8265D41C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x8265d3e4
	if (ctx.cr6.eq) goto loc_8265D3E4;
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// b 0x8265d3e8
	goto loc_8265D3E8;
loc_8265D3E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8265D3E8:
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8265d614
	if (ctx.cr6.eq) goto loc_8265D614;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8265d40c
	if (!ctx.cr6.gt) goto loc_8265D40C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// b 0x8265d618
	goto loc_8265D618;
loc_8265D40C:
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 0);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// b 0x8265d454
	goto loc_8265D454;
loc_8265D41C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8265c9b8
	ctx.lr = 0x8265D424;
	sub_8265C9B8(ctx, base);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8265d614
	if (ctx.cr6.eq) goto loc_8265D614;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x8265d838
	ctx.lr = 0x8265D438;
	sub_8265D838(ctx, base);
	// stw r3,4(r16)
	REX_STORE_U32(r16.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8265d450
	if (!ctx.cr0.eq) goto loc_8265D450;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8265d618
	goto loc_8265D618;
loc_8265D450:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8265D454:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8265D464;
	sub_826A2E60(ctx, base);
	// mulli r11,r21,24
	ctx.r11.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(24));
	// add r29,r11,r30
	r29.u64 = ctx.r11.u64 + r30.u64;
	// subf r25,r11,r22
	r25.u64 = r22.u64 - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// lwz r31,0(r19)
	r31.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r27,0(r18)
	r27.u64 = REX_LOAD_U32(r18.u32 + 0);
	// beq cr6,0x8265d5e4
	if (ctx.cr6.eq) goto loc_8265D5E4;
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// mr r23,r21
	r23.u64 = r21.u64;
loc_8265D48C:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// addi r30,r28,4
	r30.s64 = r28.s64 + 4;
	// addi r10,r27,-5
	ctx.r10.s64 = r27.s64 + -5;
	// stw r8,-16(r28)
	REX_STORE_U32(r28.u32 + -16, ctx.r8.u32);
	// lbzu r8,4(r31)
	ea = 4 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// stb r8,-8(r28)
	REX_STORE_U8(r28.u32 + -8, ctx.r8.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8265d5c4
	if (ctx.cr6.eq) goto loc_8265D5C4;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x8265d5ac
	if (ctx.cr6.eq) goto loc_8265D5AC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x8265d5ac
	if (ctx.cr6.eq) goto loc_8265D5AC;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x8265d520
	if (ctx.cr6.eq) goto loc_8265D520;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x8265d5c4
	if (ctx.cr6.eq) goto loc_8265D5C4;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x8265d5ac
	if (!ctx.cr6.eq) goto loc_8265D5AC;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r31,r11,2
	r31.s64 = ctx.r11.s64 + 2;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
	// addi r27,r10,-2
	r27.s64 = ctx.r10.s64 + -2;
	// addi r26,r9,2
	r26.s64 = ctx.r9.s64 + 2;
	// bl 0x826a1e70
	ctx.lr = 0x8265D50C;
	sub_826A1E70(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// subf r25,r30,r25
	r25.u64 = r25.u64 - r30.u64;
	// add r11,r30,r26
	ctx.r11.u64 = r30.u64 + r26.u64;
	// b 0x8265d5d8
	goto loc_8265D5D8;
loc_8265D520:
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// clrlwi. r7,r29,31
	ctx.r7.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r26,r11,2
	r26.s64 = ctx.r11.s64 + 2;
	// addi r27,r10,-2
	r27.s64 = ctx.r10.s64 + -2;
	// addi r24,r9,2
	r24.s64 = ctx.r9.s64 + 2;
	// beq 0x8265d53c
	if (ctx.cr0.eq) goto loc_8265D53C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8265D53C:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826b3f38
	ctx.lr = 0x8265D560;
	sub_826B3F38(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// subf r25,r11,r25
	r25.u64 = r25.u64 - ctx.r11.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826b3de8
	ctx.lr = 0x8265D5A0;
	sub_826B3DE8(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// b 0x8265d5d8
	goto loc_8265D5D8;
loc_8265D5AC:
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// addi r27,r10,-8
	r27.s64 = ctx.r10.s64 + -8;
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// std r8,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r8.u64);
	// b 0x8265d5d8
	goto loc_8265D5D8;
loc_8265D5C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r27,r10,-4
	r27.s64 = ctx.r10.s64 + -4;
	// stw r8,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r8.u32);
loc_8265D5D8:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
	// bne 0x8265d48c
	if (!ctx.cr0.eq) goto loc_8265D48C;
loc_8265D5E4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8265d604
	if (ctx.cr6.eq) goto loc_8265D604;
	// stw r29,0(r17)
	REX_STORE_U32(r17.u32 + 0, r29.u32);
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - r22.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// b 0x8265d60c
	goto loc_8265D60C;
loc_8265D604:
	// stw r21,0(r16)
	REX_STORE_U32(r16.u32 + 0, r21.u32);
	// stw r11,8(r16)
	REX_STORE_U32(r16.u32 + 8, ctx.r11.u32);
loc_8265D60C:
	// stw r31,0(r19)
	REX_STORE_U32(r19.u32 + 0, r31.u32);
	// stw r27,0(r18)
	REX_STORE_U32(r18.u32 + 0, r27.u32);
loc_8265D614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265D618:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82671810) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82671818;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r28,8(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82671860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm r7,r11,9,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x826715f0
	ctx.lr = 0x826718AC;
	sub_826715F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82671270
	ctx.lr = 0x826718B8;
	sub_82671270(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826741D0) {
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
	ctx.lr = 0x826741D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x826742d8
	if (ctx.cr6.eq) goto loc_826742D8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x826742d8
	if (ctx.cr0.eq) goto loc_826742D8;
	// lis r27,-32127
	r27.s64 = -2105475072;
loc_82674200:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82674238
	if (ctx.cr6.eq) goto loc_82674238;
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,22096(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22096);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x826742d8
	if (ctx.cr6.lt) goto loc_826742D8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82674238
	if (ctx.cr6.eq) goto loc_82674238;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_82674238:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 68);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x826742b0
	if (!ctx.cr6.eq) goto loc_826742B0;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x826742b0
	if (ctx.cr0.eq) goto loc_826742B0;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826742AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826742B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82672c40
	ctx.lr = 0x826742BC;
	sub_82672C40(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x826742d8
	if (!ctx.cr6.eq) goto loc_826742D8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x826742d8
	if (ctx.cr6.eq) goto loc_826742D8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82674200
	if (!ctx.cr0.eq) goto loc_82674200;
loc_826742D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82678FA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82678FB0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679024
	if (ctx.cr0.eq) goto loc_82679024;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82679024
	if (ctx.cr0.eq) goto loc_82679024;
	// bl 0x823ef900
	ctx.lr = 0x82678FDC;
	sub_823EF900(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,460(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 112);
	// subf r6,r10,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,456(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 456);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// bl 0x82684450
	ctx.lr = 0x82679014;
	sub_82684450(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x826829f0
	ctx.lr = 0x82679024;
	sub_826829F0(ctx, base);
loc_82679024:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82676d18
	ctx.lr = 0x8267902C;
	sub_82676D18(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8267B730) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8267B738;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bne cr6,0x8267b7ec
	if (!ctx.cr6.eq) goto loc_8267B7EC;
	// lwz r11,1188(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8267b7ec
	if (ctx.cr0.eq) goto loc_8267B7EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,44(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// lwz r4,40(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// bl 0x826812d8
	ctx.lr = 0x8267B778;
	sub_826812D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8267b7ec
	if (ctx.cr0.eq) goto loc_8267B7EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 3);
	// rlwinm r10,r10,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8267b7ec
	if (!ctx.cr6.eq) goto loc_8267B7EC;
	// lwz r11,5(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5);
	// lwz r10,432(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8267b7ec
	if (!ctx.cr6.eq) goto loc_8267B7EC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8267b7d4
	if (ctx.cr6.eq) goto loc_8267B7D4;
	// lis r11,-32646
	ctx.r11.s64 = -2139488256;
	// stb r30,1185(r31)
	REX_STORE_U8(r31.u32 + 1185, r30.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,1184(r31)
	REX_STORE_U8(r31.u32 + 1184, r30.u8);
	// ori r11,r11,4104
	ctx.r11.u64 = ctx.r11.u64 | 4104;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bl 0x826797d8
	ctx.lr = 0x8267B7D4;
	sub_826797D8(ctx, base);
loc_8267B7D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8267b7ec
	if (ctx.cr6.eq) goto loc_8267B7EC;
	// stw r29,428(r31)
	REX_STORE_U32(r31.u32 + 428, r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8267b7f0
	goto loc_8267B7F0;
loc_8267B7EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8267B7F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826812B0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r4,5(r3)
	REX_STORE_U32(ctx.r3.u32 + 5, ctx.r4.u32);
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,256
	ctx.r8.s64 = 256;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// stb r9,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r9.u8);
	// li r3,9
	ctx.r3.s64 = 9;
	// sth r8,3(r10)
	REX_STORE_U16(ctx.r10.u32 + 3, ctx.r8.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82681770) {
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
	// li r4,1684
	ctx.r4.s64 = 1684;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8265d838
	ctx.lr = 0x82681790;
	sub_8265D838(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826817a4
	if (!ctx.cr0.eq) goto loc_826817A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82681804
	goto loc_82681804;
loc_826817A4:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,-10312
	ctx.r10.s64 = ctx.r10.s64 + -10312;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r9,r11,340
	ctx.r9.s64 = ctx.r11.s64 + 340;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r9,80
	ctx.r6.s64 = ctx.r9.s64 + 80;
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r6,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// stb r10,340(r11)
	REX_STORE_U8(ctx.r11.u32 + 340, ctx.r10.u8);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82681804:
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

DEFINE_REX_FUNC(sub_826845B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,192(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r5,192(r3)
	REX_STORE_U32(ctx.r3.u32 + 192, ctx.r5.u32);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82685378) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826857C8) {
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
	// bl 0x82684e68
	ctx.lr = 0x826857E8;
	sub_82684E68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826857f8
	if (ctx.cr0.eq) goto loc_826857F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x826857F8;
	sub_8269CE98(ctx, base);
loc_826857F8:
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

DEFINE_REX_FUNC(sub_82686F48) {
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
	ctx.lr = 0x82686F50;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r9,r10,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x60;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r26.u32);
	// sth r26,8(r3)
	REX_STORE_U16(ctx.r3.u32 + 8, r26.u16);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// sth r26,10(r3)
	REX_STORE_U16(ctx.r3.u32 + 10, r26.u16);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// sth r26,12(r3)
	REX_STORE_U16(ctx.r3.u32 + 12, r26.u16);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stb r9,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r9.u8);
	// clrlwi. r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r6,1
	r28.s64 = ctx.r6.s64 + 1;
	// addi r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 1;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// beq 0x82686fa8
	if (ctx.cr0.eq) goto loc_82686FA8;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82686fb0
	goto loc_82686FB0;
loc_82686FA8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82686ee0
	ctx.lr = 0x82686FB0;
	sub_82686EE0(ctx, base);
loc_82686FB0:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82687074
	if (ctx.cr6.eq) goto loc_82687074;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// bge cr6,0x82687074
	if (!ctx.cr6.lt) goto loc_82687074;
	// rlwinm. r11,r24,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82687038
	if (ctx.cr0.eq) goto loc_82687038;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82687010
	if (ctx.cr6.eq) goto loc_82687010;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
loc_82686FDC:
	// lwzu r11,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82687008
	if (!ctx.cr6.eq) goto loc_82687008;
	// lbz r8,15(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x82687074
	if (ctx.cr6.eq) goto loc_82687074;
	// lbz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm. r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82687084
	if (!ctx.cr0.eq) goto loc_82687084;
loc_82687008:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82686fdc
	if (!ctx.cr6.eq) goto loc_82686FDC;
loc_82687010:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lhz r10,10(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 10);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82687034:
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
loc_82687038:
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// beq 0x8268709c
	if (ctx.cr0.eq) goto loc_8268709C;
	// lhz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 8);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826870a8
	if (!ctx.cr0.eq) goto loc_826870A8;
loc_82687074:
	// stb r26,15(r31)
	REX_STORE_U8(r31.u32 + 15, r26.u8);
loc_82687078:
	// subf r3,r25,r3
	ctx.r3.u64 = ctx.r3.u64 - r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_82687084:
	// lhz r11,10(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm. r10,r24,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,10(r31)
	REX_STORE_U16(r31.u32 + 10, ctx.r11.u16);
	// beq 0x82687038
	if (ctx.cr0.eq) goto loc_82687038;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82687034
	goto loc_82687034;
loc_8268709C:
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
loc_826870A8:
	// rlwinm. r11,r24,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826870bc
	if (ctx.cr0.eq) goto loc_826870BC;
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r11,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r11.u8);
	// b 0x826870d4
	goto loc_826870D4;
loc_826870BC:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stb r11,15(r31)
	REX_STORE_U8(r31.u32 + 15, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82687074
	if (!ctx.cr6.lt) goto loc_82687074;
loc_826870D4:
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x826870f4
	if (!ctx.cr0.eq) goto loc_826870F4;
	// subf r11,r25,r3
	ctx.r11.u64 = ctx.r3.u64 - r25.u64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r23.u32, ctx.xer);
	// bge cr6,0x82687074
	if (!ctx.cr6.lt) goto loc_82687074;
	// subf r11,r11,r23
	ctx.r11.u64 = r23.u64 - ctx.r11.u64;
	// sth r11,8(r31)
	REX_STORE_U16(r31.u32 + 8, ctx.r11.u16);
loc_826870F4:
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// b 0x82687078
	goto loc_82687078;
}

DEFINE_REX_FUNC(sub_82695338) {
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
	ctx.lr = 0x82695340;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,8
	r28.s64 = ctx.r3.s64 + 8;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// neg r8,r10
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divw r7,r8,r11
	ctx.r7.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// andc r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r9,r8,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r8.s32 / ctx.r11.s32 : 0);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// andc r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// subf r30,r10,r11
	r30.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r5.s32, ctx.xer);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// blt cr6,0x826953d8
	if (ctx.cr6.lt) goto loc_826953D8;
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-5948(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -5948);
	// b 0x82695404
	goto loc_82695404;
loc_826953D8:
	// lis r26,-32119
	r26.s64 = -2104950784;
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,-5948(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -5948);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826953F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// lwz r11,-5948(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + -5948);
loc_82695404:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8269540C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8269AD44) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-176
	ctx.r31.s64 = ctx.r12.s64 + -176;
	// std r29,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r29.u64);
	// lwz r29,84(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8269ad64
	goto loc_8269AD64;
loc_8269AD64:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r23,228(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r25,220(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r24,212(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r26,204(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lhz r28,80(r31)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r31.u32 + 80);
	// lwz r30,88(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r29,84(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8269C2C8) {
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
	// bl 0x8269be08
	ctx.lr = 0x8269C2E0;
	sub_8269BE08(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r10,r10,16184
	ctx.r10.s64 = ctx.r10.s64 + 16184;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8269C2F4:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r11,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bdnz 0x8269c2f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269C2F4;
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

DEFINE_REX_FUNC(sub_8269E120) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8269e170
	if (ctx.cr6.lt) goto loc_8269E170;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8269e170
	if (ctx.cr6.gt) goto loc_8269E170;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x826a9928
	ctx.lr = 0x8269E160;
	sub_826A9928(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x8269e178
	goto loc_8269E178;
loc_8269E170:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x827938a4
	ctx.lr = 0x8269E178;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8269E178:
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

DEFINE_REX_FUNC(sub_826A0860) {
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
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A15C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,25832
	ctx.r11.s64 = ctx.r11.s64 + 25832;
	// lfd f31,3728(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 3728);
	// lfd f13,0(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f11,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lfd f13,8(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f9,48(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f1,56(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fmul f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 * ctx.f12.f64;
	// fctid f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fsub f11,f13,f11
	ctx.f11.f64 = ctx.f13.f64 - ctx.f11.f64;
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// ld r9,-16(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f10,f10,f11,f0
	ctx.f10.f64 = -std::fma(ctx.f10.f64, ctx.f11.f64, -ctx.f0.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fnmsub f9,f9,f11,f10
	ctx.f9.f64 = -std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f10.f64);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64);
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64);
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64);
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f4.f64);
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64);
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f2.f64);
	// fmadd f4,f5,f13,f1
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f1.f64);
	// fmadd f3,f4,f13,f31
	ctx.f3.f64 = std::fma(ctx.f4.f64, ctx.f13.f64, f31.f64);
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x826a166c
	if (ctx.cr6.eq) goto loc_826A166C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_826A166C:
	// lfs f11,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x826a1684
	if (!ctx.cr6.eq) goto loc_826A1684;
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_826A1684:
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// fsub f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 - ctx.f0.f64;
	// lfd f0,26776(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26776);
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// lfd f31,-8(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_116) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_95) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826ADF64) {
	REX_FUNC_PROLOGUE();
	// mffs f0
	ctx.f0.u64 = ctx.fpscr.loadFromHost();
	// stfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stw r5,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r5.u32);
	// lfd f1,-8(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// mtfsf 255,f1
	ctx.fpscr.storeFromGuest(ctx.f1.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AE908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826AE910;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ae934
	if (ctx.cr0.eq) goto loc_826AE934;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x826ae93c
	goto loc_826AE93C;
loc_826AE934:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_826AE93C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ae678
	ctx.lr = 0x826AE954;
	sub_826AE678(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x826ae9bc
	if (ctx.cr6.eq) goto loc_826AE9BC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x826aea0c
	if (!ctx.cr6.eq) goto loc_826AEA0C;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
	// blt cr6,0x826ae9a4
	if (ctx.cr6.lt) goto loc_826AE9A4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r4,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r4.u32);
loc_826AE9A4:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AE9B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826aea0c
	goto loc_826AEA0C;
loc_826AE9BC:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// addi r11,r29,8
	ctx.r11.s64 = r29.s64 + 8;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 12);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// blt cr6,0x826ae9fc
	if (ctx.cr6.lt) goto loc_826AE9FC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
loc_826AE9FC:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AEA0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826AEA0C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826aea20
	goto loc_826AEA20;
loc_826AEA20:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826B7000) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B7280) {
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
	ctx.lr = 0x826B7288;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// bl 0x82147138
	ctx.lr = 0x826B72A4;
	sub_82147138(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826b72c4
	if (!ctx.cr6.eq) goto loc_826B72C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63b8
	ctx.lr = 0x826B72B8;
	sub_826B63B8(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x826b746c
	if (ctx.cr6.eq) goto loc_826B746C;
loc_826B72C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82147138
	ctx.lr = 0x826B72CC;
	sub_82147138(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b63b8
	ctx.lr = 0x826B72D8;
	sub_826B63B8(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r3.u32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// addi r23,r31,332
	r23.s64 = r31.s64 + 332;
	// stw r9,360(r31)
	REX_STORE_U32(r31.u32 + 360, ctx.r9.u32);
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r10.u32);
	// stw r10,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r10.u32);
	// rldicr r29,r11,63,63
	r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r10.u32);
	// stw r9,364(r31)
	REX_STORE_U32(r31.u32 + 364, ctx.r9.u32);
loc_826B731C:
	// addi r11,r30,32
	ctx.r11.s64 = r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x822d3538
	ctx.lr = 0x826B7338;
	sub_822D3538(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// blt cr6,0x826b731c
	if (ctx.cr6.lt) goto loc_826B731C;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// li r25,72
	r25.s64 = 72;
	// ori r26,r11,2
	r26.u64 = ctx.r11.u64 | 2;
	// ori r27,r10,14
	r27.u64 = ctx.r10.u64 | 14;
loc_826B7358:
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826B7360:
	// add r11,r25,r28
	ctx.r11.u64 = r25.u64 + r28.u64;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826b737c
	if (ctx.cr6.eq) goto loc_826B737C;
	// bl 0x822c5ef0
	ctx.lr = 0x826B7378;
	sub_822C5EF0(ctx, base);
	// stwx r24,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, r24.u32);
loc_826B737C:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822d3178
	ctx.lr = 0x826B73A0;
	sub_822D3178(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 & r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b73c8
	if (ctx.cr6.lt) goto loc_826B73C8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x826b7360
	if (ctx.cr6.lt) goto loc_826B7360;
loc_826B73C8:
	// addi r25,r25,3
	r25.s64 = r25.s64 + 3;
	// cmplwi cr6,r25,81
	ctx.cr6.compare<uint32_t>(r25.u32, 81, ctx.xer);
	// blt cr6,0x826b7358
	if (ctx.cr6.lt) goto loc_826B7358;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b7470
	if (ctx.cr6.lt) goto loc_826B7470;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826B73F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826b746c
	if (ctx.cr6.lt) goto loc_826B746C;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b7418
	if (!ctx.cr6.eq) goto loc_826B7418;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b5cf8
	ctx.lr = 0x826B7414;
	sub_826B5CF8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826B7418:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x826b746c
	if (ctx.cr6.lt) goto loc_826B746C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
	// bl 0x822c9330
	ctx.lr = 0x826B7430;
	sub_822C9330(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// ble cr6,0x826b7444
	if (!ctx.cr6.gt) goto loc_826B7444;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x826b7448
	goto loc_826B7448;
loc_826B7444:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
loc_826B7448:
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x822c5e78
	ctx.lr = 0x826B7454;
	sub_822C5E78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826b7464
	if (ctx.cr6.eq) goto loc_826B7464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x826B7464;
	sub_822C5EF0(ctx, base);
loc_826B7464:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_826B746C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826B7470:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826C6C70) {
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
	// lwz r11,520(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 520);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c6cb0
	if (ctx.cr6.eq) goto loc_826C6CB0;
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lwz r6,524(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bctrl 
	ctx.lr = 0x826C6CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826C6CB0:
	// rlwinm r11,r30,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FC;
	// lwz r3,508(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 508);
	// li r4,2
	ctx.r4.s64 = 2;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826c68d8
	ctx.lr = 0x826C6CC8;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c6cd8
	if (ctx.cr6.lt) goto loc_826C6CD8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_826C6CD8:
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

DEFINE_REX_FUNC(sub_826CCAE0) {
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
	// bl 0x826cc898
	ctx.lr = 0x826CCAFC;
	sub_826CC898(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826ccb50
	if (ctx.cr6.lt) goto loc_826CCB50;
	// li r5,720
	ctx.r5.s64 = 720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826CCB18;
	sub_826A2E60(ctx, base);
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
loc_826CCB50:
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

DEFINE_REX_FUNC(sub_826D2CD8) {
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
	ctx.lr = 0x826D2CE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 224);
	// bl 0x826c6478
	ctx.lr = 0x826D2D08;
	sub_826C6478(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,160(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 160);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d2d2c
	if (ctx.cr6.eq) goto loc_826D2D2C;
	// addi r5,r11,172
	ctx.r5.s64 = ctx.r11.s64 + 172;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D2D28;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2D2C:
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d2da0
	if (ctx.cr6.eq) goto loc_826D2DA0;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_826D2D40:
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x826c68d8
	ctx.lr = 0x826D2D58;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,176(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x826c68d8
	ctx.lr = 0x826D2D74;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// lwz r10,164(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826d2d40
	if (ctx.cr6.lt) goto loc_826D2D40;
	// addi r5,r11,176
	ctx.r5.s64 = ctx.r11.s64 + 176;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D2D9C;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2DA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d2e4c
	if (ctx.cr6.eq) goto loc_826D2E4C;
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D2DC0;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x826c68d8
	ctx.lr = 0x826D2DDC;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// bl 0x826c68d8
	ctx.lr = 0x826D2DF8;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x826c68d8
	ctx.lr = 0x826D2E14;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,76(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// bl 0x826c68d8
	ctx.lr = 0x826D2E30;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,76
	ctx.r5.s64 = ctx.r10.s64 + 76;
	// bl 0x826c68d8
	ctx.lr = 0x826D2E48;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2E4C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d2ef8
	if (ctx.cr6.eq) goto loc_826D2EF8;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d2ee0
	if (ctx.cr6.eq) goto loc_826D2EE0;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_826D2E70:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x826c68d8
	ctx.lr = 0x826D2E88;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x826c68d8
	ctx.lr = 0x826D2EAC;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826d2e70
	if (ctx.cr6.lt) goto loc_826D2E70;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D2EDC;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2EE0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,80
	ctx.r5.s64 = ctx.r10.s64 + 80;
	// bl 0x826c68d8
	ctx.lr = 0x826D2EF4;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2EF8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d2fa4
	if (ctx.cr6.eq) goto loc_826D2FA4;
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x826d2f90
	if (!ctx.cr6.gt) goto loc_826D2F90;
	// li r31,0
	r31.s64 = 0;
loc_826D2F1C:
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// bl 0x826c68d8
	ctx.lr = 0x826D2F34;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x826c68d8
	ctx.lr = 0x826D2F54;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,116(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// bl 0x826c68d8
	ctx.lr = 0x826D2F74;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d2f1c
	if (ctx.cr6.lt) goto loc_826D2F1C;
loc_826D2F90:
	// addi r5,r10,116
	ctx.r5.s64 = ctx.r10.s64 + 116;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D2FA0;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D2FA4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3010
	if (ctx.cr6.eq) goto loc_826D3010;
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x826d2ffc
	if (!ctx.cr6.gt) goto loc_826D2FFC;
	// li r31,0
	r31.s64 = 0;
loc_826D2FC8:
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// bl 0x826c68d8
	ctx.lr = 0x826D2FE0;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d2fc8
	if (ctx.cr6.lt) goto loc_826D2FC8;
loc_826D2FFC:
	// addi r5,r10,88
	ctx.r5.s64 = ctx.r10.s64 + 88;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D300C;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3010:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d30bc
	if (ctx.cr6.eq) goto loc_826D30BC;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3090
	if (ctx.cr6.eq) goto loc_826D3090;
	// li r31,0
	r31.s64 = 0;
loc_826D3034:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// bl 0x826c68d8
	ctx.lr = 0x826D304C;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x826c68d8
	ctx.lr = 0x826D3070;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,96(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 96);
	// lhz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826d3034
	if (ctx.cr6.lt) goto loc_826D3034;
loc_826D3090:
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D30A0;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,96
	ctx.r5.s64 = ctx.r10.s64 + 96;
	// bl 0x826c68d8
	ctx.lr = 0x826D30B8;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D30BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d31c4
	if (ctx.cr6.eq) goto loc_826D31C4;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3138
	if (ctx.cr6.eq) goto loc_826D3138;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_826D30E0:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3108
	if (ctx.cr6.eq) goto loc_826D3108;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3104;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3108:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d30e0
	if (ctx.cr6.lt) goto loc_826D30E0;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3134;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3138:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d31ac
	if (ctx.cr6.eq) goto loc_826D31AC;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_826D3154:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d317c
	if (ctx.cr6.eq) goto loc_826D317C;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3178;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D317C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x826d3154
	if (ctx.cr6.lt) goto loc_826D3154;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D31A8;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D31AC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,84
	ctx.r5.s64 = ctx.r10.s64 + 84;
	// bl 0x826c68d8
	ctx.lr = 0x826D31C0;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D31C4:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// bl 0x826c6e00
	ctx.lr = 0x826D31D0;
	sub_826C6E00(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,148(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// bl 0x826c6e00
	ctx.lr = 0x826D31DC;
	sub_826C6E00(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,120(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826d32b8
	if (ctx.cr6.eq) goto loc_826D32B8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d3258
	if (ctx.cr6.eq) goto loc_826D3258;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D320C;
	sub_826C68D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D3224;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D323C;
	sub_826C68D8(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// lwz r3,224(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D3254;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3258:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d3278
	if (ctx.cr6.eq) goto loc_826D3278;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3274;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3278:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d3298
	if (ctx.cr6.eq) goto loc_826D3298;
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3294;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3298:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826d32b8
	if (ctx.cr6.eq) goto loc_826D32B8;
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D32B4;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D32B8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,124(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bl 0x826c6e00
	ctx.lr = 0x826D32C4;
	sub_826C6E00(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,104(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d3308
	if (ctx.cr6.eq) goto loc_826D3308;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D32EC;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// addi r5,r10,104
	ctx.r5.s64 = ctx.r10.s64 + 104;
	// bl 0x826c68d8
	ctx.lr = 0x826D3304;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3308:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d33e4
	if (ctx.cr6.eq) goto loc_826D33E4;
	// li r31,132
	r31.s64 = 132;
loc_826D3320:
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d33c8
	if (ctx.cr6.eq) goto loc_826D33C8;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x826d33b0
	if (ctx.cr6.eq) goto loc_826D33B0;
	// lhz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3398
	if (ctx.cr6.eq) goto loc_826D3398;
	// li r30,0
	r30.s64 = 0;
loc_826D3350:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d337c
	if (ctx.cr6.eq) goto loc_826D337C;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D3378;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D337C:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826d3350
	if (ctx.cr6.lt) goto loc_826D3350;
loc_826D3398:
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// bl 0x826c68d8
	ctx.lr = 0x826D33AC;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D33B0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x826c68d8
	ctx.lr = 0x826D33C4;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D33C8:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lhz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 72);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x826d3320
	if (ctx.cr6.lt) goto loc_826D3320;
loc_826D33E4:
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826d3428
	if (ctx.cr6.eq) goto loc_826D3428;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826d3410
	if (ctx.cr6.eq) goto loc_826D3410;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D340C;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3410:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// addi r5,r11,108
	ctx.r5.s64 = ctx.r11.s64 + 108;
	// bl 0x826c68d8
	ctx.lr = 0x826D3424;
	sub_826C68D8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826D3428:
	// addi r5,r10,48
	ctx.r5.s64 = ctx.r10.s64 + 48;
	// lwz r3,224(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x826c68d8
	ctx.lr = 0x826D3438;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,11
	ctx.r4.s64 = 11;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D344C;
	sub_826C68D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// bl 0x826c68d8
	ctx.lr = 0x826D3460;
	sub_826C68D8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_827134C0) {
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
	ctx.lr = 0x827134C8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r18,312(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// li r5,256
	ctx.r5.s64 = 256;
	// lwz r17,316(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,1760(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1760);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r23,r25
	r23.u64 = r25.u64;
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
	// lwz r15,24(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r16,4(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82713534;
	sub_826A2E60(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r14,1
	r14.s64 = 1;
	// ori r26,r11,32768
	r26.u64 = ctx.r11.u64 | 32768;
loc_82713540:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lbz r4,8(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 8);
	// lwz r29,0(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
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
	// blt cr6,0x82713630
	if (ctx.cr6.lt) goto loc_82713630;
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
	// bge cr6,0x82713628
	if (!ctx.cr6.lt) goto loc_82713628;
loc_82713590:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827135bc
	if (ctx.cr6.lt) goto loc_827135BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x827135AC;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82713590
	if (ctx.cr6.eq) goto loc_82713590;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82713668
	goto loc_82713668;
loc_827135BC:
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
loc_82713628:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82713668
	goto loc_82713668;
loc_82713630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82713638;
	sub_82725F80(ctx, base);
loc_82713638:
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
	ctx.lr = 0x82713650;
	sub_82725F80(ctx, base);
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
	// blt cr6,0x82713638
	if (ctx.cr6.lt) goto loc_82713638;
loc_82713668:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r31,r16
	ctx.cr6.compare<int32_t>(r31.s32, r16.s32, ctx.xer);
	// beq cr6,0x827136dc
	if (ctx.cr6.eq) goto loc_827136DC;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(r31.u32, r19.u32, ctx.xer);
	// blt cr6,0x82713694
	if (ctx.cr6.lt) goto loc_82713694;
	// mr r25,r14
	r25.u64 = r14.u64;
loc_82713694:
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
	// bge 0x827136bc
	if (!ctx.cr0.lt) goto loc_827136BC;
	// bl 0x82725e38
	ctx.lr = 0x827136BC;
	sub_82725E38(ctx, base);
loc_827136BC:
	// lbzx r11,r31,r21
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r21.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x827136d4
	if (ctx.cr6.eq) goto loc_827136D4;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// neg r31,r10
	r31.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// b 0x82713c88
	goto loc_82713C88;
loc_827136D4:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// b 0x82713c88
	goto loc_82713C88;
loc_827136DC:
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
	// bge 0x82713700
	if (!ctx.cr0.lt) goto loc_82713700;
	// bl 0x82725e38
	ctx.lr = 0x82713700;
	sub_82725E38(ctx, base);
loc_82713700:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x827138c0
	if (!ctx.cr6.eq) goto loc_827138C0;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
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
	// blt cr6,0x82713804
	if (ctx.cr6.lt) goto loc_82713804;
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
	// bge cr6,0x827137fc
	if (!ctx.cr6.lt) goto loc_827137FC;
loc_82713764:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82713790
	if (ctx.cr6.lt) goto loc_82713790;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82713780;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82713764
	if (ctx.cr6.eq) goto loc_82713764;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8271383c
	goto loc_8271383C;
loc_82713790:
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
loc_827137FC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x8271383c
	goto loc_8271383C;
loc_82713804:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8271380C;
	sub_82725F80(ctx, base);
loc_8271380C:
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
	ctx.lr = 0x82713824;
	sub_82725F80(ctx, base);
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
	// blt cr6,0x8271380c
	if (ctx.cr6.lt) goto loc_8271380C;
loc_8271383C:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// beq cr6,0x82713d7c
	if (ctx.cr6.eq) goto loc_82713D7C;
	// lbzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// lbzx r28,r11,r20
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// blt cr6,0x8271387c
	if (ctx.cr6.lt) goto loc_8271387C;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r25,r14
	r25.u64 = r14.u64;
	// b 0x82713880
	goto loc_82713880;
loc_8271387C:
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82713880:
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
	// bge 0x827138b0
	if (!ctx.cr0.lt) goto loc_827138B0;
	// bl 0x82725e38
	ctx.lr = 0x827138B0;
	sub_82725E38(ctx, base);
loc_827138B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82713c88
	if (ctx.cr6.eq) goto loc_82713C88;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82713c88
	goto loc_82713C88;
loc_827138C0:
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
	// bge 0x827138e8
	if (!ctx.cr0.lt) goto loc_827138E8;
	// bl 0x82725e38
	ctx.lr = 0x827138E8;
	sub_82725E38(ctx, base);
loc_827138E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82713aa8
	if (!ctx.cr6.eq) goto loc_82713AA8;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
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
	// blt cr6,0x827139ec
	if (ctx.cr6.lt) goto loc_827139EC;
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
	// bge cr6,0x827139e4
	if (!ctx.cr6.lt) goto loc_827139E4;
loc_8271394C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82713978
	if (ctx.cr6.lt) goto loc_82713978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82713968;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8271394c
	if (ctx.cr6.eq) goto loc_8271394C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82713a24
	goto loc_82713A24;
loc_82713978:
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
loc_827139E4:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82713a24
	goto loc_82713A24;
loc_827139EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827139F4;
	sub_82725F80(ctx, base);
loc_827139F4:
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
	ctx.lr = 0x82713A0C;
	sub_82725F80(ctx, base);
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
	// blt cr6,0x827139f4
	if (ctx.cr6.lt) goto loc_827139F4;
loc_82713A24:
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r16.s32, ctx.xer);
	// beq cr6,0x82713d7c
	if (ctx.cr6.eq) goto loc_82713D7C;
	// lbzx r10,r11,r21
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r21.u32);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// lbzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r20.u32);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// blt cr6,0x82713a64
	if (ctx.cr6.lt) goto loc_82713A64;
	// lbzx r10,r31,r15
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r15.u32);
	// mr r25,r14
	r25.u64 = r14.u64;
	// b 0x82713a6c
	goto loc_82713A6C;
loc_82713A64:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lbzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
loc_82713A6C:
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
	// bge 0x82713a98
	if (!ctx.cr0.lt) goto loc_82713A98;
	// bl 0x82725e38
	ctx.lr = 0x82713A98;
	sub_82725E38(ctx, base);
loc_82713A98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82713c88
	if (ctx.cr6.eq) goto loc_82713C88;
	// neg r31,r31
	r31.s64 = static_cast<int64_t>(-r31.u64);
	// b 0x82713c88
	goto loc_82713C88;
loc_82713AA8:
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
	// bge 0x82713ad0
	if (!ctx.cr0.lt) goto loc_82713AD0;
	// bl 0x82725e38
	ctx.lr = 0x82713AD0;
	sub_82725E38(ctx, base);
loc_82713AD0:
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
	// bge cr6,0x82713b48
	if (!ctx.cr6.lt) goto loc_82713B48;
loc_82713AF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82713b48
	if (ctx.cr6.eq) goto loc_82713B48;
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
	// bge 0x82713b38
	if (!ctx.cr0.lt) goto loc_82713B38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713B38;
	sub_82725E38(ctx, base);
loc_82713B38:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82713af0
	if (ctx.cr6.gt) goto loc_82713AF0;
loc_82713B48:
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
	// bge 0x82713b80
	if (!ctx.cr0.lt) goto loc_82713B80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713B80;
	sub_82725E38(ctx, base);
loc_82713B80:
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
	// bge 0x82713ba8
	if (!ctx.cr0.lt) goto loc_82713BA8;
	// bl 0x82725e38
	ctx.lr = 0x82713BA8;
	sub_82725E38(ctx, base);
loc_82713BA8:
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
	// bge cr6,0x82713c1c
	if (!ctx.cr6.lt) goto loc_82713C1C;
loc_82713BC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82713c1c
	if (ctx.cr6.eq) goto loc_82713C1C;
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
	// bge 0x82713c0c
	if (!ctx.cr0.lt) goto loc_82713C0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713C0C;
	sub_82725E38(ctx, base);
loc_82713C0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82713bc4
	if (ctx.cr6.gt) goto loc_82713BC4;
loc_82713C1C:
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
	// bge 0x82713c54
	if (!ctx.cr0.lt) goto loc_82713C54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82713C54;
	sub_82725E38(ctx, base);
loc_82713C54:
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r30,2047
	ctx.cr6.compare<int32_t>(r30.s32, 2047, ctx.xer);
	// ble cr6,0x82713c64
	if (!ctx.cr6.gt) goto loc_82713C64;
	// addi r31,r30,-4096
	r31.s64 = r30.s64 + -4096;
loc_82713C64:
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
	// bge 0x82713c88
	if (!ctx.cr0.lt) goto loc_82713C88;
	// bl 0x82725e38
	ctx.lr = 0x82713C88;
	sub_82725E38(ctx, base);
loc_82713C88:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82713d7c
	if (!ctx.cr6.eq) goto loc_82713D7C;
	// add r11,r28,r23
	ctx.r11.u64 = r28.u64 + r23.u64;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82713d7c
	if (!ctx.cr6.lt) goto loc_82713D7C;
	// lwz r10,1828(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1828);
	// lbzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82713cd0
	if (ctx.cr6.eq) goto loc_82713CD0;
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// slw r6,r14,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (r14.u32 << (ctx.r7.u8 & 0x3F));
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_82713CD0:
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// or r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x82713d04
	if (!ctx.cr6.eq) goto loc_82713D04;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lwz r8,1760(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// lwz r7,304(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 304);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r7,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82713d58
	goto loc_82713D58;
loc_82713D04:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// bne cr6,0x82713d24
	if (!ctx.cr6.eq) goto loc_82713D24;
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// lwz r8,1760(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// lwz r7,308(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 308);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r7,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u32);
	// b 0x82713d58
	goto loc_82713D58;
loc_82713D24:
	// lwz r7,1760(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x82713d44
	if (!ctx.cr6.gt) goto loc_82713D44;
	// lbzx r8,r11,r22
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// mullw r10,r31,r18
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// rotlwi r6,r8,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r5,r10,r17
	ctx.r5.u64 = ctx.r10.u64 + r17.u64;
	// b 0x82713d54
	goto loc_82713D54;
loc_82713D44:
	// lbzx r10,r11,r22
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r22.u32);
	// mullw r8,r31,r18
	ctx.r8.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// rotlwi r6,r10,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// subf r5,r17,r8
	ctx.r5.u64 = ctx.r8.u64 - r17.u64;
loc_82713D54:
	// stwx r5,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
loc_82713D58:
	// addi r23,r11,1
	r23.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82713540
	if (ctx.cr6.eq) goto loc_82713540;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,1944(r27)
	REX_STORE_U32(r27.u32 + 1944, ctx.r9.u32);
	// stw r11,1940(r27)
	REX_STORE_U32(r27.u32 + 1940, ctx.r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
loc_82713D7C:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8274DEF8) {
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
	ctx.lr = 0x8274DF00;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22164);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r8,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r10.u32);
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// li r15,0
	r15.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274e228
	if (ctx.cr6.eq) goto loc_8274E228;
	// lwz r8,204(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r7,208(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r23,428(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r23
	r26.u64 = r23.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8274dfa0
	if (ctx.cr6.eq) goto loc_8274DFA0;
	// lwz r11,20908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274dfa0
	if (ctx.cr6.eq) goto loc_8274DFA0;
	// lwz r11,21928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274dfa0
	if (!ctx.cr6.eq) goto loc_8274DFA0;
	// lwz r10,140(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r11,22196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22196);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,22192(r3)
	REX_STORE_U32(ctx.r3.u32 + 22192, ctx.r9.u32);
	// b 0x8274dfa8
	goto loc_8274DFA8;
loc_8274DFA0:
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// stw r11,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r11.u32);
loc_8274DFA8:
	// lwz r10,436(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8274dfe4
	if (!ctx.cr6.lt) goto loc_8274DFE4;
	// addi r26,r23,1
	r26.s64 = r23.s64 + 1;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8274dfe4
	if (!ctx.cr6.lt) goto loc_8274DFE4;
	// lwz r9,22192(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8274DFC8:
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8274dfe4
	if (!ctx.cr6.eq) goto loc_8274DFE4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8274dfc8
	if (ctx.cr6.lt) goto loc_8274DFC8;
loc_8274DFE4:
	// subf. r30,r23,r26
	r30.u64 = r26.u64 - r23.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x8274e38c
	if (ctx.cr0.eq) goto loc_8274E38C;
	// lwz r21,412(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// lwz r20,404(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r19,396(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r18,388(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r17,380(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r15,372(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r16,364(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r25,420(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// b 0x8274e01c
	goto loc_8274E01C;
loc_8274E010:
	// lwz r6,340(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r5,332(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r4,348(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_8274E01C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8274e044
	if (ctx.cr6.eq) goto loc_8274E044;
	// lwz r11,22192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8274e044
	if (!ctx.cr6.eq) goto loc_8274E044;
	// li r22,0
	r22.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// b 0x8274e04c
	goto loc_8274E04C;
loc_8274E044:
	// rlwinm r22,r8,3,0,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r7,3,0,28
	r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
loc_8274E04C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8274e06c
	if (ctx.cr6.eq) goto loc_8274E06C;
	// lwz r11,22192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8274e070
	if (ctx.cr6.eq) goto loc_8274E070;
loc_8274E06C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8274E070:
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274b7a8
	ctx.lr = 0x8274E09C;
	sub_8274B7A8(ctx, base);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274c130
	ctx.lr = 0x8274E0C4;
	sub_8274C130(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8274e0e4
	if (ctx.cr6.eq) goto loc_8274E0E4;
	// lwz r11,22192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r10,r23,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8274e0e8
	if (ctx.cr6.eq) goto loc_8274E0E8;
loc_8274E0E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8274E0E8:
	// rlwinm r23,r30,1,0,30
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// subf r7,r11,r23
	ctx.r7.u64 = r23.u64 - ctx.r11.u64;
	// add r6,r24,r27
	ctx.r6.u64 = r24.u64 + r27.u64;
	// add r5,r24,r28
	ctx.r5.u64 = r24.u64 + r28.u64;
	// add r4,r22,r29
	ctx.r4.u64 = r22.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274db48
	ctx.lr = 0x8274E110;
	sub_8274DB48(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r9,356(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + r27.u64;
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274db48
	ctx.lr = 0x8274E13C;
	sub_8274DB48(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r24,r30,4,0,27
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// addi r6,r27,8
	ctx.r6.s64 = r27.s64 + 8;
	// addi r5,r28,8
	ctx.r5.s64 = r28.s64 + 8;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x8274dd38
	ctx.lr = 0x8274E170;
	sub_8274DD38(ctx, base);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// addi r6,r27,4
	ctx.r6.s64 = r27.s64 + 4;
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8274dd38
	ctx.lr = 0x8274E19C;
	sub_8274DD38(ctx, base);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,204(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r23,r26
	r23.u64 = r26.u64;
	// mullw r11,r3,r30
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(r30.s32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mullw r5,r8,r30
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r4,r7,r30
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// add r25,r9,r25
	r25.u64 = ctx.r9.u64 + r25.u64;
	// bge cr6,0x8274e218
	if (!ctx.cr6.lt) goto loc_8274E218;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8274e218
	if (!ctx.cr6.lt) goto loc_8274E218;
	// lwz r10,22192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8274E1FC:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8274e218
	if (!ctx.cr6.eq) goto loc_8274E218;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8274e1fc
	if (ctx.cr6.lt) goto loc_8274E1FC;
loc_8274E218:
	// subf. r30,r23,r26
	r30.u64 = r26.u64 - r23.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8274e010
	if (!ctx.cr0.eq) goto loc_8274E010;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
loc_8274E228:
	// lwz r30,428(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 428);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8274e244
	if (!ctx.cr6.eq) goto loc_8274E244;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r15,r11,3,0,28
	r15.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r10,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_8274E244:
	// lwz r25,436(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// cntlzw r11,r30
	ctx.r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r24,420(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r23,364(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r22,356(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8274b7a8
	ctx.lr = 0x8274E288;
	sub_8274B7A8(ctx, base);
	// subf r30,r30,r25
	r30.u64 = r25.u64 - r30.u64;
	// lwz r20,404(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r19,396(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r17,380(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// lwz r16,372(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r21,412(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r18,388(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// bl 0x8274c130
	ctx.lr = 0x8274E2CC;
	sub_8274C130(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,340(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// subf r7,r11,r25
	ctx.r7.u64 = r25.u64 - ctx.r11.u64;
	// add r6,r26,r27
	ctx.r6.u64 = r26.u64 + r27.u64;
	// add r5,r26,r28
	ctx.r5.u64 = r26.u64 + r28.u64;
	// add r4,r15,r29
	ctx.r4.u64 = r15.u64 + r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274db48
	ctx.lr = 0x8274E2F8;
	sub_8274DB48(ctx, base);
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,348(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + r27.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// add r4,r4,r29
	ctx.r4.u64 = ctx.r4.u64 + r29.u64;
	// bl 0x8274db48
	ctx.lr = 0x8274E32C;
	sub_8274DB48(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// addi r6,r27,8
	ctx.r6.s64 = r27.s64 + 8;
	// addi r5,r28,8
	ctx.r5.s64 = r28.s64 + 8;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x8274dd38
	ctx.lr = 0x8274E360;
	sub_8274DD38(ctx, base);
	// lwz r7,136(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r6,r27,4
	ctx.r6.s64 = r27.s64 + 4;
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8274dd38
	ctx.lr = 0x8274E38C;
	sub_8274DD38(ctx, base);
loc_8274E38C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8276C330) {
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
	ctx.lr = 0x8276C338;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8276c600
	if (ctx.cr6.eq) goto loc_8276C600;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8276c368
	if (ctx.cr6.eq) goto loc_8276C368;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8276C354:
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// stdx r10,r11,r5
	REX_STORE_U64(ctx.r11.u32 + ctx.r5.u32, ctx.r10.u64);
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// bdnz 0x8276c354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C354;
	// b 0x826a1cf0
	return;
loc_8276C368:
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
loc_8276C3B8:
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
	// bdnz 0x8276c3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C3B8;
	// b 0x826a1cf0
	return;
loc_8276C600:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8276c8a4
	if (ctx.cr6.eq) goto loc_8276C8A4;
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
loc_8276C65C:
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
	// bdnz 0x8276c65c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C65C;
	// b 0x826a1cf0
	return;
loc_8276C8A4:
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
loc_8276C8B8:
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
loc_8276C8D0:
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
	// bdnz 0x8276c8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276C8D0;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x8276c8b8
	if (ctx.cr6.lt) goto loc_8276C8B8;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_827B0EB0) {
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
	ctx.lr = 0x827B0EB8;
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
	// bne cr6,0x827b1068
	if (!ctx.cr6.eq) goto loc_827B1068;
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
	// ble cr6,0x827b124c
	if (!ctx.cr6.gt) goto loc_827B124C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B0F80:
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
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
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
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
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
	// blt cr6,0x827b0f80
	if (ctx.cr6.lt) goto loc_827B0F80;
	// b 0x827b124c
	goto loc_827B124C;
loc_827B1068:
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
	// ble cr6,0x827b124c
	if (!ctx.cr6.gt) goto loc_827B124C;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_827B10F4:
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
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
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
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// blt cr6,0x827b10f4
	if (ctx.cr6.lt) goto loc_827B10F4;
loc_827B124C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827afcd8
	ctx.lr = 0x827B125C;
	sub_827AFCD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

