#include "hydrothunder_funcs.53.h"

DEFINE_REX_FUNC(sub_82122800) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82122808;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82122848
	if (ctx.cr6.eq) goto loc_82122848;
	// lwz r29,4(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82122838
	goto loc_82122838;
loc_82122824:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82122834;
	sub_82120AC0(ctx, base);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
loc_82122838:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x82122824
	if (!ctx.cr6.eq) goto loc_82122824;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82122848;
	sub_8269CE98(ctx, base);
loc_82122848:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821289B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821289C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82129138
	ctx.lr = 0x821289D0;
	sub_82129138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82128ad0
	if (!ctx.cr0.eq) goto loc_82128AD0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82128a28
	if (ctx.cr6.eq) goto loc_82128A28;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,-24536
	ctx.r4.s64 = ctx.r10.s64 + -24536;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128A00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x82128A08;
	sub_8215F2D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82128a1c
	if (!ctx.cr6.eq) goto loc_82128A1C;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82128a20
	goto loc_82128A20;
loc_82128A1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82128A20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82128ad0
	if (!ctx.cr0.eq) goto loc_82128AD0;
loc_82128A28:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r10,-24520
	ctx.r5.s64 = ctx.r10.s64 + -24520;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,6072(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 6072);
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82121610
	ctx.lr = 0x82128A48;
	sub_82121610(ctx, base);
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 40);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x82128A70;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82128a88
	if (ctx.cr0.eq) goto loc_82128A88;
	// bl 0x82128da0
	ctx.lr = 0x82128A84;
	sub_82128DA0(ctx, base);
	// b 0x82128a8c
	goto loc_82128A8C;
loc_82128A88:
	// bl 0x82128ae0
	ctx.lr = 0x82128A8C;
	sub_82128AE0(ctx, base);
loc_82128A8C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82128a9c
	if (!ctx.cr0.eq) goto loc_82128A9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82128ad4
	goto loc_82128AD4;
loc_82128A9C:
	// lwz r11,152(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82128ac8
	goto loc_82128AC8;
loc_82128AA8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,152(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 152);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82128AC8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82128aa8
	if (!ctx.cr6.eq) goto loc_82128AA8;
loc_82128AD0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82128AD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82132638) {
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
	// mulli r11,r4,436
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(436));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,272
	r31.s64 = ctx.r11.s64 + 272;
	// lbz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 272);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821326d0
	if (ctx.cr0.eq) goto loc_821326D0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,2020
	ctx.r3.s64 = ctx.r3.s64 + 2020;
	// bl 0x8214fcc8
	ctx.lr = 0x82132674;
	sub_8214FCC8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821326d0
	if (!ctx.cr6.gt) goto loc_821326D0;
	// lwz r11,2016(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2016);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821326d0
	if (ctx.cr6.gt) goto loc_821326D0;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r8,428(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 428);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// srawi r7,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 4;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821326d0
	if (ctx.cr6.eq) goto loc_821326D0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,432(r31)
	REX_STORE_U32(r31.u32 + 432, ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addic. r11,r11,172
	ctx.xer.ca = ctx.r11.u32 > 4294967123;
	ctx.r11.s64 = ctx.r11.s64 + 172;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821326d0
	if (ctx.cr0.eq) goto loc_821326D0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821326D0:
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

DEFINE_REX_FUNC(sub_82138670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82138678;
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r7,r3,128
	ctx.r7.s64 = ctx.r3.s64 + 128;
	// addi r6,r3,176
	ctx.r6.s64 = ctx.r3.s64 + 176;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821734b8
	ctx.lr = 0x821386A0;
	sub_821734B8(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
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
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// bctrl 
	ctx.lr = 0x821386C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
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
	ctx.lr = 0x821386E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x821766f0
	ctx.lr = 0x821386F0;
	sub_821766F0(ctx, base);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r9,24
	ctx.r9.s64 = 24;
	// addi r8,r11,-12232
	ctx.r8.s64 = ctx.r11.s64 + -12232;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 252);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213872C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213D840) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r11,13356
	r31.s64 = ctx.r11.s64 + 13356;
	// lwz r11,13384(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 13384);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8213d88c
	if (!ctx.cr0.eq) goto loc_8213D88C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r11,13384(r10)
	REX_STORE_U32(ctx.r10.u32 + 13384, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,-17656
	ctx.r4.s64 = ctx.r9.s64 + -17656;
	// bl 0x82120600
	ctx.lr = 0x8213D880;
	sub_82120600(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12000
	ctx.r3.s64 = ctx.r11.s64 + 12000;
	// bl 0x8269d008
	ctx.lr = 0x8213D88C;
	sub_8269D008(ctx, base);
loc_8213D88C:
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

DEFINE_REX_FUNC(sub_82141660) {
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
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82142828) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lbz r3,-17021(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + -17021);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82143090) {
	REX_FUNC_PROLOGUE();
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
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
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82144E30) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82146418) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82146448
	goto loc_82146448;
loc_82146438:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82146450
	if (ctx.cr6.eq) goto loc_82146450;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_82146448:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82146438
	if (!ctx.cr6.eq) goto loc_82146438;
loc_82146450:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
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
	ctx.lr = 0x82146468;
	sub_8269CC20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82149510) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82149518;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,224
	ctx.r3.s64 = 224;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x822f6280
	ctx.lr = 0x82149530;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8214958c
	if (ctx.cr0.eq) goto loc_8214958C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3ac0
	ctx.lr = 0x82149544;
	sub_821D3AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r11,r11,31752
	ctx.r11.s64 = ctx.r11.s64 + 31752;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82149570;
	sub_826A1E70(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82149580;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821840d8
	ctx.lr = 0x82149588;
	sub_821840D8(ctx, base);
	// b 0x82149590
	goto loc_82149590;
loc_8214958C:
	// li r31,0
	r31.s64 = 0;
loc_82149590:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r5,r28,4
	ctx.r5.s64 = r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// bl 0x8214abd8
	ctx.lr = 0x821495AC;
	sub_8214ABD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82149e08
	ctx.lr = 0x821495B8;
	sub_82149E08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8214D570) {
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
	ctx.lr = 0x8214D578;
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f29.u64);
	// stfd f30,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwz r7,60(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mulli r10,r4,720
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(720));
	// lwzx r31,r11,r9
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,6056(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 6056);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r10,68(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r29,r11,-12664
	r29.s64 = ctx.r11.s64 + -12664;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bne cr6,0x8214d5e4
	if (!ctx.cr6.eq) goto loc_8214D5E4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-12608
	ctx.r3.s64 = ctx.r11.s64 + -12608;
	// li r5,345
	ctx.r5.s64 = 345;
	// bl 0x821231d0
	ctx.lr = 0x8214D5E4;
	sub_821231D0(ctx, base);
loc_8214D5E4:
	// lis r26,-32106
	r26.s64 = -2104098816;
	// lwz r11,6196(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 6196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214d608
	if (!ctx.cr6.eq) goto loc_8214D608;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,-12576
	ctx.r3.s64 = ctx.r11.s64 + -12576;
	// li r5,346
	ctx.r5.s64 = 346;
	// bl 0x821231d0
	ctx.lr = 0x8214D608;
	sub_821231D0(ctx, base);
loc_8214D608:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r25,60(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + 60);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x8214D61C;
	sub_8212DD28(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r9,19112
	ctx.r6.s64 = ctx.r9.s64 + 19112;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r25,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// std r11,4(r10)
	REX_STORE_U64(ctx.r10.u32 + 4, ctx.r11.u64);
	// bl 0x8212dc68
	ctx.lr = 0x8214D644;
	sub_8212DC68(ctx, base);
	// lwz r3,6196(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 6196);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,60(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r5,68(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214D664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f31,720(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 720);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x8214d6d0
	if (!ctx.cr6.gt) goto loc_8214D6D0;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lwz r27,72(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lfs f29,732(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 732);
	f29.f64 = double(temp.f32);
	// lwz r26,68(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x8212dd28
	ctx.lr = 0x8214D690;
	sub_8212DD28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r6,r10,22312
	ctx.r6.s64 = ctx.r10.s64 + 22312;
	// li r4,2
	ctx.r4.s64 = 2;
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r27.u32);
	// lwz r10,724(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 724);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,728(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 728);
	// stfs f29,24(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bl 0x8212dc68
	ctx.lr = 0x8214D6D0;
	sub_8212DC68(ctx, base);
loc_8214D6D0:
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lwz r5,24(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r11,255
	ctx.r11.s64 = 255;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r30,52(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 52);
	// stfs f30,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lbz r27,34(r28)
	r27.u64 = REX_LOAD_U8(r28.u32 + 34);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r10,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r10.u8);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stb r10,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r10.u8);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stb r10,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, ctx.r10.u8);
	// stb r11,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r11.u8);
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stb r11,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r11.u8);
	// stb r11,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r11.u8);
	// stb r11,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, ctx.r11.u8);
	// stb r11,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r7.u32);
	// stw r5,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// stw r4,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r4.u32);
	// stw r3,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// beq 0x8214d758
	if (ctx.cr0.eq) goto loc_8214D758;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// b 0x8214d798
	goto loc_8214D798;
loc_8214D758:
	// lbz r11,33(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 33);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214d76c
	if (ctx.cr0.eq) goto loc_8214D76C;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// b 0x8214d798
	goto loc_8214D798;
loc_8214D76C:
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lfs f13,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,116(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lfs f12,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f12,160(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
loc_8214D798:
	// lwz r8,60(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lfs f13,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r6,72(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r9,r11,-15556
	ctx.r9.s64 = ctx.r11.s64 + -15556;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r31,56(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 56);
	// lwa r30,12(r8)
	r30.s64 = int32_t(REX_LOAD_U32(ctx.r8.u32 + 12));
	// li r4,96
	ctx.r4.s64 = 96;
	// std r30,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r30.u64);
	// lbz r11,2(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r10,1(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r9,3(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwa r30,16(r8)
	r30.s64 = int32_t(REX_LOAD_U32(ctx.r8.u32 + 16));
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// std r30,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r30.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// stw r6,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// ld r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// fdivs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r9.u64);
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// std r10,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r10.u64);
	// bl 0x8212dd28
	ctx.lr = 0x8214D878;
	sub_8212DD28(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8214D890;
	sub_826A1E70(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// addi r6,r11,17416
	ctx.r6.s64 = ctx.r11.s64 + 17416;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8212dc68
	ctx.lr = 0x8214D8A8;
	sub_8212DC68(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_82169310) {
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
	ctx.lr = 0x82169318;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r26,r11,23852
	r26.s64 = ctx.r11.s64 + 23852;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8269f078
	ctx.lr = 0x82169338;
	sub_8269F078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821693dc
	if (ctx.cr0.eq) goto loc_821693DC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r27,r11,23872
	r27.s64 = ctx.r11.s64 + 23872;
loc_82169348:
	// addi r31,r3,18
	r31.s64 = ctx.r3.s64 + 18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269fc60
	ctx.lr = 0x82169358;
	sub_8269FC60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8269cd20
	ctx.lr = 0x8216936C;
	sub_8269CD20(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r30,r31
	ctx.r11.u64 = r30.u64 + r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stbx r9,r30,r10
	REX_STORE_U8(r30.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// bl 0x82121610
	ctx.lr = 0x82169390;
	sub_82121610(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f270
	ctx.lr = 0x8216939C;
	sub_8215F270(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821693b0
	if (ctx.cr6.lt) goto loc_821693B0;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821693b4
	goto loc_821693B4;
loc_821693B0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_821693B4:
	// bl 0x8215fbf8
	ctx.lr = 0x821693B8;
	sub_8215FBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x821693C8;
	sub_82120AC0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269f078
	ctx.lr = 0x821693D4;
	sub_8269F078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82169348
	if (!ctx.cr0.eq) goto loc_82169348;
loc_821693DC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8216E9E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb4
	ctx.lr = 0x8216E9E8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c98
	ctx.lr = 0x8216E9F0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f12,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f10,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r30,r3,32
	r30.s64 = ctx.r3.s64 + 32;
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r10,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r10.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// addi r3,r11,464
	ctx.r3.s64 = ctx.r11.s64 + 464;
	// bl 0x821d21d0
	ctx.lr = 0x8216EA84;
	sub_821D21D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216ed28
	if (ctx.cr0.eq) goto loc_8216ED28;
	// lfs f29,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f29.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f28,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	f28.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f27,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f27.f64 = double(temp.f32);
	// fadds f0,f29,f28
	ctx.f0.f64 = double(float(f29.f64 + f28.f64));
	// lfs f26,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	f26.f64 = double(temp.f32);
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lfs f25,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f25.f64 = double(temp.f32);
	// fadds f13,f27,f26
	ctx.f13.f64 = double(float(f27.f64 + f26.f64));
	// lfs f24,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	f24.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f12,f25,f24
	ctx.f12.f64 = double(float(f25.f64 + f24.f64));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f31,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * f31.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x8216EAE4;
	sub_823FBD18(ctx, base);
	// ld r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// fsubs f13,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 - f28.f64));
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// fsubs f12,f27,f26
	ctx.f12.f64 = double(float(f27.f64 - f26.f64));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fsubs f11,f25,f24
	ctx.f11.f64 = double(float(f25.f64 - f24.f64));
	// addi r8,r30,256
	ctx.r8.s64 = r30.s64 + 256;
	// addi r6,r30,256
	ctx.r6.s64 = r30.s64 + 256;
	// lfs f10,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// std r7,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r7.u64);
	// std r5,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r5.u64);
	// lfs f6,144(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f7,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f12,f9,f6
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f9,f8,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fsubs f8,f7,f4
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fabs f8,f8
	ctx.f8.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fmadds f12,f9,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f9.f64, ctx.f12.f64)));
	// fnmsubs f11,f11,f31,f8
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, f31.f64, -ctx.f8.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
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
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lfsx f12,r8,r11
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f11,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fsqrts f29,f0
	f29.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f0,f29,f30
	ctx.f0.f64 = double(float(f29.f64 / f30.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x8216ec78
	if (ctx.cr6.gt) goto loc_8216EC78;
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x8216ec78
	if (!ctx.cr6.gt) goto loc_8216EC78;
	// fmuls f31,f30,f31
	f31.f64 = double(float(f30.f64 * f31.f64));
	// lfs f0,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fneg f30,f31
	f30.u64 = f31.u64 ^ 0x8000000000000000;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8216e9e0
	ctx.lr = 0x8216EBFC;
	sub_8216E9E0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8216e9e0
	ctx.lr = 0x8216EC24;
	sub_8216E9E0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8216e9e0
	ctx.lr = 0x8216EC4C;
	sub_8216E9E0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8216e9e0
	ctx.lr = 0x8216EC74;
	sub_8216E9E0(ctx, base);
	// b 0x8216ed28
	goto loc_8216ED28;
loc_8216EC78:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216ece0
	if (!ctx.cr6.gt) goto loc_8216ECE0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// bgt cr6,0x8216eca8
	if (ctx.cr6.gt) goto loc_8216ECA8;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8216ECA8:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8216ece0
	if (!ctx.cr6.gt) goto loc_8216ECE0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mulli r3,r31,20
	ctx.r3.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// bl 0x8269d1d0
	ctx.lr = 0x8216ECBC;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mulli r5,r11,20
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8216ECD0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8216ECD8;
	sub_8269D1B8(ctx, base);
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
loc_8216ECE0:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216f950
	ctx.lr = 0x8216ECEC;
	sub_8216F950(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8216f950
	ctx.lr = 0x8216ED08;
	sub_8216F950(ctx, base);
	// stfs f30,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216f950
	ctx.lr = 0x8216ED14;
	sub_8216F950(ctx, base);
	// stfs f29,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8216f950
	ctx.lr = 0x8216ED20;
	sub_8216F950(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_8216ED28:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce4
	ctx.lr = 0x8216ED34;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82191448) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-32064
	ctx.r11.s64 = ctx.r11.s64 + -32064;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82191520
	ctx.lr = 0x82191474;
	sub_82191520(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x8269ce98
	ctx.lr = 0x8219147C;
	sub_8269CE98(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x8269ce98
	ctx.lr = 0x82191484;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x82191498;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821914a8
	if (ctx.cr0.eq) goto loc_821914A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821914A8;
	sub_8269CE98(ctx, base);
loc_821914A8:
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

DEFINE_REX_FUNC(sub_82194AA8) {
	REX_FUNC_PROLOGUE();
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82194b08
	sub_82194B08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82195180) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821951AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6092);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821951C4;
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

DEFINE_REX_FUNC(sub_821962C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82196648) {
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
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// li r31,0
	r31.s64 = 0;
	// lwz r30,6180(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6180);
loc_8219666C:
	// lwz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82196708
	if (ctx.cr6.eq) goto loc_82196708;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82196690
	if (!ctx.cr6.eq) goto loc_82196690;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82196690:
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821966a0
	if (ctx.cr6.eq) goto loc_821966A0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_821966A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821966ac
	if (ctx.cr6.eq) goto loc_821966AC;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_821966AC:
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bl 0x821973c0
	ctx.lr = 0x821966C4;
	sub_821973C0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821966ec
	if (ctx.cr6.eq) goto loc_821966EC;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r3,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// b 0x821966f4
	goto loc_821966F4;
loc_821966EC:
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
loc_821966F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x8219666c
	goto loc_8219666C;
loc_82196708:
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

DEFINE_REX_FUNC(sub_8219D278) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lbz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 44);
	// lbz r10,45(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 45);
	// lbz r9,46(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 46);
	// lbz r8,47(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 47);
	// stb r11,40(r3)
	REX_STORE_U8(ctx.r3.u32 + 40, ctx.r11.u8);
	// stb r10,41(r3)
	REX_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// stb r9,42(r3)
	REX_STORE_U8(ctx.r3.u32 + 42, ctx.r9.u8);
	// stb r8,43(r3)
	REX_STORE_U8(ctx.r3.u32 + 43, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219DB58) {
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
	// bl 0x821911f8
	ctx.lr = 0x8219DB78;
	sub_821911F8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-29596
	ctx.r11.s64 = ctx.r11.s64 + -29596;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821A1F10) {
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
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-27956
	ctx.r11.s64 = ctx.r11.s64 + -27956;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8269ce98
	ctx.lr = 0x821A1F40;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x821A1F54;
	sub_8214E4B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a1f64
	if (ctx.cr0.eq) goto loc_821A1F64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821A1F64;
	sub_8269CE98(ctx, base);
loc_821A1F64:
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

DEFINE_REX_FUNC(sub_821A46D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3df8
	sub_821A3DF8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A4770) {
	REX_FUNC_PROLOGUE();
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821a3990
	sub_821A3990(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A52C8) {
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
	ctx.lr = 0x821A52D0;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2ca8
	ctx.lr = 0x821A52D8;
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// lfs f12,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f29,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f29.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r28,6096(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821d7c18
	ctx.lr = 0x821A5334;
	sub_821D7C18(ctx, base);
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// li r11,8
	ctx.r11.s64 = 8;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,128
	ctx.r7.s64 = 128;
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// li r8,255
	ctx.r8.s64 = 255;
	// stfs f13,256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r10,r1,264
	ctx.r10.s64 = ctx.r1.s64 + 264;
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// lfs f0,-16132(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -16132);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stb r7,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r7.u8);
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stb r7,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// lfs f30,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	f30.f64 = double(temp.f32);
	// fmuls f28,f30,f0
	f28.f64 = double(float(f30.f64 * ctx.f0.f64));
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
loc_821A5388:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a5388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A5388;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x823fbf60
	ctx.lr = 0x821A53A4;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A53B4:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a53b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A53B4;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82137ed8
	ctx.lr = 0x821A53DC;
	sub_82137ED8(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lfs f1,908(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 908);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a4ca0
	ctx.lr = 0x821A53E8;
	sub_821A4CA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823fbf60
	ctx.lr = 0x821A53F8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A5408:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a5408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A5408;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f28.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82137ed8
	ctx.lr = 0x821A5430;
	sub_82137ED8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r10,r9,-8
	ctx.r10.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A5448:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r8)
	ea = 8 + ctx.r8.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r8.u32 = ea;
	// bdnz 0x821a5448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A5448;
	// stfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// stfs f30,104(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821884b0
	ctx.lr = 0x821A546C;
	sub_821884B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// lfs f30,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	f30.f64 = double(temp.f32);
	// lfs f28,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	f28.f64 = double(temp.f32);
	// bl 0x823fbf60
	ctx.lr = 0x821A5484;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A5494:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a5494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A5494;
	// stfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f0,f30,f30,f29
	ctx.f0.f64 = double(float(-std::fma(f30.f64, f30.f64, -f29.f64)));
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f29,116(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x821380d0
	ctx.lr = 0x821A54E8;
	sub_821380D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x823fbf60
	ctx.lr = 0x821A54F8;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A5508:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821a5508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A5508;
	// stfs f29,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fnmsubs f0,f28,f28,f29
	ctx.f0.f64 = double(float(-std::fma(f28.f64, f28.f64, -f29.f64)));
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f29,100(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f28,116(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// bl 0x821380d0
	ctx.lr = 0x821A555C;
	sub_821380D0(ctx, base);
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x826a2cf4
	ctx.lr = 0x821A5568;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B9448) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-15056
	ctx.r3.s64 = ctx.r11.s64 + -15056;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BA688) {
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
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x82191520
	ctx.lr = 0x821BA6A4;
	sub_82191520(ctx, base);
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// bl 0x821357c8
	ctx.lr = 0x821BA6AC;
	sub_821357C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821BBDA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BBDA8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BBDB8;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-19088
	ctx.r11.s64 = ctx.r11.s64 + -19088;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BBDCC;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bbdf0
	if (ctx.cr0.eq) goto loc_821BBDF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BBDE8;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bbdf4
	goto loc_821BBDF4;
loc_821BBDF0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821BBDF4:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BBE00;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BBE08;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bbe7c
	if (ctx.cr0.eq) goto loc_821BBE7C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBE2C;
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
	ctx.lr = 0x821BBE40;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bbe6c
	if (ctx.cr0.eq) goto loc_821BBE6C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-16472
	ctx.r10.s64 = ctx.r10.s64 + -16472;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bbe70
	goto loc_821BBE70;
loc_821BBE6C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BBE70:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bbe80
	goto loc_821BBE80;
loc_821BBE7C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BBE80:
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
	ctx.lr = 0x821BBE98;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BBEA0;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bbed8
	if (ctx.cr0.eq) goto loc_821BBED8;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19228
	ctx.r4.s64 = ctx.r11.s64 + -19228;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBECC;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bbedc
	goto loc_821BBEDC;
loc_821BBED8:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BBEDC:
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
	ctx.lr = 0x821BBEF4;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BBEFC;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bbf2c
	if (ctx.cr0.eq) goto loc_821BBF2C;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19220
	ctx.r4.s64 = ctx.r11.s64 + -19220;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBF20;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bbf30
	goto loc_821BBF30;
loc_821BBF2C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BBF30:
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
	ctx.lr = 0x821BBF48;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BBF50;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bbf80
	if (ctx.cr0.eq) goto loc_821BBF80;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19212
	ctx.r4.s64 = ctx.r11.s64 + -19212;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BBF74;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bbf84
	goto loc_821BBF84;
loc_821BBF80:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BBF84:
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
	ctx.lr = 0x821BBF9C;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C88D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14796
	ctx.r3.s64 = ctx.r11.s64 + -14796;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9300) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// b 0x821a1f88
	sub_821A1F88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C9C28) {
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
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x822f6280
	ctx.lr = 0x821C9C3C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9c4c
	if (ctx.cr0.eq) goto loc_821C9C4C;
	// bl 0x821c9c60
	ctx.lr = 0x821C9C48;
	sub_821C9C60(ctx, base);
	// b 0x821c9c50
	goto loc_821C9C50;
loc_821C9C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C9C50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CB330) {
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
	ctx.lr = 0x821CB338;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,176(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// bl 0x821e9ec0
	ctx.lr = 0x821CB348;
	sub_821E9EC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-17344
	ctx.r4.s64 = ctx.r11.s64 + -17344;
	// bl 0x8215f338
	ctx.lr = 0x821CB354;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821cb380
	if (!ctx.cr6.eq) goto loc_821CB380;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821cb378
	if (ctx.cr6.lt) goto loc_821CB378;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821cb388
	goto loc_821CB388;
loc_821CB378:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821cb388
	goto loc_821CB388;
loc_821CB380:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
loc_821CB388:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-15580
	ctx.r10.s64 = ctx.r10.s64 + -15580;
loc_821CB394:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cb3b8
	if (ctx.cr0.eq) goto loc_821CB3B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cb394
	if (ctx.cr6.eq) goto loc_821CB394;
loc_821CB3B8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cb3cc
	if (!ctx.cr0.eq) goto loc_821CB3CC;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821cb3d8
	goto loc_821CB3D8;
loc_821CB3CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821cb688
	ctx.lr = 0x821CB3D4;
	sub_821CB688(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_821CB3D8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	r25.s64 = 0;
	// beq 0x821cb4e8
	if (ctx.cr0.eq) goto loc_821CB4E8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r27,r26,180
	r27.s64 = r26.s64 + 180;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,6100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6100);
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x8232f8f8
	ctx.lr = 0x821CB3FC;
	sub_8232F8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821cb4e8
	if (!ctx.cr0.eq) goto loc_821CB4E8;
	// lwz r3,176(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 176);
	// bl 0x821e9ec0
	ctx.lr = 0x821CB40C;
	sub_821E9EC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-24696
	ctx.r4.s64 = ctx.r11.s64 + -24696;
	// bl 0x8215f338
	ctx.lr = 0x821CB418;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r25
	r29.u64 = r25.u64;
	// addi r28,r11,-15436
	r28.s64 = ctx.r11.s64 + -15436;
loc_821CB428:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821cb440
	if (!ctx.cr6.eq) goto loc_821CB440;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821cb444
	goto loc_821CB444;
loc_821CB440:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821CB444:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821cb4e8
	if (!ctx.cr6.lt) goto loc_821CB4E8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f530
	ctx.lr = 0x821CB458;
	sub_8215F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x821CB468;
	sub_8215F2D0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x821CB46C;
	sub_8215F9E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821cb480
	if (ctx.cr6.lt) goto loc_821CB480;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x821cb484
	goto loc_821CB484;
loc_821CB480:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_821CB484:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821CB48C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cb4b0
	if (ctx.cr0.eq) goto loc_821CB4B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cb48c
	if (ctx.cr6.eq) goto loc_821CB48C;
loc_821CB4B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cb4c4
	if (!ctx.cr0.eq) goto loc_821CB4C4;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821cb4cc
	goto loc_821CB4CC;
loc_821CB4C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821cb9d8
	ctx.lr = 0x821CB4CC;
	sub_821CB9D8(ctx, base);
loc_821CB4CC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cb4e0
	if (ctx.cr0.eq) goto loc_821CB4E0;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8232fe48
	ctx.lr = 0x821CB4E0;
	sub_8232FE48(ctx, base);
loc_821CB4E0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821cb428
	goto loc_821CB428;
loc_821CB4E8:
	// lbz r11,116(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821cb508
	if (ctx.cr0.eq) goto loc_821CB508;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r25,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cb570
	ctx.lr = 0x821CB508;
	sub_821CB570(ctx, base);
loc_821CB508:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821DAEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mullw. r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821DAED0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// stb r8,-48(r1)
	REX_STORE_U8(ctx.r1.u32 + -48, ctx.r8.u8);
	// stb r7,-47(r1)
	REX_STORE_U8(ctx.r1.u32 + -47, ctx.r7.u8);
	// stb r6,-46(r1)
	REX_STORE_U8(ctx.r1.u32 + -46, ctx.r6.u8);
	// stb r5,-45(r1)
	REX_STORE_U8(ctx.r1.u32 + -45, ctx.r5.u8);
	// lfs f0,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r8,6(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r6,7(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// lbz r5,5(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// stb r8,-43(r1)
	REX_STORE_U8(ctx.r1.u32 + -43, ctx.r8.u8);
	// stb r7,-41(r1)
	REX_STORE_U8(ctx.r1.u32 + -41, ctx.r7.u8);
	// stb r6,-44(r1)
	REX_STORE_U8(ctx.r1.u32 + -44, ctx.r6.u8);
	// stb r5,-42(r1)
	REX_STORE_U8(ctx.r1.u32 + -42, ctx.r5.u8);
	// lfs f0,-44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lbz r8,10(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r6,11(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// lbz r5,9(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r8,-39(r1)
	REX_STORE_U8(ctx.r1.u32 + -39, ctx.r8.u8);
	// stb r7,-37(r1)
	REX_STORE_U8(ctx.r1.u32 + -37, ctx.r7.u8);
	// stb r6,-40(r1)
	REX_STORE_U8(ctx.r1.u32 + -40, ctx.r6.u8);
	// stb r5,-38(r1)
	REX_STORE_U8(ctx.r1.u32 + -38, ctx.r5.u8);
	// lfs f0,-40(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lbz r8,18(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// lbz r6,19(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// lbz r5,17(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// stb r8,-35(r1)
	REX_STORE_U8(ctx.r1.u32 + -35, ctx.r8.u8);
	// stb r7,-33(r1)
	REX_STORE_U8(ctx.r1.u32 + -33, ctx.r7.u8);
	// stb r6,-36(r1)
	REX_STORE_U8(ctx.r1.u32 + -36, ctx.r6.u8);
	// stb r5,-34(r1)
	REX_STORE_U8(ctx.r1.u32 + -34, ctx.r5.u8);
	// lfs f0,-36(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lbz r8,22(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// lbz r6,23(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 23);
	// lbz r5,21(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// lbz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// stb r8,-31(r1)
	REX_STORE_U8(ctx.r1.u32 + -31, ctx.r8.u8);
	// stb r7,-29(r1)
	REX_STORE_U8(ctx.r1.u32 + -29, ctx.r7.u8);
	// stb r6,-32(r1)
	REX_STORE_U8(ctx.r1.u32 + -32, ctx.r6.u8);
	// stb r5,-30(r1)
	REX_STORE_U8(ctx.r1.u32 + -30, ctx.r5.u8);
	// lfs f0,-32(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lbz r8,26(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 26);
	// lbz r6,27(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 27);
	// lbz r5,25(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 25);
	// lbz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// stb r8,-27(r1)
	REX_STORE_U8(ctx.r1.u32 + -27, ctx.r8.u8);
	// stb r7,-25(r1)
	REX_STORE_U8(ctx.r1.u32 + -25, ctx.r7.u8);
	// stb r6,-28(r1)
	REX_STORE_U8(ctx.r1.u32 + -28, ctx.r6.u8);
	// stb r5,-26(r1)
	REX_STORE_U8(ctx.r1.u32 + -26, ctx.r5.u8);
	// lfs f0,-28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lbz r8,30(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 30);
	// lbz r6,31(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 31);
	// lbz r5,29(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 29);
	// lbz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// stb r8,-23(r1)
	REX_STORE_U8(ctx.r1.u32 + -23, ctx.r8.u8);
	// stb r7,-21(r1)
	REX_STORE_U8(ctx.r1.u32 + -21, ctx.r7.u8);
	// stb r6,-24(r1)
	REX_STORE_U8(ctx.r1.u32 + -24, ctx.r6.u8);
	// stb r5,-22(r1)
	REX_STORE_U8(ctx.r1.u32 + -22, ctx.r5.u8);
	// lfs f0,-24(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lbz r8,34(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 34);
	// lbz r6,33(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// lbz r7,35(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 35);
	// stb r8,-19(r1)
	REX_STORE_U8(ctx.r1.u32 + -19, ctx.r8.u8);
	// lbz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stb r7,-20(r1)
	REX_STORE_U8(ctx.r1.u32 + -20, ctx.r7.u8);
	// stb r6,-18(r1)
	REX_STORE_U8(ctx.r1.u32 + -18, ctx.r6.u8);
	// stb r8,-17(r1)
	REX_STORE_U8(ctx.r1.u32 + -17, ctx.r8.u8);
	// lfs f0,-20(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lbz r8,37(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 37);
	// lbz r7,36(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// lbz r6,39(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 39);
	// lbz r5,38(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 38);
	// stb r8,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r7,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r7.u8);
	// stb r6,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r6.u8);
	// stb r5,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r5.u8);
	// lfs f0,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lbz r7,41(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// lbz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// lbz r5,43(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 43);
	// lbz r8,42(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 42);
	// stb r8,-11(r1)
	REX_STORE_U8(ctx.r1.u32 + -11, ctx.r8.u8);
	// stb r5,-12(r1)
	REX_STORE_U8(ctx.r1.u32 + -12, ctx.r5.u8);
	// stb r6,-9(r1)
	REX_STORE_U8(ctx.r1.u32 + -9, ctx.r6.u8);
	// stb r7,-10(r1)
	REX_STORE_U8(ctx.r1.u32 + -10, ctx.r7.u8);
	// lfs f0,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821daed0
	if (ctx.cr6.lt) goto loc_821DAED0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E8500) {
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
	ctx.lr = 0x821E8508;
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e86d0
	if (ctx.cr6.eq) goto loc_821E86D0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e86d0
	if (ctx.cr6.eq) goto loc_821E86D0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lfs f30,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f30.f64 = double(temp.f32);
	// lfs f31,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f31.f64 = double(temp.f32);
loc_821E8554:
	// lwz r29,8(r22)
	r29.u64 = REX_LOAD_U32(r22.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r29,64
	ctx.r11.s64 = r29.s64 + 64;
	// lfs f13,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,68(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,72(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
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
	ctx.lr = 0x821E85A8;
	sub_823FBD18(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r27,0(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821e86b4
	goto loc_821E86B4;
loc_821E85B4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r11,58(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 58);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e86ac
	if (ctx.cr0.eq) goto loc_821E86AC;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e86ac
	if (!ctx.cr6.gt) goto loc_821E86AC;
	// li r28,0
	r28.s64 = 0;
loc_821E85DC:
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,6060(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821E85E8;
	sub_8212DD28(ctx, base);
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823fbf60
	ctx.lr = 0x821E8600;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E8610:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821e8610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E8610;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821E862C;
	sub_826A1E70(ctx, base);
	// lis r11,-32225
	ctx.r11.s64 = -2111897600;
	// lwz r3,6060(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6060);
	// li r12,-32
	ctx.r12.s64 = -32;
	// addi r7,r11,-29760
	ctx.r7.s64 = ctx.r11.s64 + -29760;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// rldicr r10,r30,49,14
	ctx.r10.u64 = __builtin_rotateleft64(r30.u64, 49) & 0xFFFE000000000000;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r25.u32);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r6,108(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 108);
	// lwz r5,76(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x82139b18
	ctx.lr = 0x821E869C;
	sub_82139B18(ctx, base);
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 24);
	// addi r28,r28,272
	r28.s64 = r28.s64 + 272;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e85dc
	if (ctx.cr6.lt) goto loc_821E85DC;
loc_821E86AC:
	// lwz r27,0(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 44);
loc_821E86B4:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e85b4
	if (!ctx.cr6.eq) goto loc_821E85B4;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 16);
	// lwz r22,0(r22)
	r22.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821e8554
	if (!ctx.cr6.eq) goto loc_821E8554;
loc_821E86D0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_821F9288) {
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
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x821F92B8;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,25024
	ctx.r11.s64 = ctx.r11.s64 + 25024;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x821f92d4
	if (ctx.cr0.eq) goto loc_821F92D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F92D4;
	sub_8269CE98(ctx, base);
loc_821F92D4:
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

DEFINE_REX_FUNC(sub_821FB5E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FBAC8) {
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
	ctx.lr = 0x821FBAD0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fbb00
	if (ctx.cr6.eq) goto loc_821FBB00;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,25200
	ctx.r4.s64 = ctx.r11.s64 + 25200;
	// addi r3,r10,25300
	ctx.r3.s64 = ctx.r10.s64 + 25300;
	// li r5,480
	ctx.r5.s64 = 480;
	// bl 0x821231d0
	ctx.lr = 0x821FBB00;
	sub_821231D0(ctx, base);
loc_821FBB00:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,25468
	ctx.r4.s64 = ctx.r11.s64 + 25468;
	// bl 0x8215f338
	ctx.lr = 0x821FBB10;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FBB14;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r11,25484
	ctx.r4.s64 = ctx.r11.s64 + 25484;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBB28;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FBB2C;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,25508
	ctx.r4.s64 = ctx.r11.s64 + 25508;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBB40;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FBB44;
	sub_8215F990(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r11,25536
	ctx.r4.s64 = ctx.r11.s64 + 25536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x821FBB58;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x821FBB5C;
	sub_8215F990(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBB80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FBB98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82200E20) {
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
	// lwz r8,36(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82200f14
	if (!ctx.cr6.gt) goto loc_82200F14;
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82200E50:
	// lwzx r30,r11,r9
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 132);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82200e74
	if (ctx.cr6.eq) goto loc_82200E74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82200e50
	if (ctx.cr6.lt) goto loc_82200E50;
	// b 0x82200f14
	goto loc_82200F14;
loc_82200E74:
	// lwz r11,144(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82200e8c
	if (!ctx.cr6.eq) goto loc_82200E8C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200fd8
	ctx.lr = 0x82200E8C;
	sub_82200FD8(ctx, base);
loc_82200E8C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82200ed0
	if (!ctx.cr6.gt) goto loc_82200ED0;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82200EA8:
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// beq cr6,0x82200ecc
	if (ctx.cr6.eq) goto loc_82200ECC;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82200ea8
	if (ctx.cr6.lt) goto loc_82200EA8;
	// b 0x82200ed0
	goto loc_82200ED0;
loc_82200ECC:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_82200ED0:
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82200f0c
	if (!ctx.cr6.lt) goto loc_82200F0C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r11,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_82200F0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82200F14;
	sub_8269CE98(ctx, base);
loc_82200F14:
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

DEFINE_REX_FUNC(sub_82207BC0) {
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
	// lwz r3,32(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,31404
	ctx.r11.s64 = ctx.r11.s64 + 31404;
	// addi r10,r10,31452
	ctx.r10.s64 = ctx.r10.s64 + 31452;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x82207c14
	if (ctx.cr6.eq) goto loc_82207C14;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82207C14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,31376
	ctx.r11.s64 = ctx.r11.s64 + 31376;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82207c30
	if (ctx.cr0.eq) goto loc_82207C30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82207C30;
	sub_8269CE98(ctx, base);
loc_82207C30:
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

DEFINE_REX_FUNC(sub_8220BB30) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8220BB44;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220bb54
	if (ctx.cr0.eq) goto loc_8220BB54;
	// bl 0x8220bb68
	ctx.lr = 0x8220BB50;
	sub_8220BB68(ctx, base);
	// b 0x8220bb58
	goto loc_8220BB58;
loc_8220BB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BB58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220C8B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,624(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r4,640(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 640);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r5,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220C8E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-32520
	ctx.r3.s64 = ctx.r10.s64 + -32520;
	// bl 0x8216bc98
	ctx.lr = 0x8220C8FC;
	sub_8216BC98(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F6E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822100A8) {
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
	ctx.lr = 0x822100B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r10,208(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// addi r31,r3,204
	r31.s64 = ctx.r3.s64 + 204;
	// lis r28,-32106
	r28.s64 = -2104098816;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82210118
	if (!ctx.cr0.gt) goto loc_82210118;
	// li r29,0
	r29.s64 = 0;
loc_822100DC:
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r4,r29,r11
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822100F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822100dc
	if (ctx.cr6.lt) goto loc_822100DC;
loc_82210118:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82210148
	if (ctx.cr6.eq) goto loc_82210148;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8269cc20
	ctx.lr = 0x82210140;
	sub_8269CC20(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_82210148:
	// lwz r3,6040(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 6040);
	// lwz r4,220(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 220);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82210160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,220(r27)
	REX_STORE_U32(r27.u32 + 220, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8221A158) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
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
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8221A850) {
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
	ctx.lr = 0x8221A858;
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lwz r11,816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 816);
	// lwz r8,820(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 820);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r7,128(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 128);
	// addi r10,r10,-26808
	ctx.r10.s64 = ctx.r10.s64 + -26808;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r29,r3,816
	r29.s64 = ctx.r3.s64 + 816;
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
	// li r28,0
	r28.s64 = 0;
	// srawi. r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// ble 0x8221ab40
	if (!ctx.cr0.gt) goto loc_8221AB40;
	// addi r10,r3,360
	ctx.r10.s64 = ctx.r3.s64 + 360;
	// lfs f30,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// addi r9,r3,376
	ctx.r9.s64 = ctx.r3.s64 + 376;
	// lfs f31,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	f31.f64 = double(temp.f32);
	// addi r8,r3,484
	ctx.r8.s64 = ctx.r3.s64 + 484;
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r5,-32241
	ctx.r5.s64 = -2112946176;
	// lis r4,-32241
	ctx.r4.s64 = -2112946176;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r7,r7,-26856
	ctx.r7.s64 = ctx.r7.s64 + -26856;
	// addi r26,r3,144
	r26.s64 = ctx.r3.s64 + 144;
	// addi r25,r3,252
	r25.s64 = ctx.r3.s64 + 252;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r23,r3,468
	r23.s64 = ctx.r3.s64 + 468;
	// addi r15,r3,160
	r15.s64 = ctx.r3.s64 + 160;
	// addi r14,r3,268
	r14.s64 = ctx.r3.s64 + 268;
	// li r30,0
	r30.s64 = 0;
	// lis r16,-32106
	r16.s64 = -2104098816;
	// addi r22,r6,22808
	r22.s64 = ctx.r6.s64 + 22808;
	// addi r21,r5,-26828
	r21.s64 = ctx.r5.s64 + -26828;
	// addi r20,r4,-26816
	r20.s64 = ctx.r4.s64 + -26816;
	// addi r19,r8,23052
	r19.s64 = ctx.r8.s64 + 23052;
	// addi r18,r9,16176
	r18.s64 = ctx.r9.s64 + 16176;
	// addi r17,r10,-17264
	r17.s64 = ctx.r10.s64 + -17264;
loc_8221A914:
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221A920;
	sub_8215F670(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221A928;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221A92C;
	sub_8215FA30(ctx, base);
	// lwz r11,796(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 796);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8221A940;
	sub_8215F338(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8221A948;
	sub_8215F2D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8215f338
	ctx.lr = 0x8221A950;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8221A954;
	sub_8215FA30(ctx, base);
	// lwz r11,6140(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 6140);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221A970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221A984;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221a998
	if (!ctx.cr6.eq) goto loc_8221A998;
	// lbz r27,8(r3)
	r27.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8221a99c
	goto loc_8221A99C;
loc_8221A998:
	// li r27,0
	r27.s64 = 0;
loc_8221A99C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f12,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f11,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x826a06d8
	ctx.lr = 0x8221A9D8;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822184a8
	ctx.lr = 0x8221A9F0;
	sub_822184A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lfs f13,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// lfs f12,8(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f11,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x8215f670
	ctx.lr = 0x8221AA28;
	sub_8215F670(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8221AA2C;
	sub_8215F990(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,10
	ctx.r5.s64 = 10;
	// bl 0x826a06d8
	ctx.lr = 0x8221AA38;
	sub_826A06D8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// bl 0x822184a8
	ctx.lr = 0x8221AA50;
	sub_822184A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8221AA60;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8221aa84
	if (!ctx.cr6.eq) goto loc_8221AA84;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aa88
	if (ctx.cr6.lt) goto loc_8221AA88;
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x8221aa88
	goto loc_8221AA88;
loc_8221AA84:
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_8221AA88:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
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
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822184a8
	ctx.lr = 0x8221AAC8;
	sub_822184A8(ctx, base);
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8221aadc
	if (ctx.cr6.lt) goto loc_8221AADC;
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(r24.u32 + 0);
	// b 0x8221aae0
	goto loc_8221AAE0;
loc_8221AADC:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
loc_8221AAE0:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lfs f13,4(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// lfs f12,8(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f11,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822184a8
	ctx.lr = 0x8221AB1C;
	sub_822184A8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// fadds f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 + f31.f64));
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221a914
	if (ctx.cr6.lt) goto loc_8221A914;
loc_8221AB40:
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8221abdc
	if (!ctx.cr6.gt) goto loc_8221ABDC;
	// li r30,0
	r30.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lis r25,-32106
	r25.s64 = -2104098816;
loc_8221AB58:
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + ctx.r11.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f670
	ctx.lr = 0x8221AB64;
	sub_8215F670(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8221ab78
	if (!ctx.cr6.eq) goto loc_8221AB78;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x8221ab7c
	goto loc_8221AB7C;
loc_8221AB78:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8221AB7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x8221aba4
	if (ctx.cr0.eq) goto loc_8221ABA4;
	// lwz r3,6192(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 6192);
	// li r28,1
	r28.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221ABA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221ABA4:
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// stwx r28,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r28.u32);
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmpw cr6,r26,r10
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8221ab58
	if (ctx.cr6.lt) goto loc_8221AB58;
loc_8221ABDC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// addi r5,r31,120
	ctx.r5.s64 = r31.s64 + 120;
	// addi r3,r31,576
	ctx.r3.s64 = r31.s64 + 576;
	// lfs f12,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x8226bf68
	ctx.lr = 0x8221AC08;
	sub_8226BF68(ctx, base);
	// lwz r11,836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 836);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ac28
	if (ctx.cr6.eq) goto loc_8221AC28;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221AC28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8221AC28:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8223A608) {
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
	ctx.lr = 0x8223A610;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-18236
	r30.s64 = ctx.r11.s64 + -18236;
	// bne cr6,0x8223a640
	if (!ctx.cr6.eq) goto loc_8223A640;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-17424
	ctx.r3.s64 = ctx.r11.s64 + -17424;
	// li r5,858
	ctx.r5.s64 = 858;
	// bl 0x821231d0
	ctx.lr = 0x8223A640;
	sub_821231D0(ctx, base);
loc_8223A640:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8223a65c
	if (!ctx.cr6.eq) goto loc_8223A65C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-17376
	ctx.r3.s64 = ctx.r11.s64 + -17376;
	// li r5,859
	ctx.r5.s64 = 859;
	// bl 0x821231d0
	ctx.lr = 0x8223A65C;
	sub_821231D0(ctx, base);
loc_8223A65C:
	// li r28,1
	r28.s64 = 1;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stb r28,224(r29)
	REX_STORE_U8(r29.u32 + 224, r28.u8);
	// lwz r3,6152(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223a6ec
	if (ctx.cr0.eq) goto loc_8223A6EC;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223a6ec
	if (ctx.cr0.eq) goto loc_8223A6EC;
	// lwz r3,460(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A6B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6152);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223A6D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8223a6ec
	if (ctx.cr0.eq) goto loc_8223A6EC;
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lfs f2,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227d8a0
	ctx.lr = 0x8223A6EC;
	sub_8227D8A0(ctx, base);
loc_8223A6EC:
	// lwz r11,616(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 616);
	// stb r28,698(r31)
	REX_STORE_U8(r31.u32 + 698, r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,616(r31)
	REX_STORE_U32(r31.u32 + 616, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82242708) {
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
	// bl 0x826a1c90
	ctx.lr = 0x82242710;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,-16588
	r30.s64 = ctx.r11.s64 + -16588;
	// bne cr6,0x82242750
	if (!ctx.cr6.eq) goto loc_82242750;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-17528
	ctx.r3.s64 = ctx.r11.s64 + -17528;
	// li r5,1102
	ctx.r5.s64 = 1102;
	// bl 0x821231d0
	ctx.lr = 0x82242750;
	sub_821231D0(ctx, base);
loc_82242750:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8224276c
	if (!ctx.cr6.eq) goto loc_8224276C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// li r5,1103
	ctx.r5.s64 = 1103;
	// bl 0x821231d0
	ctx.lr = 0x8224276C;
	sub_821231D0(ctx, base);
loc_8224276C:
	// lfs f0,568(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,552(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r20,r11,16592
	r20.s64 = ctx.r11.s64 + 16592;
	// lfs f0,564(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,128(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 128);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lfs f29,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f29.f64 = double(temp.f32);
	// addi r18,r11,16
	r18.s64 = ctx.r11.s64 + 16;
	// lfs f0,4(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r19,r31,240
	r19.s64 = r31.s64 + 240;
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x822427D4;
	sub_823FBD18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbd18
	ctx.lr = 0x822427FC;
	sub_823FBD18(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224282C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 224);
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242c88
	if (!ctx.cr0.eq) goto loc_82242C88;
	// lfs f0,3900(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 3900);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x82242864
	if (!ctx.cr6.gt) goto loc_82242864;
	// lbz r11,740(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 740);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242864
	if (ctx.cr0.eq) goto loc_82242864;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82242fc0
	ctx.lr = 0x82242860;
	sub_82242FC0(ctx, base);
	// b 0x82242c88
	goto loc_82242C88;
loc_82242864:
	// lfs f13,684(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82242890
	if (ctx.cr6.lt) goto loc_82242890;
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242888;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82242c78
	if (!ctx.cr0.eq) goto loc_82242C78;
loc_82242890:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82242c88
	if (ctx.cr6.eq) goto loc_82242C88;
	// bl 0x82151d50
	ctx.lr = 0x822428A0;
	sub_82151D50(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f31,168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 168);
	f31.f64 = double(temp.f32);
	// bl 0x82151d50
	ctx.lr = 0x822428B4;
	sub_82151D50(ctx, base);
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,32
	ctx.r6.s64 = r30.s64 + 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821d7b18
	ctx.lr = 0x822428D0;
	sub_821D7B18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242c88
	if (ctx.cr0.eq) goto loc_82242C88;
	// lis r23,-32106
	r23.s64 = -2104098816;
	// lwz r24,228(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,6288(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822428F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,460(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 460);
	// stw r3,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r3.u32);
	// lwz r3,460(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r21,80(r1)
	r21.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242b2c
	if (ctx.cr0.eq) goto loc_82242B2C;
	// lbz r11,165(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242938
	if (!ctx.cr0.eq) goto loc_82242938;
	// lbz r11,166(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242b2c
	if (ctx.cr0.eq) goto loc_82242B2C;
loc_82242938:
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242b2c
	if (ctx.cr0.eq) goto loc_82242B2C;
	// lwz r11,460(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 460);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82242958
	if (ctx.cr6.lt) goto loc_82242958;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82242958:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120600
	ctx.lr = 0x82242964;
	sub_82120600(ctx, base);
	// lwz r3,6152(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// bne 0x822429ec
	if (!ctx.cr0.eq) goto loc_822429EC;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242998;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x822429ec
	if (ctx.cr6.gt) goto loc_822429EC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822318e8
	ctx.lr = 0x822429B4;
	sub_822318E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242b08
	if (ctx.cr0.eq) goto loc_82242B08;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82120b20
	ctx.lr = 0x822429E0;
	sub_82120B20(ctx, base);
	// lfs f0,700(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 700);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// b 0x82242b08
	goto loc_82242B08;
loc_822429EC:
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82231830
	ctx.lr = 0x82242A04;
	sub_82231830(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242b08
	if (ctx.cr0.eq) goto loc_82242B08;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lwz r25,96(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// li r27,-1
	r27.s64 = -1;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,56(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x82120b20
	ctx.lr = 0x82242A38;
	sub_82120B20(ctx, base);
	// lfs f30,700(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 700);
	f30.f64 = double(temp.f32);
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242A58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82242b08
	if (!ctx.cr0.gt) goto loc_82242B08;
loc_82242A60:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242A78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82242a94
	if (ctx.cr6.lt) goto loc_82242A94;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82242A94:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82125d00
	ctx.lr = 0x82242AA0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82242ae8
	if (!ctx.cr0.eq) goto loc_82242AE8;
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,3856(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 3856);
	// mulli r10,r3,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(304));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// stfs f31,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// bl 0x82120b20
	ctx.lr = 0x82242AE4;
	sub_82120B20(ctx, base);
	// stfs f30,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
loc_82242AE8:
	// lwz r3,6284(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6284);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r28,r3
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82242a60
	if (ctx.cr6.lt) goto loc_82242A60;
loc_82242B08:
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82231718
	ctx.lr = 0x82242B1C;
	sub_82231718(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82242B2C;
	sub_82120AC0(ctx, base);
loc_82242B2C:
	// lwz r3,6288(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 6288);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// lbz r11,113(r22)
	ctx.r11.u64 = REX_LOAD_U8(r22.u32 + 113);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242c44
	if (ctx.cr0.eq) goto loc_82242C44;
	// lbz r11,166(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242c88
	if (ctx.cr0.eq) goto loc_82242C88;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// beq 0x82242b74
	if (ctx.cr0.eq) goto loc_82242B74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82242b88
	goto loc_82242B88;
loc_82242B74:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bge cr6,0x82242b8c
	if (!ctx.cr6.lt) goto loc_82242B8C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82242B88:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82242B8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82242c18
	if (ctx.cr6.lt) goto loc_82242C18;
	// lwz r3,460(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242BAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82242be4
	if (ctx.cr0.eq) goto loc_82242BE4;
	// lwa r11,16(r31)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r31.u32 + 16));
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bl 0x821a33a0
	ctx.lr = 0x82242BD8;
	sub_821A33A0(ctx, base);
	// lfs f0,1456(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r20.u32 + 1456);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f0,f1,f0,f10
	ctx.f0.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f0.f64, -ctx.f10.f64)));
	// b 0x82242c10
	goto loc_82242C10;
loc_82242BE4:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r20,256
	ctx.r11.s64 = r20.s64 + 256;
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, f29.f64);
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
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82242C10:
	// stfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f29,20(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
loc_82242C18:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,116(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 116);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82242c38
	if (!ctx.cr6.eq) goto loc_82242C38;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82242e30
	ctx.lr = 0x82242C38;
	sub_82242E30(ctx, base);
loc_82242C38:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,676(r26)
	REX_STORE_U32(r26.u32 + 676, ctx.r11.u32);
	// b 0x82242c88
	goto loc_82242C88;
loc_82242C44:
	// lbz r11,164(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82242c5c
	if (!ctx.cr0.eq) goto loc_82242C5C;
	// lbz r11,166(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242c6c
	if (ctx.cr0.eq) goto loc_82242C6C;
loc_82242C5C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,676(r26)
	REX_STORE_U32(r26.u32 + 676, ctx.r11.u32);
loc_82242C6C:
	// lbz r11,166(r24)
	ctx.r11.u64 = REX_LOAD_U8(r24.u32 + 166);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242c88
	if (ctx.cr0.eq) goto loc_82242C88;
loc_82242C78:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82242e30
	ctx.lr = 0x82242C88;
	sub_82242E30(ctx, base);
loc_82242C88:
	// lwz r3,460(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82242C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82242d7c
	if (ctx.cr0.eq) goto loc_82242D7C;
	// lfs f13,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f0,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r20,256
	ctx.r10.s64 = r20.s64 + 256;
	// lfs f12,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f8,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f6,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f5,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f10,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfd f3,112(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fmadds f13,f8,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfs f10,176(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfs f9,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f6,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f11,f7,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f11.f64)));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fadds f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, f29.f64);
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
	// lfsx f12,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fnmsubs f0,f0,f10,f9
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f9.f64)));
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,120(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f8,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, -ctx.f0.f64)));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lwa r11,116(r22)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r22.u32 + 116));
	// lfs f13,120(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_82242D7C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82242D8C;
	sub_826A1E70(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_8227AD20) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x8227AD28;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8227ad5c
	if (!ctx.cr6.eq) goto loc_8227AD5C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-1716
	ctx.r4.s64 = ctx.r11.s64 + -1716;
	// addi r3,r10,-1076
	ctx.r3.s64 = ctx.r10.s64 + -1076;
	// li r5,997
	ctx.r5.s64 = 997;
	// bl 0x821231d0
	ctx.lr = 0x8227AD5C;
	sub_821231D0(ctx, base);
loc_8227AD5C:
	// lis r24,-32106
	r24.s64 = -2104098816;
	// lwz r3,6288(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227AD74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r23,-1
	r23.s64 = -1;
	// beq 0x8227aef4
	if (ctx.cr0.eq) goto loc_8227AEF4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f31.f64 = double(temp.f32);
	// li r25,176
	r25.s64 = 176;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	f30.f64 = double(temp.f32);
loc_8227AD94:
	// cmpwi cr6,r25,240
	ctx.cr6.compare<int32_t>(r25.s32, 240, ctx.xer);
	// bge cr6,0x8227aef4
	if (!ctx.cr6.lt) goto loc_8227AEF4;
	// lwz r11,460(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 460);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8227adb4
	if (ctx.cr6.lt) goto loc_8227ADB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8227ADB4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120600
	ctx.lr = 0x8227ADC0;
	sub_82120600(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// blt cr6,0x8227ae10
	if (ctx.cr6.lt) goto loc_8227AE10;
	// lwzx r11,r25,r26
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + r26.u32);
	// add r31,r25,r26
	r31.u64 = r25.u64 + r26.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227ae10
	if (!ctx.cr6.gt) goto loc_8227AE10;
	// li r30,0
	r30.s64 = 0;
loc_8227ADE0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82120780
	ctx.lr = 0x8227ADF4;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8227af04
	if (ctx.cr0.eq) goto loc_8227AF04;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227ade0
	if (ctx.cr6.lt) goto loc_8227ADE0;
loc_8227AE10:
	// li r31,0
	r31.s64 = 0;
loc_8227AE14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8227AE24;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227aeb0
	if (ctx.cr0.eq) goto loc_8227AEB0;
	// fmuls f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 * f30.f64));
	// lwz r29,4(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r28,80(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// ble cr6,0x8227ae9c
	if (!ctx.cr6.gt) goto loc_8227AE9C;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// bgt cr6,0x8227ae68
	if (ctx.cr6.gt) goto loc_8227AE68;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8227AE68:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8227ae9c
	if (!ctx.cr6.gt) goto loc_8227AE9C;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x8227AE7C;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8227AE8C;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8227AE94;
	sub_8269D1B8(ctx, base);
	// stw r21,0(r27)
	REX_STORE_U32(r27.u32 + 0, r21.u32);
	// stw r31,8(r27)
	REX_STORE_U32(r27.u32 + 8, r31.u32);
loc_8227AE9C:
	// stw r30,4(r27)
	REX_STORE_U32(r27.u32 + 4, r30.u32);
	// addi r4,r30,-1
	ctx.r4.s64 = r30.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822434c8
	ctx.lr = 0x8227AEAC;
	sub_822434C8(ctx, base);
	// std r28,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, r28.u64);
loc_8227AEB0:
	// lwz r3,6288(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6288);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227AEC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8227aed4
	if (!ctx.cr6.eq) goto loc_8227AED4;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
loc_8227AED4:
	// lwz r3,6288(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 6288);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227AEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne 0x8227ad94
	if (!ctx.cr0.eq) goto loc_8227AD94;
loc_8227AEF4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_8227AF04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// li r31,1
	r31.s64 = 1;
	// lfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	f31.f64 = double(temp.f32);
	// b 0x8227ae14
	goto loc_8227AE14;
}

DEFINE_REX_FUNC(sub_822895D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822895E0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289694
	if (ctx.cr6.eq) goto loc_82289694;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r5,r31,64
	ctx.r5.s64 = r31.s64 + 64;
	// stw r29,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r29.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82289628
	if (ctx.cr6.lt) goto loc_82289628;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_82289628:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8228962C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228962c
	if (!ctx.cr6.eq) goto loc_8228962C;
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
	ctx.lr = 0x82289658;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-20712
	ctx.r4.s64 = ctx.r11.s64 + -20712;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82178cb0
	ctx.lr = 0x82289670;
	sub_82178CB0(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x82179fd8
	ctx.lr = 0x82289678;
	sub_82179FD8(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r3,6260(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6260);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289694:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r30,6184(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 6184);
	// b 0x822896ac
	goto loc_822896AC;
loc_822896A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 40);
	// bl 0x82151278
	ctx.lr = 0x822896AC;
	sub_82151278(ctx, base);
loc_822896AC:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822896a0
	if (!ctx.cr6.eq) goto loc_822896A0;
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
	ctx.lr = 0x822896D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6292(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6292);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822896E8;
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
	ctx.lr = 0x82289700;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6296(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6296);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6300(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6300);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82289740
	if (ctx.cr6.eq) goto loc_82289740;
	// bl 0x82262c10
	ctx.lr = 0x82289740;
	sub_82262C10(ctx, base);
loc_82289740:
	// lwz r30,96(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stw r29,100(r31)
	REX_STORE_U32(r31.u32 + 100, r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8228976c
	if (ctx.cr6.eq) goto loc_8228976C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,2972
	ctx.r11.s64 = ctx.r11.s64 + 2972;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82208770
	ctx.lr = 0x82289764;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8228976C;
	sub_8269CE98(ctx, base);
loc_8228976C:
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// lwz r3,6068(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6068);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228978C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6268(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6268);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822897A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822897C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// bl 0x82146418
	ctx.lr = 0x822897D4;
	sub_82146418(ctx, base);
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 111);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822897f8
	if (ctx.cr0.eq) goto loc_822897F8;
	// lwz r3,6048(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822897F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822897F8:
	// lwz r3,6048(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6048);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228980C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82289830
	if (!ctx.cr0.eq) goto loc_82289830;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6316(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6316);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289830;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289830:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8229A160) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,108(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8229C4B0) {
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
	ctx.lr = 0x8229C4B8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r8,48(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// rlwinm r10,r11,15,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// srawi r8,r10,10
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 10;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mulli r10,r10,9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(9));
	// srawi r8,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 6;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// rlwinm r8,r10,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// not r8,r8
	ctx.r8.u64 = ~ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,10
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 10;
	// xor r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// and r20,r10,r5
	r20.u64 = ctx.r10.u64 & ctx.r5.u64;
	// mulli r10,r9,9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(9));
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r9,r10,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8229c5c4
	if (!ctx.cr6.lt) goto loc_8229C5C4;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8229c5c4
	if (ctx.cr6.eq) goto loc_8229C5C4;
	// lwz r8,72(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
loc_8229C56C:
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8229c58c
	if (ctx.cr6.eq) goto loc_8229C58C;
	// lwz r10,32(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8229c56c
	if (!ctx.cr6.eq) goto loc_8229C56C;
loc_8229C58C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8229c5c4
	if (ctx.cr6.eq) goto loc_8229C5C4;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r11,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r11,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// b 0x8229c860
	goto loc_8229C860;
loc_8229C5C4:
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r31,r30,40
	r31.s64 = r30.s64 + 40;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// li r24,0
	r24.s64 = 0;
	// li r23,1
	r23.s64 = 1;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// lis r25,-32126
	r25.s64 = -2105409536;
	// lis r26,-32106
	r26.s64 = -2104098816;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229c6bc
	if (!ctx.cr6.eq) goto loc_8229C6BC;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229c600
	if (!ctx.cr0.eq) goto loc_8229C600;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8229C600:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x8229c6bc
	if (!ctx.cr6.lt) goto loc_8229C6BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8229c620
	if (ctx.cr6.eq) goto loc_8229C620;
	// rlwinm r3,r28,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822c1a70
	ctx.lr = 0x8229C618;
	sub_822C1A70(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x8229c624
	goto loc_8229C624;
loc_8229C620:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8229C624:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8229c678
	if (!ctx.cr6.gt) goto loc_8229C678;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_8229C638:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c668
	if (ctx.cr6.eq) goto loc_8229C668;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_8229C668:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x8229c638
	if (!ctx.cr0.eq) goto loc_8229C638;
loc_8229C678:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229c6b0
	if (ctx.cr6.eq) goto loc_8229C6B0;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229c6ac
	if (ctx.cr0.eq) goto loc_8229C6AC;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r9,-19400(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229C6AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C6AC:
	// stw r24,12(r31)
	REX_STORE_U32(r31.u32 + 12, r24.u32);
loc_8229C6B0:
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r23,16(r31)
	REX_STORE_U8(r31.u32 + 16, r23.u8);
loc_8229C6BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229c6f0
	if (ctx.cr0.eq) goto loc_8229C6F0;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8229C6F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r30,60
	r29.s64 = r30.s64 + 60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 68);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8229c7c0
	if (!ctx.cr6.eq) goto loc_8229C7C0;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x8229c720
	if (!ctx.cr0.eq) goto loc_8229C720;
	// mr r28,r23
	r28.u64 = r23.u64;
loc_8229C720:
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// bge cr6,0x8229c7c0
	if (!ctx.cr6.lt) goto loc_8229C7C0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8229c740
	if (ctx.cr6.eq) goto loc_8229C740;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x8229C738;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8229c744
	goto loc_8229C744;
loc_8229C740:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_8229C744:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8229c77c
	if (!ctx.cr6.gt) goto loc_8229C77C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8229C75C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229c770
	if (ctx.cr6.eq) goto loc_8229C770;
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8229C770:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8229c75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229C75C;
loc_8229C77C:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229c7b4
	if (ctx.cr6.eq) goto loc_8229C7B4;
	// lbz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229c7b0
	if (ctx.cr0.eq) goto loc_8229C7B0;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r9,-19400(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8229C7B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8229C7B0:
	// stw r24,12(r29)
	REX_STORE_U32(r29.u32 + 12, r24.u32);
loc_8229C7B4:
	// stw r31,12(r29)
	REX_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r28,8(r29)
	REX_STORE_U32(r29.u32 + 8, r28.u32);
	// stb r23,16(r29)
	REX_STORE_U8(r29.u32 + 16, r23.u8);
loc_8229C7C0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229c7dc
	if (ctx.cr0.eq) goto loc_8229C7DC;
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8229C7DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8229c840
	if (!ctx.cr6.lt) goto loc_8229C840;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8229c910
	ctx.lr = 0x8229C7FC;
	sub_8229C910(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm r9,r11,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFFFF8000;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 10;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm r10,r11,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// and r20,r11,r8
	r20.u64 = ctx.r11.u64 & ctx.r8.u64;
loc_8229C840:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r8,r19,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r11,r8,r9
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stwx r19,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r19.u32);
loc_8229C860:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_822BD398) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822BDB28) {
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
	ctx.lr = 0x822BDB30;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,76(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r7,56(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// add. r11,r7,r9
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x822bdb88
	if (!ctx.cr0.gt) goto loc_822BDB88;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r31,24(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 24);
	// lwz r30,20(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 20);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 84);
	// lwz r6,64(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 64);
	// lwz r5,36(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 36);
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// bctrl 
	ctx.lr = 0x822BDB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BDB88:
	// lwz r30,36(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 36);
	// addi r31,r29,32
	r31.s64 = r29.s64 + 32;
	// li r28,0
	r28.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// lis r26,-32126
	r26.s64 = -2105409536;
	// lis r27,-32106
	r27.s64 = -2104098816;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt 0x822bdc58
	if (ctx.cr0.gt) goto loc_822BDC58;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x822bdc58
	if (!ctx.cr6.lt) goto loc_822BDC58;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822bdc2c
	if (!ctx.cr6.lt) goto loc_822BDC2C;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822bdbe8
	if (!ctx.cr0.gt) goto loc_822BDBE8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_822BDBCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdbe0
	if (ctx.cr6.eq) goto loc_822BDBE0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BDBE0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bdbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDBCC;
loc_822BDBE8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdc20
	if (ctx.cr6.eq) goto loc_822BDC20;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822bdc1c
	if (ctx.cr0.eq) goto loc_822BDC1C;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BDC1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BDC1C:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_822BDC20:
	// stb r25,16(r31)
	REX_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_822BDC2C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x822bdc58
	if (!ctx.cr6.lt) goto loc_822BDC58;
	// neg r11,r30
	ctx.r11.s64 = static_cast<int64_t>(-r30.u64);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822BDC40:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bdc50
	if (ctx.cr0.eq) goto loc_822BDC50;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_822BDC50:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822bdc40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDC40;
loc_822BDC58:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r30,r29,52
	r30.s64 = r29.s64 + 52;
	// lwz r31,56(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x822bdd1c
	if (ctx.cr0.gt) goto loc_822BDD1C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822bdd1c
	if (!ctx.cr6.lt) goto loc_822BDD1C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822bdcf0
	if (!ctx.cr6.lt) goto loc_822BDCF0;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble 0x822bdcac
	if (!ctx.cr0.gt) goto loc_822BDCAC;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_822BDC90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdca4
	if (ctx.cr6.eq) goto loc_822BDCA4;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BDCA4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bdc90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDC90;
loc_822BDCAC:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdce4
	if (ctx.cr6.eq) goto loc_822BDCE4;
	// lbz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822bdce0
	if (ctx.cr0.eq) goto loc_822BDCE0;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BDCE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BDCE0:
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
loc_822BDCE4:
	// stb r25,16(r30)
	REX_STORE_U8(r30.u32 + 16, r25.u8);
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
loc_822BDCF0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x822bdd1c
	if (!ctx.cr6.lt) goto loc_822BDD1C;
	// neg r11,r31
	ctx.r11.s64 = static_cast<int64_t>(-r31.u64);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822BDD04:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bdd14
	if (ctx.cr0.eq) goto loc_822BDD14;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_822BDD14:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822bdd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDD04;
loc_822BDD1C:
	// stw r28,4(r30)
	REX_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r31,r29,72
	r31.s64 = r29.s64 + 72;
	// lwz r30,76(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt 0x822bdde0
	if (ctx.cr0.gt) goto loc_822BDDE0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x822bdde0
	if (!ctx.cr6.lt) goto loc_822BDDE0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x822bddb4
	if (!ctx.cr6.lt) goto loc_822BDDB4;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x822bdd70
	if (!ctx.cr0.gt) goto loc_822BDD70;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_822BDD54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bdd68
	if (ctx.cr6.eq) goto loc_822BDD68;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822BDD68:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822bdd54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDD54;
loc_822BDD70:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822bdda8
	if (ctx.cr6.eq) goto loc_822BDDA8;
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822bdda4
	if (ctx.cr0.eq) goto loc_822BDDA4;
	// lwz r11,112(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 112);
	// lwz r9,-19400(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r11,112(r27)
	REX_STORE_U32(r27.u32 + 112, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822BDDA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822BDDA4:
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
loc_822BDDA8:
	// stb r25,16(r31)
	REX_STORE_U8(r31.u32 + 16, r25.u8);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
loc_822BDDB4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x822bdde0
	if (!ctx.cr6.lt) goto loc_822BDDE0;
	// neg r11,r30
	ctx.r11.s64 = static_cast<int64_t>(-r30.u64);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822BDDC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bddd8
	if (ctx.cr0.eq) goto loc_822BDDD8;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_822BDDD8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822bddc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BDDC8;
loc_822BDDE0:
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822CDC28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822CDC30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ccbb0
	ctx.lr = 0x822CDC64;
	sub_822CCBB0(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822cee48
	ctx.lr = 0x822CDC74;
	sub_822CEE48(ctx, base);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822CF5E0) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822cf614
	if (!ctx.cr6.gt) goto loc_822CF614;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822CF614;
	sub_822D5B28(ctx, base);
loc_822CF614:
	// lis r11,-16382
	ctx.r11.s64 = -1073610752;
	// li r10,6209
	ctx.r10.s64 = 6209;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r8,-1793
	ctx.r8.s64 = -1793;
	// ori r11,r9,310
	ctx.r11.u64 = ctx.r9.u64 | 310;
	// li r7,6448
	ctx.r7.s64 = 6448;
	// subf r9,r30,r11
	ctx.r9.u64 = ctx.r11.u64 - r30.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,3,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// li r9,3
	ctx.r9.s64 = 3;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_822D5C28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D5C30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10896(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10896);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,10908(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10908);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// subf r9,r4,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d5d14
	if (!ctx.cr6.lt) goto loc_822D5D14;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d5c80
	if (!ctx.cr0.eq) goto loc_822D5C80;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d5c80
	if (!ctx.cr6.eq) goto loc_822D5C80;
	// lwz r11,13408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d5d14
	if (!ctx.cr6.eq) goto loc_822D5D14;
	// bl 0x822d5b28
	ctx.lr = 0x822D5C80;
	sub_822D5B28(ctx, base);
loc_822D5C80:
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d5d14
	if (!ctx.cr6.lt) goto loc_822D5D14;
	// lwz r10,256(r13)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r9,10908(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// subf r11,r30,r9
	ctx.r11.u64 = ctx.r9.u64 - r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822d5d0c
	if (!ctx.cr6.lt) goto loc_822D5D0C;
loc_822D5CE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5318
	ctx.lr = 0x822D5CE8;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d5d0c
	if (ctx.cr0.eq) goto loc_822D5D0C;
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.u64 = ctx.r10.u64 - r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d5ce0
	if (ctx.cr6.lt) goto loc_822D5CE0;
loc_822D5D0C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5250
	ctx.lr = 0x822D5D14;
	sub_822C5250(ctx, base);
loc_822D5D14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822DD158) {
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
	ctx.lr = 0x822DD160;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r11,104(r4)
	REX_STORE_U32(ctx.r4.u32 + 104, ctx.r11.u32);
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// clrlwi. r28,r5,31
	r28.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lis r29,4
	r29.s64 = 262144;
	// bne 0x822dd188
	if (!ctx.cr0.eq) goto loc_822DD188;
	// lis r29,2
	r29.s64 = 131072;
loc_822DD188:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ori r6,r11,1
	ctx.r6.u64 = ctx.r11.u64 | 1;
	// lis r4,32528
	ctx.r4.s64 = 2131755008;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r31,32528
	r31.s64 = 2131755008;
	// bl 0x82793e44
	ctx.lr = 0x822DD1A8;
	__imp__KeLockL2(ctx, base);
	// addis r11,r29,32528
	ctx.r11.s64 = r29.s64 + 2131755008;
loc_822DD1AC:
	// dcbzl r0,r31
	ea = (r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,384
	ctx.r10.s64 = 384;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,512
	ctx.r10.s64 = 512;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,640
	ctx.r10.s64 = 640;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,768
	ctx.r10.s64 = 768;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,896
	ctx.r10.s64 = 896;
	// dcbzl r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822dd1ac
	if (ctx.cr6.lt) goto loc_822DD1AC;
	// sync 
	// li r11,6
	ctx.r11.s64 = 6;
	// li r27,0
	r27.s64 = 0;
	// lis r24,256
	r24.s64 = 16777216;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822DD210:
	// slw r11,r24,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dd220
	if (ctx.cr0.eq) goto loc_822DD220;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_822DD220:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x822dd210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DD210;
	// rlwinm r11,r25,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x3F000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,56(r26)
	REX_STORE_U32(r26.u32 + 56, ctx.r11.u32);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// bne cr6,0x822dd240
	if (!ctx.cr6.eq) goto loc_822DD240;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_822DD240:
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r10,11976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 11976);
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r6,r11,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lis r9,32528
	ctx.r9.s64 = 2131755008;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r30,11344
	ctx.r11.s64 = r30.s64 + 11344;
loc_822DD264:
	// slw r8,r24,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// and. r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822dd2b8
	if (ctx.cr0.eq) goto loc_822DD2B8;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// stw r27,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r27.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// ori r8,r8,22528
	ctx.r8.u64 = ctx.r8.u64 | 22528;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwimi r8,r5,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_822DD2B8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x822dd264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822DD264;
	// lwz r9,11976(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 11976);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// stw r27,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r27.u32);
	// clrlwi r10,r9,3
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r9,r7,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r11,8
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// oris r11,r11,33024
	ctx.r11.u64 = ctx.r11.u64 | 2164260864;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x822d53d0
	ctx.lr = 0x822DD308;
	sub_822D53D0(ctx, base);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r31,r30,11336
	r31.s64 = r30.s64 + 11336;
loc_822DD310:
	// slw r11,r24,r28
	ctx.r11.u64 = r28.u8 & 0x20 ? 0 : (r24.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822dd37c
	if (ctx.cr0.eq) goto loc_822DD37C;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r10,10896(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 10896);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// rlwimi r29,r9,0,0,29
	r29.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_822DD354:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c5318
	ctx.lr = 0x822DD35C;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822dd374
	if (ctx.cr0.eq) goto loc_822DD374;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x822dd354
	if (!ctx.cr6.eq) goto loc_822DD354;
loc_822DD374:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822c5250
	ctx.lr = 0x822DD37C;
	sub_822C5250(ctx, base);
loc_822DD37C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(r28.u32, 6, ctx.xer);
	// blt cr6,0x822dd310
	if (ctx.cr6.lt) goto loc_822DD310;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_822EC3A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,297(r4)
	REX_STORE_U8(ctx.r4.u32 + 297, ctx.r11.u8);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,256(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 256, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED000) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12896
	ctx.r3.s64 = ctx.r11.s64 + -12896;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED4EC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED4F0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// b 0x822ed7b0
	sub_822ED7B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ED870) {
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
	ctx.lr = 0x822ED878;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r20,0
	r20.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822ed8d8
	if (!ctx.cr6.gt) goto loc_822ED8D8;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
loc_822ED89C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822ED8A8;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ed8c8
	if (ctx.cr6.eq) goto loc_822ED8C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822ED8C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822ED8C8:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822ed89c
	if (ctx.cr6.lt) goto loc_822ED89C;
loc_822ED8D8:
	// stw r20,12(r28)
	REX_STORE_U32(r28.u32 + 12, r20.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-13660
	ctx.r4.s64 = ctx.r11.s64 + -13660;
	// bl 0x8215f338
	ctx.lr = 0x822ED8EC;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82166df8
	ctx.lr = 0x822ED8F4;
	sub_82166DF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,14928
	ctx.r4.s64 = ctx.r11.s64 + 14928;
	// bl 0x8215f338
	ctx.lr = 0x822ED904;
	sub_8215F338(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r22,r20
	r22.u64 = r20.u64;
	// addi r26,r9,-30096
	r26.s64 = ctx.r9.s64 + -30096;
	// addi r25,r8,15000
	r25.s64 = ctx.r8.s64 + 15000;
	// addi r24,r7,-31292
	r24.s64 = ctx.r7.s64 + -31292;
	// addi r23,r6,-5164
	r23.s64 = ctx.r6.s64 + -5164;
	// addi r29,r10,13464
	r29.s64 = ctx.r10.s64 + 13464;
	// addi r27,r11,-17344
	r27.s64 = ctx.r11.s64 + -17344;
loc_822ED93C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822ed960
	if (!ctx.cr6.eq) goto loc_822ED960;
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
	// b 0x822ed964
	goto loc_822ED964;
loc_822ED960:
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_822ED964:
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822eda58
	if (!ctx.cr6.lt) goto loc_822EDA58;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x822ED978;
	sub_8215F1B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f338
	ctx.lr = 0x822ED984;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x822ED988;
	sub_8215FA30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82125d00
	ctx.lr = 0x822ED994;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ed9c0
	if (!ctx.cr0.eq) goto loc_822ED9C0;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x822f6280
	ctx.lr = 0x822ED9A4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eda40
	if (ctx.cr0.eq) goto loc_822EDA40;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822edaf0
	ctx.lr = 0x822ED9B8;
	sub_822EDAF0(ctx, base);
loc_822ED9B8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822eda44
	goto loc_822EDA44;
loc_822ED9C0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x822ED9CC;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822ed9f4
	if (!ctx.cr0.eq) goto loc_822ED9F4;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x822f6280
	ctx.lr = 0x822ED9DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822eda40
	if (ctx.cr0.eq) goto loc_822EDA40;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822ede60
	ctx.lr = 0x822ED9F0;
	sub_822EDE60(ctx, base);
	// b 0x822ed9b8
	goto loc_822ED9B8;
loc_822ED9F4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82125d00
	ctx.lr = 0x822EDA00;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822eda50
	if (!ctx.cr0.eq) goto loc_822EDA50;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x822f6280
	ctx.lr = 0x822EDA10;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822eda40
	if (ctx.cr0.eq) goto loc_822EDA40;
	// stw r25,0(r31)
	REX_STORE_U32(r31.u32 + 0, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f338
	ctx.lr = 0x822EDA28;
	sub_8215F338(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x822EDA2C;
	sub_8215F9E0(ctx, base);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x822eda44
	goto loc_822EDA44;
loc_822EDA40:
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r20.u32);
loc_822EDA44:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bl 0x82264638
	ctx.lr = 0x822EDA50;
	sub_82264638(ctx, base);
loc_822EDA50:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// b 0x822ed93c
	goto loc_822ED93C;
loc_822EDA58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822F7A58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm r3,r11,15,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7C68) {
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
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f7cbc
	if (ctx.cr0.eq) goto loc_822F7CBC;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f7cbc
	if (ctx.cr6.eq) goto loc_822F7CBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8230be20
	ctx.lr = 0x822F7CAC;
	sub_8230BE20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f7cc0
	if (!ctx.cr0.eq) goto loc_822F7CC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822f7cc0
	goto loc_822F7CC0;
loc_822F7CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F7CC0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB538) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822fb550
	if (!ctx.cr6.eq) goto loc_822FB550;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822fb560
	if (!ctx.cr6.eq) goto loc_822FB560;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FB550:
	// lfs f0,264(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// beq cr6,0x822fb568
	if (ctx.cr6.eq) goto loc_822FB568;
loc_822FB560:
	// lfs f0,268(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_822FB568:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FC328) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822FC330;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fc350
	if (ctx.cr6.eq) goto loc_822FC350;
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fc354
	goto loc_822FC354;
loc_822FC350:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822FC354:
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 96);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lhz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 100);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r10,0,19,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// addi r29,r31,176
	r29.s64 = r31.s64 + 176;
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// li r5,12
	ctx.r5.s64 = 12;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// addi r4,r30,176
	ctx.r4.s64 = r30.s64 + 176;
	// lfs f0,212(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 212);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lfs f0,216(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// lwz r8,96(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 96);
	// rlwinm r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// oris r10,r10,1024
	ctx.r10.u64 = ctx.r10.u64 | 67108864;
	// stw r10,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lha r10,100(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 100));
	// rlwimi r10,r9,0,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// sth r10,100(r31)
	REX_STORE_U16(r31.u32 + 100, ctx.r10.u16);
	// bl 0x823ef2f8
	ctx.lr = 0x822FC3CC;
	sub_823EF2F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,188
	ctx.r4.s64 = r30.s64 + 188;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x823ef2f8
	ctx.lr = 0x822FC3DC;
	sub_823EF2F8(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,200
	ctx.r4.s64 = r30.s64 + 200;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x823ef2f8
	ctx.lr = 0x822FC3EC;
	sub_823EF2F8(ctx, base);
	// lfs f13,128(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f13,276(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// lhz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 164);
	// sth r11,164(r31)
	REX_STORE_U16(r31.u32 + 164, ctx.r11.u16);
	// lhz r11,166(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 166);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// sth r11,166(r31)
	REX_STORE_U16(r31.u32 + 166, ctx.r11.u16);
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// stw r11,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r11.u32);
	// lfs f2,268(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,264(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f9988
	ctx.lr = 0x822FC43C;
	sub_822F9988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fc4ac
	if (!ctx.cr0.eq) goto loc_822FC4AC;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r30,220
	ctx.r4.s64 = r30.s64 + 220;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x823ef2f8
	ctx.lr = 0x822FC454;
	sub_823EF2F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fa308
	ctx.lr = 0x822FC45C;
	sub_822FA308(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fc498
	if (ctx.cr6.eq) goto loc_822FC498;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,232(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// lfs f13,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,236(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lfs f0,240(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
loc_822FC498:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FC4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FC4AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82309540) {
	REX_FUNC_PROLOGUE();
	// stw r4,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82309EE8) {
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
	ctx.lr = 0x82309EF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x82309f18
	if (ctx.cr0.eq) goto loc_82309F18;
	// bl 0x8230c310
	ctx.lr = 0x82309F14;
	sub_8230C310(ctx, base);
	// b 0x82309f68
	goto loc_82309F68;
loc_82309F18:
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lwz r3,-10808(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10808);
	// bl 0x8233e7e0
	ctx.lr = 0x82309F24;
	sub_8233E7E0(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// addi r11,r11,824
	ctx.r11.s64 = ctx.r11.s64 + 824;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82309f48
	if (!ctx.cr6.eq) goto loc_82309F48;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82309f4c
	if (ctx.cr6.eq) goto loc_82309F4C;
loc_82309F48:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82309F4C:
	// lwz r3,-10808(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -10808);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82309f64
	if (!ctx.cr0.eq) goto loc_82309F64;
	// bl 0x8233e820
	ctx.lr = 0x82309F5C;
	sub_8233E820(ctx, base);
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x8230a018
	goto loc_8230A018;
loc_82309F64:
	// bl 0x8233e820
	ctx.lr = 0x82309F68;
	sub_8233E820(ctx, base);
loc_82309F68:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8230a028
	if (ctx.cr6.eq) goto loc_8230A028;
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309f84
	if (ctx.cr6.eq) goto loc_82309F84;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309f88
	goto loc_82309F88;
loc_82309F84:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_82309F88:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82309fa8
	if (ctx.cr6.eq) goto loc_82309FA8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82309fa0
	if (ctx.cr6.eq) goto loc_82309FA0;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82309fac
	goto loc_82309FAC;
loc_82309FA0:
	// mr r31,r27
	r31.u64 = r27.u64;
	// b 0x82309fac
	goto loc_82309FAC;
loc_82309FA8:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_82309FAC:
	// stw r27,108(r31)
	REX_STORE_U32(r31.u32 + 108, r27.u32);
	// addi r10,r28,52
	ctx.r10.s64 = r28.s64 + 52;
	// lwz r11,52(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
loc_82309FBC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8230a020
	if (ctx.cr6.eq) goto loc_8230A020;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82309fbc
	if (!ctx.cr6.eq) goto loc_82309FBC;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82309FD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230a014
	if (ctx.cr0.eq) goto loc_8230A014;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bne 0x82309fec
	if (!ctx.cr0.eq) goto loc_82309FEC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82309FEC:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823089f8
	ctx.lr = 0x82309FF8;
	sub_823089F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a018
	if (!ctx.cr0.eq) goto loc_8230A018;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82308af0
	ctx.lr = 0x8230A00C;
	sub_82308AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a018
	if (!ctx.cr0.eq) goto loc_8230A018;
loc_8230A014:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8230A018:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_8230A020:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82309fd4
	goto loc_82309FD4;
loc_8230A028:
	// lwz r30,52(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 52);
	// addi r29,r28,52
	r29.s64 = r28.s64 + 52;
	// b 0x8230a078
	goto loc_8230A078;
loc_8230A034:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r31,r30,-8
	r31.s64 = r30.s64 + -8;
	// bne cr6,0x8230a044
	if (!ctx.cr6.eq) goto loc_8230A044;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_8230A044:
	// stw r27,108(r31)
	REX_STORE_U32(r31.u32 + 108, r27.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823089f8
	ctx.lr = 0x8230A058;
	sub_823089F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a018
	if (!ctx.cr0.eq) goto loc_8230A018;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82308af0
	ctx.lr = 0x8230A06C;
	sub_82308AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a018
	if (!ctx.cr0.eq) goto loc_8230A018;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8230A078:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x8230a034
	if (!ctx.cr6.eq) goto loc_8230A034;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// sth r27,34(r28)
	REX_STORE_U16(r28.u32 + 34, r27.u16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230a014
	if (ctx.cr6.eq) goto loc_8230A014;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8230A094:
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x8230a0a8
	if (!ctx.cr6.eq) goto loc_8230A0A8;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8230A0A8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230a014
	if (ctx.cr6.eq) goto loc_8230A014;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x8230a0c0
	if (!ctx.cr6.eq) goto loc_8230A0C0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8230A0C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82309ee8
	ctx.lr = 0x8230A0D0;
	sub_82309EE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8230a018
	if (!ctx.cr0.eq) goto loc_8230A018;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8230a094
	goto loc_8230A094;
}

DEFINE_REX_FUNC(sub_82316128) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231613c
	if (ctx.cr6.eq) goto loc_8231613C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 52);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
loc_8231613C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823165F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r3,-10788(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -10788);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82316610
	if (ctx.cr6.eq) goto loc_82316610;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82316610:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82317638) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82317670
	if (ctx.cr6.eq) goto loc_82317670;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82317670:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x82317694
	if (ctx.cr6.eq) goto loc_82317694;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82317694:
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

DEFINE_REX_FUNC(sub_8231A6D0) {
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
	ctx.lr = 0x8231A6D8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,40
	ctx.r6.s64 = 40;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231A6F8;
	sub_82331A00(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a7bc
	if (ctx.cr6.eq) goto loc_8231A7BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mulli r6,r11,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x82331a00
	ctx.lr = 0x8231A71C;
	sub_82331A00(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231a7bc
	if (!ctx.cr6.gt) goto loc_8231A7BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// addi r25,r11,6196
	r25.s64 = ctx.r11.s64 + 6196;
loc_8231A738:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823175d8
	ctx.lr = 0x8231A75C;
	sub_823175D8(ctx, base);
	// lwz r30,88(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8231a788
	if (ctx.cr6.eq) goto loc_8231A788;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8231a8c0
	if (!ctx.cr0.eq) goto loc_8231A8C0;
loc_8231A788:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// beq cr6,0x8231a7a8
	if (ctx.cr6.eq) goto loc_8231A7A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A7A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8231A7A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231a738
	if (ctx.cr6.lt) goto loc_8231A738;
loc_8231A7BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a7fc
	if (ctx.cr6.eq) goto loc_8231A7FC;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231A7DC;
	sub_82331A00(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a8b8
	if (!ctx.cr0.eq) goto loc_8231A8B8;
loc_8231A7FC:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a874
	if (ctx.cr6.eq) goto loc_8231A874;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mulli r6,r11,12
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x82331a00
	ctx.lr = 0x8231A820;
	sub_82331A00(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231a874
	if (!ctx.cr6.gt) goto loc_8231A874;
	// li r30,0
	r30.s64 = 0;
loc_8231A834:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8231a860
	if (ctx.cr6.eq) goto loc_8231A860;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231A860;
	sub_82331A00(ctx, base);
loc_8231A860:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231a834
	if (ctx.cr6.lt) goto loc_8231A834;
loc_8231A874:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8231a8b4
	if (ctx.cr6.eq) goto loc_8231A8B4;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331a00
	ctx.lr = 0x8231A894;
	sub_82331A00(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A8AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a8b8
	if (!ctx.cr0.eq) goto loc_8231A8B8;
loc_8231A8B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8231A8B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8231A8C0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231A8D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8231a8b8
	goto loc_8231A8B8;
}

DEFINE_REX_FUNC(sub_8232B628) {
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
	ctx.lr = 0x8232B630;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// lwz r31,52(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r30,r3,52
	r30.s64 = ctx.r3.s64 + 52;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// b 0x8232b6b4
	goto loc_8232B6B4;
loc_8232B654:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// bne cr6,0x8232b664
	if (!ctx.cr6.eq) goto loc_8232B664;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_8232B664:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311a00
	ctx.lr = 0x8232B670;
	sub_82311A00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b6c8
	if (!ctx.cr0.eq) goto loc_8232B6C8;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8232b6d0
	if (!ctx.cr0.eq) goto loc_8232B6D0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311d20
	ctx.lr = 0x8232B694;
	sub_82311D20(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b6c8
	if (!ctx.cr0.eq) goto loc_8232B6C8;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// cmpld cr6,r11,r28
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, r28.u64, ctx.xer);
	// ble cr6,0x8232b6b0
	if (!ctx.cr6.gt) goto loc_8232B6B0;
	// lwz r27,84(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8232B6B0:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8232B6B4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8232b654
	if (!ctx.cr6.eq) goto loc_8232B654;
	// std r28,0(r26)
	REX_STORE_U64(r26.u32 + 0, r28.u64);
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
loc_8232B6C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B6C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf8
	return;
loc_8232B6D0:
	// std r24,0(r26)
	REX_STORE_U64(r26.u32 + 0, r24.u64);
	// stw r24,0(r25)
	REX_STORE_U32(r25.u32 + 0, r24.u32);
	// b 0x8232b6c4
	goto loc_8232B6C4;
}

DEFINE_REX_FUNC(sub_8232F8F8) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82332760
	ctx.lr = 0x8232F91C;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232f934
	if (!ctx.cr6.eq) goto loc_8232F934;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82336570
	ctx.lr = 0x8232F934;
	sub_82336570(ctx, base);
loc_8232F934:
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

DEFINE_REX_FUNC(sub_823312A8) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823312f8
	if (ctx.cr6.eq) goto loc_823312F8;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823312f8
	if (ctx.cr6.eq) goto loc_823312F8;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8552
	ctx.r5.s64 = ctx.r10.s64 + 8552;
	// li r6,343
	ctx.r6.s64 = 343;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823312F8;
	sub_82330D00(ctx, base);
loc_823312F8:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,156
	ctx.r11.s64 = r31.s64 + 156;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
loc_82331324:
	// stw r30,-128(r11)
	REX_STORE_U32(ctx.r11.u32 + -128, r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82331324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82331324;
	// lis r11,-32205
	ctx.r11.s64 = -2110586880;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lis r10,-32205
	ctx.r10.s64 = -2110586880;
	// stb r30,8(r31)
	REX_STORE_U8(r31.u32 + 8, r30.u8);
	// lis r9,-32205
	ctx.r9.s64 = -2110586880;
	// addi r8,r11,1880
	ctx.r8.s64 = ctx.r11.s64 + 1880;
	// addi r7,r10,1888
	ctx.r7.s64 = ctx.r10.s64 + 1888;
	// addi r6,r9,1896
	ctx.r6.s64 = ctx.r9.s64 + 1896;
	// stw r8,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r8.u32);
	// stw r7,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r6,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r6.u32);
	// beq cr6,0x82331370
	if (ctx.cr6.eq) goto loc_82331370;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233e770
	ctx.lr = 0x8233136C;
	sub_8233E770(ctx, base);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
loc_82331370:
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

DEFINE_REX_FUNC(sub_8233ED98) {
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
	ctx.lr = 0x8233EDB4;
	sub_8234AAC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233edc8
	if (!ctx.cr6.eq) goto loc_8233EDC8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8234cba0
	ctx.lr = 0x8233EDC8;
	sub_8234CBA0(ctx, base);
loc_8233EDC8:
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

DEFINE_REX_FUNC(sub_8233F688) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8235ace0
	ctx.lr = 0x8233F6AC;
	sub_8235ACE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233f708
	if (!ctx.cr6.eq) goto loc_8233F708;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,216(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f6d0
	if (ctx.cr6.eq) goto loc_8233F6D0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,664(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 664);
	// b 0x8233f6d4
	goto loc_8233F6D4;
loc_8233F6D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233F6D4:
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233f6f0
	if (ctx.cr6.eq) goto loc_8233F6F0;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x8233f6f0
	if (ctx.cr6.eq) goto loc_8233F6F0;
	// li r3,56
	ctx.r3.s64 = 56;
	// b 0x8233f708
	goto loc_8233F708;
loc_8233F6F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233F708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F708:
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

DEFINE_REX_FUNC(sub_82343410) {
	REX_FUNC_PROLOGUE();
	// stw r4,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82343470) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823434A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823434f4
	if (!ctx.cr6.eq) goto loc_823434F4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823434f4
	if (!ctx.cr6.gt) goto loc_823434F4;
loc_823434B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823434D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823434e4
	if (!ctx.cr6.eq) goto loc_823434E4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// sth r31,30(r11)
	REX_STORE_U16(ctx.r11.u32 + 30, r31.u16);
loc_823434E4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823434b8
	if (ctx.cr6.lt) goto loc_823434B8;
loc_823434F4:
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

DEFINE_REX_FUNC(sub_8234ADB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cb4
	ctx.lr = 0x8234ADB8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c74
	ctx.lr = 0x8234ADC0;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f27,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f27.f64 = double(temp.f32);
	// fmr f25,f27
	f25.f64 = f27.f64;
	// fmr f28,f27
	f28.f64 = f27.f64;
	// fmr f26,f27
	f26.f64 = f27.f64;
	// ble cr6,0x8234b344
	if (!ctx.cr6.gt) goto loc_8234B344;
	// addi r30,r3,76
	r30.s64 = ctx.r3.s64 + 76;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f21,9752(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9752);
	f21.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f16,4104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4104);
	f16.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f18,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	f18.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f19,4108(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4108);
	f19.f64 = double(temp.f32);
	// lfs f23,3788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 3788);
	f23.f64 = double(temp.f32);
	// lfs f17,3740(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 3740);
	f17.f64 = double(temp.f32);
	// lfs f22,3784(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 3784);
	f22.f64 = double(temp.f32);
	// lfs f24,3716(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 3716);
	f24.f64 = double(temp.f32);
	// lfs f15,3796(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 3796);
	f15.f64 = double(temp.f32);
loc_8234AE3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234b330
	if (!ctx.cr6.eq) goto loc_8234B330;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// bl 0x82333ee0
	ctx.lr = 0x8234AE5C;
	sub_82333EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234b354
	if (!ctx.cr6.eq) goto loc_8234B354;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// fmr f20,f15
	ctx.fpscr.disableFlushMode();
	f20.f64 = f15.f64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8234b330
	if (!ctx.cr6.gt) goto loc_8234B330;
loc_8234AE78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82334c60
	ctx.lr = 0x8234AE88;
	sub_82334C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234b354
	if (!ctx.cr6.eq) goto loc_8234B354;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234aeb0
	if (!ctx.cr6.eq) goto loc_8234AEB0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b350
	if (ctx.cr6.eq) goto loc_8234B350;
loc_8234AEB0:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82333fc8
	ctx.lr = 0x8234AEC4;
	sub_82333FC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234b354
	if (!ctx.cr6.eq) goto loc_8234B354;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,412(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r9,r10,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234af1c
	if (ctx.cr6.eq) goto loc_8234AF1C;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// lwz r10,300(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lwz r9,304(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 304);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// lfs f31,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	f31.f64 = double(temp.f32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lfs f29,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	f29.f64 = double(temp.f32);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lfs f30,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f30.f64 = double(temp.f32);
	// b 0x8234af40
	goto loc_8234AF40;
loc_8234AF1C:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f13,f12
	f30.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f31,f11,f10
	f31.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f29,f9,f0
	f29.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
loc_8234AF40:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234af58
	if (ctx.cr6.eq) goto loc_8234AF58;
	// fneg f31,f31
	ctx.fpscr.disableFlushMode();
	f31.u64 = f31.u64 ^ 0x8000000000000000;
loc_8234AF58:
	// fmuls f0,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 * f30.f64));
	// fmadds f13,f31,f31,f0
	ctx.f13.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f0.f64)));
	// fmadds f12,f29,f29,f13
	ctx.f12.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f13.f64)));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f1,f20
	ctx.cr6.compare(ctx.f1.f64, f20.f64);
	// bge cr6,0x8234b1f0
	if (!ctx.cr6.lt) goto loc_8234B1F0;
	// stfs f1,324(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 324, temp.u32);
	// lwz r11,21360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21360);
	// fmr f20,f1
	f20.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234afa4
	if (ctx.cr6.eq) goto loc_8234AFA4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,80(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// bctrl 
	ctx.lr = 0x8234AF98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// b 0x8234b0e0
	goto loc_8234B0E0;
loc_8234AFA4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b070
	if (ctx.cr6.eq) goto loc_8234B070;
	// lwz r9,396(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234b0f8
	if (ctx.cr6.eq) goto loc_8234B0F8;
	// lwz r10,400(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234b0f8
	if (ctx.cr6.eq) goto loc_8234B0F8;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234aff4
	if (ctx.cr6.lt) goto loc_8234AFF4;
	// lfs f28,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	f28.f64 = double(temp.f32);
	// b 0x8234b0e0
	goto loc_8234B0E0;
loc_8234AFF4:
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8234b0e0
	if (!ctx.cr6.gt) goto loc_8234B0E0;
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
loc_8234B004:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234b01c
	if (ctx.cr6.lt) goto loc_8234B01C;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234b034
	if (ctx.cr6.lt) goto loc_8234B034;
loc_8234B01C:
	// lwz r7,400(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8234b004
	if (ctx.cr6.lt) goto loc_8234B004;
	// b 0x8234b0e0
	goto loc_8234B0E0;
loc_8234B034:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f7,f27,f8
	ctx.f7.f64 = double(float(f27.f64 - ctx.f8.f64));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmadds f28,f7,f9,f6
	f28.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, ctx.f6.f64)));
	// b 0x8234b0e0
	goto loc_8234B0E0;
loc_8234B070:
	// lfs f13,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 332);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x8234b080
	if (ctx.cr6.lt) goto loc_8234B080;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_8234B080:
	// lfs f0,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 328);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8234b090
	if (!ctx.cr6.lt) goto loc_8234B090;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8234B090:
	// rlwinm r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b0b4
	if (ctx.cr6.eq) goto loc_8234B0B4;
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// ble cr6,0x8234b0f8
	if (!ctx.cr6.gt) goto loc_8234B0F8;
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fdivs f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x8234b0e0
	goto loc_8234B0E0;
loc_8234B0B4:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8234b0d0
	if (!ctx.cr6.gt) goto loc_8234B0D0;
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, f27.f64);
	// beq cr6,0x8234b0d0
	if (ctx.cr6.eq) goto loc_8234B0D0;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmadds f1,f12,f13,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
loc_8234B0D0:
	// fcmpu cr6,f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f22.f64);
	// bge cr6,0x8234b0dc
	if (!ctx.cr6.lt) goto loc_8234B0DC;
	// fmr f1,f22
	ctx.f1.f64 = f22.f64;
loc_8234B0DC:
	// fdivs f28,f0,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
loc_8234B0E0:
	// fcmpu cr6,f28,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f24.f64);
	// bge cr6,0x8234b0f0
	if (!ctx.cr6.lt) goto loc_8234B0F0;
	// fmr f28,f24
	f28.f64 = f24.f64;
	// b 0x8234b0fc
	goto loc_8234B0FC;
loc_8234B0F0:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, f27.f64);
	// ble cr6,0x8234b0fc
	if (!ctx.cr6.gt) goto loc_8234B0FC;
loc_8234B0F8:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	f28.f64 = f27.f64;
loc_8234B0FC:
	// lfs f0,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	ctx.cr6.compare(ctx.f0.f64, f17.f64);
	// blt cr6,0x8234b114
	if (ctx.cr6.lt) goto loc_8234B114;
	// lfs f0,340(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f17
	ctx.cr6.compare(ctx.f0.f64, f17.f64);
	// bge cr6,0x8234b1f0
	if (!ctx.cr6.lt) goto loc_8234B1F0;
loc_8234B114:
	// lfs f0,324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, f24.f64);
	// bgt cr6,0x8234b128
	if (ctx.cr6.gt) goto loc_8234B128;
	// fmr f0,f24
	ctx.f0.f64 = f24.f64;
	// b 0x8234b1b0
	goto loc_8234B1B0;
loc_8234B128:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// fdivs f0,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f27.f64 / ctx.f0.f64));
	// lwz r8,360(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 360);
	// lwz r10,352(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r9,356(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 356);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r8,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234b160
	if (ctx.cr6.eq) goto loc_8234B160;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_8234B160:
	// fmuls f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f11,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f30
	ctx.f10.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f9,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f6,f11,f10,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f7.f64)));
	// fnmadds f1,f9,f8,f6
	ctx.f1.f64 = double(float(-std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f6.f64)));
	// fcmpu cr6,f1,f23
	ctx.cr6.compare(ctx.f1.f64, f23.f64);
	// bge cr6,0x8234b190
	if (!ctx.cr6.lt) goto loc_8234B190;
	// fmr f1,f23
	ctx.f1.f64 = f23.f64;
	// b 0x8234b19c
	goto loc_8234B19C;
loc_8234B190:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// ble cr6,0x8234b19c
	if (!ctx.cr6.gt) goto loc_8234B19C;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
loc_8234B19C:
	// bl 0x8269d438
	ctx.lr = 0x8234B1A0;
	sub_8269D438(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f13,f0,f19
	ctx.f13.f64 = double(float(ctx.f0.f64 * f19.f64));
	// fmuls f0,f13,f18
	ctx.f0.f64 = double(float(ctx.f13.f64 * f18.f64));
loc_8234B1B0:
	// lfs f13,340(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234b1c4
	if (!ctx.cr6.lt) goto loc_8234B1C4;
	// fmr f26,f27
	f26.f64 = f27.f64;
	// b 0x8234b1f0
	goto loc_8234B1F0;
loc_8234B1C4:
	// lfs f12,344(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 344);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8234b1ec
	if (!ctx.cr6.lt) goto loc_8234B1EC;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,348(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(f27.f64 - ctx.f9.f64));
	// fmadds f26,f11,f9,f8
	f26.f64 = double(float(std::fma(ctx.f11.f64, ctx.f9.f64, ctx.f8.f64)));
	// b 0x8234b1f0
	goto loc_8234B1F0;
loc_8234B1EC:
	// lfs f26,348(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 348);
	f26.f64 = double(temp.f32);
loc_8234B1F0:
	// lfs f10,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// fcmpu cr6,f10,f24
	ctx.cr6.compare(ctx.f10.f64, f24.f64);
	// ble cr6,0x8234b318
	if (!ctx.cr6.gt) goto loc_8234B318;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234b318
	if (!ctx.cr6.eq) goto loc_8234B318;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8234b234
	if (!ctx.cr6.gt) goto loc_8234B234;
	// cmpwi cr6,r27,1000
	ctx.cr6.compare<int32_t>(r27.s32, 1000, ctx.xer);
	// bgt cr6,0x8234b234
	if (ctx.cr6.gt) goto loc_8234B234;
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f16
	ctx.f0.f64 = double(float(ctx.f12.f64 * f16.f64));
	// b 0x8234b238
	goto loc_8234B238;
loc_8234B234:
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f27.f64;
loc_8234B238:
	// lfs f13,312(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f12,316(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 316);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f9,320(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,300(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,304(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lwz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f4,308(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 308);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r7,r9,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fsubs f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f12,f5,f8
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// beq cr6,0x8234b2b0
	if (ctx.cr6.eq) goto loc_8234B2B0;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lfs f13,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lfs f11,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8234b2ec
	goto loc_8234B2EC;
loc_8234B2B0:
	// lfs f9,24(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f6,32(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f3,f7
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fsubs f8,f2,f5
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsubs f7,f1,f4
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
loc_8234B2EC:
	// fmuls f12,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f9,324(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 324);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f21
	ctx.f7.f64 = double(float(ctx.f8.f64 * f21.f64));
	// fmadds f6,f11,f11,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f6.f64)));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fdivs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// fnmsubs f1,f2,f10,f7
	ctx.f1.f64 = double(float(-std::fma(ctx.f2.f64, ctx.f10.f64, -ctx.f7.f64)));
	// fdivs f25,f1,f7
	f25.f64 = double(float(ctx.f1.f64 / ctx.f7.f64));
loc_8234B318:
	// fcmpu cr6,f25,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f25.f64, f22.f64);
	// bge cr6,0x8234b324
	if (!ctx.cr6.lt) goto loc_8234B324;
	// fmr f25,f22
	f25.f64 = f22.f64;
loc_8234B324:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234ae78
	if (ctx.cr6.lt) goto loc_8234AE78;
loc_8234B330:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234ae3c
	if (ctx.cr6.lt) goto loc_8234AE3C;
loc_8234B344:
	// stfs f28,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 292, temp.u32);
	// stfs f26,336(r31)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 336, temp.u32);
	// stfs f25,296(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 296, temp.u32);
loc_8234B350:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234B354:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cc0
	ctx.lr = 0x8234B360;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82380348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82380350;
	// lbz r9,15532(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 15532);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x823803c8
	if (ctx.cr6.gt) goto loc_823803C8;
	// lwz r9,15528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15528);
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// rlwimi r4,r7,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r11,r7,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r4,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r11,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// srw r11,r4,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r10.u8 & 0x3F));
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r7,r7,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// and r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 & ctx.r4.u64;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lbz r4,15532(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 15532);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// stb r10,15532(r3)
	REX_STORE_U8(ctx.r3.u32 + 15532, ctx.r10.u8);
	// b 0x8238045c
	goto loc_8238045C;
loc_823803C8:
	// lwz r11,15528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15528);
	// subf r7,r9,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// slw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// stw r10,15528(r3)
	REX_STORE_U32(ctx.r3.u32 + 15528, ctx.r10.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// rlwimi r31,r10,16,16,31
	r31.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF) | (r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r30,r10,16,0,15
	r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r31,24,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r30,8,0,15
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFF0000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwimi r29,r7,16,16,31
	r29.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF) | (r29.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r28,r7,16,0,15
	r28.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (r28.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r30,r4,16,16,31
	r30.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF) | (r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r4,16,0,15
	r31.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r29,24,16,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xFFFF;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r7,r28,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r8,r30,24,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xFFFF;
	// rlwinm r31,r31,8,0,15
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// or r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 | r31.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// or r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stb r6,15532(r3)
	REX_STORE_U8(ctx.r3.u32 + 15532, ctx.r6.u8);
loc_8238045C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8238046c
	if (ctx.cr6.eq) goto loc_8238046C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8238046C:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82392860) {
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
	// lwz r4,268(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82392898
	if (!ctx.cr6.eq) goto loc_82392898;
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
loc_82392898:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r10,392(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 392);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823928e0
	if (ctx.cr6.eq) goto loc_823928E0;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd368
	ctx.lr = 0x823928B8;
	sub_823CD368(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823928d8
	if (!ctx.cr6.eq) goto loc_823928D8;
	// li r3,33
	ctx.r3.s64 = 33;
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
loc_823928D8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,272(r31)
	REX_STORE_U8(r31.u32 + 272, ctx.r11.u8);
loc_823928E0:
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

DEFINE_REX_FUNC(sub_82395840) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82395850
	if (!ctx.cr6.eq) goto loc_82395850;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82395850:
	// b 0x823954a8
	sub_823954A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823967F0) {
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
	// addi r31,r3,-28
	r31.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82396810
	if (!ctx.cr6.eq) goto loc_82396810;
	// li r31,0
	r31.s64 = 0;
loc_82396810:
	// lwz r3,348(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396820
	if (ctx.cr6.eq) goto loc_82396820;
	// bl 0x82332598
	ctx.lr = 0x82396820;
	sub_82332598(ctx, base);
loc_82396820:
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396830
	if (ctx.cr6.eq) goto loc_82396830;
	// bl 0x82332598
	ctx.lr = 0x82396830;
	sub_82332598(ctx, base);
loc_82396830:
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82396840
	if (ctx.cr6.eq) goto loc_82396840;
	// bl 0x82332598
	ctx.lr = 0x82396840;
	sub_82332598(ctx, base);
loc_82396840:
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

DEFINE_REX_FUNC(sub_8239BD80) {
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
	ctx.lr = 0x8239BD88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239bdb0
	if (ctx.cr6.eq) goto loc_8239BDB0;
	// li r3,70
	ctx.r3.s64 = 70;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8239BDB0:
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239bdc8
	if (ctx.cr6.eq) goto loc_8239BDC8;
	// li r3,71
	ctx.r3.s64 = 71;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8239BDC8:
	// lwz r3,192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8239be00
	if (ctx.cr6.eq) goto loc_8239BE00;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82334888
	ctx.lr = 0x8239BDDC;
	sub_82334888(ctx, base);
	// lwz r11,276(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239be00
	if (ctx.cr6.eq) goto loc_8239BE00;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 192);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-26856
	ctx.r4.s64 = ctx.r10.s64 + -26856;
	// addi r3,r11,21952
	ctx.r3.s64 = ctx.r11.s64 + 21952;
	// bl 0x82331228
	ctx.lr = 0x8239BE00;
	sub_82331228(ctx, base);
loc_8239BE00:
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8239be58
	if (!ctx.cr6.gt) goto loc_8239BE58;
	// addi r31,r30,176
	r31.s64 = r30.s64 + 176;
loc_8239BE18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239be44
	if (ctx.cr6.eq) goto loc_8239BE44;
	// stw r28,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239BE40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_8239BE44:
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8239be18
	if (ctx.cr6.lt) goto loc_8239BE18;
loc_8239BE58:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82345bc0
	ctx.lr = 0x8239BE64;
	sub_82345BC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823A0850) {
	REX_FUNC_PROLOGUE();
	// lbz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823A1D78) {
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
	// lis r30,-32129
	r30.s64 = -2105606144;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a1da8
	if (ctx.cr6.eq) goto loc_823A1DA8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a1e3c
	goto loc_823A1E3C;
loc_823A1DA8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,21472
	ctx.r5.s64 = ctx.r10.s64 + 21472;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,22
	ctx.r6.s64 = 22;
	// li r4,24
	ctx.r4.s64 = 24;
	// bl 0x82330a38
	ctx.lr = 0x823A1DC8;
	sub_82330A38(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823a1dec
	if (ctx.cr6.eq) goto loc_823A1DEC;
	// bl 0x8235eb68
	ctx.lr = 0x823A1DD8;
	sub_8235EB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r9,r11,21460
	ctx.r9.s64 = ctx.r11.s64 + 21460;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x823a1df0
	goto loc_823A1DF0;
loc_823A1DEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823A1DF0:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a1e10
	if (!ctx.cr6.eq) goto loc_823A1E10;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x823a1e3c
	goto loc_823A1E3C;
loc_823A1E10:
	// lwz r3,92(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823A1E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a1e3c
	if (!ctx.cr6.eq) goto loc_823A1E3C;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// lwz r4,92(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8235e3c0
	ctx.lr = 0x823A1E3C;
	sub_8235E3C0(ctx, base);
loc_823A1E3C:
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

DEFINE_REX_FUNC(sub_823A8E88) {
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
	ctx.lr = 0x823A8E90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823a9088
	if (ctx.cr6.eq) goto loc_823A9088;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a8ee4
	if (!ctx.cr6.eq) goto loc_823A8EE4;
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823a9074
	if (ctx.cr6.eq) goto loc_823A9074;
	// stw r27,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r27.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// b 0x823a9074
	goto loc_823A9074;
loc_823A8EE4:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x823a8f10
	if (!ctx.cr6.eq) goto loc_823A8F10;
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9054
	if (ctx.cr6.eq) goto loc_823A9054;
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 44);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// b 0x823a9054
	goto loc_823A9054;
loc_823A8F10:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// lwz r10,56(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 56);
	// bne cr6,0x823a8f3c
	if (!ctx.cr6.eq) goto loc_823A8F3C;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a903c
	if (!ctx.cr6.eq) goto loc_823A903C;
	// lwz r31,44(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x823a8f54
	goto loc_823A8F54;
loc_823A8F3C:
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823a903c
	if (!ctx.cr6.eq) goto loc_823A903C;
	// lwz r31,44(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_823A8F54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9054
	if (ctx.cr6.eq) goto loc_823A9054;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a8f7c
	if (!ctx.cr6.eq) goto loc_823A8F7C;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// stw r27,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r27.u32);
	// lwz r28,0(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 0);
	// b 0x823a8fa0
	goto loc_823A8FA0;
loc_823A8F7C:
	// lwz r9,48(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// bne cr6,0x823a8f90
	if (!ctx.cr6.eq) goto loc_823A8F90;
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// b 0x823a8f94
	goto loc_823A8F94;
loc_823A8F90:
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
loc_823A8F94:
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r28,44(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_823A8FA0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823a8fd8
	if (ctx.cr6.eq) goto loc_823A8FD8;
loc_823A8FA8:
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r30,56(r5)
	r30.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r10,r11,0,28,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r27,56(r5)
	REX_STORE_U32(ctx.r5.u32 + 56, r27.u32);
	// stw r27,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, r27.u32);
	// stw r10,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// bl 0x823a8818
	ctx.lr = 0x823A8FCC;
	sub_823A8818(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823a8fa8
	if (!ctx.cr6.eq) goto loc_823A8FA8;
loc_823A8FD8:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823a8fec
	if (ctx.cr6.eq) goto loc_823A8FEC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a7ed0
	ctx.lr = 0x823A8FEC;
	sub_823A7ED0(ctx, base);
loc_823A8FEC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 20);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r31,20(r26)
	REX_STORE_U32(r26.u32 + 20, r31.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823a9028
	if (ctx.cr6.eq) goto loc_823A9028;
	// stw r31,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r31.u32);
loc_823A9028:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x823a9070
	goto loc_823A9070;
loc_823A903C:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,28,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r7,44(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r8,56(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 56);
	// stw r7,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r7.u32);
loc_823A9054:
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 44);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823a9070
	if (!ctx.cr6.eq) goto loc_823A9070;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823a7ed0
	ctx.lr = 0x823A9070;
	sub_823A7ED0(ctx, base);
loc_823A9070:
	// stw r27,44(r29)
	REX_STORE_U32(r29.u32 + 44, r27.u32);
loc_823A9074:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// stw r27,56(r29)
	REX_STORE_U32(r29.u32 + 56, r27.u32);
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r10.u32);
loc_823A9088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823BEF58) {
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
	// beq cr6,0x823befe8
	if (ctx.cr6.eq) goto loc_823BEFE8;
	// lis r11,-24304
	ctx.r11.s64 = -1592786944;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r11,51838
	ctx.r11.u64 = ctx.r11.u64 | 51838;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823befa0
	if (!ctx.cr6.eq) goto loc_823BEFA0;
	// lwz r9,108(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823befa0
	if (!ctx.cr6.eq) goto loc_823BEFA0;
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
loc_823BEFA0:
	// lis r11,-20212
	ctx.r11.s64 = -1324613632;
	// ori r11,r11,63726
	ctx.r11.u64 = ctx.r11.u64 | 63726;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823befcc
	if (ctx.cr6.eq) goto loc_823BEFCC;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823befcc
	if (ctx.cr6.eq) goto loc_823BEFCC;
	// bl 0x8269dfa8
	ctx.lr = 0x823BEFC0;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31448
	ctx.r5.s64 = ctx.r10.s64 + -31448;
	// b 0x823befd8
	goto loc_823BEFD8;
loc_823BEFCC:
	// bl 0x8269dfa8
	ctx.lr = 0x823BEFD0;
	sub_8269DFA8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r5,r10,-31492
	ctx.r5.s64 = ctx.r10.s64 + -31492;
loc_823BEFD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// addi r4,r11,-31628
	ctx.r4.s64 = ctx.r11.s64 + -31628;
	// bl 0x8269f3c0
	ctx.lr = 0x823BEFE8;
	sub_8269F3C0(ctx, base);
loc_823BEFE8:
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823C31C0) {
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
	ctx.lr = 0x823C31C8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C31E8;
	sub_823C1638(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// bne cr6,0x823c3244
	if (!ctx.cr6.eq) goto loc_823C3244;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r6,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18600(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18600);
	// lwz r11,18604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 18604);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,18604(r3)
	REX_STORE_U32(ctx.r3.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r8,18600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r7.u32);
	// stw r4,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r4.u32);
	// b 0x823c3254
	goto loc_823C3254;
loc_823C3244:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3250;
	sub_823C16C0(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
loc_823C3254:
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// mr r26,r25
	r26.u64 = r25.u64;
	// ble cr6,0x823c3564
	if (!ctx.cr6.gt) goto loc_823C3564;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
	// li r17,18
	r17.s64 = 18;
	// li r18,54
	r18.s64 = 54;
	// li r19,27
	r19.s64 = 27;
	// li r20,288
	r20.s64 = 288;
	// addi r24,r11,17720
	r24.s64 = ctx.r11.s64 + 17720;
	// addi r21,r10,-24656
	r21.s64 = ctx.r10.s64 + -24656;
loc_823C3288:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r30,-100
	r27.s64 = r30.s64 + -100;
	// bl 0x823c1638
	ctx.lr = 0x823C3298;
	sub_823C1638(ctx, base);
	// stw r3,-96(r30)
	REX_STORE_U32(r30.u32 + -96, ctx.r3.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C32A8;
	sub_823C16C0(ctx, base);
	// stw r3,-92(r30)
	REX_STORE_U32(r30.u32 + -92, ctx.r3.u32);
	// cmplwi cr6,r3,288
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 288, ctx.xer);
	// bgt cr6,0x823c3570
	if (ctx.cr6.gt) goto loc_823C3570;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C32C0;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r21,1024
	ctx.r10.s64 = r21.s64 + 1024;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823c32e0
	if (ctx.cr6.eq) goto loc_823C32E0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_823C32E0:
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1638
	ctx.lr = 0x823C32EC;
	sub_823C1638(ctx, base);
	// stw r3,-88(r30)
	REX_STORE_U32(r30.u32 + -88, ctx.r3.u32);
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// rlwinm r3,r6,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// lwz r4,264(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,18604(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 18604);
	// lwz r10,18600(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 18600);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,18604(r4)
	REX_STORE_U32(ctx.r4.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r8,18600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r7.u32);
	// beq cr6,0x823c342c
	if (ctx.cr6.eq) goto loc_823C342C;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823c16c0
	ctx.lr = 0x823C334C;
	sub_823C16C0(ctx, base);
	// stw r3,-84(r30)
	REX_STORE_U32(r30.u32 + -84, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// rlwinm r9,r6,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1;
	// lwz r8,264(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18604(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 18604);
	// lwz r7,18600(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 18600);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,18604(r8)
	REX_STORE_U32(ctx.r8.u32 + 18604, ctx.r6.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,18600(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r10,r5,29
	ctx.r10.u64 = ctx.r5.u32 & 0x7;
	// stw r10,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r10.u32);
	// stw r9,-80(r30)
	REX_STORE_U32(r30.u32 + -80, ctx.r9.u32);
	// bl 0x823c16c0
	ctx.lr = 0x823C33A8;
	sub_823C16C0(ctx, base);
	// stw r3,-76(r30)
	REX_STORE_U32(r30.u32 + -76, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C33B8;
	sub_823C16C0(ctx, base);
	// stw r3,-72(r30)
	REX_STORE_U32(r30.u32 + -72, ctx.r3.u32);
	// addi r28,r30,-16
	r28.s64 = r30.s64 + -16;
	// stw r25,-68(r30)
	REX_STORE_U32(r30.u32 + -68, r25.u32);
	// li r29,3
	r29.s64 = 3;
loc_823C33C8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C33D4;
	sub_823C16C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r11,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r28.u32 = ea;
	// bne 0x823c33c8
	if (!ctx.cr0.eq) goto loc_823C33C8;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c3570
	if (ctx.cr6.eq) goto loc_823C3570;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c340c
	if (!ctx.cr6.eq) goto loc_823C340C;
	// stw r17,68(r27)
	REX_STORE_U32(r27.u32 + 68, r17.u32);
	// stw r20,72(r27)
	REX_STORE_U32(r27.u32 + 72, r20.u32);
	// b 0x823c34bc
	goto loc_823C34BC;
loc_823C340C:
	// cmpwi cr6,r22,8
	ctx.cr6.compare<int32_t>(r22.s32, 8, ctx.xer);
	// bne cr6,0x823c3420
	if (!ctx.cr6.eq) goto loc_823C3420;
	// stw r18,68(r27)
	REX_STORE_U32(r27.u32 + 68, r18.u32);
	// stw r20,72(r27)
	REX_STORE_U32(r27.u32 + 72, r20.u32);
	// b 0x823c34bc
	goto loc_823C34BC;
loc_823C3420:
	// stw r19,68(r27)
	REX_STORE_U32(r27.u32 + 68, r19.u32);
	// stw r20,72(r27)
	REX_STORE_U32(r27.u32 + 72, r20.u32);
	// b 0x823c34bc
	goto loc_823C34BC;
loc_823C342C:
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x823c16c0
	ctx.lr = 0x823C3434;
	sub_823C16C0(ctx, base);
	// stw r3,-76(r30)
	REX_STORE_U32(r30.u32 + -76, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3444;
	sub_823C16C0(ctx, base);
	// stw r3,-72(r30)
	REX_STORE_U32(r30.u32 + -72, ctx.r3.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3454;
	sub_823C16C0(ctx, base);
	// stw r3,-68(r30)
	REX_STORE_U32(r30.u32 + -68, ctx.r3.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3464;
	sub_823C16C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c16c0
	ctx.lr = 0x823C3474;
	sub_823C16C0(ctx, base);
	// rlwinm r11,r22,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r24,4
	ctx.r10.s64 = r24.s64 + 4;
	// add r11,r22,r11
	ctx.r11.u64 = r22.u64 + ctx.r11.u64;
	// addi r9,r24,8
	ctx.r9.s64 = r24.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r7,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// stw r3,-32(r30)
	REX_STORE_U32(r30.u32 + -32, ctx.r3.u32);
	// lwzx r11,r5,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r25,-84(r30)
	REX_STORE_U32(r30.u32 + -84, r25.u32);
	// stw r25,-80(r30)
	REX_STORE_U32(r30.u32 + -80, r25.u32);
	// stw r10,-28(r30)
	REX_STORE_U32(r30.u32 + -28, ctx.r10.u32);
loc_823C34BC:
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r30,r30,208
	r30.s64 = r30.s64 + 208;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(r26.s32, r23.s32, ctx.xer);
	// lwz r9,18604(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 18604);
	// lwz r11,18600(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 18600);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,18600(r10)
	REX_STORE_U32(ctx.r10.u32 + 18600, ctx.r8.u32);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r6,25,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x1;
	// lwz r3,264(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r10,18600(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 18600);
	// lwz r11,18604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 18604);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,18604(r3)
	REX_STORE_U32(ctx.r3.u32 + 18604, ctx.r9.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r8,18600(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r7,r8,29
	ctx.r7.u64 = ctx.r8.u32 & 0x7;
	// stw r7,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r7.u32);
	// stw r4,80(r27)
	REX_STORE_U32(r27.u32 + 80, ctx.r4.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r6,18604(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 18604);
	// lwz r10,18600(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lbz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// slw r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// stw r5,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r5.u32);
	// rlwinm r8,r3,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r11,18604(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 18604);
	// lwz r7,18600(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 18600);
	// srawi r10,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r6,18604(r9)
	REX_STORE_U32(ctx.r9.u32 + 18604, ctx.r6.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r5,18600(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 18600);
	// clrlwi r4,r5,29
	ctx.r4.u64 = ctx.r5.u32 & 0x7;
	// stw r4,18600(r11)
	REX_STORE_U32(ctx.r11.u32 + 18600, ctx.r4.u32);
	// stw r8,84(r27)
	REX_STORE_U32(r27.u32 + 84, ctx.r8.u32);
	// blt cr6,0x823c3288
	if (ctx.cr6.lt) goto loc_823C3288;
loc_823C3564:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_823C3570:
	// li r3,19
	ctx.r3.s64 = 19;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823D8BD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f0,32432(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32432);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823d8c7c
	if (ctx.cr6.lt) goto loc_823D8C7C;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r4,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D8C14:
	// lfs f12,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f4,f11,f10,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f3,-4(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// fsubs f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fmadds f1,f2,f8,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f9.f64)));
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmadds f10,f11,f6,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, ctx.f7.f64)));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f8,f9,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmadds f7,f8,f13,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f5.f64)));
	// fadds f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823d8c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8C14;
loc_823D8C7C:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x823d8cbc
	if (!ctx.cr6.lt) goto loc_823D8CBC;
	// subf r9,r8,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D8C9C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823d8c9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8C9C;
loc_823D8CBC:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823d8d8c
	if (ctx.cr6.lt) goto loc_823D8D8C;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// subf r10,r5,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_823D8D10:
	// lfs f11,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsu f12,-16(r8)
	ea = -16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f6,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f5,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f5
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f2,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f12,f9,f10,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f11.f64)));
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f10,f11,f8
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fmadds f9,f3,f10,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, ctx.f8.f64)));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f5,f4,f6,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, ctx.f7.f64)));
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f3,f4,f2
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fmadds f2,f13,f3,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f2.f64)));
	// fadds f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f13,-4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bdnz 0x823d8d10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8D10;
loc_823D8D8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r4,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823D8DAC:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f8,f9,f10,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x823d8dac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D8DAC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7BD0) {
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
	ctx.lr = 0x823E7BD8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzu r27,4(r7)
	ea = 4 + ctx.r7.u32;
	r27.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r23,r7,4
	r23.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x823e7c34
	if (!ctx.cr6.eq) goto loc_823E7C34;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823e7c74
	if (!ctx.cr6.gt) goto loc_823E7C74;
	// mullw r10,r5,r6
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
loc_823E7C1C:
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwux r8,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823e7c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7C1C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_823E7C34:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x823e7c74
	if (!ctx.cr6.gt) goto loc_823E7C74;
	// mullw r11,r5,r28
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r26,r31,r5
	r26.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E7C48:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e7bd0
	ctx.lr = 0x823E7C64;
	sub_823E7BD0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r25,r30
	r30.u64 = r25.u64 + r30.u64;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// bne 0x823e7c48
	if (!ctx.cr0.eq) goto loc_823E7C48;
loc_823E7C74:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823E9AD8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2c7c
	ctx.lr = 0x823E9AE8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f12,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f7,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f9,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fadds f2,f10,f12
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// lfs f3,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// lfs f10,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f5,108(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,100(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f12,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f1,f10
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f13,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f27,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	f27.f64 = double(temp.f32);
	// lfs f29,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	f29.f64 = double(temp.f32);
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,8264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8264);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f25,f29,f27
	f25.f64 = double(float(f29.f64 - f27.f64));
	// lfs f13,8260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8260);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f27,f29
	f29.f64 = double(float(f27.f64 + f29.f64));
	// lfs f30,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	f30.f64 = double(temp.f32);
	// fadds f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f3,96(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f28,f8,f0
	f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f10,f3,f30
	ctx.f10.f64 = double(float(ctx.f3.f64 - f30.f64));
	// lfs f24,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	f24.f64 = double(temp.f32);
	// fsubs f27,f4,f12
	f27.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfs f26,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	f26.f64 = double(temp.f32);
	// fmuls f21,f7,f13
	f21.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f23,88(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 88);
	f23.f64 = double(temp.f32);
	// fadds f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// lfs f22,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	f22.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f12,8256(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8256);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f29,120(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fsubs f18,f26,f24
	f18.f64 = double(float(f26.f64 - f24.f64));
	// lfs f20,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	f20.f64 = double(temp.f32);
	// fadds f26,f24,f26
	f26.f64 = double(float(f24.f64 + f26.f64));
	// lfs f19,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	f19.f64 = double(temp.f32);
	// lfs f17,80(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 80);
	f17.f64 = double(temp.f32);
	// fadds f3,f30,f3
	ctx.f3.f64 = double(float(f30.f64 + ctx.f3.f64));
	// lfs f24,92(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	f24.f64 = double(temp.f32);
	// fmsubs f11,f11,f13,f28
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, -f28.f64)));
	// stfs f6,112(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fsubs f28,f23,f22
	f28.f64 = double(float(f23.f64 - f22.f64));
	// stfs f2,116(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// fmuls f27,f27,f12
	f27.f64 = double(float(f27.f64 * ctx.f12.f64));
	// fmsubs f29,f10,f0,f21
	f29.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -f21.f64)));
	// stfs f5,108(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f3,96(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// fmuls f4,f4,f12
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f8,f8,f13,f31
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, f31.f64)));
	// lfs f31,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	f31.f64 = double(temp.f32);
	// fmadds f10,f10,f13,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f7.f64)));
	// lfs f30,84(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 84);
	f30.f64 = double(temp.f32);
	// stfs f25,56(r3)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fadds f7,f22,f23
	ctx.f7.f64 = double(float(f22.f64 + f23.f64));
	// stfs f18,60(r3)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// fsubs f6,f19,f17
	ctx.f6.f64 = double(float(f19.f64 - f17.f64));
	// stfs f26,124(r3)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// fadds f5,f17,f19
	ctx.f5.f64 = double(float(f17.f64 + f19.f64));
	// stfs f9,104(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// fsubs f3,f20,f24
	ctx.f3.f64 = double(float(f20.f64 - f24.f64));
	// stfs f1,100(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// fadds f2,f24,f20
	ctx.f2.f64 = double(float(f24.f64 + f20.f64));
	// stfs f8,52(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f11,48(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f27,40(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f4,44(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f29,32(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f28,28(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f10,72(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f31,f30
	ctx.f11.f64 = double(float(f31.f64 - f30.f64));
	// lfs f1,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f31,f30,f31
	f31.f64 = double(float(f30.f64 + f31.f64));
	// lfs f8,12(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// lfs f29,76(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 76);
	f29.f64 = double(temp.f32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f28,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f26,64(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 64);
	f26.f64 = double(temp.f32);
	// fadds f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// lfs f30,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
	// fsubs f27,f8,f29
	f27.f64 = double(float(ctx.f8.f64 - f29.f64));
	// lfs f24,68(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 68);
	f24.f64 = double(temp.f32);
	// fsubs f25,f28,f26
	f25.f64 = double(float(f28.f64 - f26.f64));
	// fsubs f10,f30,f24
	ctx.f10.f64 = double(float(f30.f64 - f24.f64));
	// stfs f3,24(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,88(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// fadds f8,f29,f8
	ctx.f8.f64 = double(float(f29.f64 + ctx.f8.f64));
	// fadds f7,f26,f28
	ctx.f7.f64 = double(float(f26.f64 + f28.f64));
	// stfs f8,76(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f7,64(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// addi r9,r3,64
	ctx.r9.s64 = ctx.r3.s64 + 64;
	// stfs f2,92(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// fadds f2,f24,f30
	ctx.f2.f64 = double(float(f24.f64 + f30.f64));
	// fmadds f3,f11,f13,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f5,80(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fmsubs f11,f11,f0,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f6.f64)));
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// fadds f9,f27,f4
	ctx.f9.f64 = double(float(f27.f64 + ctx.f4.f64));
	// stfs f31,84(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// fsubs f8,f27,f4
	ctx.f8.f64 = double(float(f27.f64 - ctx.f4.f64));
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// fmuls f7,f25,f0
	ctx.f7.f64 = double(float(f25.f64 * ctx.f0.f64));
	// stfs f11,20(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f4,12(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmsubs f3,f10,f13,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f7.f64)));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f2,f25,f13,f6
	ctx.f2.f64 = double(float(std::fma(f25.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// bl 0x823e98d8
	ctx.lr = 0x823E9CEC;
	sub_823E98D8(ctx, base);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x823e98d8
	ctx.lr = 0x823E9CF4;
	sub_823E98D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x826a2cc8
	ctx.lr = 0x823E9D00;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F86C8) {
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
	ctx.lr = 0x823F86D0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f8b84
	if (ctx.cr6.eq) goto loc_823F8B84;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r27,0
	r27.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// addi r26,r11,12280
	r26.s64 = ctx.r11.s64 + 12280;
	// addi r28,r10,12484
	r28.s64 = ctx.r10.s64 + 12484;
loc_823F8700:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r30,29
	ctx.r9.u64 = r30.u32 & 0x7;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f87f0
	if (!ctx.cr0.eq) goto loc_823F87F0;
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
	// lbzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
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
	// bgt cr6,0x823f87e0
	if (ctx.cr6.gt) goto loc_823F87E0;
loc_823F8774:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8790
	if (ctx.cr6.lt) goto loc_823F8790;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8790:
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
	// ble cr6,0x823f8774
	if (!ctx.cr6.gt) goto loc_823F8774;
loc_823F87E0:
	// lwz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2144);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x823f8b5c
	goto loc_823F8B5C;
loc_823F87F0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwzx r7,r11,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lbzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r7,1024
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1024, ctx.xer);
	// bge cr6,0x823f881c
	if (!ctx.cr6.lt) goto loc_823F881C;
	// add r11,r7,r31
	ctx.r11.u64 = ctx.r7.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// b 0x823f8844
	goto loc_823F8844;
loc_823F881C:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823f883c
	if (!ctx.cr6.lt) goto loc_823F883C;
	// rlwinm r11,r7,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x7FFFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lbz r11,1108(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1108);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// b 0x823f8844
	goto loc_823F8844;
loc_823F883C:
	// rlwinm r11,r7,15,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0xFF;
	// addi r11,r11,34
	ctx.r11.s64 = ctx.r11.s64 + 34;
loc_823F8844:
	// lbz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 24);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// cmplwi cr6,r8,7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 7, ctx.xer);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// bge cr6,0x823f8924
	if (!ctx.cr6.lt) goto loc_823F8924;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,3,21,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r10,r9,1222
	ctx.r10.s64 = ctx.r9.s64 + 1222;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6892
	ctx.r3.s64 = ctx.r11.s64 + 6892;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
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
	// bgt cr6,0x823f8a94
	if (ctx.cr6.gt) goto loc_823F8A94;
loc_823F88B4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f88d0
	if (ctx.cr6.lt) goto loc_823F88D0;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F88D0:
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
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// rlwinm r11,r6,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f88b4
	if (!ctx.cr6.gt) goto loc_823F88B4;
	// b 0x823f8a94
	goto loc_823F8A94;
loc_823F8924:
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
	// bgt cr6,0x823f89d8
	if (ctx.cr6.gt) goto loc_823F89D8;
loc_823F896C:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8988
	if (ctx.cr6.lt) goto loc_823F8988;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8988:
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
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f896c
	if (!ctx.cr6.gt) goto loc_823F896C;
loc_823F89D8:
	// add r11,r8,r31
	ctx.r11.u64 = ctx.r8.u64 + r31.u64;
	// lbz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r6,r8,8178
	ctx.r6.s64 = ctx.r8.s64 + 8178;
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
	// bgt cr6,0x823f8a94
	if (ctx.cr6.gt) goto loc_823F8A94;
loc_823F8A28:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8a44
	if (ctx.cr6.lt) goto loc_823F8A44;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8A44:
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
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,2136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// rlwinm r6,r6,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r6,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r6.u32);
	// stw r10,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r10.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8a28
	if (!ctx.cr6.gt) goto loc_823F8A28;
loc_823F8A94:
	// lbzx r11,r9,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + r28.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f8b50
	if (ctx.cr0.eq) goto loc_823F8B50;
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
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
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
	// bgt cr6,0x823f8b50
	if (ctx.cr6.gt) goto loc_823F8B50;
loc_823F8AE4:
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lwz r10,2140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2140);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823f8b00
	if (ctx.cr6.lt) goto loc_823F8B00;
	// lwz r11,2132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2132);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stw r11,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r11.u32);
loc_823F8B00:
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
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2136);
	// lbz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r7,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r7.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// ble cr6,0x823f8ae4
	if (!ctx.cr6.gt) goto loc_823F8AE4;
loc_823F8B50:
	// lwz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2144);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_823F8B5C:
	// stw r11,2144(r31)
	REX_STORE_U32(r31.u32 + 2144, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bne cr6,0x823f8b7c
	if (!ctx.cr6.eq) goto loc_823F8B7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8578
	ctx.lr = 0x823F8B74;
	sub_823F8578(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2161(r31)
	REX_STORE_U8(r31.u32 + 2161, ctx.r11.u8);
loc_823F8B7C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x823f8700
	if (ctx.cr6.lt) goto loc_823F8700;
loc_823F8B84:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_824138C0) {
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
	// bl 0x82412dd0
	ctx.lr = 0x824138E0;
	sub_82412DD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824138f4
	if (ctx.cr0.eq) goto loc_824138F4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x824138F4;
	sub_823F0350(ctx, base);
loc_824138F4:
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

DEFINE_REX_FUNC(sub_82414EF8) {
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
	ctx.lr = 0x82414F00;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,640
	r24.s64 = ctx.r3.s64 + 640;
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// li r30,0
	r30.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r14,0
	r14.s64 = 0;
	// bl 0x8241b778
	ctx.lr = 0x82414F28;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x824153a8
	if (!ctx.cr6.eq) goto loc_824153A8;
	// addi r27,r26,648
	r27.s64 = r26.s64 + 648;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r10,r10,23456
	ctx.r10.s64 = ctx.r10.s64 + 23456;
loc_82414F4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82414f70
	if (ctx.cr0.eq) goto loc_82414F70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414f4c
	if (ctx.cr6.eq) goto loc_82414F4C;
loc_82414F70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824153a8
	if (!ctx.cr0.eq) goto loc_824153A8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82414F88;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lis r4,16383
	ctx.r4.s64 = 1073676288;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// li r25,0
	r25.s64 = 0;
	// ori r16,r4,65535
	r16.u64 = ctx.r4.u64 | 65535;
	// li r15,-1
	r15.s64 = -1;
	// addi r22,r11,23492
	r22.s64 = ctx.r11.s64 + 23492;
	// addi r20,r10,28276
	r20.s64 = ctx.r10.s64 + 28276;
	// addi r19,r9,23484
	r19.s64 = ctx.r9.s64 + 23484;
	// addi r18,r8,23476
	r18.s64 = ctx.r8.s64 + 23476;
	// addi r17,r7,23468
	r17.s64 = ctx.r7.s64 + 23468;
	// addi r21,r6,23460
	r21.s64 = ctx.r6.s64 + 23460;
	// addi r23,r5,23452
	r23.s64 = ctx.r5.s64 + 23452;
loc_82414FD8:
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82415018
	if (!ctx.cr6.eq) goto loc_82415018;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82414FEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415010
	if (ctx.cr0.eq) goto loc_82415010;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82414fec
	if (ctx.cr6.eq) goto loc_82414FEC;
loc_82415010:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824153f8
	if (ctx.cr0.eq) goto loc_824153F8;
loc_82415018:
	// cmpwi cr6,r7,9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 9, ctx.xer);
	// bne cr6,0x82415114
	if (!ctx.cr6.eq) goto loc_82415114;
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8241502C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x82415050
	if (ctx.cr0.eq) goto loc_82415050;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241502c
	if (ctx.cr6.eq) goto loc_8241502C;
loc_82415050:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82415060
	if (!ctx.cr0.eq) goto loc_82415060;
	// li r28,16
	r28.s64 = 16;
	// b 0x82415144
	goto loc_82415144;
loc_82415060:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82415068:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x8241508c
	if (ctx.cr0.eq) goto loc_8241508C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82415068
	if (ctx.cr6.eq) goto loc_82415068;
loc_8241508C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241509c
	if (!ctx.cr0.eq) goto loc_8241509C;
	// li r28,15
	r28.s64 = 15;
	// b 0x82415144
	goto loc_82415144;
loc_8241509C:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_824150A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x824150c8
	if (ctx.cr0.eq) goto loc_824150C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824150a4
	if (ctx.cr6.eq) goto loc_824150A4;
loc_824150C8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824150d8
	if (!ctx.cr0.eq) goto loc_824150D8;
	// li r28,0
	r28.s64 = 0;
	// b 0x82415144
	goto loc_82415144;
loc_824150D8:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_824150E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415104
	if (ctx.cr0.eq) goto loc_82415104;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824150e0
	if (ctx.cr6.eq) goto loc_824150E0;
loc_82415104:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824153a8
	if (!ctx.cr0.eq) goto loc_824153A8;
	// li r28,255
	r28.s64 = 255;
	// b 0x82415144
	goto loc_82415144;
loc_82415114:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x8241512c
	if (ctx.cr6.eq) goto loc_8241512C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x8241512c
	if (ctx.cr6.eq) goto loc_8241512C;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x824153a8
	if (!ctx.cr6.eq) goto loc_824153A8;
loc_8241512C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824153a8
	if (ctx.cr6.lt) goto loc_824153A8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x824153a8
	if (ctx.cr6.gt) goto loc_824153A8;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_82415144:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82415154;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x824153a8
	if (!ctx.cr6.eq) goto loc_824153A8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82415170:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415194
	if (ctx.cr0.eq) goto loc_82415194;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82415170
	if (ctx.cr6.eq) goto loc_82415170;
loc_82415194:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824153a8
	if (!ctx.cr0.eq) goto loc_824153A8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x824151AC;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
loc_824151B4:
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x824151d0
	if (ctx.cr6.eq) goto loc_824151D0;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x824151d0
	if (ctx.cr6.eq) goto loc_824151D0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x824153a8
	if (!ctx.cr6.eq) goto loc_824153A8;
loc_824151D0:
	// not r11,r25
	ctx.r11.u64 = ~r25.u64;
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & r25.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82415280
	if (!ctx.cr6.eq) goto loc_82415280;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x824151f8
	if (!ctx.cr6.eq) goto loc_824151F8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_824151F8:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82415208
	if (!ctx.cr6.gt) goto loc_82415208;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82415208:
	// bl 0x822f6280
	ctx.lr = 0x8241520C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82415470
	if (ctx.cr0.eq) goto loc_82415470;
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82415228;
	sub_826A1E70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269ce98
	ctx.lr = 0x82415230;
	sub_8269CE98(ctx, base);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82415244
	if (!ctx.cr6.eq) goto loc_82415244;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82415244:
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82415254
	if (!ctx.cr6.gt) goto loc_82415254;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_82415254:
	// bl 0x822f6280
	ctx.lr = 0x82415258;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82415470
	if (ctx.cr0.eq) goto loc_82415470;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82415270;
	sub_826A1E70(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82415278;
	sub_8269CE98(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r14,r31
	r14.u64 = r31.u64;
loc_82415280:
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stwx r29,r11,r14
	REX_STORE_U32(ctx.r11.u32 + r14.u32, r29.u32);
	// stwx r28,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, r28.u32);
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x824152A0;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x824151b4
	if (!ctx.cr6.eq) goto loc_824151B4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824152BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824152e0
	if (ctx.cr0.eq) goto loc_824152E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824152bc
	if (ctx.cr6.eq) goto loc_824152BC;
loc_824152E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241531c
	if (ctx.cr0.eq) goto loc_8241531C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_824152F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415314
	if (ctx.cr0.eq) goto loc_82415314;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x824152f0
	if (ctx.cr6.eq) goto loc_824152F0;
loc_82415314:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824151b4
	if (!ctx.cr0.eq) goto loc_824151B4;
loc_8241531C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_82415324:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82415348
	if (ctx.cr0.eq) goto loc_82415348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82415324
	if (ctx.cr6.eq) goto loc_82415324;
loc_82415348:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414fd8
	if (!ctx.cr0.eq) goto loc_82414FD8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82415360;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82414fd8
	if (!ctx.cr6.eq) goto loc_82414FD8;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8241537C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x824153a0
	if (ctx.cr0.eq) goto loc_824153A0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241537c
	if (ctx.cr6.eq) goto loc_8241537C;
loc_824153A0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82414fd8
	if (!ctx.cr0.eq) goto loc_82414FD8;
loc_824153A8:
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// beq cr6,0x824153c4
	if (ctx.cr6.eq) goto loc_824153C4;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// beq cr6,0x824153c4
	if (ctx.cr6.eq) goto loc_824153C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241ab70
	ctx.lr = 0x824153C4;
	sub_8241AB70(ctx, base);
loc_824153C4:
	// li r31,0
	r31.s64 = 0;
	// stw r31,668(r26)
	REX_STORE_U32(r26.u32 + 668, r31.u32);
loc_824153CC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8269ce98
	ctx.lr = 0x824153D4;
	sub_8269CE98(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8269ce98
	ctx.lr = 0x824153DC;
	sub_8269CE98(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269ce98
	ctx.lr = 0x824153E4;
	sub_8269CE98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,76(r26)
	REX_STORE_U32(r26.u32 + 76, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
loc_824153F8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 672);
	// lwz r3,632(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 632);
	// bl 0x8241b778
	ctx.lr = 0x82415408;
	sub_8241B778(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// lwz r7,0(r24)
	ctx.r7.u64 = REX_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,12
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 12, ctx.xer);
	// beq cr6,0x82415424
	if (ctx.cr6.eq) goto loc_82415424;
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// bne cr6,0x824153a8
	if (!ctx.cr6.eq) goto loc_824153A8;
loc_82415424:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82415468
	if (ctx.cr6.eq) goto loc_82415468;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
	// mr r30,r14
	r30.u64 = r14.u64;
	// subf r28,r14,r11
	r28.u64 = ctx.r11.u64 - r14.u64;
loc_82415440:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8241a440
	ctx.lr = 0x82415450;
	sub_8241A440(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824153cc
	if (ctx.cr0.lt) goto loc_824153CC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// blt cr6,0x82415440
	if (ctx.cr6.lt) goto loc_82415440;
loc_82415468:
	// li r31,0
	r31.s64 = 0;
	// b 0x824153cc
	goto loc_824153CC;
loc_82415470:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824153cc
	goto loc_824153CC;
}

DEFINE_REX_FUNC(sub_82445A40) {
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
	// beq cr6,0x82445ae8
	if (ctx.cr6.eq) goto loc_82445AE8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82445ae8
	if (!ctx.cr6.eq) goto loc_82445AE8;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445a98
	if (ctx.cr6.eq) goto loc_82445A98;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445A94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445aa4
	goto loc_82445AA4;
loc_82445A98:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445AA4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82445ae8
	if (ctx.cr6.eq) goto loc_82445AE8;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82445ad0
	if (ctx.cr6.eq) goto loc_82445AD0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82445ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82445adc
	goto loc_82445ADC;
loc_82445AD0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82445ADC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82445aec
	if (!ctx.cr6.eq) goto loc_82445AEC;
loc_82445AE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82445AEC:
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

DEFINE_REX_FUNC(sub_824481B0) {
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
	// beq cr6,0x82448290
	if (ctx.cr6.eq) goto loc_82448290;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82448290
	if (!ctx.cr6.eq) goto loc_82448290;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82448208
	if (ctx.cr6.eq) goto loc_82448208;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448204;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82448214
	goto loc_82448214;
loc_82448208:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82448214:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82448290
	if (ctx.cr6.eq) goto loc_82448290;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82448240
	if (ctx.cr6.eq) goto loc_82448240;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8244823C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8244824c
	goto loc_8244824C;
loc_82448240:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8244824C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82448290
	if (ctx.cr6.eq) goto loc_82448290;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82448278
	if (ctx.cr6.eq) goto loc_82448278;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82448274;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82448284
	goto loc_82448284;
loc_82448278:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82448284:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x82448294
	if (!ctx.cr6.eq) goto loc_82448294;
loc_82448290:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82448294:
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

DEFINE_REX_FUNC(sub_824522E0) {
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
	ctx.lr = 0x824522E8;
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82452198
	ctx.lr = 0x824522FC;
	sub_82452198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82452714
	if (ctx.cr0.lt) goto loc_82452714;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452344
	if (ctx.cr0.eq) goto loc_82452344;
	// lwz r11,308(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82452338
	if (!ctx.cr6.eq) goto loc_82452338;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,12040
	ctx.r4.s64 = ctx.r11.s64 + 12040;
	// bl 0x8244beb0
	ctx.lr = 0x8245232C;
	sub_8244BEB0(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x82452714
	goto loc_82452714;
loc_82452338:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82450858
	ctx.lr = 0x82452340;
	sub_82450858(ctx, base);
	// bl 0x822cd810
	ctx.lr = 0x82452344;
	sub_822CD810(ctx, base);
loc_82452344:
	// lwz r29,316(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 316);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82452370
	if (ctx.cr6.eq) goto loc_82452370;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82130e88
	ctx.lr = 0x82452358;
	sub_82130E88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x82452368;
	sub_82450858(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822cd870
	ctx.lr = 0x82452370;
	sub_822CD870(ctx, base);
loc_82452370:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x8245237C;
	sub_82450858(ctx, base);
	// bl 0x822cdf90
	ctx.lr = 0x82452380;
	sub_822CDF90(ctx, base);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824523ac
	if (ctx.cr6.eq) goto loc_824523AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x82452398;
	sub_82450858(ctx, base);
	// bl 0x822cdda0
	ctx.lr = 0x8245239C;
	sub_822CDDA0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x824d7fb8
	ctx.lr = 0x824523AC;
	sub_824D7FB8(ctx, base);
loc_824523AC:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82452418
	if (ctx.cr6.eq) goto loc_82452418;
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824523f8
	if (ctx.cr6.eq) goto loc_824523F8;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x826b3f38
	ctx.lr = 0x824523E0;
	sub_826B3F38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x824523EC;
	sub_82450858(ctx, base);
	// lwz r5,8(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x822cdcc0
	ctx.lr = 0x824523F8;
	sub_822CDCC0(ctx, base);
loc_824523F8:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 316);
	// bl 0x824dcb20
	ctx.lr = 0x82452404;
	sub_824DCB20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x82452410;
	sub_82450858(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822cd848
	ctx.lr = 0x82452418;
	sub_822CD848(ctx, base);
loc_82452418:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x82452424;
	sub_82450858(ctx, base);
	// bl 0x822cdfe8
	ctx.lr = 0x82452428;
	sub_822CDFE8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82400740
	ctx.lr = 0x82452430;
	sub_82400740(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82452714
	if (ctx.cr0.lt) goto loc_82452714;
	// li r27,0
	r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82450858
	ctx.lr = 0x8245244C;
	sub_82450858(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82452468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82452484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822ce078
	ctx.lr = 0x82452498;
	sub_822CE078(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82452528
	if (ctx.cr0.lt) goto loc_82452528;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824524cc
	if (ctx.cr6.eq) goto loc_824524CC;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824524BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,-13424
	ctx.r5.s64 = ctx.r11.s64 + -13424;
	// bl 0x822cee40
	ctx.lr = 0x824524CC;
	sub_822CEE40(ctx, base);
loc_824524CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82452528
	if (ctx.cr6.eq) goto loc_82452528;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452528
	if (ctx.cr0.eq) goto loc_82452528;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r8,r11,-22984
	ctx.r8.s64 = ctx.r11.s64 + -22984;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x824e5120
	ctx.lr = 0x82452504;
	sub_824E5120(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82452528
	if (!ctx.cr0.eq) goto loc_82452528;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82452520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82452714
	goto loc_82452714;
loc_82452528:
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2945
	ctx.r11.u64 = ctx.r11.u64 | 2945;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82452550
	if (!ctx.cr6.eq) goto loc_82452550;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11960
	ctx.r4.s64 = ctx.r11.s64 + 11960;
	// bl 0x8244beb0
	ctx.lr = 0x82452548;
	sub_8244BEB0(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_82452550:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// blt cr6,0x82452710
	if (ctx.cr6.lt) goto loc_82452710;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82452710
	if (!ctx.cr0.eq) goto loc_82452710;
	// mr r29,r27
	r29.u64 = r27.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82452584
	if (ctx.cr6.eq) goto loc_82452584;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r29,r10,10,15,21
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
loc_82452584:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82452590
	if (ctx.cr0.eq) goto loc_82452590;
	// oris r29,r29,4
	r29.u64 = r29.u64 | 262144;
loc_82452590:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824525A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824525BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-26120
	ctx.r7.s64 = ctx.r11.s64 + -26120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// bl 0x821aae70
	ctx.lr = 0x824525D8;
	sub_821AAE70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824525ec
	if (ctx.cr0.lt) goto loc_824525EC;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82452710
	if (ctx.cr6.eq) goto loc_82452710;
loc_824525EC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// rlwinm r11,r30,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// sth r27,152(r1)
	REX_STORE_U16(ctx.r1.u32 + 152, r27.u16);
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// bge cr6,0x82452624
	if (!ctx.cr6.lt) goto loc_82452624;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,11912
	ctx.r7.s64 = ctx.r11.s64 + 11912;
	// b 0x82452630
	goto loc_82452630;
loc_82452624:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r11,11860
	ctx.r7.s64 = ctx.r11.s64 + 11860;
loc_82452630:
	// addi r6,r10,28576
	ctx.r6.s64 = ctx.r10.s64 + 28576;
	// beq cr6,0x82452644
	if (ctx.cr6.eq) goto loc_82452644;
	// li r5,7101
	ctx.r5.s64 = 7101;
	// bl 0x8241a4f0
	ctx.lr = 0x82452640;
	sub_8241A4F0(ctx, base);
	// b 0x8245264c
	goto loc_8245264C;
loc_82452644:
	// li r5,7102
	ctx.r5.s64 = 7102;
	// bl 0x8241a718
	ctx.lr = 0x8245264C;
	sub_8241A718(ctx, base);
loc_8245264C:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82452660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245267C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-22384
	ctx.r7.s64 = ctx.r11.s64 + -22384;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// bl 0x821aae70
	ctx.lr = 0x82452698;
	sub_821AAE70(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824526ac
	if (ctx.cr0.eq) goto loc_824526AC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8244a7a8
	ctx.lr = 0x824526AC;
	sub_8244A7A8(ctx, base);
loc_824526AC:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824526C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824526DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r5,68
	ctx.r5.s64 = 68;
	// addi r6,r11,-22384
	ctx.r6.s64 = ctx.r11.s64 + -22384;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// bl 0x824e32a0
	ctx.lr = 0x824526FC;
	sub_824E32A0(ctx, base);
	// lhz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82452710
	if (ctx.cr0.eq) goto loc_82452710;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8244a7a8
	ctx.lr = 0x82452710;
	sub_8244A7A8(ctx, base);
loc_82452710:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82452714:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824700F0) {
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
	ctx.lr = 0x824700F8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// stw r4,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r23,264(r3)
	REX_STORE_U32(ctx.r3.u32 + 264, r23.u32);
	// mr r22,r23
	r22.u64 = r23.u64;
	// stw r23,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r19,r23
	r19.u64 = r23.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r26,r23
	r26.u64 = r23.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// mr r21,r23
	r21.u64 = r23.u64;
	// mr r14,r23
	r14.u64 = r23.u64;
	// mr r20,r23
	r20.u64 = r23.u64;
	// mr r18,r23
	r18.u64 = r23.u64;
	// mr r15,r23
	r15.u64 = r23.u64;
	// mr r17,r23
	r17.u64 = r23.u64;
	// mr r16,r23
	r16.u64 = r23.u64;
	// bl 0x82493318
	ctx.lr = 0x82470144;
	sub_82493318(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,-1
	r24.s64 = -1;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25304
	ctx.r4.s64 = ctx.r11.s64 + 25304;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// ori r5,r5,785
	ctx.r5.u64 = ctx.r5.u64 | 785;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82470170;
	sub_824786B8(ctx, base);
	// stw r3,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82470bf4
	if (ctx.cr6.eq) goto loc_82470BF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,372(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 372);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824710a0
	if (ctx.cr0.lt) goto loc_824710A0;
	// stw r23,272(r31)
	REX_STORE_U32(r31.u32 + 272, r23.u32);
	// stw r23,276(r31)
	REX_STORE_U32(r31.u32 + 276, r23.u32);
	// stw r23,280(r31)
	REX_STORE_U32(r31.u32 + 280, r23.u32);
	// stw r23,288(r31)
	REX_STORE_U32(r31.u32 + 288, r23.u32);
	// stw r23,292(r31)
	REX_STORE_U32(r31.u32 + 292, r23.u32);
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824701cc
	if (ctx.cr6.eq) goto loc_824701CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824701C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,436(r31)
	REX_STORE_U32(r31.u32 + 436, r23.u32);
loc_824701CC:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824701dc
	if (!ctx.cr0.eq) goto loc_824701DC;
	// stw r23,436(r31)
	REX_STORE_U32(r31.u32 + 436, r23.u32);
loc_824701DC:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470210
	if (ctx.cr0.eq) goto loc_82470210;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r11,48
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// bl 0x823f02b8
	ctx.lr = 0x824701F4;
	sub_823F02B8(ctx, base);
	// stw r3,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r23,300(r31)
	REX_STORE_U32(r31.u32 + 300, r23.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
loc_82470210:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// stw r24,316(r31)
	REX_STORE_U32(r31.u32 + 316, r24.u32);
	// stw r23,336(r31)
	REX_STORE_U32(r31.u32 + 336, r23.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8247024c
	if (!ctx.cr6.gt) goto loc_8247024C;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_8247022C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r23,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, r23.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8247022c
	if (ctx.cr6.lt) goto loc_8247022C;
loc_8247024C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824702e0
	if (!ctx.cr6.gt) goto loc_824702E0;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_82470264:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r9,r9,0,3,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r29,r11,r10
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne 0x824702cc
	if (!ctx.cr0.eq) goto loc_824702CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247029c
	if (ctx.cr0.eq) goto loc_8247029C;
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824702a4
	if (ctx.cr0.eq) goto loc_824702A4;
loc_8247029C:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824702bc
	if (ctx.cr0.eq) goto loc_824702BC;
loc_824702A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824702BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824702BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824702cc
	if (ctx.cr0.eq) goto loc_824702CC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_824702CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470264
	if (ctx.cr6.lt) goto loc_82470264;
loc_824702E0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82470344
	if (!ctx.cr6.gt) goto loc_82470344;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,200(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 200);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ff340
	ctx.lr = 0x824702FC;
	sub_823FF340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824710a0
	if (ctx.cr0.lt) goto loc_824710A0;
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82470330
	if (ctx.cr6.eq) goto loc_82470330;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4510
	ctx.r5.s64 = 4510;
	// addi r6,r11,29144
	ctx.r6.s64 = ctx.r11.s64 + 29144;
	// bl 0x82489c30
	ctx.lr = 0x8247032C;
	sub_82489C30(ctx, base);
	// b 0x824710a0
	goto loc_824710A0;
loc_82470330:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4545
	ctx.r5.s64 = 4545;
	// addi r6,r11,29096
	ctx.r6.s64 = ctx.r11.s64 + 29096;
	// bl 0x82489c30
	ctx.lr = 0x82470340;
	sub_82489C30(ctx, base);
	// b 0x824710a0
	goto loc_824710A0;
loc_82470344:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247037c
	if (!ctx.cr6.eq) goto loc_8247037C;
	// li r8,118
	ctx.r8.s64 = 118;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r7,516
	ctx.r7.s64 = 516;
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824692a0
	ctx.lr = 0x82470374;
	sub_824692A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_8247037C:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824703b4
	if (!ctx.cr6.eq) goto loc_824703B4;
	// li r8,115
	ctx.r8.s64 = 115;
	// lwz r5,76(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824692a0
	ctx.lr = 0x824703AC;
	sub_824692A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_824703B4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247048c
	if (!ctx.cr6.gt) goto loc_8247048C;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_824703D0:
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8247047c
	if (!ctx.cr0.eq) goto loc_8247047C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82470408
	if (!ctx.cr6.eq) goto loc_82470408;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// ble cr6,0x82470408
	if (!ctx.cr6.gt) goto loc_82470408;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// b 0x8247047c
	goto loc_8247047C;
loc_82470408:
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8247042c
	if (!ctx.cr6.eq) goto loc_8247042C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// ble cr6,0x8247042c
	if (!ctx.cr6.gt) goto loc_8247042C;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// b 0x8247047c
	goto loc_8247047C;
loc_8247042C:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82470450
	if (!ctx.cr6.eq) goto loc_82470450;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// ble cr6,0x82470450
	if (!ctx.cr6.gt) goto loc_82470450;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// b 0x8247047c
	goto loc_8247047C;
loc_82470450:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8247047c
	if (ctx.cr0.eq) goto loc_8247047C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// ble cr6,0x8247047c
	if (!ctx.cr6.gt) goto loc_8247047C;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_8247047C:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824703d0
	if (ctx.cr6.lt) goto loc_824703D0;
loc_8247048C:
	// rlwinm r28,r22,2,0,29
	r28.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8247049C;
	sub_823F02B8(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// rlwinm r30,r19,2,0,29
	r30.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824704B4;
	sub_823F02B8(ctx, base);
	// mr. r18,r3
	r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// rlwinm r29,r21,2,0,29
	r29.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824704CC;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824704E4;
	sub_823F02B8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824704FC;
	sub_823F02B8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470514;
	sub_826A2E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470524;
	sub_826A2E60(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470534;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824705e8
	if (!ctx.cr6.gt) goto loc_824705E8;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_82470548:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824705d4
	if (!ctx.cr0.eq) goto loc_824705D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,132(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82470588
	if (!ctx.cr6.eq) goto loc_82470588;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82470938
	if (ctx.cr6.eq) goto loc_82470938;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r18
	REX_STORE_U32(ctx.r10.u32 + r18.u32, ctx.r11.u32);
	// b 0x824705d4
	goto loc_824705D4;
loc_82470588:
	// lwz r7,128(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 128);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824705b0
	if (!ctx.cr6.eq) goto loc_824705B0;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82470944
	if (ctx.cr6.eq) goto loc_82470944;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r20
	REX_STORE_U32(ctx.r10.u32 + r20.u32, ctx.r11.u32);
	// b 0x824705d4
	goto loc_824705D4;
loc_824705B0:
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824705d4
	if (ctx.cr0.eq) goto loc_824705D4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r11.u32);
loc_824705D4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470548
	if (ctx.cr6.lt) goto loc_82470548;
loc_824705E8:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470690
	if (ctx.cr0.eq) goto loc_82470690;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x8247068c
	if (ctx.cr6.eq) goto loc_8247068C;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_8247060C:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8247067c
	if (ctx.cr6.eq) goto loc_8247067C;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82470674
	if (ctx.cr6.eq) goto loc_82470674;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470674
	if (!ctx.cr6.gt) goto loc_82470674;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82470638:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82470660
	if (!ctx.cr6.eq) goto loc_82470660;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82470660
	if (!ctx.cr6.eq) goto loc_82470660;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_82470660:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470638
	if (ctx.cr6.lt) goto loc_82470638;
loc_82470674:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8247067C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r22.u32, ctx.xer);
	// blt cr6,0x8247060c
	if (ctx.cr6.lt) goto loc_8247060C;
loc_8247068C:
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
loc_82470690:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470710
	if (!ctx.cr6.gt) goto loc_82470710;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_824706A4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824706fc
	if (!ctx.cr6.eq) goto loc_824706FC;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824706fc
	if (ctx.cr6.eq) goto loc_824706FC;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_824706D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824706f0
	if (ctx.cr6.eq) goto loc_824706F0;
	// lwz r5,108(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 108);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824706f0
	if (!ctx.cr6.eq) goto loc_824706F0;
	// stw r9,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
loc_824706F0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824706d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824706D0;
loc_824706FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824706a4
	if (ctx.cr6.lt) goto loc_824706A4;
loc_82470710:
	// rlwinm r5,r22,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470720;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470784
	if (!ctx.cr6.gt) goto loc_82470784;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82470734:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r7,r9,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82470770
	if (ctx.cr0.eq) goto loc_82470770;
	// andi. r9,r9,516
	ctx.r9.u64 = ctx.r9.u64 & 516;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82470770
	if (!ctx.cr0.eq) goto loc_82470770;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r20
	REX_STORE_U32(ctx.r9.u32 + r20.u32, ctx.r11.u32);
loc_82470770:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470734
	if (ctx.cr6.lt) goto loc_82470734;
loc_82470784:
	// mr r25,r23
	r25.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824707bc
	if (ctx.cr6.eq) goto loc_824707BC;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_82470798:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824707b4
	if (ctx.cr6.eq) goto loc_824707B4;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824707b4
	if (!ctx.cr0.eq) goto loc_824707B4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_824707B4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82470798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82470798;
loc_824707BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246a4b8
	ctx.lr = 0x824707C4;
	sub_8246A4B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824707E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470800
	if (ctx.cr0.eq) goto loc_82470800;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247082c
	if (ctx.cr0.eq) goto loc_8247082C;
loc_82470800:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x82470808;
	sub_8245FCB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_8247082C:
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824708a8
	if (ctx.cr6.eq) goto loc_824708A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,25272
	ctx.r4.s64 = ctx.r11.s64 + 25272;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,849
	ctx.r5.s64 = 849;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824786b8
	ctx.lr = 0x82470854;
	sub_824786B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82470bf4
	if (ctx.cr6.eq) goto loc_82470BF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r23
	r30.u64 = r23.u64;
	// addi r28,r11,29032
	r28.s64 = ctx.r11.s64 + 29032;
	// addi r29,r31,404
	r29.s64 = r31.s64 + 404;
loc_82470870:
	// clrlwi r6,r30,30
	ctx.r6.u64 = r30.u32 & 0x3;
	// lfd f1,0(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r28.u32 + 0);
	// rlwinm r5,r30,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x82470888;
	sub_82478758(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82470bf4
	if (ctx.cr6.eq) goto loc_82470BF4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(r30.u32, 8, ctx.xer);
	// blt cr6,0x82470870
	if (ctx.cr6.lt) goto loc_82470870;
loc_824708A8:
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 56);
	// li r8,99
	ctx.r8.s64 = 99;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// ori r7,r7,8320
	ctx.r7.u64 = ctx.r7.u64 | 8320;
	// li r6,512
	ctx.r6.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824692a0
	ctx.lr = 0x824708C8;
	sub_824692A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// li r8,98
	ctx.r8.s64 = 98;
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r7,128
	ctx.r7.s64 = 128;
	// lwz r4,156(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r6,8704
	ctx.r6.s64 = 8704;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824692a0
	ctx.lr = 0x824708EC;
	sub_824692A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// lwz r5,64(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 64);
	// li r8,105
	ctx.r8.s64 = 105;
	// lwz r4,176(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 176);
	// li r7,128
	ctx.r7.s64 = 128;
	// ori r6,r6,512
	ctx.r6.u64 = ctx.r6.u64 | 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824692a0
	ctx.lr = 0x82470914;
	sub_824692A0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r23,264(r31)
	REX_STORE_U32(r31.u32 + 264, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470958
	if (!ctx.cr6.gt) goto loc_82470958;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8247095c
	goto loc_8247095C;
loc_82470938:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,28976
	ctx.r6.s64 = ctx.r11.s64 + 28976;
	// b 0x8247094c
	goto loc_8247094C;
loc_82470944:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,28928
	ctx.r6.s64 = ctx.r11.s64 + 28928;
loc_8247094C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824710bc
	goto loc_824710BC;
loc_82470958:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_8247095C:
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r23,256(r31)
	REX_STORE_U32(r31.u32 + 256, r23.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470978;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824709f8
	if (!ctx.cr6.gt) goto loc_824709F8;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_824709A8:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r4,r9,0,23,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x824709e8
	if (ctx.cr0.eq) goto loc_824709E8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x824709e8
	if (!ctx.cr6.eq) goto loc_824709E8;
	// rlwinm. r10,r9,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824709e4
	if (ctx.cr0.eq) goto loc_824709E4;
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824709e8
	if (ctx.cr6.eq) goto loc_824709E8;
loc_824709E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_824709E8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824709a8
	if (ctx.cr6.lt) goto loc_824709A8;
loc_824709F8:
	// rlwinm r29,r30,4,0,27
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82470A08;
	sub_823F02B8(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq 0x82470bf4
	if (ctx.cr0.eq) goto loc_82470BF4;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82470A20;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// beq 0x824710a0
	if (ctx.cr0.eq) goto loc_824710A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470A3C;
	sub_826A2E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470A4C;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470b30
	if (!ctx.cr6.gt) goto loc_82470B30;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_82470A60:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82470b1c
	if (ctx.cr0.eq) goto loc_82470B1C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82470b1c
	if (!ctx.cr6.eq) goto loc_82470B1C;
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82470b1c
	if (!ctx.cr6.eq) goto loc_82470B1C;
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82470b1c
	if (!ctx.cr0.eq) goto loc_82470B1C;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470ab8
	if (ctx.cr0.eq) goto loc_82470AB8;
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82470b1c
	if (ctx.cr6.eq) goto loc_82470B1C;
loc_82470AB8:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82470ae8
	if (ctx.cr6.eq) goto loc_82470AE8;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82470ACC:
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82470ae8
	if (ctx.cr6.eq) goto loc_82470AE8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x82470acc
	if (ctx.cr6.lt) goto loc_82470ACC;
loc_82470AE8:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82470b00
	if (!ctx.cr6.eq) goto loc_82470B00;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r9,r8,r28
	REX_STORE_U32(ctx.r8.u32 + r28.u32, ctx.r9.u32);
loc_82470B00:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r17
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r17.u32, temp.u32);
loc_82470B1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470a60
	if (ctx.cr6.lt) goto loc_82470A60;
loc_82470B30:
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82470b78
	if (ctx.cr6.eq) goto loc_82470B78;
	// mr r29,r17
	r29.u64 = r17.u64;
loc_82470B40:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x82470b40
	if (ctx.cr6.lt) goto loc_82470B40;
loc_82470B78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470bdc
	if (!ctx.cr6.gt) goto loc_82470BDC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_82470BA0:
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r5,r5,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82470bcc
	if (ctx.cr0.eq) goto loc_82470BCC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82470bcc
	if (!ctx.cr6.eq) goto loc_82470BCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82470BCC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82470ba0
	if (ctx.cr6.lt) goto loc_82470BA0;
loc_82470BDC:
	// rlwinm r29,r30,4,0,27
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82470BEC;
	sub_823F02B8(ctx, base);
	// mr. r16,r3
	r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r16.s32, 0, ctx.xer);
	// bne 0x82470c00
	if (!ctx.cr0.eq) goto loc_82470C00;
loc_82470BF4:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x824711dc
	goto loc_824711DC;
loc_82470C00:
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82470C10;
	sub_823F02B8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x824710a0
	if (ctx.cr0.eq) goto loc_824710A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470C28;
	sub_826A2E60(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82470C38;
	sub_826A2E60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82470d08
	if (!ctx.cr6.gt) goto loc_82470D08;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_82470C4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r11,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82470cf4
	if (ctx.cr0.eq) goto loc_82470CF4;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82470cf4
	if (!ctx.cr6.eq) goto loc_82470CF4;
	// lwz r9,56(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82470cf4
	if (!ctx.cr6.eq) goto loc_82470CF4;
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82470cf4
	if (ctx.cr0.eq) goto loc_82470CF4;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82470cc0
	if (ctx.cr6.eq) goto loc_82470CC0;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
loc_82470CA4:
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82470cc0
	if (ctx.cr6.eq) goto loc_82470CC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// blt cr6,0x82470ca4
	if (ctx.cr6.lt) goto loc_82470CA4;
loc_82470CC0:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// bne cr6,0x82470cd8
	if (!ctx.cr6.eq) goto loc_82470CD8;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stwx r9,r8,r14
	REX_STORE_U32(ctx.r8.u32 + r14.u32, ctx.r9.u32);
loc_82470CD8:
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfiwx f0,r11,r16
	REX_STORE_U32(ctx.r11.u32 + r16.u32, ctx.f0.u32);
loc_82470CF4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82470c4c
	if (ctx.cr6.lt) goto loc_82470C4C;
loc_82470D08:
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82470d54
	if (ctx.cr6.eq) goto loc_82470D54;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82470D1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(r27.u32, r26.u32, ctx.xer);
	// blt cr6,0x82470d1c
	if (ctx.cr6.lt) goto loc_82470D1C;
loc_82470D54:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82470d78
	if (!ctx.cr6.gt) goto loc_82470D78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,4506
	ctx.r5.s64 = 4506;
	// addi r6,r11,28892
	ctx.r6.s64 = ctx.r11.s64 + 28892;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x824710c0
	goto loc_824710C0;
loc_82470D78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824710a0
	if (ctx.cr0.lt) goto loc_824710A0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82470dbc
	if (ctx.cr6.eq) goto loc_82470DBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824710a0
	if (ctx.cr0.lt) goto loc_824710A0;
loc_82470DBC:
	// mr r27,r23
	r27.u64 = r23.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82470e20
	if (ctx.cr6.eq) goto loc_82470E20;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// subf r28,r20,r11
	r28.u64 = ctx.r11.u64 - r20.u64;
loc_82470DD8:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470e14
	if (ctx.cr6.eq) goto loc_82470E14;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82470e14
	if (!ctx.cr0.eq) goto loc_82470E14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82470e14
	if (!ctx.cr0.lt) goto loc_82470E14;
	// li r27,1
	r27.s64 = 1;
loc_82470E14:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82470dd8
	if (!ctx.cr0.eq) goto loc_82470DD8;
loc_82470E20:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470E34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82470e84
	if (ctx.cr6.eq) goto loc_82470E84;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82470E4C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470e78
	if (ctx.cr6.eq) goto loc_82470E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82470e78
	if (!ctx.cr0.lt) goto loc_82470E78;
	// li r27,1
	r27.s64 = 1;
loc_82470E78:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82470e4c
	if (!ctx.cr0.eq) goto loc_82470E4C;
loc_82470E84:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82470f28
	if (ctx.cr6.eq) goto loc_82470F28;
	// mr r30,r18
	r30.u64 = r18.u64;
	// subf r28,r18,r15
	r28.u64 = r15.u64 - r18.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
	// beq 0x82470ee4
	if (ctx.cr0.eq) goto loc_82470EE4;
loc_82470EA4:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470ed4
	if (ctx.cr6.eq) goto loc_82470ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r5,r28,r30
	ctx.r5.u64 = r28.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470EC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82470ed4
	if (!ctx.cr0.lt) goto loc_82470ED4;
	// li r27,1
	r27.s64 = 1;
loc_82470ED4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82470ea4
	if (!ctx.cr0.eq) goto loc_82470EA4;
	// b 0x82470f28
	goto loc_82470F28;
loc_82470EE4:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82470f1c
	if (ctx.cr6.eq) goto loc_82470F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82470f1c
	if (!ctx.cr0.lt) goto loc_82470F1C;
	// li r27,1
	r27.s64 = 1;
loc_82470F1C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82470ee4
	if (!ctx.cr0.eq) goto loc_82470EE4;
loc_82470F28:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x824710a0
	if (!ctx.cr6.eq) goto loc_824710A0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82470f54
	if (ctx.cr6.eq) goto loc_82470F54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_82470F54:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82470fc0
	if (ctx.cr6.eq) goto loc_82470FC0;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_82470F64:
	// lwzx r6,r8,r18
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r18.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82470fb0
	if (ctx.cr6.eq) goto loc_82470FB0;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82470fb0
	if (ctx.cr6.eq) goto loc_82470FB0;
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// subf r7,r15,r18
	ctx.r7.u64 = r18.u64 - r15.u64;
loc_82470F84:
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82470fa0
	if (ctx.cr6.eq) goto loc_82470FA0;
	// lwzx r5,r8,r15
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r15.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x824710ac
	if (ctx.cr6.eq) goto loc_824710AC;
loc_82470FA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82470f84
	if (ctx.cr6.lt) goto loc_82470F84;
loc_82470FB0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// blt cr6,0x82470f64
	if (ctx.cr6.lt) goto loc_82470F64;
loc_82470FC0:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82470fdc
	if (!ctx.cr0.eq) goto loc_82470FDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8245fcb8
	ctx.lr = 0x82470FD4;
	sub_8245FCB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_82470FDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82470FF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247100C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824710a0
	if (ctx.cr0.lt) goto loc_824710A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82471084
	if (ctx.cr0.eq) goto loc_82471084;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82471084
	if (ctx.cr6.eq) goto loc_82471084;
	// mr r30,r18
	r30.u64 = r18.u64;
	// subf r28,r18,r15
	r28.u64 = r15.u64 - r18.u64;
	// mr r29,r19
	r29.u64 = r19.u64;
loc_82471050:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82471078
	if (ctx.cr6.eq) goto loc_82471078;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82471078:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82471050
	if (!ctx.cr0.eq) goto loc_82471050;
loc_82471084:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471098;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x824710c8
	if (!ctx.cr0.lt) goto loc_824710C8;
loc_824710A0:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x824711dc
	goto loc_824711DC;
loc_824710AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,104(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 104);
	// li r5,4504
	ctx.r5.s64 = 4504;
	// addi r6,r11,28860
	ctx.r6.s64 = ctx.r11.s64 + 28860;
loc_824710BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_824710C0:
	// bl 0x82489c30
	ctx.lr = 0x824710C4;
	sub_82489C30(ctx, base);
	// b 0x824710a0
	goto loc_824710A0;
loc_824710C8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824710DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82471100
	if (ctx.cr6.eq) goto loc_82471100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246e8a8
	ctx.lr = 0x824710F8;
	sub_8246E8A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_82471100:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246ea38
	ctx.lr = 0x82471108;
	sub_8246EA38(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8247112c
	if (ctx.cr0.eq) goto loc_8247112C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8246f6a8
	ctx.lr = 0x82471124;
	sub_8246F6A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_8247112C:
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// bl 0x8246e840
	ctx.lr = 0x8247113C;
	sub_8246E840(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x8247114C;
	sub_82468DD8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82471184
	if (ctx.cr6.eq) goto loc_82471184;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82471184
	if (!ctx.cr6.eq) goto loc_82471184;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8247117C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
loc_82471184:
	// lwz r29,300(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824711d8
	if (ctx.cr6.eq) goto loc_824711D8;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 276);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82400740
	ctx.lr = 0x824711A0;
	sub_82400740(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x824711dc
	if (ctx.cr0.lt) goto loc_824711DC;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,276(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 276);
	// lwz r28,272(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824711C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824711D0;
	sub_826A1E70(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_824711D8:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_824711DC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823f0350
	ctx.lr = 0x824711E8;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823f0350
	ctx.lr = 0x824711F4;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823f0350
	ctx.lr = 0x82471200;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x823f0350
	ctx.lr = 0x8247120C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823f0350
	ctx.lr = 0x82471218;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x823f0350
	ctx.lr = 0x82471224;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x823f0350
	ctx.lr = 0x82471230;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823f0350
	ctx.lr = 0x8247123C;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x823f0350
	ctx.lr = 0x82471248;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x823f0350
	ctx.lr = 0x82471254;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// bl 0x823f0350
	ctx.lr = 0x82471260;
	sub_823F0350(ctx, base);
	// stw r23,272(r31)
	REX_STORE_U32(r31.u32 + 272, r23.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x823f0350
	ctx.lr = 0x82471270;
	sub_823F0350(ctx, base);
	// stw r23,296(r31)
	REX_STORE_U32(r31.u32 + 296, r23.u32);
	// lwz r3,436(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82471294
	if (ctx.cr6.eq) goto loc_82471294;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,436(r31)
	REX_STORE_U32(r31.u32 + 436, r23.u32);
loc_82471294:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824EACE8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x824EAD34;
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

DEFINE_REX_FUNC(sub_824EE118) {
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
	ctx.lr = 0x824EE120;
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,22852
	r27.s64 = ctx.r11.s64 + 22852;
	// addi r26,r10,-26736
	r26.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824ee168
	if (!ctx.cr6.eq) goto loc_824EE168;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE168;
	sub_824EA978(ctx, base);
loc_824EE168:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824ee18c
	if (!ctx.cr6.eq) goto loc_824EE18C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE18C;
	sub_824EA978(ctx, base);
loc_824EE18C:
	// li r4,32
	ctx.r4.s64 = 32;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x824EE19C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824ee1c0
	if (!ctx.cr0.eq) goto loc_824EE1C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26464
	ctx.r5.s64 = ctx.r11.s64 + -26464;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE1C0;
	sub_824EA978(ctx, base);
loc_824EE1C0:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825a2698
	ctx.lr = 0x824EE1E4;
	sub_825A2698(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x824ede28
	ctx.lr = 0x824EE1EC;
	sub_824EDE28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x824ee214
	if (!ctx.cr0.eq) goto loc_824EE214;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r11,-26484
	ctx.r5.s64 = ctx.r11.s64 + -26484;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EE214;
	sub_824EA978(ctx, base);
loc_824EE214:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824F2A20) {
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
	ctx.lr = 0x824F2A28;
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,22852
	r28.s64 = ctx.r11.s64 + 22852;
	// addi r27,r10,-23616
	r27.s64 = ctx.r10.s64 + -23616;
	// bne cr6,0x824f2a6c
	if (!ctx.cr6.eq) goto loc_824F2A6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23632
	ctx.r5.s64 = ctx.r11.s64 + -23632;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2A6C;
	sub_824EA978(ctx, base);
loc_824F2A6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x825a5ab8
	ctx.lr = 0x824F2A78;
	sub_825A5AB8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x824f2b50
	if (ctx.cr0.eq) goto loc_824F2B50;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x824f2aa8
	if (ctx.cr6.gt) goto loc_824F2AA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-23516
	ctx.r5.s64 = ctx.r11.s64 + -23516;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,589
	ctx.r7.s64 = 589;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2AA8;
	sub_824EA978(ctx, base);
loc_824F2AA8:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// bne 0x824f2b38
	if (!ctx.cr0.eq) goto loc_824F2B38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x825a5b98
	ctx.lr = 0x824F2AC4;
	sub_825A5B98(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,-23640
	r29.s64 = ctx.r11.s64 + -23640;
	// bne 0x824f2aec
	if (!ctx.cr0.eq) goto loc_824F2AEC;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,600
	ctx.r7.s64 = 600;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2AEC;
	sub_824EA978(ctx, base);
loc_824F2AEC:
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x825a5fa0
	ctx.lr = 0x824F2AFC;
	sub_825A5FA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824f2b1c
	if (!ctx.cr0.eq) goto loc_824F2B1C;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,608
	ctx.r7.s64 = 608;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F2B1C;
	sub_824EA978(ctx, base);
loc_824F2B1C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f2780
	ctx.lr = 0x824F2B28;
	sub_824F2780(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824f2b48
	if (ctx.cr6.eq) goto loc_824F2B48;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f2b44
	goto loc_824F2B44;
loc_824F2B38:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824f2b48
	if (ctx.cr6.eq) goto loc_824F2B48;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824F2B44:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_824F2B48:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824f2b54
	goto loc_824F2B54;
loc_824F2B50:
	// li r3,19
	ctx.r3.s64 = 19;
loc_824F2B54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824FF748) {
	REX_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x824ff5d8
	sub_824FF5D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824FF7A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ff830
	if (!ctx.cr0.eq) goto loc_824FF830;
	// lwz r10,76(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// rlwinm r8,r10,8,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x824ff830
	if (!ctx.cr6.eq) goto loc_824FF830;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824ff814
	if (ctx.cr6.eq) goto loc_824FF814;
	// xor r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r8,r8,0,6,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824ff830
	if (!ctx.cr0.eq) goto loc_824FF830;
	// lwz r8,108(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r7,108(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824ff830
	if (!ctx.cr6.eq) goto loc_824FF830;
	// lwz r8,72(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r7,72(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// rlwinm. r8,r8,0,7,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824ff830
	if (!ctx.cr0.eq) goto loc_824FF830;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824ff828
	if (!ctx.cr6.eq) goto loc_824FF828;
loc_824FF814:
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824ff828
	if (ctx.cr0.eq) goto loc_824FF828;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824ff830
	if (!ctx.cr0.eq) goto loc_824FF830;
loc_824FF828:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_824FF830:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825040B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825040d4
	if (!ctx.cr0.eq) goto loc_825040D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_825040D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82504114:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82504114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82504114;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825092A0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x825092A8;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// clrlwi r9,r4,28
	ctx.r9.u64 = ctx.r4.u32 & 0xF;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// li r26,3
	r26.s64 = 3;
	// rlwinm r28,r11,31,28,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// rlwinm. r3,r10,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// beq 0x82509338
	if (ctx.cr0.eq) goto loc_82509338;
	// addi r27,r6,44
	r27.s64 = ctx.r6.s64 + 44;
loc_825092DC:
	// lwz r30,0(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// lwz r24,12(r30)
	r24.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82509328
	if (!ctx.cr6.eq) goto loc_82509328;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cntlzw r24,r6
	r24.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r6,r30,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x3;
	// subfic r30,r24,31
	ctx.xer.ca = r24.u32 <= 31;
	r30.u64 = static_cast<uint64_t>(31) - r24.u64;
	// rlwinm r24,r6,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r6,r25,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// slw r23,r26,r24
	r23.u64 = r24.u8 & 0x20 ? 0 : (r26.u32 << (r24.u8 & 0x3F));
	// slw r30,r30,r24
	r30.u64 = r24.u8 & 0x20 ? 0 : (r30.u32 << (r24.u8 & 0x3F));
	// andc r31,r31,r23
	r31.u64 = r31.u64 & ~r23.u64;
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// or r31,r30,r31
	r31.u64 = r30.u64 | r31.u64;
loc_82509328:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x825092dc
	if (ctx.cr6.lt) goto loc_825092DC;
loc_82509338:
	// andc r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82509388
	if (ctx.cr6.eq) goto loc_82509388;
loc_82509344:
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// andc r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// andc r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r6.u64;
	// cntlzw r7,r5
	ctx.r7.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfic r7,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.u64 = static_cast<uint64_t>(31) - ctx.r7.u64;
	// subf. r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r3,31
	ctx.xer.ca = ctx.r3.u32 <= 31;
	ctx.r3.u64 = static_cast<uint64_t>(31) - ctx.r3.u64;
	// slw r5,r26,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r3,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// andc r5,r31,r5
	ctx.r5.u64 = r31.u64 & ~ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// or r31,r7,r5
	r31.u64 = ctx.r7.u64 | ctx.r5.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bne 0x82509344
	if (!ctx.cr0.eq) goto loc_82509344;
loc_82509388:
	// rlwimi r10,r4,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82509394:
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subfic r7,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// rotlw r7,r25,r7
	ctx.r7.u64 = __builtin_rotateleft32(r25.u32, ctx.r7.u8 & 0x1F);
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subf. r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r7,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r7.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bne 0x82509394
	if (!ctx.cr0.eq) goto loc_82509394;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82519798) {
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
	ctx.lr = 0x825197A0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r17,1
	r17.s64 = 1;
	// stw r5,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r5.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r6.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r17,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r17.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// blt cr6,0x8251d904
	if (ctx.cr6.lt) goto loc_8251D904;
	// clrlwi r14,r4,24
	r14.u64 = ctx.r4.u32 & 0xFF;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// b 0x825197dc
	goto loc_825197DC;
loc_825197D4:
	// lwz r14,116(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r17,1
	r17.s64 = 1;
loc_825197DC:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// bne cr6,0x82519b00
	if (!ctx.cr6.eq) goto loc_82519B00;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519974
	if (ctx.cr0.eq) goto loc_82519974;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519974
	if (!ctx.cr0.eq) goto loc_82519974;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519974
	if (ctx.cr0.eq) goto loc_82519974;
loc_8251980C:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519958
	if (!ctx.cr0.eq) goto loc_82519958;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519958
	if (ctx.cr0.eq) goto loc_82519958;
loc_82519824:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13312
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13312, ctx.xer);
	// bne cr6,0x8251993c
	if (!ctx.cr6.eq) goto loc_8251993C;
	// rlwinm. r5,r11,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8251993c
	if (ctx.cr0.eq) goto loc_8251993C;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82519858
	if (!ctx.cr6.eq) goto loc_82519858;
	// rlwinm r11,r11,0,31,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE1;
	// rlwinm r11,r11,0,18,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x8251993c
	goto loc_8251993C;
loc_82519858:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r6,44(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 44);
	// li r10,3
	ctx.r10.s64 = 3;
	// andc r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// subfic r4,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r8,r9,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// ori r10,r10,228
	ctx.r10.u64 = ctx.r10.u64 | 228;
loc_82519894:
	// slw r4,r17,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r7.u8 & 0x3F));
	// and. r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x825198a8
	if (ctx.cr0.eq) goto loc_825198A8;
	// srw r4,r8,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x825198b0
	goto loc_825198B0;
loc_825198A8:
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// srw r4,r10,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
loc_825198B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// slw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// andc r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r3.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82519894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82519894;
	// lwz r31,12(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82519918
	if (ctx.cr6.eq) goto loc_82519918;
	// rlwimi r9,r10,5,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82519904
	if (ctx.cr6.lt) goto loc_82519904;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// ble cr6,0x82519908
	if (!ctx.cr6.gt) goto loc_82519908;
loc_82519904:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82519908:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519918
	if (ctx.cr0.eq) goto loc_82519918;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250aed8
	ctx.lr = 0x82519918;
	sub_8250AED8(ctx, base);
loc_82519918:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519930
	if (!ctx.cr0.eq) goto loc_82519930;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82549518
	ctx.lr = 0x82519930;
	sub_82549518(ctx, base);
loc_82519930:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8251993C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519958
	if (!ctx.cr0.eq) goto loc_82519958;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82519824
	if (!ctx.cr6.eq) goto loc_82519824;
loc_82519958:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519974
	if (!ctx.cr0.eq) goto loc_82519974;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251980c
	if (!ctx.cr6.eq) goto loc_8251980C;
loc_82519974:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251998c
	if (ctx.cr0.eq) goto loc_8251998C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// beq 0x82519990
	if (ctx.cr0.eq) goto loc_82519990;
loc_8251998C:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82519990:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519b00
	if (ctx.cr0.eq) goto loc_82519B00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82503468
	ctx.lr = 0x825199A0;
	sub_82503468(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519b00
	if (!ctx.cr0.eq) goto loc_82519B00;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519b00
	if (ctx.cr0.eq) goto loc_82519B00;
loc_825199B8:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825199e8
	if (ctx.cr0.eq) goto loc_825199E8;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825199dc
	if (ctx.cr0.eq) goto loc_825199DC;
	// lwz r10,36(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 36);
	// addi r11,r27,32
	ctx.r11.s64 = r27.s64 + 32;
	// b 0x825199f0
	goto loc_825199F0;
loc_825199DC:
	// lwz r10,28(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r11,r27,24
	ctx.r11.s64 = r27.s64 + 24;
	// b 0x825199f0
	goto loc_825199F0;
loc_825199E8:
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 20);
	// addi r11,r27,16
	ctx.r11.s64 = r27.s64 + 16;
loc_825199F0:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82519adc
	goto loc_82519ADC;
loc_82519A08:
	// lwz r29,8(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r29,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519a84
	if (ctx.cr0.eq) goto loc_82519A84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ffb10
	ctx.lr = 0x82519A1C;
	sub_824FFB10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519a78
	if (ctx.cr0.eq) goto loc_82519A78;
	// rlwinm. r11,r29,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519a78
	if (ctx.cr0.eq) goto loc_82519A78;
	// rlwinm. r11,r29,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519a78
	if (!ctx.cr0.eq) goto loc_82519A78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_82519A38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82519a60
	if (ctx.cr6.eq) goto loc_82519A60;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82519a54
	if (!ctx.cr0.eq) goto loc_82519A54;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82519a38
	goto loc_82519A38;
loc_82519A54:
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne 0x82519a64
	if (!ctx.cr0.eq) goto loc_82519A64;
loc_82519A60:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_82519A64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519a78
	if (!ctx.cr0.eq) goto loc_82519A78;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82549518
	ctx.lr = 0x82519A78;
	sub_82549518(ctx, base);
loc_82519A78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_82519A84:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519a9c
	if (!ctx.cr0.eq) goto loc_82519A9C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82519a08
	if (!ctx.cr6.eq) goto loc_82519A08;
loc_82519A9C:
	// addi r10,r27,32
	ctx.r10.s64 = r27.s64 + 32;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82519ae4
	if (ctx.cr6.eq) goto loc_82519AE4;
	// addi r11,r27,24
	ctx.r11.s64 = r27.s64 + 24;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82519acc
	if (ctx.cr6.eq) goto loc_82519ACC;
	// lwz r9,28(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82519acc
	if (!ctx.cr0.eq) goto loc_82519ACC;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x82519ad4
	goto loc_82519AD4;
loc_82519ACC:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82519AD4:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519ae4
	if (!ctx.cr0.eq) goto loc_82519AE4;
loc_82519ADC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82519a08
	if (!ctx.cr6.eq) goto loc_82519A08;
loc_82519AE4:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519b00
	if (!ctx.cr0.eq) goto loc_82519B00;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825199b8
	if (!ctx.cr6.eq) goto loc_825199B8;
loc_82519B00:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,668(r30)
	REX_STORE_U32(r30.u32 + 668, ctx.r11.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x82519B1C;
	sub_824F7DC0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r3,708(r30)
	REX_STORE_U32(r30.u32 + 708, ctx.r3.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519c58
	if (!ctx.cr0.eq) goto loc_82519C58;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519c58
	if (ctx.cr0.eq) goto loc_82519C58;
loc_82519B38:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519b68
	if (ctx.cr0.eq) goto loc_82519B68;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82519b5c
	if (ctx.cr0.eq) goto loc_82519B5C;
	// lwz r10,36(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// b 0x82519b70
	goto loc_82519B70;
loc_82519B5C:
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// b 0x82519b70
	goto loc_82519B70;
loc_82519B68:
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
loc_82519B70:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82519c34
	goto loc_82519C34;
loc_82519B88:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r11,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82519bdc
	if (ctx.cr0.eq) goto loc_82519BDC;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r11,31,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r9,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82519bdc
	if (!ctx.cr6.lt) goto loc_82519BDC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82519BB8:
	// and. r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82519bc8
	if (ctx.cr0.eq) goto loc_82519BC8;
	// lwz r3,708(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 708);
	// stwx r10,r3,r7
	REX_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.r10.u32);
loc_82519BC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82519bb8
	if (ctx.cr6.lt) goto loc_82519BB8;
loc_82519BDC:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519bf4
	if (!ctx.cr0.eq) goto loc_82519BF4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82519b88
	if (!ctx.cr6.eq) goto loc_82519B88;
loc_82519BF4:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82519c3c
	if (ctx.cr6.eq) goto loc_82519C3C;
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82519c24
	if (ctx.cr6.eq) goto loc_82519C24;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519c24
	if (!ctx.cr0.eq) goto loc_82519C24;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x82519c2c
	goto loc_82519C2C;
loc_82519C24:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_82519C2C:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82519c3c
	if (!ctx.cr0.eq) goto loc_82519C3C;
loc_82519C34:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82519b88
	if (!ctx.cr6.eq) goto loc_82519B88;
loc_82519C3C:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519c58
	if (!ctx.cr0.eq) goto loc_82519C58;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82519b38
	if (!ctx.cr6.eq) goto loc_82519B38;
loc_82519C58:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x82519C6C;
	sub_824F7DC0(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// lwz r4,708(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 708);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// bl 0x826a1e70
	ctx.lr = 0x82519C84;
	sub_826A1E70(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// addi r19,r15,4
	r19.s64 = r15.s64 + 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r10,25928
	ctx.r6.s64 = ctx.r10.s64 + 25928;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x826a0028
	ctx.lr = 0x82519CA4;
	sub_826A0028(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r4,r11,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x824f7dc0
	ctx.lr = 0x82519CB8;
	sub_824F7DC0(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// stw r3,676(r30)
	REX_STORE_U32(r30.u32 + 676, ctx.r3.u32);
	// mr r29,r17
	r29.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82519d24
	if (!ctx.cr6.gt) goto loc_82519D24;
	// li r31,40
	r31.s64 = 40;
loc_82519CD0:
	// lwz r11,676(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 676);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r30.u32);
	// std r21,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r21.u64);
	// std r21,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, r21.u64);
	// std r21,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, r21.u64);
	// std r21,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, r21.u64);
	// lwz r11,792(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82519cfc
	if (!ctx.cr6.eq) goto loc_82519CFC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82519CFC:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82519d10
	if (!ctx.cr6.lt) goto loc_82519D10;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8251ed40
	ctx.lr = 0x82519D10;
	sub_8251ED40(ctx, base);
loc_82519D10:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82519cd0
	if (ctx.cr6.lt) goto loc_82519CD0;
loc_82519D24:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
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
	// beq cr6,0x82519e9c
	if (ctx.cr6.eq) goto loc_82519E9C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// bne 0x82519fa0
	if (!ctx.cr0.eq) goto loc_82519FA0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519fa0
	if (ctx.cr0.eq) goto loc_82519FA0;
loc_82519D70:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x82519e40
	if (!ctx.cr6.eq) goto loc_82519E40;
	// lwz r10,536(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 536);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82519e40
	if (!ctx.cr6.gt) goto loc_82519E40;
	// addi r10,r30,352
	ctx.r10.s64 = r30.s64 + 352;
loc_82519D94:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82519db8
	if (ctx.cr6.eq) goto loc_82519DB8;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 536);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82519d94
	if (ctx.cr6.lt) goto loc_82519D94;
	// b 0x82519e40
	goto loc_82519E40;
loc_82519DB8:
	// addi r11,r11,29
	ctx.r11.s64 = ctx.r11.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82519dd8
	if (!ctx.cr6.eq) goto loc_82519DD8;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// b 0x82519e40
	goto loc_82519E40;
loc_82519DD8:
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 544);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82519e20
	if (ctx.cr6.eq) goto loc_82519E20;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 536);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// addi r11,r30,348
	ctx.r11.s64 = r30.s64 + 348;
loc_82519DF4:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82519e10
	if (!ctx.cr6.eq) goto loc_82519E10;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// slw r6,r17,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
loc_82519E10:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82519df4
	if (ctx.cr6.lt) goto loc_82519DF4;
loc_82519E20:
	// rlwinm. r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82519e34
	if (ctx.cr6.eq) goto loc_82519E34;
	// beq 0x82519e3c
	if (ctx.cr0.eq) goto loc_82519E3C;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_82519E34:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// b 0x82519e40
	goto loc_82519E40;
loc_82519E3C:
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
loc_82519E40:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519e5c
	if (!ctx.cr0.eq) goto loc_82519E5C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82519d70
	if (!ctx.cr6.eq) goto loc_82519D70;
loc_82519E5C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82519e88
	if (ctx.cr6.eq) goto loc_82519E88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825187a0
	ctx.lr = 0x82519E70;
	sub_825187A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82519e88
	if (ctx.cr6.eq) goto loc_82519E88;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825187a0
	ctx.lr = 0x82519E88;
	sub_825187A0(ctx, base);
loc_82519E88:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82519fa0
	if (ctx.cr6.eq) goto loc_82519FA0;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82519f98
	goto loc_82519F98;
loc_82519E9C:
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
	// bne 0x82519fa0
	if (!ctx.cr0.eq) goto loc_82519FA0;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82519fa0
	if (ctx.cr0.eq) goto loc_82519FA0;
loc_82519EB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x82519f54
	if (!ctx.cr6.eq) goto loc_82519F54;
	// lwz r9,536(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 536);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82519f38
	if (ctx.cr6.eq) goto loc_82519F38;
	// addi r11,r30,352
	ctx.r11.s64 = r30.s64 + 352;
loc_82519EDC:
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm. r8,r8,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82519ef4
	if (ctx.cr0.eq) goto loc_82519EF4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82519f0c
	if (ctx.cr6.eq) goto loc_82519F0C;
loc_82519EF4:
	// lwz r8,536(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 536);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82519edc
	if (ctx.cr6.lt) goto loc_82519EDC;
	// b 0x82519f38
	goto loc_82519F38;
loc_82519F0C:
	// addi r11,r10,29
	ctx.r11.s64 = ctx.r10.s64 + 29;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x82519f2c
	if (!ctx.cr6.eq) goto loc_82519F2C;
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x82519f38
	goto loc_82519F38;
loc_82519F2C:
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82519f38
	if (!ctx.cr6.eq) goto loc_82519F38;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82519F38:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82519f54
	if (!ctx.cr6.eq) goto loc_82519F54;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825187a0
	ctx.lr = 0x82519F50;
	sub_825187A0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82519F54:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82519f70
	if (!ctx.cr0.eq) goto loc_82519F70;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82519eb8
	if (!ctx.cr6.eq) goto loc_82519EB8;
loc_82519F70:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82519f88
	if (ctx.cr6.eq) goto loc_82519F88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825187a0
	ctx.lr = 0x82519F88;
	sub_825187A0(ctx, base);
loc_82519F88:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82519fa0
	if (ctx.cr6.eq) goto loc_82519FA0;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
loc_82519F98:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825187a0
	ctx.lr = 0x82519FA0;
	sub_825187A0(ctx, base);
loc_82519FA0:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8251a160
	if (!ctx.cr6.gt) goto loc_8251A160;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_82519FB4:
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251a160
	if (ctx.cr6.eq) goto loc_8251A160;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82519fd8
	if (ctx.cr6.eq) goto loc_82519FD8;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x8251a06c
	if (!ctx.cr6.eq) goto loc_8251A06C;
loc_82519FD8:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// oris r10,r11,16
	ctx.r10.u64 = ctx.r11.u64 | 1048576;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r10,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// rlwinm r10,r10,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8251a06c
	if (!ctx.cr6.lt) goto loc_8251A06C;
	// mulli r7,r11,40
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_8251A004:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8251A00C:
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8251a04c
	if (ctx.cr6.eq) goto loc_8251A04C;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// lis r8,4369
	ctx.r8.s64 = 286326784;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r8,r8,4369
	ctx.r8.u64 = ctx.r8.u64 | 4369;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rldimi r8,r8,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
loc_8251A03C:
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8251a03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251A03C;
loc_8251A04C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x8251a00c
	if (ctx.cr6.lt) goto loc_8251A00C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,40
	ctx.r7.s64 = ctx.r7.s64 + 40;
	// bne 0x8251a004
	if (!ctx.cr0.eq) goto loc_8251A004;
loc_8251A06C:
	// lwz r28,4(r29)
	r28.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8251A070:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8251a14c
	if (ctx.cr6.eq) goto loc_8251A14C;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a144
	if (ctx.cr6.eq) goto loc_8251A144;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8251a144
	if (ctx.cr0.eq) goto loc_8251A144;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r9,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r9,74
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 74, ctx.xer);
	// blt cr6,0x8251a144
	if (ctx.cr6.lt) goto loc_8251A144;
	// cmpwi cr6,r9,79
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 79, ctx.xer);
	// bgt cr6,0x8251a144
	if (ctx.cr6.gt) goto loc_8251A144;
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8251a144
	if (!ctx.cr6.eq) goto loc_8251A144;
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm r9,r10,27,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// li r11,4
	ctx.r11.s64 = 4;
	// lhz r10,18(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 18);
	// lwz r8,676(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 676);
	// lis r6,4369
	ctx.r6.s64 = 286326784;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r9,r6,4369
	ctx.r9.u64 = ctx.r6.u64 | 4369;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r11,r10,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rldimi r9,r9,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldicl r8,r7,59,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u64, 59) & 0x3;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// sld r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_8251A0F8:
	// ld r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8251a0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251A0F8;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne cr6,0x8251a128
	if (!ctx.cr6.eq) goto loc_8251A128;
	// li r31,32
	r31.s64 = 32;
loc_8251A128:
	// bl 0x82516d80
	ctx.lr = 0x8251A12C;
	sub_82516D80(ctx, base);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251d938
	if (!ctx.cr6.lt) goto loc_8251D938;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
loc_8251A144:
	// lwz r28,8(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 8);
	// b 0x8251a070
	goto loc_8251A070;
loc_8251A14C:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82519fb4
	if (ctx.cr6.lt) goto loc_82519FB4;
loc_8251A160:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,63
	ctx.r10.s64 = ctx.r11.s64 + 63;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r16,r10,29,3,28
	r16.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFF8;
	// rlwinm r11,r16,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r16,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r16.u32);
	// stw r11,672(r30)
	REX_STORE_U32(r30.u32 + 672, ctx.r11.u32);
	// bl 0x824f7dc0
	ctx.lr = 0x8251A188;
	sub_824F7DC0(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// stw r3,680(r30)
	REX_STORE_U32(r30.u32 + 680, ctx.r3.u32);
	// mr r23,r17
	r23.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8251a4dc
	if (!ctx.cr6.gt) goto loc_8251A4DC;
	// mr r22,r19
	r22.u64 = r19.u64;
loc_8251A1A0:
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251a4dc
	if (ctx.cr6.eq) goto loc_8251A4DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8251A1B4;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a4c8
	if (ctx.cr0.eq) goto loc_8251A4C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251a4c8
	if (!ctx.cr0.eq) goto loc_8251A4C8;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7678
	ctx.lr = 0x8251A1D8;
	sub_824F7678(ctx, base);
	// addi r24,r3,4
	r24.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r24,1
	ctx.r11.u64 = r24.u64 | 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x8251a218
	if (!ctx.cr0.eq) goto loc_8251A218;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8251a218
	if (ctx.cr0.eq) goto loc_8251A218;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8251a224
	if (!ctx.cr6.gt) goto loc_8251A224;
loc_8251A218:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8251A224;
	sub_8251FE00(ctx, base);
loc_8251A224:
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
loc_8251A23C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a4b8
	if (!ctx.cr0.eq) goto loc_8251A4B8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251a4b8
	if (ctx.cr0.eq) goto loc_8251A4B8;
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
	// lwzx r26,r10,r4
	r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8251a2b0
	if (!ctx.cr0.eq) goto loc_8251A2B0;
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
	ctx.lr = 0x8251A2B0;
	sub_824E4308(ctx, base);
loc_8251A2B0:
	// lwz r29,8(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r29,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251a468
	if (!ctx.cr6.eq) goto loc_8251A468;
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251a23c
	if (!ctx.cr6.eq) goto loc_8251A23C;
loc_8251A2D0:
	// rlwinm. r11,r29,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a23c
	if (ctx.cr0.eq) goto loc_8251A23C;
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a3e8
	if (ctx.cr0.eq) goto loc_8251A3E8;
	// lhz r28,18(r26)
	r28.u64 = REX_LOAD_U16(r26.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A2F8;
	sub_825164C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r11,18(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 18);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A314;
	sub_825164C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8251a3e8
	if (ctx.cr6.eq) goto loc_8251A3E8;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r29,5
	ctx.r8.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(5));
loc_8251A330:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x8251a4b0
	if (!ctx.cr6.eq) goto loc_8251A4B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8251a330
	if (ctx.cr6.lt) goto loc_8251A330;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8251A36C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x8251d950
	if (ctx.cr0.eq) goto loc_8251D950;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A384;
	sub_825175C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A394;
	sub_825175C0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251a3c4
	if (!ctx.cr0.eq) goto loc_8251A3C4;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8251a3c4
	if (ctx.cr0.eq) goto loc_8251A3C4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8251a3d0
	if (!ctx.cr6.gt) goto loc_8251A3D0;
loc_8251A3C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8251A3D0;
	sub_8251FE00(ctx, base);
loc_8251A3D0:
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
loc_8251A3E8:
	// lwz r29,4(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 4);
loc_8251A3EC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251a23c
	if (ctx.cr6.eq) goto loc_8251A23C;
	// lwz r31,16(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251a460
	if (ctx.cr6.eq) goto loc_8251A460;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a460
	if (ctx.cr0.eq) goto loc_8251A460;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251a43c
	if (!ctx.cr0.eq) goto loc_8251A43C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8251a43c
	if (ctx.cr0.eq) goto loc_8251A43C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8251a448
	if (!ctx.cr6.gt) goto loc_8251A448;
loc_8251A43C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8251fe00
	ctx.lr = 0x8251A448;
	sub_8251FE00(ctx, base);
loc_8251A448:
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
loc_8251A460:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x8251a3ec
	goto loc_8251A3EC;
loc_8251A468:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8251A470;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a23c
	if (ctx.cr0.eq) goto loc_8251A23C;
	// rlwinm. r11,r29,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251a23c
	if (!ctx.cr0.eq) goto loc_8251A23C;
	// rlwinm. r11,r29,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a490
	if (ctx.cr0.eq) goto loc_8251A490;
	// lwz r31,44(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 44);
	// b 0x8251a2d0
	goto loc_8251A2D0;
loc_8251A490:
	// lwz r31,0(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 0);
loc_8251A494:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251d944
	if (ctx.cr6.eq) goto loc_8251D944;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251a2d0
	if (!ctx.cr0.eq) goto loc_8251A2D0;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8251a494
	goto loc_8251A494;
loc_8251A4B0:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x8251a36c
	goto loc_8251A36C;
loc_8251A4B8:
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// addi r11,r30,972
	ctx.r11.s64 = r30.s64 + 972;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r25,976(r30)
	REX_STORE_U32(r30.u32 + 976, r25.u32);
loc_8251A4C8:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251a1a0
	if (ctx.cr6.lt) goto loc_8251A1A0;
loc_8251A4DC:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8251a610
	if (!ctx.cr6.gt) goto loc_8251A610;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_8251A4F0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a610
	if (ctx.cr6.eq) goto loc_8251A610;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x8251a5fc
	if (!ctx.cr6.eq) goto loc_8251A5FC;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251a528
	if (ctx.cr6.eq) goto loc_8251A528;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// bne cr6,0x8251a52c
	if (!ctx.cr6.eq) goto loc_8251A52C;
loc_8251A528:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8251A52C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a5fc
	if (!ctx.cr0.eq) goto loc_8251A5FC;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm. r9,r10,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251a5fc
	if (!ctx.cr0.eq) goto loc_8251A5FC;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a5fc
	if (!ctx.cr0.eq) goto loc_8251A5FC;
	// lhz r28,18(r11)
	r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A560;
	sub_825164C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r11,18(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 18);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A57C;
	sub_825164C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// beq cr6,0x8251a5fc
	if (ctx.cr6.eq) goto loc_8251A5FC;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r29,5
	ctx.r8.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(5));
loc_8251A598:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x8251a76c
	if (!ctx.cr6.eq) goto loc_8251A76C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8251a598
	if (ctx.cr6.lt) goto loc_8251A598;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8251A5D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a5fc
	if (ctx.cr0.eq) goto loc_8251A5FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A5EC;
	sub_825175C0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A5FC;
	sub_825175C0(ctx, base);
loc_8251A5FC:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251a4f0
	if (ctx.cr6.lt) goto loc_8251A4F0;
loc_8251A610:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r18,r17
	r18.u64 = r17.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8251a914
	if (!ctx.cr6.gt) goto loc_8251A914;
loc_8251A620:
	// lwz r20,0(r19)
	r20.u64 = REX_LOAD_U32(r19.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8251a914
	if (ctx.cr6.eq) goto loc_8251A914;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251a8fc
	if (!ctx.cr6.eq) goto loc_8251A8FC;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a658
	if (ctx.cr6.eq) goto loc_8251A658;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251a65c
	if (!ctx.cr6.eq) goto loc_8251A65C;
loc_8251A658:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8251A65C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a8fc
	if (ctx.cr0.eq) goto loc_8251A8FC;
	// lwz r11,28(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 28);
	// mr r25,r21
	r25.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a8fc
	if (!ctx.cr0.eq) goto loc_8251A8FC;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251a8fc
	if (ctx.cr0.eq) goto loc_8251A8FC;
loc_8251A688:
	// cmplw cr6,r20,r22
	ctx.cr6.compare<uint32_t>(r20.u32, r22.u32, ctx.xer);
	// beq cr6,0x8251a8c4
	if (ctx.cr6.eq) goto loc_8251A8C4;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251a8c4
	if (!ctx.cr6.eq) goto loc_8251A8C4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a6bc
	if (ctx.cr6.eq) goto loc_8251A6BC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251a6c0
	if (!ctx.cr6.eq) goto loc_8251A6C0;
loc_8251A6BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251A6C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a8c4
	if (ctx.cr0.eq) goto loc_8251A8C4;
	// lhz r21,18(r20)
	r21.u64 = REX_LOAD_U16(r20.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A6D8;
	sub_825164C0(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,18(r22)
	ctx.r4.u64 = REX_LOAD_U16(r22.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8251A6E8;
	sub_825164C0(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8251a8c4
	if (ctx.cr6.eq) goto loc_8251A8C4;
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r9,r3,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5));
	// mulli r8,r23,5
	ctx.r8.s64 = static_cast<int64_t>(r23.u64 * static_cast<uint64_t>(5));
loc_8251A704:
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r10.u32);
	// ldx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// nor r7,r7,r6
	ctx.r7.u64 = ~(ctx.r7.u64 | ctx.r6.u64);
	// cmpldi cr6,r7,0
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, 0, ctx.xer);
	// bne cr6,0x8251a774
	if (!ctx.cr6.eq) goto loc_8251A774;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8251a704
	if (ctx.cr6.lt) goto loc_8251A704;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251A740:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a8c4
	if (ctx.cr0.eq) goto loc_8251A8C4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8251a780
	if (!ctx.cr6.eq) goto loc_8251A780;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251A758:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a77c
	if (ctx.cr6.eq) goto loc_8251A77C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8251a758
	goto loc_8251A758;
loc_8251A76C:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x8251a5d4
	goto loc_8251A5D4;
loc_8251A774:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x8251a740
	goto loc_8251A740;
loc_8251A77C:
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_8251A780:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251A788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251a79c
	if (ctx.cr6.eq) goto loc_8251A79C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8251a788
	goto loc_8251A788;
loc_8251A79C:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, ctx.xer);
	// bne cr6,0x8251a8c4
	if (!ctx.cr6.eq) goto loc_8251A8C4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x8251a810
	if (!ctx.cr6.eq) goto loc_8251A810;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r26,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x8251A7BC;
	sub_824F7DC0(ctx, base);
	// lwz r31,0(r20)
	r31.u64 = REX_LOAD_U32(r20.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
loc_8251A7C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251a7f8
	if (ctx.cr6.eq) goto loc_8251A7F8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A7EC;
	sub_825164C0(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r29.u32 = ea;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8251a7c8
	goto loc_8251A7C8;
loc_8251A7F8:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,25912
	ctx.r6.s64 = ctx.r11.s64 + 25912;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a0028
	ctx.lr = 0x8251A810;
	sub_826A0028(ctx, base);
loc_8251A810:
	// rlwinm r28,r26,2,0,29
	r28.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,0(r22)
	r31.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r29,r28,r25
	r29.u64 = r28.u64 + r25.u64;
	// addi r27,r29,-4
	r27.s64 = r29.s64 + -4;
loc_8251A820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251a850
	if (ctx.cr6.eq) goto loc_8251A850;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A844;
	sub_825164C0(ctx, base);
	// stwu r3,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r27.u32 = ea;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8251a820
	goto loc_8251A820;
loc_8251A850:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,25912
	ctx.r6.s64 = ctx.r11.s64 + 25912;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a0028
	ctx.lr = 0x8251A868;
	sub_826A0028(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x8251a89c
	if (ctx.cr0.eq) goto loc_8251A89C;
	// add r9,r25,r28
	ctx.r9.u64 = r25.u64 + r28.u64;
loc_8251A87C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U8(r29.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a89c
	if (!ctx.cr0.eq) goto loc_8251A89C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8251a87c
	if (!ctx.cr6.eq) goto loc_8251A87C;
loc_8251A89C:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a8c4
	if (!ctx.cr0.eq) goto loc_8251A8C4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A8B4;
	sub_825175C0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251A8C4;
	sub_825175C0(ctx, base);
loc_8251A8C4:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a8e0
	if (!ctx.cr0.eq) goto loc_8251A8E0;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251a688
	if (!ctx.cr6.eq) goto loc_8251A688;
loc_8251A8E0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x8251a8fc
	if (ctx.cr6.eq) goto loc_8251A8FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r26,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x8251A8FC;
	sub_824FFBD8(ctx, base);
loc_8251A8FC:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// li r21,0
	r21.s64 = 0;
	// blt cr6,0x8251a620
	if (ctx.cr6.lt) goto loc_8251A620;
loc_8251A914:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r22,r21
	r22.u64 = r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ab10
	if (!ctx.cr0.eq) goto loc_8251AB10;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251ab10
	if (ctx.cr0.eq) goto loc_8251AB10;
loc_8251A930:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x8251A944;
	sub_824F7DC0(ctx, base);
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x8251A95C;
	sub_824F7DC0(ctx, base);
	// stw r3,88(r25)
	REX_STORE_U32(r25.u32 + 88, ctx.r3.u32);
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a9e4
	if (!ctx.cr0.eq) goto loc_8251A9E4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251a9e4
	if (ctx.cr0.eq) goto loc_8251A9E4;
loc_8251A978:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a9c8
	if (ctx.cr0.eq) goto loc_8251A9C8;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// b 0x8251a9c0
	goto loc_8251A9C0;
loc_8251A998:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251A9A4;
	sub_825164C0(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r23.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r23
	REX_STORE_U64(ctx.r11.u32 + r23.u32, ctx.r10.u64);
loc_8251A9C0:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x8251a998
	if (ctx.cr6.lt) goto loc_8251A998;
loc_8251A9C8:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251a9e4
	if (!ctx.cr0.eq) goto loc_8251A9E4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251a978
	if (!ctx.cr6.eq) goto loc_8251A978;
loc_8251A9E4:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251a9fc
	if (ctx.cr0.eq) goto loc_8251A9FC;
	// lwz r10,36(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r11,r25,32
	ctx.r11.s64 = r25.s64 + 32;
	// b 0x8251aa04
	goto loc_8251AA04;
loc_8251A9FC:
	// lwz r10,28(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r11,r25,24
	ctx.r11.s64 = r25.s64 + 24;
loc_8251AA04:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r10
	r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251aac8
	if (ctx.cr6.eq) goto loc_8251AAC8;
loc_8251AA20:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251aa8c
	if (ctx.cr0.eq) goto loc_8251AA8C;
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm r26,r11,31,28,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// mr r27,r17
	r27.u64 = r17.u64;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r10,16,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x8251aa8c
	if (!ctx.cr6.lt) goto loc_8251AA8C;
loc_8251AA50:
	// and. r11,r27,r26
	ctx.r11.u64 = r27.u64 & r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251aa7c
	if (ctx.cr0.eq) goto loc_8251AA7C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251AA64;
	sub_825164C0(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r23
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r23.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r23
	REX_STORE_U64(ctx.r11.u32 + r23.u32, ctx.r10.u64);
loc_8251AA7C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// blt cr6,0x8251aa50
	if (ctx.cr6.lt) goto loc_8251AA50;
loc_8251AA8C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,40(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251aaa4
	if (!ctx.cr0.eq) goto loc_8251AAA4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8251aa20
	if (!ctx.cr6.eq) goto loc_8251AA20;
loc_8251AAA4:
	// addi r11,r25,32
	ctx.r11.s64 = r25.s64 + 32;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8251aac8
	if (ctx.cr6.eq) goto loc_8251AAC8;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251aac8
	if (!ctx.cr0.eq) goto loc_8251AAC8;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne 0x8251aa20
	if (!ctx.cr0.eq) goto loc_8251AA20;
loc_8251AAC8:
	// stw r23,84(r25)
	REX_STORE_U32(r25.u32 + 84, r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x8251AAE0;
	sub_824F7DC0(ctx, base);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 48);
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,80(r25)
	REX_STORE_U32(r25.u32 + 80, ctx.r3.u32);
	// rlwinm r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// clrlwi r9,r22,24
	ctx.r9.u64 = r22.u32 & 0xFF;
	// or r22,r10,r9
	r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ab10
	if (!ctx.cr0.eq) goto loc_8251AB10;
	// mr r25,r11
	r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251a930
	if (!ctx.cr6.eq) goto loc_8251A930;
loc_8251AB10:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x8251AB24;
	sub_824F7DC0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8251AB28:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r25,r21
	r25.u64 = r21.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251add4
	if (!ctx.cr0.eq) goto loc_8251ADD4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251add4
	if (ctx.cr0.eq) goto loc_8251ADD4;
loc_8251AB44:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8251AB54;
	sub_826A2E60(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// rlwinm. r11,r11,12,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251ac20
	if (!ctx.cr0.eq) goto loc_8251AC20;
	// lwz r29,12(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 12);
loc_8251AB64:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251ad34
	if (ctx.cr6.eq) goto loc_8251AD34;
	// lwz r31,0(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x82516808
	ctx.lr = 0x8251AB80;
	sub_82516808(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ac18
	if (!ctx.cr0.eq) goto loc_8251AC18;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251ac18
	if (ctx.cr0.eq) goto loc_8251AC18;
loc_8251AB98:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251abfc
	if (!ctx.cr6.eq) goto loc_8251ABFC;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8251ABC0;
	sub_8257B1B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251abfc
	if (ctx.cr0.eq) goto loc_8251ABFC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251ABE4;
	sub_825164C0(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + r26.u32, ctx.r10.u64);
loc_8251ABFC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ac18
	if (!ctx.cr0.eq) goto loc_8251AC18;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ab98
	if (!ctx.cr6.eq) goto loc_8251AB98;
loc_8251AC18:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
	// b 0x8251ab64
	goto loc_8251AB64;
loc_8251AC20:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82516400
	ctx.lr = 0x8251AC28;
	sub_82516400(ctx, base);
	// lwz r27,8(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8251AC30:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8251ad34
	if (ctx.cr6.eq) goto loc_8251AD34;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_8251AC40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251ac60
	if (ctx.cr6.eq) goto loc_8251AC60;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,11,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251ac64
	if (!ctx.cr0.eq) goto loc_8251AC64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8251ac40
	goto loc_8251AC40;
loc_8251AC60:
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8251AC64:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ad2c
	if (!ctx.cr0.eq) goto loc_8251AD2C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251ad2c
	if (ctx.cr0.eq) goto loc_8251AD2C;
loc_8251AC7C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251ad10
	if (!ctx.cr6.eq) goto loc_8251AD10;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8251ACA4;
	sub_8257B1B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8251ad10
	if (ctx.cr0.eq) goto loc_8251AD10;
	// lwz r10,48(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 48);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,40(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251ad10
	if (ctx.cr0.eq) goto loc_8251AD10;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// rlwinm r11,r9,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251ACF8;
	sub_825164C0(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + r26.u32, ctx.r10.u64);
loc_8251AD10:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251ad2c
	if (!ctx.cr0.eq) goto loc_8251AD2C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ac7c
	if (!ctx.cr6.eq) goto loc_8251AC7C;
loc_8251AD2C:
	// lwz r27,12(r27)
	r27.u64 = REX_LOAD_U32(r27.u32 + 12);
	// b 0x8251ac30
	goto loc_8251AC30;
loc_8251AD34:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r3,88(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 88);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8251AD44;
	sub_826A1E70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r4,84(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 84);
	// bl 0x82516850
	ctx.lr = 0x8251AD54;
	sub_82516850(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 80);
	// bl 0x82516808
	ctx.lr = 0x8251AD64;
	sub_82516808(ctx, base);
	// lwz r3,80(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 80);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// cmplwi r16,0
	ctx.cr0.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// beq 0x8251ada0
	if (ctx.cr0.eq) goto loc_8251ADA0;
	// add r8,r3,r16
	ctx.r8.u64 = ctx.r3.u64 + r16.u64;
loc_8251AD80:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251ada0
	if (!ctx.cr0.eq) goto loc_8251ADA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8251ad80
	if (!ctx.cr6.eq) goto loc_8251AD80;
loc_8251ADA0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8251adb8
	if (ctx.cr0.eq) goto loc_8251ADB8;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8251ADB4;
	sub_826A1E70(ctx, base);
	// mr r25,r17
	r25.u64 = r17.u64;
loc_8251ADB8:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251add4
	if (!ctx.cr0.eq) goto loc_8251ADD4;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ab44
	if (!ctx.cr6.eq) goto loc_8251AB44;
loc_8251ADD4:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251ab28
	if (!ctx.cr0.eq) goto loc_8251AB28;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251af54
	if (ctx.cr0.eq) goto loc_8251AF54;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af54
	if (!ctx.cr0.eq) goto loc_8251AF54;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251af54
	if (ctx.cr0.eq) goto loc_8251AF54;
loc_8251AE00:
	// lwz r11,40(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251af38
	if (ctx.cr0.eq) goto loc_8251AF38;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af38
	if (!ctx.cr0.eq) goto loc_8251AF38;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251af38
	if (ctx.cr0.eq) goto loc_8251AF38;
loc_8251AE28:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251af1c
	if (ctx.cr0.eq) goto loc_8251AF1C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x8251AE3C;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251af1c
	if (ctx.cr0.eq) goto loc_8251AF1C;
	// rlwinm r31,r27,0,0,30
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r21
	r28.u64 = r21.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af1c
	if (!ctx.cr0.eq) goto loc_8251AF1C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251af1c
	if (ctx.cr6.eq) goto loc_8251AF1C;
	// lwz r8,4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_8251AE68:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8251AE6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251ae98
	if (ctx.cr6.eq) goto loc_8251AE98;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251ae8c
	if (ctx.cr6.eq) goto loc_8251AE8C;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8251ae94
	if (ctx.cr6.eq) goto loc_8251AE94;
loc_8251AE8C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8251ae6c
	goto loc_8251AE6C;
loc_8251AE94:
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
loc_8251AE98:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251aeb4
	if (!ctx.cr0.eq) goto loc_8251AEB4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ae68
	if (!ctx.cr6.eq) goto loc_8251AE68;
loc_8251AEB4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8251af1c
	if (ctx.cr6.eq) goto loc_8251AF1C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,18(r29)
	ctx.r4.u64 = REX_LOAD_U16(r29.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8251AEC8;
	sub_825164C0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8251af0c
	goto loc_8251AF0C;
loc_8251AED0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8251af1c
	if (ctx.cr6.eq) goto loc_8251AF1C;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// rlwinm r9,r3,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r8,r3,58
	ctx.r8.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sld r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stdx r6,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u64);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// ldx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdx r10,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
loc_8251AF0C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af1c
	if (!ctx.cr0.eq) goto loc_8251AF1C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251aed0
	if (!ctx.cr6.eq) goto loc_8251AED0;
loc_8251AF1C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af38
	if (!ctx.cr0.eq) goto loc_8251AF38;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ae28
	if (!ctx.cr6.eq) goto loc_8251AE28;
loc_8251AF38:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251af54
	if (!ctx.cr0.eq) goto loc_8251AF54;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251ae00
	if (!ctx.cr6.eq) goto loc_8251AE00;
loc_8251AF54:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b170
	if (ctx.cr0.eq) goto loc_8251B170;
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251af98
	if (!ctx.cr0.eq) goto loc_8251AF98;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8251af98
	if (ctx.cr0.eq) goto loc_8251AF98;
loc_8251AF70:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x826a1e70
	ctx.lr = 0x8251AF80;
	sub_826A1E70(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251af98
	if (!ctx.cr0.eq) goto loc_8251AF98;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251af70
	if (!ctx.cr6.eq) goto loc_8251AF70;
loc_8251AF98:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b170
	if (!ctx.cr0.eq) goto loc_8251B170;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251b170
	if (ctx.cr0.eq) goto loc_8251B170;
loc_8251AFB0:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8251AFB8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251b154
	if (ctx.cr6.eq) goto loc_8251B154;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,48(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 48);
	// rlwinm. r9,r9,13,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251afd8
	if (!ctx.cr0.eq) goto loc_8251AFD8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8251afb8
	goto loc_8251AFB8;
loc_8251AFD8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8251AFDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251affc
	if (ctx.cr6.eq) goto loc_8251AFFC;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwinm. r10,r10,11,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b000
	if (!ctx.cr0.eq) goto loc_8251B000;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8251afdc
	goto loc_8251AFDC;
loc_8251AFFC:
	// mr r31,r21
	r31.u64 = r21.u64;
loc_8251B000:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8251B010;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b0a8
	if (!ctx.cr0.eq) goto loc_8251B0A8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251b0a8
	if (ctx.cr0.eq) goto loc_8251B0A8;
loc_8251B028:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251b08c
	if (!ctx.cr6.eq) goto loc_8251B08C;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8251B050;
	sub_8257B1B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b08c
	if (ctx.cr0.eq) goto loc_8251B08C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B074;
	sub_825164C0(ctx, base);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + r26.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r26
	REX_STORE_U64(ctx.r11.u32 + r26.u32, ctx.r10.u64);
loc_8251B08C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b0a8
	if (!ctx.cr0.eq) goto loc_8251B0A8;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251b028
	if (!ctx.cr6.eq) goto loc_8251B028;
loc_8251B0A8:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 116);
	// addi r31,r11,16
	r31.s64 = ctx.r11.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8251b0f4
	if (ctx.cr6.eq) goto loc_8251B0F4;
loc_8251B0BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251b0f4
	if (ctx.cr6.eq) goto loc_8251B0F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251b0ec
	if (!ctx.cr0.eq) goto loc_8251B0EC;
	// rlwinm. r10,r10,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251b0ec
	if (ctx.cr0.eq) goto loc_8251B0EC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r4,88(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// bl 0x82516850
	ctx.lr = 0x8251B0EC;
	sub_82516850(ctx, base);
loc_8251B0EC:
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8251b0bc
	goto loc_8251B0BC;
loc_8251B0F4:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8251B0F8:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// bl 0x82516808
	ctx.lr = 0x8251B108;
	sub_82516808(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x82516808
	ctx.lr = 0x8251B118;
	sub_82516808(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251b148
	if (!ctx.cr6.eq) goto loc_8251B148;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// beq cr6,0x8251b154
	if (ctx.cr6.eq) goto loc_8251B154;
loc_8251B12C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251b148
	if (!ctx.cr6.eq) goto loc_8251B148;
	// lwz r31,52(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251b12c
	if (!ctx.cr6.eq) goto loc_8251B12C;
	// b 0x8251b14c
	goto loc_8251B14C;
loc_8251B148:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8251B14C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251b0f8
	if (!ctx.cr6.eq) goto loc_8251B0F8;
loc_8251B154:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b170
	if (!ctx.cr0.eq) goto loc_8251B170;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251afb0
	if (!ctx.cr6.eq) goto loc_8251AFB0;
loc_8251B170:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r4,r11,r16
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(r16.s32);
	// bl 0x824f7dc0
	ctx.lr = 0x8251B184;
	sub_824F7DC0(ctx, base);
	// stw r3,684(r30)
	REX_STORE_U32(r30.u32 + 684, ctx.r3.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8251b1a0
	if (ctx.cr6.eq) goto loc_8251B1A0;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82531440
	ctx.lr = 0x8251B19C;
	sub_82531440(ctx, base);
	// b 0x8251b1b0
	goto loc_8251B1B0;
loc_8251B1A0:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82517c10
	ctx.lr = 0x8251B1B0;
	sub_82517C10(ctx, base);
loc_8251B1B0:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x8251B1C8;
	sub_824FFBD8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
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
	// bne 0x8251b35c
	if (!ctx.cr0.eq) goto loc_8251B35C;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251b35c
	if (ctx.cr0.eq) goto loc_8251B35C;
loc_8251B1F4:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8251b340
	if (!ctx.cr6.eq) goto loc_8251B340;
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 16);
	// clrlwi r23,r11,16
	r23.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7;
	// mr r31,r23
	r31.u64 = r23.u64;
	// add r25,r23,r11
	r25.u64 = r23.u64 + ctx.r11.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(r23.u32, r25.u32, ctx.xer);
	// bge cr6,0x8251b274
	if (!ctx.cr6.lt) goto loc_8251B274;
loc_8251B220:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B22C;
	sub_825164C0(ctx, base);
	// addi r29,r31,1
	r29.s64 = r31.s64 + 1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// bge cr6,0x8251b268
	if (!ctx.cr6.lt) goto loc_8251B268;
loc_8251B240:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B24C;
	sub_825164C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516d20
	ctx.lr = 0x8251B25C;
	sub_82516D20(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// blt cr6,0x8251b240
	if (ctx.cr6.lt) goto loc_8251B240;
loc_8251B268:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(r29.u32, r25.u32, ctx.xer);
	// blt cr6,0x8251b220
	if (ctx.cr6.lt) goto loc_8251B220;
loc_8251B274:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
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
	// bne 0x8251b340
	if (!ctx.cr0.eq) goto loc_8251B340;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251b340
	if (ctx.cr0.eq) goto loc_8251B340;
loc_8251B2A0:
	// cmplw cr6,r24,r22
	ctx.cr6.compare<uint32_t>(r24.u32, r22.u32, ctx.xer);
	// beq cr6,0x8251b324
	if (ctx.cr6.eq) goto loc_8251B324;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14464
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14464, ctx.xer);
	// bne cr6,0x8251b324
	if (!ctx.cr6.eq) goto loc_8251B324;
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 16);
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(r23.u32, r25.u32, ctx.xer);
	// rlwinm r11,r10,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r29,r10,16
	r29.u64 = ctx.r10.u32 & 0xFFFF;
	// bge cr6,0x8251b324
	if (!ctx.cr6.lt) goto loc_8251B324;
	// add r27,r29,r11
	r27.u64 = r29.u64 + ctx.r11.u64;
loc_8251B2D4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B2E0;
	sub_825164C0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(r29.u32, r27.u32, ctx.xer);
	// bge cr6,0x8251b318
	if (!ctx.cr6.lt) goto loc_8251B318;
loc_8251B2F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B2FC;
	sub_825164C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516d20
	ctx.lr = 0x8251B30C;
	sub_82516D20(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x8251b2f0
	if (ctx.cr6.lt) goto loc_8251B2F0;
loc_8251B318:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(r28.u32, r25.u32, ctx.xer);
	// blt cr6,0x8251b2d4
	if (ctx.cr6.lt) goto loc_8251B2D4;
loc_8251B324:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b340
	if (!ctx.cr0.eq) goto loc_8251B340;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251b2a0
	if (!ctx.cr6.eq) goto loc_8251B2A0;
loc_8251B340:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b35c
	if (!ctx.cr0.eq) goto loc_8251B35C;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251b1f4
	if (!ctx.cr6.eq) goto loc_8251B1F4;
loc_8251B35C:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stb r21,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r21.u8);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stw r21,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// ble cr6,0x8251c2e8
	if (!ctx.cr6.gt) goto loc_8251C2E8;
loc_8251B37C:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r16,r10,r15
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + r15.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8251c2e8
	if (ctx.cr6.eq) goto loc_8251C2E8;
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x8251c2d4
	if (!ctx.cr6.eq) goto loc_8251C2D4;
	// lhz r15,18(r16)
	r15.u64 = REX_LOAD_U16(r16.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B3AC;
	sub_825164C0(ctx, base);
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_8251B3B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251b3cc
	if (ctx.cr6.eq) goto loc_8251B3CC;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8251b3b8
	goto loc_8251B3B8;
loc_8251B3CC:
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// bl 0x824f7dc0
	ctx.lr = 0x8251B3E8;
	sub_824F7DC0(ctx, base);
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// add r23,r31,r3
	r23.u64 = r31.u64 + ctx.r3.u64;
	// ori r18,r11,65534
	r18.u64 = ctx.r11.u64 | 65534;
	// ori r19,r10,65535
	r19.u64 = ctx.r10.u64 | 65535;
loc_8251B400:
	// stw r21,0(r23)
	REX_STORE_U32(r23.u32 + 0, r21.u32);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,0(r16)
	r28.u64 = REX_LOAD_U32(r16.u32 + 0);
	// mr r25,r14
	r25.u64 = r14.u64;
loc_8251B410:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8251b758
	if (ctx.cr6.eq) goto loc_8251B758;
	// lwz r24,12(r28)
	r24.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r22,0(r25)
	REX_STORE_U32(r25.u32 + 0, r22.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b6ec
	if (ctx.cr0.eq) goto loc_8251B6EC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,18(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B444;
	sub_825164C0(ctx, base);
	// lwz r11,28(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 28);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251b4a4
	if (!ctx.cr0.eq) goto loc_8251B4A4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251b4a4
	if (ctx.cr0.eq) goto loc_8251B4A4;
loc_8251B464:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b48c
	if (ctx.cr0.eq) goto loc_8251B48C;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(r31.u32, r16.u32, ctx.xer);
	// beq cr6,0x8251b48c
	if (ctx.cr6.eq) goto loc_8251B48C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r4,18(r31)
	ctx.r4.u64 = REX_LOAD_U16(r31.u32 + 18);
	// bl 0x825164c0
	ctx.lr = 0x8251B484;
	sub_825164C0(ctx, base);
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8251b724
	if (ctx.cr6.eq) goto loc_8251B724;
loc_8251B48C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b4a4
	if (!ctx.cr0.eq) goto loc_8251B4A4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251b464
	if (!ctx.cr6.eq) goto loc_8251B464;
loc_8251B4A4:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516fb8
	ctx.lr = 0x8251B4B4;
	sub_82516FB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b554
	if (ctx.cr0.eq) goto loc_8251B554;
	// lwz r11,680(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 680);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,28(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 28);
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,80(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8251b4e8
	if (ctx.cr6.eq) goto loc_8251B4E8;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// bl 0x825167c0
	ctx.lr = 0x8251B4E0;
	sub_825167C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8251b510
	goto loc_8251B510;
loc_8251B4E8:
	// rlwinm r11,r26,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r26,58
	ctx.r10.u64 = r26.u64 & 0x3F;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r4.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251b50c
	if (!ctx.cr6.eq) goto loc_8251B50C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251B50C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8251B510:
	// bne 0x8251b740
	if (!ctx.cr0.eq) goto loc_8251B740;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r23,4
	ctx.r7.s64 = r23.s64 + 4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516658
	ctx.lr = 0x8251B530;
	sub_82516658(ctx, base);
	// lwz r10,28(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 28);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// lwz r10,68(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r19.u32, ctx.xer);
	// ble cr6,0x8251b550
	if (!ctx.cr6.gt) goto loc_8251B550;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8251B550:
	// stw r11,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r11.u32);
loc_8251B554:
	// lwz r29,0(r16)
	r29.u64 = REX_LOAD_U32(r16.u32 + 0);
	// addi r27,r14,4
	r27.s64 = r14.s64 + 4;
loc_8251B55C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251b6ec
	if (ctx.cr6.eq) goto loc_8251B6EC;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x8251b6ec
	if (ctx.cr6.eq) goto loc_8251B6EC;
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b6e0
	if (ctx.cr0.eq) goto loc_8251B6E0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B594;
	sub_825164C0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516fb8
	ctx.lr = 0x8251B5A4;
	sub_82516FB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b6e0
	if (ctx.cr0.eq) goto loc_8251B6E0;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// beq cr6,0x8251b5cc
	if (ctx.cr6.eq) goto loc_8251B5CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x8251b64c
	if (!ctx.cr6.eq) goto loc_8251B64C;
loc_8251B5CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x8251b610
	if (!ctx.cr6.eq) goto loc_8251B610;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b6fc
	if (!ctx.cr0.eq) goto loc_8251B6FC;
loc_8251B610:
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// bne cr6,0x8251b64c
	if (!ctx.cr6.eq) goto loc_8251B64C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,28(r24)
	ctx.r9.u64 = REX_LOAD_U32(r24.u32 + 28);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b6fc
	if (!ctx.cr0.eq) goto loc_8251B6FC;
loc_8251B64C:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// rlwinm r10,r5,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r5,58
	ctx.r9.u64 = ctx.r5.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r9.u8 & 0x7F));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ldx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251b678
	if (!ctx.cr6.eq) goto loc_8251B678;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251B678:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b688
	if (ctx.cr0.eq) goto loc_8251B688;
	// stw r18,0(r27)
	REX_STORE_U32(r27.u32 + 0, r18.u32);
	// b 0x8251b6e0
	goto loc_8251B6E0;
loc_8251B688:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r26,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r26,58
	ctx.r9.u64 = r26.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r9.u8 & 0x7F));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// ldx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251b6b4
	if (!ctx.cr6.eq) goto loc_8251B6B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251B6B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b6c4
	if (ctx.cr0.eq) goto loc_8251B6C4;
	// stw r18,4(r25)
	REX_STORE_U32(r25.u32 + 4, r18.u32);
	// b 0x8251b6e0
	goto loc_8251B6E0;
loc_8251B6C4:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r25,4
	ctx.r7.s64 = r25.s64 + 4;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516658
	ctx.lr = 0x8251B6E0;
	sub_82516658(ctx, base);
loc_8251B6E0:
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// b 0x8251b55c
	goto loc_8251B55C;
loc_8251B6EC:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// b 0x8251b410
	goto loc_8251B410;
loc_8251B6FC:
	// cmplwi cr6,r10,116
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 116, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x8251b714
	if (ctx.cr6.eq) goto loc_8251B714;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8251B714:
	// bl 0x8250b470
	ctx.lr = 0x8251B718;
	sub_8250B470(ctx, base);
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// addi r23,r23,-8
	r23.s64 = r23.s64 + -8;
	// b 0x8251b400
	goto loc_8251B400;
loc_8251B724:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8251b758
	if (ctx.cr6.eq) goto loc_8251B758;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_8251B734:
	// stwu r19,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8251b734
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251B734;
	// b 0x8251b758
	goto loc_8251B758;
loc_8251B740:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8251b758
	if (ctx.cr6.eq) goto loc_8251B758;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_8251B750:
	// stwu r19,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r19.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8251b750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251B750;
loc_8251B758:
	// addic. r8,r21,1
	ctx.xer.ca = r21.u32 > 4294967294;
	ctx.r8.s64 = r21.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq 0x8251d958
	if (ctx.cr0.eq) goto loc_8251D958;
	// addi r11,r14,4
	ctx.r11.s64 = r14.s64 + 4;
loc_8251B770:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8251b784
	if (!ctx.cr6.lt) goto loc_8251B784;
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8251B784:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8251b770
	if (ctx.cr6.lt) goto loc_8251B770;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// beq cr6,0x8251d958
	if (ctx.cr6.eq) goto loc_8251D958;
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r21.u32, ctx.xer);
	// beq cr6,0x8251b7e8
	if (ctx.cr6.eq) goto loc_8251B7E8;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251B7AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251b7c8
	if (ctx.cr6.eq) goto loc_8251B7C8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8251b7c8
	if (ctx.cr6.eq) goto loc_8251B7C8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x8251b7ac
	goto loc_8251B7AC;
loc_8251B7C8:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r11,18(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B7E4;
	sub_825164C0(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_8251B7E8:
	// li r17,0
	r17.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_8251B7F0:
	// lwz r19,0(r16)
	r19.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8251B7F4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8251c148
	if (ctx.cr6.eq) goto loc_8251C148;
	// lwz r23,12(r19)
	r23.u64 = REX_LOAD_U32(r19.u32 + 12);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251b878
	if (ctx.cr0.eq) goto loc_8251B878;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,18(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251B828;
	sub_825164C0(ctx, base);
	// clrlwi. r18,r17,24
	r18.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r18.s32, 0, ctx.xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bne 0x8251b83c
	if (!ctx.cr0.eq) goto loc_8251B83C;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// beq cr6,0x8251b878
	if (ctx.cr6.eq) goto loc_8251B878;
loc_8251B83C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// bne cr6,0x8251b880
	if (!ctx.cr6.eq) goto loc_8251B880;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516fb8
	ctx.lr = 0x8251B854;
	sub_82516FB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b880
	if (!ctx.cr0.eq) goto loc_8251B880;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251B868;
	sub_825175C0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251B878;
	sub_825175C0(ctx, base);
loc_8251B878:
	// lwz r19,4(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 4);
	// b 0x8251b7f4
	goto loc_8251B7F4;
loc_8251B880:
	// lwz r21,28(r16)
	r21.u64 = REX_LOAD_U32(r16.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r22,0
	r22.s64 = 0;
	// bl 0x824ff838
	ctx.lr = 0x8251B898;
	sub_824FF838(ctx, base);
	// b 0x8251c110
	goto loc_8251C110;
loc_8251B89C:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8257b1b8
	ctx.lr = 0x8251B8B4;
	sub_8257B1B8(ctx, base);
	// cmplw cr6,r19,r3
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8251c110
	if (!ctx.cr6.eq) goto loc_8251C110;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251b900
	if (ctx.cr6.eq) goto loc_8251B900;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 28);
	// clrlwi r9,r11,13
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r9,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251bf0c
	if (!ctx.cr0.eq) goto loc_8251BF0C;
	// lwz r25,180(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// b 0x8251bf0c
	goto loc_8251BF0C;
loc_8251B900:
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 48);
	// rlwinm. r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251bf0c
	if (!ctx.cr0.eq) goto loc_8251BF0C;
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251bf0c
	if (!ctx.cr0.eq) goto loc_8251BF0C;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251b930
	if (ctx.cr6.eq) goto loc_8251B930;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// bne cr6,0x8251b934
	if (!ctx.cr6.eq) goto loc_8251B934;
loc_8251B930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251B934:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251bf0c
	if (ctx.cr0.eq) goto loc_8251BF0C;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b968
	if (!ctx.cr0.eq) goto loc_8251B968;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r24,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r24.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8251b968
	if (ctx.cr0.eq) goto loc_8251B968;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f6f80
	ctx.lr = 0x8251B960;
	sub_824F6F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251b994
	if (!ctx.cr0.eq) goto loc_8251B994;
loc_8251B968:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251d97c
	if (!ctx.cr0.eq) goto loc_8251D97C;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r24,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r24.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x8251d97c
	if (ctx.cr0.eq) goto loc_8251D97C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f6f80
	ctx.lr = 0x8251B98C;
	sub_824F6F80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d97c
	if (ctx.cr0.eq) goto loc_8251D97C;
loc_8251B994:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// beq cr6,0x8251bf04
	if (ctx.cr6.eq) goto loc_8251BF04;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8251bf04
	if (ctx.cr6.eq) goto loc_8251BF04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffcc0
	ctx.lr = 0x8251B9B4;
	sub_824FFCC0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r11,r10,0,0,3
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000) | (ctx.r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 48);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251bdb0
	if (ctx.cr0.eq) goto loc_8251BDB0;
	// lwz r29,8(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r29,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 18) & 0x7;
	// rlwinm r5,r29,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 13) & 0x7;
	// rlwinm r4,r29,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8251B9F0;
	sub_824F71B8(ctx, base);
	// addi r11,r24,-16
	ctx.r11.s64 = r24.s64 + -16;
	// rlwinm r26,r29,14,31,31
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 14) & 0x1;
	// lwzx r28,r3,r11
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(r28.u32, r21.u32, ctx.xer);
	// beq cr6,0x8251ba10
	if (ctx.cr6.eq) goto loc_8251BA10;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8251BA10:
	// rlwinm. r11,r29,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r27,r25
	r27.u64 = r25.u64;
	// beq 0x8251bc84
	if (ctx.cr0.eq) goto loc_8251BC84;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824ff9c0
	ctx.lr = 0x8251BA24;
	sub_824FF9C0(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8251ba44
	if (ctx.cr6.lt) goto loc_8251BA44;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8251ba48
	if (!ctx.cr6.gt) goto loc_8251BA48;
loc_8251BA44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251BA48:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251bc24
	if (ctx.cr0.eq) goto loc_8251BC24;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// bne cr6,0x8251bc24
	if (!ctx.cr6.eq) goto loc_8251BC24;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r26,1
	r26.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8251BA68:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8251bad4
	if (ctx.cr6.eq) goto loc_8251BAD4;
	// lwz r10,16(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251bacc
	if (ctx.cr6.eq) goto loc_8251BACC;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14336
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14336, ctx.xer);
	// bne cr6,0x8251bacc
	if (!ctx.cr6.eq) goto loc_8251BACC;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_8251BA90:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8251bac4
	if (ctx.cr6.eq) goto loc_8251BAC4;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251bab8
	if (ctx.cr6.eq) goto loc_8251BAB8;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r6,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x8251bac0
	if (ctx.cr6.eq) goto loc_8251BAC0;
loc_8251BAB8:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8251ba90
	goto loc_8251BA90;
loc_8251BAC0:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_8251BAC4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8251badc
	if (!ctx.cr6.eq) goto loc_8251BADC;
loc_8251BACC:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x8251ba68
	goto loc_8251BA68;
loc_8251BAD4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8251d964
	if (ctx.cr6.eq) goto loc_8251D964;
loc_8251BADC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r8,63
	ctx.r8.s64 = 63;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwimi r10,r8,7,18,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x3F80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC07F);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r28,12(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x825bb908
	ctx.lr = 0x8251BB04;
	sub_825BB908(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8251BB10;
	sub_8250AD28(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// rlwimi r9,r11,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r11,18(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 18);
	// stw r10,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r10.u32);
	// sth r11,18(r29)
	REX_STORE_U16(r29.u32 + 18, ctx.r11.u16);
	// bl 0x825bb860
	ctx.lr = 0x8251BB50;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x8251BB60;
	sub_8250AB60(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82503360
	ctx.lr = 0x8251BB70;
	sub_82503360(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// beq 0x8251bbc4
	if (ctx.cr0.eq) goto loc_8251BBC4;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x8251bbf0
	goto loc_8251BBF0;
loc_8251BBC4:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
loc_8251BBF0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ff758
	ctx.lr = 0x8251BC04;
	sub_824FF758(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250aed8
	ctx.lr = 0x8251BC0C;
	sub_8250AED8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
loc_8251BC24:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r10,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r25,112(r31)
	REX_STORE_U32(r31.u32 + 112, r25.u32);
	// oris r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 | 8388608;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251bd50
	if (ctx.cr0.eq) goto loc_8251BD50;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r29,72(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 72);
	// rlwinm r28,r11,7,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// bl 0x825163b8
	ctx.lr = 0x8251BC64;
	sub_825163B8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r28,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r29,72(r31)
	REX_STORE_U32(r31.u32 + 72, r29.u32);
	// oris r10,r10,384
	ctx.r10.u64 = ctx.r10.u64 | 25165824;
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// b 0x8251bd48
	goto loc_8251BD48;
loc_8251BC84:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r29,44(r24)
	r29.u64 = REX_LOAD_U32(r24.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bb860
	ctx.lr = 0x8251BCA4;
	sub_825BB860(ctx, base);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x8250ad28
	ctx.lr = 0x8251BCF0;
	sub_8250AD28(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r25,108(r31)
	REX_STORE_U32(r31.u32 + 108, r25.u32);
	// rlwimi r11,r10,25,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// oris r10,r9,384
	ctx.r10.u64 = ctx.r9.u64 | 25165824;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251bd50
	if (ctx.cr0.eq) goto loc_8251BD50;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r29,r11,9,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// bl 0x824f70d8
	ctx.lr = 0x8251BD30;
	sub_824F70D8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r29,23,8,8
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 23) & 0x800000) | (ctx.r11.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
loc_8251BD48:
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_8251BD50:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// rlwinm. r11,r11,5,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251bd94
	if (ctx.cr0.eq) goto loc_8251BD94;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
loc_8251BD94:
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 48);
	// oris r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 134217728;
	// stw r11,48(r27)
	REX_STORE_U32(r27.u32 + 48, ctx.r11.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// b 0x8251be04
	goto loc_8251BE04;
loc_8251BDB0:
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251d970
	if (!ctx.cr0.eq) goto loc_8251D970;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251bdd0
	if (ctx.cr0.eq) goto loc_8251BDD0;
	// li r27,0
	r27.s64 = 0;
	// b 0x8251bdd8
	goto loc_8251BDD8;
loc_8251BDD0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r27,r11,-4
	r27.s64 = ctx.r11.s64 + -4;
loc_8251BDD8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8251BE04:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825c69a0
	ctx.lr = 0x8251BE14;
	sub_825C69A0(ctx, base);
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r4,172(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// bl 0x825c67a8
	ctx.lr = 0x8251BE34;
	sub_825C67A8(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x8251BE4C;
	sub_824F71B8(ctx, base);
	// addi r11,r24,-16
	ctx.r11.s64 = r24.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x8251bee0
	if (!ctx.cr6.eq) goto loc_8251BEE0;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(r27.u32, r25.u32, ctx.xer);
	// bne cr6,0x8251bee0
	if (!ctx.cr6.eq) goto loc_8251BEE0;
	// lwz r8,8(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r10,r8,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,11520
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11520, ctx.xer);
	// bne cr6,0x8251bee0
	if (!ctx.cr6.eq) goto loc_8251BEE0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251be9c
	if (!ctx.cr0.eq) goto loc_8251BE9C;
	// rlwinm r10,r10,30,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x8251bee0
	if (ctx.cr6.eq) goto loc_8251BEE0;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// beq cr6,0x8251bee0
	if (ctx.cr6.eq) goto loc_8251BEE0;
loc_8251BE9C:
	// lwz r9,12(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 12);
loc_8251BEA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8251bebc
	if (ctx.cr6.eq) goto loc_8251BEBC;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// bne cr6,0x8251bec0
	if (!ctx.cr6.eq) goto loc_8251BEC0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8251bea0
	goto loc_8251BEA0;
loc_8251BEBC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251BEC0:
	// not r9,r8
	ctx.r9.u64 = ~ctx.r8.u64;
	// rlwimi r9,r8,0,14,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r9.u64 & 0x40000);
	// stw r9,8(r24)
	REX_STORE_U32(r24.u32 + 8, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8251BEE0:
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 88);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r11,84(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r25,r31
	r25.u64 = r31.u64;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// bl 0x8257dfd8
	ctx.lr = 0x8251BEFC;
	sub_8257DFD8(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// b 0x8251bf0c
	goto loc_8251BF0C;
loc_8251BF04:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8251c140
	if (ctx.cr6.eq) goto loc_8251C140;
loc_8251BF0C:
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251bf44
	if (ctx.cr0.eq) goto loc_8251BF44;
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 0);
loc_8251BF18:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8251bf44
	if (ctx.cr6.eq) goto loc_8251BF44;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251bf3c
	if (!ctx.cr0.eq) goto loc_8251BF3C;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// beq cr6,0x8251c110
	if (ctx.cr6.eq) goto loc_8251C110;
loc_8251BF3C:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8251bf18
	goto loc_8251BF18;
loc_8251BF44:
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250ad28
	ctx.lr = 0x8251BF50;
	sub_8250AD28(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x8251c020
	if (!ctx.cr6.eq) goto loc_8251C020;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8251bf7c
	if (ctx.cr6.lt) goto loc_8251BF7C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// ble cr6,0x8251bf80
	if (!ctx.cr6.gt) goto loc_8251BF80;
loc_8251BF7C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251BF80:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c020
	if (ctx.cr0.eq) goto loc_8251C020;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825171e0
	ctx.lr = 0x8251BF98;
	sub_825171E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c020
	if (ctx.cr0.eq) goto loc_8251C020;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r10,16(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 16);
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// lwz r9,708(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 708);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r11,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E;
	// andc r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3E0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r8,r11,7296
	ctx.r8.u64 = ctx.r11.u64 | 7296;
	// stwx r23,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r23.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | ctx.r11.u64;
	// rlwinm r11,r10,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// rlwimi r11,r10,0,18,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF) | (ctx.r11.u64 & 0x1C000);
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x8251c10c
	goto loc_8251C10C;
loc_8251C020:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r28,r25,24
	r28.s64 = r25.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251c080
	if (!ctx.cr0.eq) goto loc_8251C080;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8251c074
	goto loc_8251C074;
loc_8251C038:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82504458
	ctx.lr = 0x8251C040;
	sub_82504458(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c064
	if (ctx.cr0.eq) goto loc_8251C064;
	// lwz r11,48(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c134
	if (ctx.cr0.eq) goto loc_8251C134;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6e38
	ctx.lr = 0x8251C05C;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c134
	if (ctx.cr0.eq) goto loc_8251C134;
loc_8251C064:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251c080
	if (!ctx.cr0.eq) goto loc_8251C080;
loc_8251C074:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8251c038
	if (!ctx.cr0.eq) goto loc_8251C038;
loc_8251C080:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8251C088:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c0b40
	ctx.lr = 0x8251C098;
	sub_825C0B40(ctx, base);
	// lwz r11,28(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// lwz r31,12(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 12);
	// beq cr6,0x8251c0f0
	if (ctx.cr6.eq) goto loc_8251C0F0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8251C0B8;
	sub_8254A0E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254a0e8
	ctx.lr = 0x8251C0CC;
	sub_8254A0E8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251c0f0
	if (!ctx.cr0.eq) goto loc_8251C0F0;
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r27,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// sth r20,18(r29)
	REX_STORE_U16(r29.u32 + 18, r20.u16);
	// stw r10,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r10.u32);
loc_8251C0F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r27,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// sth r20,18(r31)
	REX_STORE_U16(r31.u32 + 18, r20.u16);
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
loc_8251C10C:
	// mr r22,r27
	r22.u64 = r27.u64;
loc_8251C110:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x824ff888
	ctx.lr = 0x8251C118;
	sub_824FF888(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x8251b89c
	if (!ctx.cr0.eq) goto loc_8251B89C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x8250b470
	ctx.lr = 0x8251C130;
	sub_8250B470(ctx, base);
	// b 0x8251b7f0
	goto loc_8251B7F0;
loc_8251C134:
	// rlwimi r31,r27,0,30,31
	r31.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3) | (r31.u64 & 0xFFFFFFFFFFFFFFFC);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8251c088
	goto loc_8251C088;
loc_8251C140:
	// mr r17,r27
	r17.u64 = r27.u64;
	// b 0x8251b7f0
	goto loc_8251B7F0;
loc_8251C148:
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C154;
	sub_825164C0(ctx, base);
	// clrlwi. r11,r17,24
	ctx.r11.u64 = r17.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bne 0x8251c168
	if (!ctx.cr0.eq) goto loc_8251C168;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// beq cr6,0x8251c2b0
	if (ctx.cr6.eq) goto loc_8251C2B0;
loc_8251C168:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251c1a8
	if (!ctx.cr6.eq) goto loc_8251C1A8;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516fb8
	ctx.lr = 0x8251C180;
	sub_82516FB8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251c1a8
	if (!ctx.cr0.eq) goto loc_8251C1A8;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251C194;
	sub_825175C0(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825175c0
	ctx.lr = 0x8251C1A4;
	sub_825175C0(ctx, base);
	// b 0x8251c2b0
	goto loc_8251C2B0;
loc_8251C1A8:
	// lwz r31,28(r16)
	r31.u64 = REX_LOAD_U32(r16.u32 + 28);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
	// bl 0x825c1b38
	ctx.lr = 0x8251C1C8;
	sub_825C1B38(ctx, base);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r15,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r7,r27,16,13,15
	ctx.r7.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x70000) | (ctx.r7.u64 & 0xFFFFFFFFFFF8FFFF);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// oris r6,r6,128
	ctx.r6.u64 = ctx.r6.u64 | 8388608;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// sth r15,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r15.u16);
	// lwz r10,708(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 708);
	// stwx r3,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r3,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r3.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,684(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 684);
	// lwz r9,672(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 672);
	// mullw r9,r29,r9
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x8251c2a4
	if (!ctx.cr0.eq) goto loc_8251C2A4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251c2a4
	if (ctx.cr0.eq) goto loc_8251C2A4;
loc_8251C22C:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8251c288
	if (!ctx.cr6.eq) goto loc_8251C288;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
loc_8251C240:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8251c288
	if (ctx.cr6.eq) goto loc_8251C288;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251c280
	if (ctx.cr0.eq) goto loc_8251C280;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r11,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// sld r11,r27,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (r27.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r9.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stdx r11,r10,r9
	REX_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u64);
loc_8251C280:
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8251c240
	goto loc_8251C240;
loc_8251C288:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251c2a4
	if (!ctx.cr0.eq) goto loc_8251C2A4;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251c22c
	if (!ctx.cr6.eq) goto loc_8251C22C;
loc_8251C2A4:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
loc_8251C2B0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824ffbd8
	ctx.lr = 0x8251C2C4;
	sub_824FFBD8(ctx, base);
	// lwz r15,108(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r17,1
	r17.s64 = 1;
	// li r21,0
	r21.s64 = 0;
loc_8251C2D4:
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8251b37c
	if (ctx.cr6.lt) goto loc_8251B37C;
loc_8251C2E8:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,63
	ctx.r11.s64 = ctx.r11.s64 + 63;
	// rlwinm r4,r11,29,3,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x8251C304;
	sub_824F7DC0(ctx, base);
	// stw r3,692(r30)
	REX_STORE_U32(r30.u32 + 692, ctx.r3.u32);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x824f7dc0
	ctx.lr = 0x8251C31C;
	sub_824F7DC0(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// stw r3,688(r30)
	REX_STORE_U32(r30.u32 + 688, ctx.r3.u32);
	// stw r21,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r17,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r17.u32);
	// ble cr6,0x8251d4c0
	if (!ctx.cr6.gt) goto loc_8251D4C0;
loc_8251C334:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r16,r11,r10
	r16.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r15,0(r16)
	r15.u64 = REX_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8251d4c0
	if (ctx.cr6.eq) goto loc_8251D4C0;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x8251c3b0
	if (!ctx.cr6.eq) goto loc_8251C3B0;
	// lhz r31,18(r15)
	r31.u64 = REX_LOAD_U16(r15.u32 + 18);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C370;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8251d4a8
	if (!ctx.cr6.eq) goto loc_8251D4A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517b10
	ctx.lr = 0x8251C390;
	sub_82517B10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517340
	ctx.lr = 0x8251C3AC;
	sub_82517340(ctx, base);
	// b 0x8251d4a8
	goto loc_8251D4A8;
loc_8251C3B0:
	// lwz r10,16(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 16);
	// rlwinm r20,r11,31,28,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r19,r10,16,29,31
	r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// clrlwi r14,r10,16
	r14.u64 = ctx.r10.u32 & 0xFFFF;
	// add r17,r14,r19
	r17.u64 = r14.u64 + r19.u64;
loc_8251C3C8:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r21,1
	r21.s64 = 1;
	// mr r26,r14
	r26.u64 = r14.u64;
	// cmplw cr6,r14,r17
	ctx.cr6.compare<uint32_t>(r14.u32, r17.u32, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bge cr6,0x8251c530
	if (!ctx.cr6.lt) goto loc_8251C530;
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
loc_8251C3EC:
	// and. r11,r21,r20
	ctx.r11.u64 = r21.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c518
	if (ctx.cr0.eq) goto loc_8251C518;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C400;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// mr r31,r14
	r31.u64 = r14.u64;
	// li r27,0
	r27.s64 = 0;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r29,0
	r29.s64 = 0;
loc_8251C420:
	// and. r11,r24,r20
	ctx.r11.u64 = r24.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c500
	if (ctx.cr0.eq) goto loc_8251C500;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(r26.u32, r31.u32, ctx.xer);
	// beq cr6,0x8251c500
	if (ctx.cr6.eq) goto loc_8251C500;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C43C;
	sub_825164C0(ctx, base);
	// lwz r10,688(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwzx r4,r9,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// beq cr6,0x8251c488
	if (ctx.cr6.eq) goto loc_8251C488;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251c47c
	if (ctx.cr6.eq) goto loc_8251C47C;
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8251c4b4
	if (ctx.cr6.eq) goto loc_8251C4B4;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825196c8
	ctx.lr = 0x8251C478;
	sub_825196C8(ctx, base);
	// b 0x8251c4a0
	goto loc_8251C4A0;
loc_8251C47C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8251c498
	goto loc_8251C498;
loc_8251C488:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251c4b0
	if (ctx.cr6.eq) goto loc_8251C4B0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8251C498:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82518aa8
	ctx.lr = 0x8251C4A0;
	sub_82518AA8(ctx, base);
loc_8251C4A0:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x8251c4b4
	goto loc_8251C4B4;
loc_8251C4B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251C4B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c500
	if (ctx.cr0.eq) goto loc_8251C500;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// rlwinm r10,r23,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r23,27
	ctx.r9.u64 = r23.u32 & 0x1F;
	// slw r7,r8,r27
	ctx.r7.u64 = r27.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r27.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 | ctx.r6.u64;
	// rlwinm r9,r29,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFFC;
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// slw r8,r8,r22
	ctx.r8.u64 = r22.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r22.u8 & 0x3F));
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8251C500:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// rlwinm r24,r24,1,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r17
	ctx.cr6.compare<uint32_t>(r31.u32, r17.u32, ctx.xer);
	// blt cr6,0x8251c420
	if (ctx.cr6.lt) goto loc_8251C420;
loc_8251C518:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// rlwinm r21,r21,1,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r26,r17
	ctx.cr6.compare<uint32_t>(r26.u32, r17.u32, ctx.xer);
	// blt cr6,0x8251c3ec
	if (ctx.cr6.lt) goto loc_8251C3EC;
loc_8251C530:
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x8251c5d8
	if (ctx.cr6.eq) goto loc_8251C5D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r19
	ctx.ctr.u64 = r19.u64;
loc_8251C554:
	// and. r10,r7,r20
	ctx.r10.u64 = ctx.r7.u64 & r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251c5c8
	if (ctx.cr0.eq) goto loc_8251C5C8;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwinm r5,r11,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r31,r11,27
	r31.u64 = ctx.r11.u32 & 0x1F;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// slw r4,r6,r31
	ctx.r4.u64 = r31.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r31.u8 & 0x3F));
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// lis r5,-28311
	ctx.r5.s64 = -1855389696;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r5,r5,5192
	ctx.r5.u64 = ctx.r5.u64 | 5192;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// ori r4,r3,36262
	ctx.r4.u64 = ctx.r3.u64 | 36262;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// srd r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// srd r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r10.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8251c5c8
	if (!ctx.cr6.lt) goto loc_8251C5C8;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
loc_8251C5C8:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x8251c554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251C554;
loc_8251C5D8:
	// add r28,r29,r14
	r28.u64 = r29.u64 + r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C5E8;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251c630
	if (!ctx.cr6.eq) goto loc_8251C630;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517b10
	ctx.lr = 0x8251C604;
	sub_82517B10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C614;
	sub_825164C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82517340
	ctx.lr = 0x8251C630;
	sub_82517340(ctx, base);
loc_8251C630:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r29,31,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r7,r29,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x1C;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// andc. r27,r20,r11
	r27.u64 = r20.u64 & ~ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8251c73c
	if (ctx.cr0.eq) goto loc_8251C73C;
loc_8251C674:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andc r29,r27,r11
	r29.u64 = r27.u64 & ~ctx.r11.u64;
	// cntlzw r11,r29
	ctx.r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// subf r27,r29,r27
	r27.u64 = r27.u64 - r29.u64;
	// subf r11,r11,r14
	ctx.r11.u64 = r14.u64 - ctx.r11.u64;
	// addi r26,r11,31
	r26.s64 = ctx.r11.s64 + 31;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C698;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(r28.u32, r31.u32, ctx.xer);
	// beq cr6,0x8251c730
	if (ctx.cr6.eq) goto loc_8251C730;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8251c704
	if (ctx.cr6.eq) goto loc_8251C704;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x825196c8
	ctx.lr = 0x8251C6C8;
	sub_825196C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c734
	if (ctx.cr0.eq) goto loc_8251C734;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82519470
	ctx.lr = 0x8251C6FC;
	sub_82519470(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8251c730
	goto loc_8251C730;
loc_8251C704:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82518aa8
	ctx.lr = 0x8251C710;
	sub_82518AA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c734
	if (ctx.cr0.eq) goto loc_8251C734;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82518178
	ctx.lr = 0x8251C730;
	sub_82518178(ctx, base);
loc_8251C730:
	// subf r20,r29,r20
	r20.u64 = r20.u64 - r29.u64;
loc_8251C734:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8251c674
	if (!ctx.cr6.eq) goto loc_8251C674;
loc_8251C73C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne cr6,0x8251c3c8
	if (!ctx.cr6.eq) goto loc_8251C3C8;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(r18.u32, 1, ctx.xer);
	// ble cr6,0x8251c9d0
	if (!ctx.cr6.gt) goto loc_8251C9D0;
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r24,r11,31,28,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// li r23,1
	r23.s64 = 1;
loc_8251C760:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r29,r14
	r29.u64 = r14.u64;
	// cmplw cr6,r14,r17
	ctx.cr6.compare<uint32_t>(r14.u32, r17.u32, ctx.xer);
	// bge cr6,0x8251c7c0
	if (!ctx.cr6.lt) goto loc_8251C7C0;
loc_8251C778:
	// and. r11,r31,r24
	ctx.r11.u64 = r31.u64 & r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c7b0
	if (ctx.cr0.eq) goto loc_8251C7B0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251C78C;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// beq cr6,0x8251c7a8
	if (ctx.cr6.eq) goto loc_8251C7A8;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x8251c7b0
	if (!ctx.cr6.eq) goto loc_8251C7B0;
loc_8251C7A8:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// or r27,r31,r27
	r27.u64 = r31.u64 | r27.u64;
loc_8251C7B0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r29,r17
	ctx.cr6.compare<uint32_t>(r29.u32, r17.u32, ctx.xer);
	// blt cr6,0x8251c778
	if (ctx.cr6.lt) goto loc_8251C778;
loc_8251C7C0:
	// subf r24,r27,r24
	r24.u64 = r24.u64 - r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8251c9a4
	if (ctx.cr6.eq) goto loc_8251C9A4;
	// addi r25,r15,4
	r25.s64 = r15.s64 + 4;
loc_8251C7D0:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// lwz r31,0(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 0);
	// andc r26,r27,r11
	r26.u64 = r27.u64 & ~ctx.r11.u64;
	// cntlzw r11,r26
	ctx.r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
loc_8251C7E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251c99c
	if (ctx.cr6.eq) goto loc_8251C99C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251c820
	if (ctx.cr6.eq) goto loc_8251C820;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251c820
	if (ctx.cr0.eq) goto loc_8251C820;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251c820
	if (!ctx.cr0.eq) goto loc_8251C820;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8251C818;
	sub_824F6FC8(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// beq cr6,0x8251c828
	if (ctx.cr6.eq) goto loc_8251C828;
loc_8251C820:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x8251c7e4
	goto loc_8251C7E4;
loc_8251C828:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x82504518
	ctx.lr = 0x8251C830;
	sub_82504518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c844
	if (ctx.cr0.eq) goto loc_8251C844;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// rlwimi r5,r23,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// b 0x8251c854
	goto loc_8251C854;
loc_8251C844:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 28);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r5,r11,2
	ctx.r5.u64 = ctx.r11.u64 | 2;
loc_8251C854:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 28);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c1d90
	ctx.lr = 0x8251C868;
	sub_825C1D90(ctx, base);
	// lwz r11,16(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251c884
	if (ctx.cr0.eq) goto loc_8251C884;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// b 0x8251c88c
	goto loc_8251C88C;
loc_8251C884:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_8251C88C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// add r11,r29,r14
	ctx.r11.u64 = r29.u64 + r14.u64;
	// rlwimi r10,r23,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// oris r10,r9,128
	ctx.r10.u64 = ctx.r9.u64 | 8388608;
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,708(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 708);
	// stwx r31,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r31.u32);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// cmplw cr6,r22,r10
	ctx.cr6.compare<uint32_t>(r22.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8251c8fc
	if (!ctx.cr6.lt) goto loc_8251C8FC;
	// addi r10,r16,-4
	ctx.r10.s64 = r16.s64 + -4;
loc_8251C8DC:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r15
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r15.u32, ctx.xer);
	// bne cr6,0x8251c8fc
	if (!ctx.cr6.eq) goto loc_8251C8FC;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,668(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 668);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8251c8dc
	if (ctx.cr6.lt) goto loc_8251C8DC;
loc_8251C8FC:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8251C900:
	// lwz r29,0(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251c99c
	if (ctx.cr6.eq) goto loc_8251C99C;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251c988
	if (ctx.cr6.eq) goto loc_8251C988;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251c988
	if (ctx.cr0.eq) goto loc_8251C988;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251c988
	if (!ctx.cr0.eq) goto loc_8251C988;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f6fc8
	ctx.lr = 0x8251C938;
	sub_824F6FC8(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x8251c988
	if (!ctx.cr6.eq) goto loc_8251C988;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8251c958
	goto loc_8251C958;
loc_8251C950:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8251C958:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251c950
	if (!ctx.cr6.eq) goto loc_8251C950;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
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
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8251C988:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// bne cr6,0x8251c900
	if (!ctx.cr6.eq) goto loc_8251C900;
	// addi r28,r29,8
	r28.s64 = r29.s64 + 8;
	// b 0x8251c900
	goto loc_8251C900;
loc_8251C99C:
	// subf. r27,r26,r27
	r27.u64 = r27.u64 - r26.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x8251c7d0
	if (!ctx.cr0.eq) goto loc_8251C7D0;
loc_8251C9A4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8251c760
	if (!ctx.cr6.eq) goto loc_8251C760;
	// lwz r11,16(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 16);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251d4a8
	if (!ctx.cr0.eq) goto loc_8251D4A8;
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// sth r10,18(r15)
	REX_STORE_U16(r15.u32 + 18, ctx.r10.u16);
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// b 0x8251d4a8
	goto loc_8251D4A8;
loc_8251C9D0:
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8251d4a8
	if (!ctx.cr6.eq) goto loc_8251D4A8;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r20,r11,31,28,31
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// bl 0x825164c0
	ctx.lr = 0x8251C9EC;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r15,44
	r18.s64 = r15.s64 + 44;
	// li r24,0
	r24.s64 = 0;
	// mr r22,r18
	r22.u64 = r18.u64;
	// li r21,2
	r21.s64 = 2;
	// lwzx r19,r10,r11
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r17,1
	r17.s64 = 1;
loc_8251CA0C:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r10,r11,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8251ccc8
	if (!ctx.cr6.lt) goto loc_8251CCC8;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// slw r31,r17,r24
	r31.u64 = r24.u8 & 0x20 ? 0 : (r17.u32 << (r24.u8 & 0x3F));
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r9,r9,9,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251ca3c
	if (!ctx.cr0.eq) goto loc_8251CA3C;
loc_8251CA34:
	// subf r20,r31,r20
	r20.u64 = r20.u64 - r31.u64;
	// b 0x8251cca4
	goto loc_8251CCA4;
loc_8251CA3C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CA58;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwzx r27,r10,r11
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(r27.u32, r19.u32, ctx.xer);
	// beq cr6,0x8251ca34
	if (ctx.cr6.eq) goto loc_8251CA34;
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x8251cb54
	goto loc_8251CB54;
loc_8251CA78:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251cb50
	if (ctx.cr0.eq) goto loc_8251CB50;
	// li r26,0
	r26.s64 = 0;
	// rlwinm r31,r11,31,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
loc_8251CA8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8251cab4
	if (ctx.cr6.eq) goto loc_8251CAB4;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// lhz r10,18(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 18);
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r4,r11,31
	ctx.r4.s64 = ctx.r11.s64 + 31;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// b 0x8251cabc
	goto loc_8251CABC;
loc_8251CAB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251CABC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251cb48
	if (ctx.cr6.eq) goto loc_8251CB48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CACC;
	sub_825164C0(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8251ccb0
	if (ctx.cr6.eq) goto loc_8251CCB0;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,692(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r8,r28,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r28,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r3,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sld r10,r17,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// ldx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r9.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// bne cr6,0x8251cb3c
	if (!ctx.cr6.eq) goto loc_8251CB3C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8251CB3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251ccb8
	if (ctx.cr0.eq) goto loc_8251CCB8;
loc_8251CB44:
	// mr r26,r17
	r26.u64 = r17.u64;
loc_8251CB48:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251cca4
	if (!ctx.cr0.eq) goto loc_8251CCA4;
loc_8251CB50:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
loc_8251CB54:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251cb6c
	if (!ctx.cr0.eq) goto loc_8251CB6C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne cr6,0x8251ca78
	if (!ctx.cr6.eq) goto loc_8251CA78;
loc_8251CB6C:
	// add r4,r24,r14
	ctx.r4.u64 = r24.u64 + r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CB78;
	sub_825164C0(ctx, base);
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 692);
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r28.s32);
	// lwz r11,684(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 684);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r3,1,0,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// rlwinm r5,r3,30,3,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r7,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r7.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r29,r3,29,3,28
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ldx r8,r5,r8
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + ctx.r8.u32);
	// clrldi r7,r3,58
	ctx.r7.u64 = ctx.r3.u64 & 0x3F;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// sld r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U64(r29.u32 + ctx.r11.u32);
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// slw r10,r21,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r9.u8 & 0x3F));
	// not r26,r7
	r26.u64 = ~ctx.r7.u64;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r8,r26,r6
	ctx.r8.u64 = r26.u64 & ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// and r25,r9,r10
	r25.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stdx r8,r29,r11
	REX_STORE_U64(r29.u32 + ctx.r11.u32, ctx.r8.u64);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8251cc18
	if (!ctx.cr6.eq) goto loc_8251CC18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517b10
	ctx.lr = 0x8251CBF8;
	sub_82517B10(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517340
	ctx.lr = 0x8251CC18;
	sub_82517340(ctx, base);
loc_8251CC18:
	// rlwinm r9,r28,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r7,r28,1,0,25
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// subf r11,r9,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r9.u64;
	// lwz r10,684(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 684);
	// rlwinm r6,r28,30,3,28
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ldx r8,r6,r8
	ctx.r8.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r8.u32);
	// mullw r7,r5,r31
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// slw r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r11.u8 & 0x3F));
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// and r28,r9,r8
	r28.u64 = ctx.r9.u64 & ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r28,2,0,29
	r31.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// bl 0x82516850
	ctx.lr = 0x8251CC74;
	sub_82516850(ctx, base);
	// addi r11,r25,4
	ctx.r11.s64 = r25.s64 + 4;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwzx r4,r31,r27
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + r27.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r19
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// bl 0x82516850
	ctx.lr = 0x8251CC8C;
	sub_82516850(ctx, base);
	// addi r11,r28,4
	ctx.r11.s64 = r28.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// ldx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + ctx.r11.u32);
	// and r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & r26.u64;
	// stdx r10,r29,r11
	REX_STORE_U64(r29.u32 + ctx.r11.u32, ctx.r10.u64);
loc_8251CCA4:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// b 0x8251ca0c
	goto loc_8251CA0C;
loc_8251CCB0:
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r28.u32, ctx.xer);
	// beq cr6,0x8251cb44
	if (ctx.cr6.eq) goto loc_8251CB44;
loc_8251CCB8:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// b 0x8251ca8c
	goto loc_8251CA8C;
loc_8251CCC8:
	// rlwinm r11,r11,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// lwz r16,84(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r17,1
	r17.s64 = 1;
	// subf r22,r20,r11
	r22.u64 = ctx.r11.u64 - r20.u64;
loc_8251CCD8:
	// li r24,0
	r24.s64 = 0;
loc_8251CCDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517b10
	ctx.lr = 0x8251CCE4;
	sub_82517B10(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r7,8(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 8);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r7,13,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 13) & 0x7;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// oris r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 50331648;
	// oris r6,r11,12288
	ctx.r6.u64 = ctx.r11.u64 | 805306368;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x82519470
	ctx.lr = 0x8251CD34;
	sub_82519470(ctx, base);
	// mr r27,r20
	r27.u64 = r20.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8251cf8c
	if (ctx.cr6.eq) goto loc_8251CF8C;
loc_8251CD40:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andc r11,r27,r11
	ctx.r11.u64 = r27.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r27,r11,r27
	r27.u64 = r27.u64 - ctx.r11.u64;
	// subfic r26,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	r26.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r11,r26,11
	ctx.r11.s64 = r26.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r23,12(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 18);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CD80;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r28,r10,r11
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x8251cdc0
	if (!ctx.cr6.eq) goto loc_8251CDC0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517b10
	ctx.lr = 0x8251CDA0;
	sub_82517B10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517340
	ctx.lr = 0x8251CDC0;
	sub_82517340(ctx, base);
loc_8251CDC0:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,692(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r8,r31,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r31,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r9.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// bl 0x82501ce0
	ctx.lr = 0x8251CE14;
	sub_82501CE0(ctx, base);
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8251cf84
	if (ctx.cr6.gt) goto loc_8251CF84;
	// rlwinm r24,r26,2,0,29
	r24.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_8251CE2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CE38;
	sub_825164C0(ctx, base);
	// lwzx r11,r24,r21
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + r21.u32);
	// rlwinm r8,r3,29,3,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r10,r3,58
	ctx.r10.u64 = ctx.r3.u64 & 0x3F;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// sld r7,r17,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r10.u8 & 0x7F));
	// ldx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r8.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// bne cr6,0x8251ce64
	if (!ctx.cr6.eq) goto loc_8251CE64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251CE64:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8251cea8
	if (ctx.cr0.eq) goto loc_8251CEA8;
	// rlwinm r10,r31,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r31,58
	ctx.r9.u64 = r31.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// bne cr6,0x8251ce90
	if (!ctx.cr6.eq) goto loc_8251CE90;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8251CE90:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8251cf44
	if (!ctx.cr0.eq) goto loc_8251CF44;
	// ldx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// b 0x8251cf44
	goto loc_8251CF44;
loc_8251CEA8:
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r6,r10,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8251cf00
	if (ctx.cr0.eq) goto loc_8251CF00;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8251CEBC:
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r26.u32, ctx.xer);
	// beq cr6,0x8251cee8
	if (ctx.cr6.eq) goto loc_8251CEE8;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ldx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r10.u32);
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// bne cr6,0x8251cee0
	if (!ctx.cr6.eq) goto loc_8251CEE0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251CEE0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251cf00
	if (!ctx.cr0.eq) goto loc_8251CF00;
loc_8251CEE8:
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8251cebc
	if (ctx.cr6.lt) goto loc_8251CEBC;
loc_8251CF00:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8251d130
	if (!ctx.cr6.eq) goto loc_8251D130;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825188c0
	ctx.lr = 0x8251CF20;
	sub_825188C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d130
	if (ctx.cr0.eq) goto loc_8251D130;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517340
	ctx.lr = 0x8251CF44;
	sub_82517340(ctx, base);
loc_8251CF44:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251cf5c
	if (!ctx.cr6.eq) goto loc_8251CF5C;
	// li r31,-1
	r31.s64 = -1;
	// b 0x8251cf70
	goto loc_8251CF70;
loc_8251CF5C:
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwzx r3,r25,r28
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + r28.u32);
	// bl 0x82501ce0
	ctx.lr = 0x8251CF6C;
	sub_82501CE0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8251CF70:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8251ce2c
	if (!ctx.cr6.gt) goto loc_8251CE2C;
	// li r24,0
	r24.s64 = 0;
loc_8251CF84:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8251cd40
	if (!ctx.cr6.eq) goto loc_8251CD40;
loc_8251CF8C:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stw r24,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r24.u32);
	// stw r24,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r24.u32);
	// stw r24,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r24.u32);
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8251CFAC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x8251d274
	if (ctx.cr6.eq) goto loc_8251D274;
	// mr r29,r24
	r29.u64 = r24.u64;
	// mr r26,r24
	r26.u64 = r24.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_8251CFC0:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andc r28,r31,r11
	r28.u64 = r31.u64 & ~ctx.r11.u64;
	// cntlzw r11,r28
	ctx.r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// subf r31,r28,r31
	r31.u64 = r31.u64 - r28.u64;
	// subfic r27,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r27.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r27,11
	ctx.r11.s64 = r27.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r10,18(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251CFFC;
	sub_825164C0(ctx, base);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// beq cr6,0x8251d024
	if (ctx.cr6.eq) goto loc_8251D024;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251d02c
	if (!ctx.cr6.eq) goto loc_8251D02C;
loc_8251D024:
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
loc_8251D02C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251cfc0
	if (!ctx.cr6.eq) goto loc_8251CFC0;
	// subf r20,r29,r20
	r20.u64 = r20.u64 - r29.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8251D044:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andc r11,r31,r11
	ctx.r11.u64 = r31.u64 & ~ctx.r11.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r31,r11,r31
	r31.u64 = r31.u64 - ctx.r11.u64;
	// subfic r11,r10,42
	ctx.xer.ca = ctx.r10.u32 <= 42;
	ctx.r11.u64 = static_cast<uint64_t>(42) - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lhz r11,18(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 18);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251D07C;
	sub_825164C0(ctx, base);
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,692(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r7,r3,1,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r8,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r8.u64;
	// rlwinm r6,r3,30,3,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r9,2
	ctx.r9.s64 = 2;
	// ldx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U64(ctx.r6.u32 + ctx.r10.u32);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r17.u32 << (ctx.r11.u8 & 0x3F));
	// or r27,r11,r27
	r27.u64 = ctx.r11.u64 | r27.u64;
	// bne cr6,0x8251d044
	if (!ctx.cr6.eq) goto loc_8251D044;
	// lwz r11,192(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 192);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251cfac
	if (!ctx.cr6.lt) goto loc_8251CFAC;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825192d0
	ctx.lr = 0x8251D100;
	sub_825192D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d1c0
	if (ctx.cr0.eq) goto loc_8251D1C0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82519470
	ctx.lr = 0x8251D12C;
	sub_82519470(ctx, base);
	// b 0x8251cfac
	goto loc_8251CFAC;
loc_8251D130:
	// li r29,0
	r29.s64 = 0;
	// mr r28,r18
	r28.u64 = r18.u64;
loc_8251D138:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8251d1ac
	if (!ctx.cr6.lt) goto loc_8251D1AC;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251d1a0
	if (!ctx.cr6.eq) goto loc_8251D1A0;
	// rlwinm r5,r15,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 28);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// slw r27,r17,r29
	r27.u64 = r29.u8 & 0x20 ? 0 : (r17.u32 << (r29.u8 & 0x3F));
	// bl 0x825c0b40
	ctx.lr = 0x8251D170;
	sub_825C0B40(ctx, base);
	// add r4,r29,r14
	ctx.r4.u64 = r29.u64 + r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r11,r17,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x825164c0
	ctx.lr = 0x8251D18C;
	sub_825164C0(ctx, base);
	// stw r16,32(r31)
	REX_STORE_U32(r31.u32 + 32, r16.u32);
	// mr r16,r31
	r16.u64 = r31.u64;
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// or r22,r27,r22
	r22.u64 = r27.u64 | r22.u64;
	// subf r20,r27,r20
	r20.u64 = r20.u64 - r27.u64;
loc_8251D1A0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// b 0x8251d138
	goto loc_8251D138;
loc_8251D1AC:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r16,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517168
	ctx.lr = 0x8251D1BC;
	sub_82517168(ctx, base);
	// b 0x8251ccd8
	goto loc_8251CCD8;
loc_8251D1C0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251d234
	if (ctx.cr6.eq) goto loc_8251D234;
	// rlwinm r28,r15,0,0,29
	r28.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFC;
loc_8251D1CC:
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lwz r4,28(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// andc r27,r29,r11
	r27.u64 = r29.u64 & ~ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cntlzw r11,r27
	ctx.r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// subfic r31,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r31.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r11,r31,11
	ctx.r11.s64 = r31.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r15
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + r15.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x825c0b40
	ctx.lr = 0x8251D1FC;
	sub_825C0B40(ctx, base);
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,12(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 12);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwimi r11,r17,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x825164c0
	ctx.lr = 0x8251D218;
	sub_825164C0(ctx, base);
	// stw r16,32(r31)
	REX_STORE_U32(r31.u32 + 32, r16.u32);
	// subf. r29,r27,r29
	r29.u64 = r29.u64 - r27.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// mr r16,r31
	r16.u64 = r31.u64;
	// or r22,r27,r22
	r22.u64 = r27.u64 | r22.u64;
	// bne 0x8251d1cc
	if (!ctx.cr0.eq) goto loc_8251D1CC;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_8251D234:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517168
	ctx.lr = 0x8251D240;
	sub_82517168(ctx, base);
	// b 0x8251ccdc
	goto loc_8251CCDC;
loc_8251D244:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x8251D258;
	sub_824F7DC0(ctx, base);
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 192);
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// stwx r3,r11,r19
	REX_STORE_U32(ctx.r11.u32 + r19.u32, ctx.r3.u32);
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 192);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,192(r19)
	REX_STORE_U32(r19.u32 + 192, ctx.r10.u32);
loc_8251D274:
	// lwz r10,192(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 192);
	// lwz r11,192(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 192);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251d244
	if (ctx.cr6.lt) goto loc_8251D244;
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251d468
	if (ctx.cr6.eq) goto loc_8251D468;
	// mr r26,r21
	r26.u64 = r21.u64;
	// addi r27,r19,40
	r27.s64 = r19.s64 + 40;
	// addi r29,r19,16
	r29.s64 = r19.s64 + 16;
loc_8251D2A4:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8251d428
	goto loc_8251D428;
loc_8251D2AC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251D2B8;
	sub_825164C0(ctx, base);
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -16);
	// rlwinm r11,r3,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r3,58
	ctx.r9.u64 = ctx.r3.u64 & 0x3F;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sld r8,r17,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// bne cr6,0x8251d2e4
	if (!ctx.cr6.eq) goto loc_8251D2E4;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_8251D2E4:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8251d3d4
	if (!ctx.cr0.eq) goto loc_8251D3D4;
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -16);
	// rlwinm r9,r28,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r7,r28,58
	ctx.r7.u64 = r28.u64 & 0x3F;
	// sld r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r10.u32);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stdx r7,r9,r10
	REX_STORE_U64(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u64);
	// lwz r10,-16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -16);
	// ldx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r11,684(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 684);
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82516808
	ctx.lr = 0x8251D334;
	sub_82516808(ctx, base);
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r4,-16(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + -16);
	// bl 0x82516850
	ctx.lr = 0x8251D344;
	sub_82516850(ctx, base);
	// lwz r10,676(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 676);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// mulli r9,r31,5
	ctx.r9.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(5));
loc_8251D350:
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
	// bne cr6,0x8251d3cc
	if (!ctx.cr6.eq) goto loc_8251D3CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8251d350
	if (ctx.cr6.lt) goto loc_8251D350;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_8251D378:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d3b4
	if (ctx.cr0.eq) goto loc_8251D3B4;
	// li r9,4
	ctx.r9.s64 = 4;
	// mulli r11,r31,40
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(40));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
loc_8251D394:
	// ldu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8251d394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251D394;
	// lwz r11,192(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 192);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,192(r19)
	REX_STORE_U32(r19.u32 + 192, ctx.r11.u32);
loc_8251D3B4:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825168e0
	ctx.lr = 0x8251D3C8;
	sub_825168E0(ctx, base);
	// b 0x8251d40c
	goto loc_8251D40C;
loc_8251D3CC:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// b 0x8251d378
	goto loc_8251D378;
loc_8251D3D4:
	// rlwinm r11,r28,29,3,28
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r28,58
	ctx.r9.u64 = r28.u64 & 0x3F;
	// sld r9,r17,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r17.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// bne cr6,0x8251d3f8
	if (!ctx.cr6.eq) goto loc_8251D3F8;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_8251D3F8:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8251d40c
	if (!ctx.cr0.eq) goto loc_8251D40C;
	// ldx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
loc_8251D40C:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8251d424
	if (!ctx.cr6.eq) goto loc_8251D424;
	// li r28,-1
	r28.s64 = -1;
	// b 0x8251d438
	goto loc_8251D438;
loc_8251D424:
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
loc_8251D428:
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// bl 0x82501ce0
	ctx.lr = 0x8251D434;
	sub_82501CE0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8251D438:
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8251d2ac
	if (!ctx.cr6.gt) goto loc_8251D2AC;
	// lwz r11,192(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 192);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r27,r27,40
	r27.s64 = r27.s64 + 40;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8251d2a4
	if (ctx.cr6.lt) goto loc_8251D2A4;
loc_8251D468:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517168
	ctx.lr = 0x8251D474;
	sub_82517168(ctx, base);
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// li r29,4
	r29.s64 = 4;
loc_8251D47C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8251d49c
	if (ctx.cr6.eq) goto loc_8251D49C;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d49c
	if (ctx.cr0.eq) goto loc_8251D49C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82517168
	ctx.lr = 0x8251D49C;
	sub_82517168(ctx, base);
loc_8251D49C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8251d47c
	if (!ctx.cr0.eq) goto loc_8251D47C;
loc_8251D4A8:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8251c334
	if (ctx.cr6.lt) goto loc_8251C334;
loc_8251D4C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251d7f0
	if (!ctx.cr6.eq) goto loc_8251D7F0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d7f0
	if (ctx.cr0.eq) goto loc_8251D7F0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251d7f0
	if (!ctx.cr0.eq) goto loc_8251D7F0;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8251d7f0
	if (ctx.cr0.eq) goto loc_8251D7F0;
	// lwz r17,84(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,0
	r19.s64 = 0;
	// li r20,2
	r20.s64 = 2;
	// li r18,-1
	r18.s64 = -1;
loc_8251D500:
	// lwz r24,28(r21)
	r24.u64 = REX_LOAD_U32(r21.u32 + 28);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251d7d0
	if (!ctx.cr0.eq) goto loc_8251D7D0;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq 0x8251d7d0
	if (ctx.cr0.eq) goto loc_8251D7D0;
loc_8251D514:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,13312
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13312, ctx.xer);
	// bne cr6,0x8251d7b8
	if (!ctx.cr6.eq) goto loc_8251D7B8;
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d7b8
	if (ctx.cr0.eq) goto loc_8251D7B8;
	// lwz r26,44(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r25,12(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 12);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82516938
	ctx.lr = 0x8251D540;
	sub_82516938(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516938
	ctx.lr = 0x8251D550;
	sub_82516938(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
	// rlwinm r29,r10,31,28,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// mr r31,r19
	r31.u64 = r19.u64;
	// stw r19,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r19.u32);
loc_8251D56C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8251d594
	if (ctx.cr6.eq) goto loc_8251D594;
	// addi r11,r29,-1
	ctx.r11.s64 = r29.s64 + -1;
	// lhz r10,18(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 18);
	// andc r11,r29,r11
	ctx.r11.u64 = r29.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r28,r11,31
	r28.s64 = ctx.r11.s64 + 31;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x8251d59c
	goto loc_8251D59C;
loc_8251D594:
	// mr r28,r19
	r28.u64 = r19.u64;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_8251D59C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8251d6a8
	if (ctx.cr6.eq) goto loc_8251D6A8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251D5B0;
	sub_825164C0(ctx, base);
	// lhz r11,18(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 18);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// lhz r11,18(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 18);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x825164c0
	ctx.lr = 0x8251D5E0;
	sub_825164C0(ctx, base);
	// rlwinm r10,r16,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,692(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r9,r16,1,0,25
	ctx.r9.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r10,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r10.u64;
	// rlwinm r7,r16,30,3,28
	ctx.r7.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ldx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + ctx.r8.u32);
	// clrlwi r6,r31,27
	ctx.r6.u64 = r31.u32 & 0x1F;
	// slw r9,r20,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r11.u8 & 0x3F));
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r31,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r6,r29,-1
	ctx.r6.s64 = r29.s64 + -1;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// rlwinm r10,r3,1,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFC0;
	// subf r11,r7,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r7.u64;
	// rlwinm r9,r3,30,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x1FFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// ldx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// slw r8,r20,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r7.u8 & 0x3F));
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// and r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// andc r8,r29,r6
	ctx.r8.u64 = r29.u64 & ~ctx.r6.u64;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// subf r29,r8,r29
	r29.u64 = r29.u64 - ctx.r8.u64;
	// b 0x8251d56c
	goto loc_8251D56C;
loc_8251D6A8:
	// mr r29,r19
	r29.u64 = r19.u64;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(r23.u32, r22.u32, ctx.xer);
	// bne cr6,0x8251d744
	if (!ctx.cr6.eq) goto loc_8251D744;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8251d79c
	if (ctx.cr6.eq) goto loc_8251D79C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_8251D6C4:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r11,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r4,r10,29,3,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r6,r6,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// slw r8,r20,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// slw r5,r18,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r18,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r4.u8 & 0x3F));
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// srw r9,r9,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8251d798
	if (!ctx.cr6.eq) goto loc_8251D798;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r7,r27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r27.u32, ctx.xer);
	// blt cr6,0x8251d6c4
	if (ctx.cr6.lt) goto loc_8251D6C4;
	// b 0x8251d79c
	goto loc_8251D79C;
loc_8251D744:
	// lwz r31,96(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825192d0
	ctx.lr = 0x8251D768;
	sub_825192D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d798
	if (ctx.cr0.eq) goto loc_8251D798;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82519470
	ctx.lr = 0x8251D794;
	sub_82519470(ctx, base);
	// b 0x8251d79c
	goto loc_8251D79C;
loc_8251D798:
	// li r29,1
	r29.s64 = 1;
loc_8251D79C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d7b8
	if (ctx.cr0.eq) goto loc_8251D7B8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82516ba8
	ctx.lr = 0x8251D7B0;
	sub_82516BA8(ctx, base);
	// stw r17,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r17.u32);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
loc_8251D7B8:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r24,40(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8251d7d0
	if (!ctx.cr0.eq) goto loc_8251D7D0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x8251d514
	if (!ctx.cr6.eq) goto loc_8251D514;
loc_8251D7D0:
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251d7f8
	if (!ctx.cr0.eq) goto loc_8251D7F8;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251d500
	if (!ctx.cr6.eq) goto loc_8251D500;
	// b 0x8251d7f8
	goto loc_8251D7F8;
loc_8251D7F0:
	// lwz r17,84(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,0
	r19.s64 = 0;
loc_8251D7F8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x8251d878
	if (!ctx.cr6.eq) goto loc_8251D878;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8251d878
	if (!ctx.cr6.eq) goto loc_8251D878;
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251d87c
	if (!ctx.cr6.eq) goto loc_8251D87C;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8251d87c
	if (!ctx.cr0.eq) goto loc_8251D87C;
	// lwz r11,668(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 668);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,676(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 676);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x824ffbd8
	ctx.lr = 0x8251D83C;
	sub_824FFBD8(ctx, base);
	// stw r19,676(r30)
	REX_STORE_U32(r30.u32 + 676, r19.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,668(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 668);
	// lwz r4,684(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 684);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x824ffbd8
	ctx.lr = 0x8251D85C;
	sub_824FFBD8(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,388(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// stw r19,684(r30)
	REX_STORE_U32(r30.u32 + 684, r19.u32);
	// lbz r3,81(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cd0
	return;
loc_8251D878:
	// lwz r31,92(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_8251D87C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r19,680(r30)
	REX_STORE_U32(r30.u32 + 680, r19.u32);
	// stw r19,684(r30)
	REX_STORE_U32(r30.u32 + 684, r19.u32);
	// stw r19,696(r30)
	REX_STORE_U32(r30.u32 + 696, r19.u32);
	// stw r19,700(r30)
	REX_STORE_U32(r30.u32 + 700, r19.u32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stw r19,704(r30)
	REX_STORE_U32(r30.u32 + 704, r19.u32);
	// stw r19,708(r30)
	REX_STORE_U32(r30.u32 + 708, r19.u32);
	// b 0x8251d8bc
	goto loc_8251D8BC;
loc_8251D8A0:
	// lwz r11,16(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 16);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,16(r17)
	REX_STORE_U32(r17.u32 + 16, ctx.r11.u32);
	// bl 0x82548f78
	ctx.lr = 0x8251D8B8;
	sub_82548F78(ctx, base);
	// lwz r17,32(r17)
	r17.u64 = REX_LOAD_U32(r17.u32 + 32);
loc_8251D8BC:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x8251d8a0
	if (!ctx.cr6.eq) goto loc_8251D8A0;
	// b 0x8251d8dc
	goto loc_8251D8DC;
loc_8251D8C8:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_8251D8DC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8251d8c8
	if (!ctx.cr6.eq) goto loc_8251D8C8;
	// addi r3,r30,972
	ctx.r3.s64 = r30.s64 + 972;
	// bl 0x824e4528
	ctx.lr = 0x8251D8EC;
	sub_824E4528(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,396(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825197d4
	if (!ctx.cr6.gt) goto loc_825197D4;
loc_8251D904:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8251d92c
	if (ctx.cr0.eq) goto loc_8251D92C;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8251d92c
	if (!ctx.cr0.eq) goto loc_8251D92C;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r30)
	REX_STORE_U32(r30.u32 + 52, ctx.r11.u32);
	// bl 0x824e3ff0
	ctx.lr = 0x8251D92C;
	sub_824E3FF0(ctx, base);
loc_8251D92C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D938;
	sub_824E4368(ctx, base);
loc_8251D938:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D944;
	sub_824E4368(ctx, base);
loc_8251D944:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D950;
	sub_824E4368(ctx, base);
loc_8251D950:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x824e4368
	ctx.lr = 0x8251D958;
	sub_824E4368(ctx, base);
loc_8251D958:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D964;
	sub_824E4368(ctx, base);
loc_8251D964:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D970;
	sub_824E4368(ctx, base);
loc_8251D970:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D97C;
	sub_824E4368(ctx, base);
loc_8251D97C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8251D988;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_827197B8) {
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
	ctx.lr = 0x827197C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 3364);
	// addi r4,r3,2012
	ctx.r4.s64 = ctx.r3.s64 + 2012;
	// addi r6,r11,18352
	ctx.r6.s64 = ctx.r11.s64 + 18352;
	// li r7,6
	ctx.r7.s64 = 6;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82769a60
	ctx.lr = 0x827197E0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,13944
	ctx.r6.s64 = ctx.r11.s64 + 13944;
	// addi r4,r31,2024
	ctx.r4.s64 = r31.s64 + 2024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719804;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,24840
	ctx.r6.s64 = ctx.r11.s64 + 24840;
	// addi r4,r31,2140
	ctx.r4.s64 = r31.s64 + 2140;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719828;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,24320
	ctx.r6.s64 = ctx.r11.s64 + 24320;
	// addi r4,r31,2152
	ctx.r4.s64 = r31.s64 + 2152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271984C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,22760
	ctx.r6.s64 = ctx.r11.s64 + 22760;
	// addi r4,r31,2168
	ctx.r4.s64 = r31.s64 + 2168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719870;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,23280
	ctx.r6.s64 = ctx.r11.s64 + 23280;
	// addi r4,r31,2180
	ctx.r4.s64 = r31.s64 + 2180;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719894;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,23800
	ctx.r6.s64 = ctx.r11.s64 + 23800;
	// addi r4,r31,2192
	ctx.r4.s64 = r31.s64 + 2192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x827198B8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r30,r31,2304
	r30.s64 = r31.s64 + 2304;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,27056
	ctx.r6.s64 = ctx.r11.s64 + 27056;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x827198E0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,2316
	r27.s64 = r31.s64 + 2316;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,27320
	ctx.r6.s64 = ctx.r11.s64 + 27320;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719908;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,2328
	r28.s64 = r31.s64 + 2328;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,27584
	ctx.r6.s64 = ctx.r11.s64 + 27584;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719930;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,2340
	r29.s64 = r31.s64 + 2340;
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,27848
	ctx.r6.s64 = ctx.r11.s64 + 27848;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719958;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,2404(r31)
	REX_STORE_U32(r31.u32 + 2404, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,2408(r31)
	REX_STORE_U32(r31.u32 + 2408, r27.u32);
	// addi r30,r31,2352
	r30.s64 = r31.s64 + 2352;
	// stw r28,2412(r31)
	REX_STORE_U32(r31.u32 + 2412, r28.u32);
	// li r7,138
	ctx.r7.s64 = 138;
	// stw r29,2416(r31)
	REX_STORE_U32(r31.u32 + 2416, r29.u32);
	// addi r6,r11,28112
	ctx.r6.s64 = ctx.r11.s64 + 28112;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719990;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,2364
	r27.s64 = r31.s64 + 2364;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,28408
	ctx.r6.s64 = ctx.r11.s64 + 28408;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x827199B8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,2376
	r28.s64 = r31.s64 + 2376;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,28704
	ctx.r6.s64 = ctx.r11.s64 + 28704;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x827199E0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,2388
	r29.s64 = r31.s64 + 2388;
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,29000
	ctx.r6.s64 = ctx.r11.s64 + 29000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719A08;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lwz r11,22528(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22528);
	// stw r30,2420(r31)
	REX_STORE_U32(r31.u32 + 2420, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,2424(r31)
	REX_STORE_U32(r31.u32 + 2424, r27.u32);
	// stw r28,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, r28.u32);
	// stw r29,2432(r31)
	REX_STORE_U32(r31.u32 + 2432, r29.u32);
	// beq cr6,0x82719adc
	if (ctx.cr6.eq) goto loc_82719ADC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,22584
	r27.s64 = r31.s64 + 22584;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,29296
	ctx.r6.s64 = ctx.r11.s64 + 29296;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719A4C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,22596
	r28.s64 = r31.s64 + 22596;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,29600
	ctx.r6.s64 = ctx.r11.s64 + 29600;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719A74;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,22608
	r29.s64 = r31.s64 + 22608;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,29904
	ctx.r6.s64 = ctx.r11.s64 + 29904;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719A9C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r30,r31,22620
	r30.s64 = r31.s64 + 22620;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,30208
	ctx.r6.s64 = ctx.r11.s64 + 30208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719AC4;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r27,2420(r31)
	REX_STORE_U32(r31.u32 + 2420, r27.u32);
	// stw r28,2424(r31)
	REX_STORE_U32(r31.u32 + 2424, r28.u32);
	// stw r29,2428(r31)
	REX_STORE_U32(r31.u32 + 2428, r29.u32);
	// stw r30,2432(r31)
	REX_STORE_U32(r31.u32 + 2432, r30.u32);
loc_82719ADC:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,30512
	ctx.r6.s64 = ctx.r11.s64 + 30512;
	// addi r4,r31,22572
	ctx.r4.s64 = r31.s64 + 22572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719AF8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,30704
	ctx.r6.s64 = ctx.r11.s64 + 30704;
	// addi r4,r31,2464
	ctx.r4.s64 = r31.s64 + 2464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719B1C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,30640
	ctx.r6.s64 = ctx.r11.s64 + 30640;
	// addi r4,r31,2476
	ctx.r4.s64 = r31.s64 + 2476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719B40;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,30576
	ctx.r6.s64 = ctx.r11.s64 + 30576;
	// addi r4,r31,2488
	ctx.r4.s64 = r31.s64 + 2488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719B64;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,30768
	ctx.r6.s64 = ctx.r11.s64 + 30768;
	// addi r4,r31,2504
	ctx.r4.s64 = r31.s64 + 2504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719B88;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,30840
	ctx.r6.s64 = ctx.r11.s64 + 30840;
	// addi r4,r31,2516
	ctx.r4.s64 = r31.s64 + 2516;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719BAC;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,136
	ctx.r7.s64 = 136;
	// addi r6,r11,30912
	ctx.r6.s64 = ctx.r11.s64 + 30912;
	// addi r4,r31,2528
	ctx.r4.s64 = r31.s64 + 2528;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719BD0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,30980
	ctx.r6.s64 = ctx.r11.s64 + 30980;
	// addi r4,r31,2544
	ctx.r4.s64 = r31.s64 + 2544;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719BF4;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31016
	ctx.r6.s64 = ctx.r11.s64 + 31016;
	// addi r4,r31,2556
	ctx.r4.s64 = r31.s64 + 2556;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719C18;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,134
	ctx.r7.s64 = 134;
	// addi r6,r11,31052
	ctx.r6.s64 = ctx.r11.s64 + 31052;
	// addi r4,r31,2568
	ctx.r4.s64 = r31.s64 + 2568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719C3C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lwz r11,15504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8271a4e0
	if (!ctx.cr6.eq) goto loc_8271A4E0;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r30,r31,21012
	r30.s64 = r31.s64 + 21012;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,31952
	ctx.r6.s64 = ctx.r11.s64 + 31952;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719C70;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21024
	r27.s64 = r31.s64 + 21024;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,32016
	ctx.r6.s64 = ctx.r11.s64 + 32016;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719C98;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21036
	r28.s64 = r31.s64 + 21036;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,32080
	ctx.r6.s64 = ctx.r11.s64 + 32080;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719CC0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21048
	r29.s64 = r31.s64 + 21048;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32144
	ctx.r6.s64 = ctx.r11.s64 + 32144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719CE8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,20996(r31)
	REX_STORE_U32(r31.u32 + 20996, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,21000(r31)
	REX_STORE_U32(r31.u32 + 21000, r27.u32);
	// addi r30,r31,21076
	r30.s64 = r31.s64 + 21076;
	// stw r28,21004(r31)
	REX_STORE_U32(r31.u32 + 21004, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21008(r31)
	REX_STORE_U32(r31.u32 + 21008, r29.u32);
	// addi r6,r11,32208
	ctx.r6.s64 = ctx.r11.s64 + 32208;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719D20;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21088
	r27.s64 = r31.s64 + 21088;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32248
	ctx.r6.s64 = ctx.r11.s64 + 32248;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719D48;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21100
	r28.s64 = r31.s64 + 21100;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32288
	ctx.r6.s64 = ctx.r11.s64 + 32288;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719D70;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21112
	r29.s64 = r31.s64 + 21112;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,32328
	ctx.r6.s64 = ctx.r11.s64 + 32328;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719D98;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,21060(r31)
	REX_STORE_U32(r31.u32 + 21060, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,21064(r31)
	REX_STORE_U32(r31.u32 + 21064, r27.u32);
	// addi r26,r31,21232
	r26.s64 = r31.s64 + 21232;
	// stw r28,21068(r31)
	REX_STORE_U32(r31.u32 + 21068, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21072(r31)
	REX_STORE_U32(r31.u32 + 21072, r29.u32);
	// addi r6,r11,32368
	ctx.r6.s64 = ctx.r11.s64 + 32368;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719DD0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r23,r31,21244
	r23.s64 = r31.s64 + 21244;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,32624
	ctx.r6.s64 = ctx.r11.s64 + 32624;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719DF8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r24,r31,21256
	r24.s64 = r31.s64 + 21256;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-32656
	ctx.r6.s64 = ctx.r11.s64 + -32656;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719E20;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r25,r31,21268
	r25.s64 = r31.s64 + 21268;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-32400
	ctx.r6.s64 = ctx.r11.s64 + -32400;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719E48;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21280
	r27.s64 = r31.s64 + 21280;
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-32144
	ctx.r6.s64 = ctx.r11.s64 + -32144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719E70;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21292
	r28.s64 = r31.s64 + 21292;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-31888
	ctx.r6.s64 = ctx.r11.s64 + -31888;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719E98;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21304
	r29.s64 = r31.s64 + 21304;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-31632
	ctx.r6.s64 = ctx.r11.s64 + -31632;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719EC0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r30,r31,21316
	r30.s64 = r31.s64 + 21316;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-31376
	ctx.r6.s64 = ctx.r11.s64 + -31376;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719EE8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r26,21944(r31)
	REX_STORE_U32(r31.u32 + 21944, r26.u32);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// stw r23,21948(r31)
	REX_STORE_U32(r31.u32 + 21948, r23.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r24,21952(r31)
	REX_STORE_U32(r31.u32 + 21952, r24.u32);
	// addi r6,r11,-31120
	ctx.r6.s64 = ctx.r11.s64 + -31120;
	// stw r25,21956(r31)
	REX_STORE_U32(r31.u32 + 21956, r25.u32);
	// addi r4,r31,21328
	ctx.r4.s64 = r31.s64 + 21328;
	// stw r27,21960(r31)
	REX_STORE_U32(r31.u32 + 21960, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,21964(r31)
	REX_STORE_U32(r31.u32 + 21964, r28.u32);
	// stw r29,21968(r31)
	REX_STORE_U32(r31.u32 + 21968, r29.u32);
	// stw r30,21972(r31)
	REX_STORE_U32(r31.u32 + 21972, r30.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// bl 0x82769a60
	ctx.lr = 0x82719F2C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-30608
	ctx.r6.s64 = ctx.r11.s64 + -30608;
	// addi r4,r31,21340
	ctx.r4.s64 = r31.s64 + 21340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719F50;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-30096
	ctx.r6.s64 = ctx.r11.s64 + -30096;
	// addi r4,r31,21352
	ctx.r4.s64 = r31.s64 + 21352;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719F74;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-29584
	ctx.r6.s64 = ctx.r11.s64 + -29584;
	// addi r4,r31,21364
	ctx.r4.s64 = r31.s64 + 21364;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719F98;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,-29072
	ctx.r6.s64 = ctx.r11.s64 + -29072;
	// addi r4,r31,21376
	ctx.r4.s64 = r31.s64 + 21376;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719FBC;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-28560
	ctx.r6.s64 = ctx.r11.s64 + -28560;
	// addi r4,r31,21388
	ctx.r4.s64 = r31.s64 + 21388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x82719FE0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-28048
	ctx.r6.s64 = ctx.r11.s64 + -28048;
	// addi r4,r31,21400
	ctx.r4.s64 = r31.s64 + 21400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A004;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-27536
	ctx.r6.s64 = ctx.r11.s64 + -27536;
	// addi r4,r31,21412
	ctx.r4.s64 = r31.s64 + 21412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A028;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-27024
	ctx.r6.s64 = ctx.r11.s64 + -27024;
	// addi r4,r31,21424
	ctx.r4.s64 = r31.s64 + 21424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A04C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-26728
	ctx.r6.s64 = ctx.r11.s64 + -26728;
	// addi r4,r31,21436
	ctx.r4.s64 = r31.s64 + 21436;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A070;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,-26432
	ctx.r6.s64 = ctx.r11.s64 + -26432;
	// addi r4,r31,21448
	ctx.r4.s64 = r31.s64 + 21448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A094;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,-26136
	ctx.r6.s64 = ctx.r11.s64 + -26136;
	// addi r4,r31,21460
	ctx.r4.s64 = r31.s64 + 21460;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A0B8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r30,r31,21472
	r30.s64 = r31.s64 + 21472;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31156
	ctx.r6.s64 = ctx.r11.s64 + 31156;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A0E0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r23,r31,21484
	r23.s64 = r31.s64 + 21484;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31252
	ctx.r6.s64 = ctx.r11.s64 + 31252;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A108;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r24,r31,21496
	r24.s64 = r31.s64 + 21496;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31348
	ctx.r6.s64 = ctx.r11.s64 + 31348;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A130;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r25,r31,21508
	r25.s64 = r31.s64 + 21508;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31444
	ctx.r6.s64 = ctx.r11.s64 + 31444;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A158;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r26,r31,21520
	r26.s64 = r31.s64 + 21520;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31472
	ctx.r6.s64 = ctx.r11.s64 + 31472;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A180;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21532
	r27.s64 = r31.s64 + 21532;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31500
	ctx.r6.s64 = ctx.r11.s64 + 31500;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A1A8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21544
	r28.s64 = r31.s64 + 21544;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31528
	ctx.r6.s64 = ctx.r11.s64 + 31528;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A1D0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21556
	r29.s64 = r31.s64 + 21556;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31556
	ctx.r6.s64 = ctx.r11.s64 + 31556;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A1F8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,21160(r31)
	REX_STORE_U32(r31.u32 + 21160, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r23,21164(r31)
	REX_STORE_U32(r31.u32 + 21164, r23.u32);
	// addi r30,r31,21568
	r30.s64 = r31.s64 + 21568;
	// stw r24,21168(r31)
	REX_STORE_U32(r31.u32 + 21168, r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,21172(r31)
	REX_STORE_U32(r31.u32 + 21172, r25.u32);
	// addi r6,r11,31584
	ctx.r6.s64 = ctx.r11.s64 + 31584;
	// stw r26,21176(r31)
	REX_STORE_U32(r31.u32 + 21176, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,21180(r31)
	REX_STORE_U32(r31.u32 + 21180, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,21184(r31)
	REX_STORE_U32(r31.u32 + 21184, r28.u32);
	// stw r29,21188(r31)
	REX_STORE_U32(r31.u32 + 21188, r29.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// bl 0x82769a60
	ctx.lr = 0x8271A240;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r23,r31,21580
	r23.s64 = r31.s64 + 21580;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31620
	ctx.r6.s64 = ctx.r11.s64 + 31620;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A268;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r24,r31,21592
	r24.s64 = r31.s64 + 21592;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31656
	ctx.r6.s64 = ctx.r11.s64 + 31656;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A290;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r25,r31,21604
	r25.s64 = r31.s64 + 21604;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31692
	ctx.r6.s64 = ctx.r11.s64 + 31692;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A2B8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r26,r31,21616
	r26.s64 = r31.s64 + 21616;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31728
	ctx.r6.s64 = ctx.r11.s64 + 31728;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A2E0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21628
	r27.s64 = r31.s64 + 21628;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31764
	ctx.r6.s64 = ctx.r11.s64 + 31764;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A308;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21640
	r28.s64 = r31.s64 + 21640;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31800
	ctx.r6.s64 = ctx.r11.s64 + 31800;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A330;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21652
	r29.s64 = r31.s64 + 21652;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31836
	ctx.r6.s64 = ctx.r11.s64 + 31836;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A358;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,21128(r31)
	REX_STORE_U32(r31.u32 + 21128, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r23,21132(r31)
	REX_STORE_U32(r31.u32 + 21132, r23.u32);
	// addi r30,r31,21664
	r30.s64 = r31.s64 + 21664;
	// stw r24,21136(r31)
	REX_STORE_U32(r31.u32 + 21136, r24.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r25,21140(r31)
	REX_STORE_U32(r31.u32 + 21140, r25.u32);
	// addi r6,r11,31088
	ctx.r6.s64 = ctx.r11.s64 + 31088;
	// stw r26,21144(r31)
	REX_STORE_U32(r31.u32 + 21144, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r27,21148(r31)
	REX_STORE_U32(r31.u32 + 21148, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,21152(r31)
	REX_STORE_U32(r31.u32 + 21152, r28.u32);
	// stw r29,21156(r31)
	REX_STORE_U32(r31.u32 + 21156, r29.u32);
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// bl 0x82769a60
	ctx.lr = 0x8271A3A0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21676
	r27.s64 = r31.s64 + 21676;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31184
	ctx.r6.s64 = ctx.r11.s64 + 31184;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A3C8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21688
	r28.s64 = r31.s64 + 21688;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31280
	ctx.r6.s64 = ctx.r11.s64 + 31280;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A3F0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21700
	r29.s64 = r31.s64 + 21700;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31376
	ctx.r6.s64 = ctx.r11.s64 + 31376;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A418;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,21196(r31)
	REX_STORE_U32(r31.u32 + 21196, r30.u32);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r27,21200(r31)
	REX_STORE_U32(r31.u32 + 21200, r27.u32);
	// addi r30,r31,21712
	r30.s64 = r31.s64 + 21712;
	// stw r28,21204(r31)
	REX_STORE_U32(r31.u32 + 21204, r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r29,21208(r31)
	REX_STORE_U32(r31.u32 + 21208, r29.u32);
	// addi r6,r11,31872
	ctx.r6.s64 = ctx.r11.s64 + 31872;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A450;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r27,r31,21724
	r27.s64 = r31.s64 + 21724;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31892
	ctx.r6.s64 = ctx.r11.s64 + 31892;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A478;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r28,r31,21736
	r28.s64 = r31.s64 + 21736;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31912
	ctx.r6.s64 = ctx.r11.s64 + 31912;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A4A0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// addi r29,r31,21748
	r29.s64 = r31.s64 + 21748;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,31932
	ctx.r6.s64 = ctx.r11.s64 + 31932;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A4C8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// stw r30,21216(r31)
	REX_STORE_U32(r31.u32 + 21216, r30.u32);
	// stw r27,21220(r31)
	REX_STORE_U32(r31.u32 + 21220, r27.u32);
	// stw r28,21224(r31)
	REX_STORE_U32(r31.u32 + 21224, r28.u32);
	// stw r29,21228(r31)
	REX_STORE_U32(r31.u32 + 21228, r29.u32);
loc_8271A4E0:
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,25104
	ctx.r6.s64 = ctx.r11.s64 + 25104;
	// addi r4,r31,2064
	ctx.r4.s64 = r31.s64 + 2064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A4FC;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r6,r11,25592
	ctx.r6.s64 = ctx.r11.s64 + 25592;
	// addi r4,r31,2076
	ctx.r4.s64 = r31.s64 + 2076;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A520;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r11,26080
	ctx.r6.s64 = ctx.r11.s64 + 26080;
	// addi r4,r31,2088
	ctx.r4.s64 = r31.s64 + 2088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A544;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r11,26568
	ctx.r6.s64 = ctx.r11.s64 + 26568;
	// addi r4,r31,2100
	ctx.r4.s64 = r31.s64 + 2100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A568;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,9184
	ctx.r6.s64 = ctx.r11.s64 + 9184;
	// addi r4,r31,2204
	ctx.r4.s64 = r31.s64 + 2204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A58C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,9864
	ctx.r6.s64 = ctx.r11.s64 + 9864;
	// addi r4,r31,2216
	ctx.r4.s64 = r31.s64 + 2216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A5B0;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,10616
	ctx.r6.s64 = ctx.r11.s64 + 10616;
	// addi r4,r31,2228
	ctx.r4.s64 = r31.s64 + 2228;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A5D4;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,11216
	ctx.r6.s64 = ctx.r11.s64 + 11216;
	// addi r4,r31,2240
	ctx.r4.s64 = r31.s64 + 2240;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A5F8;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,11752
	ctx.r6.s64 = ctx.r11.s64 + 11752;
	// addi r4,r31,2252
	ctx.r4.s64 = r31.s64 + 2252;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A61C;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,12168
	ctx.r6.s64 = ctx.r11.s64 + 12168;
	// addi r4,r31,2264
	ctx.r4.s64 = r31.s64 + 2264;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A640;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,12584
	ctx.r6.s64 = ctx.r11.s64 + 12584;
	// addi r4,r31,2452
	ctx.r4.s64 = r31.s64 + 2452;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A664;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271a690
	if (!ctx.cr6.eq) goto loc_8271A690;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,3364(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3364);
	// li r7,138
	ctx.r7.s64 = 138;
	// addi r6,r11,13288
	ctx.r6.s64 = ctx.r11.s64 + 13288;
	// addi r4,r31,2276
	ctx.r4.s64 = r31.s64 + 2276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82769a60
	ctx.lr = 0x8271A688;
	sub_82769A60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271a69c
	if (ctx.cr6.eq) goto loc_8271A69C;
loc_8271A690:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_8271A69C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8276A740) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,24
	ctx.r10.s64 = 24;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,8
	ctx.r9.s64 = 8;
	// vspltisw128 v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x3)));
	// li r8,40
	ctx.r8.s64 = 40;
	// vspltisw128 v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_set1_epi32(int(0x1)));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltisw128 v60,6
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x6)));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvrx128 v59,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r4,-32245
	ctx.r4.s64 = -2113208320;
	// lvlx128 v58,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,-16
	ctx.r10.s64 = -16;
	// lvrx128 v56,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r8,48
	ctx.r8.s64 = 48;
	// lvlx128 v57,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v58,v56
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v55,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvrx128 v53,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v52,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v63,v53
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v50,r7,r5
	temp.u32 = ctx.r7.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r4,-25328
	ctx.r9.s64 = ctx.r4.s64 + -25328;
	// vupkhsb128 v47,v54,v96
	simde_mm_store_si128((simde__m128i*)ctx.v47.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v54.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16))));
	// vor128 v48,v52,v50
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vupkhsb128 v49,v55,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v55.s16))));
	// li r5,-64
	ctx.r5.s64 = -64;
	// vupkhsb128 v46,v51,v96
	simde_mm_store_si128((simde__m128i*)ctx.v46.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v51.s16), simde_mm_load_si128((simde__m128i*)ctx.v51.s16))));
	// li r4,16
	ctx.r4.s64 = 16;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// vcsxwfp128 v44,v47,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v47.u32)));
	// vupkhsb128 v45,v48,v96
	simde_mm_store_si128((simde__m128i*)ctx.v45.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v48.s16), simde_mm_load_si128((simde__m128i*)ctx.v48.s16))));
	// vcsxwfp128 v13,v49,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)));
	// lvx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v46,0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v46.u32)));
	// lvx128 v0,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r9,r7
	ea = (ctx.r9.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r6,2,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x8;
	// vcsxwfp128 v42,v45,0
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)));
	// lvx128 v10,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r8,-48
	ctx.r8.s64 = -48;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vmulfp128 v40,v0,v44
	simde_mm_store_ps(ctx.v40.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v41,v13,v44
	simde_mm_store_ps(ctx.v41.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v8,v43,v42
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v7,v43,v42
	simde_mm_store_ps(ctx.v7.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmulfp128 v12,v63,v41
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v41.f32)));
	// vmaddfp v8,v11,v8,v10
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v11,v7,v10
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v9,v13,v12
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v39,v12,v40
	simde_mm_store_ps(ctx.v39.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v40.f32)));
	// vctsxs v13,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v12,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// vctsxs v11,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v10,v39,0
	simde_mm_store_si128((simde__m128i*)ctx.v10.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v39.f32)));
	// vaddsws v9,v13,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v8,v13,v11
	temp.s64 = int64_t(ctx.v13.s32[0]) - int64_t(ctx.v11.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[1]) - int64_t(ctx.v11.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[2]) - int64_t(ctx.v11.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v13.s32[3]) - int64_t(ctx.v11.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v7,v12,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v6,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v6.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v6.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v6.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v6.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v38,v9,v62
	ctx.v38.s32[0] = ctx.v9.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v38.s32[1] = ctx.v9.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v38.s32[2] = ctx.v9.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v38.s32[3] = ctx.v9.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v37,v8,v62
	ctx.v37.s32[0] = ctx.v8.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v37.s32[1] = ctx.v8.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v37.s32[2] = ctx.v8.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v37.s32[3] = ctx.v8.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v36,v7,v62
	ctx.v36.s32[0] = ctx.v7.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v36.s32[1] = ctx.v7.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v36.s32[2] = ctx.v7.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v36.s32[3] = ctx.v7.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v35,v6,v62
	ctx.v35.s32[0] = ctx.v6.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v35.s32[1] = ctx.v6.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v35.s32[2] = ctx.v6.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v35.s32[3] = ctx.v6.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vmrglw128 v63,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v34,v36,v37
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v37.u32), simde_mm_load_si128((simde__m128i*)ctx.v36.u32)));
	// vmrghw128 v33,v38,v35
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vmrglw128 v32,v38,v35
	simde_mm_store_si128((simde__m128i*)ctx.v32.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v35.u32), simde_mm_load_si128((simde__m128i*)ctx.v38.u32)));
	// vmrghw128 v62,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vmrghw128 v58,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// vmrglw128 v57,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v32.u32)));
	// lvx128 v63,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglw128 v59,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v34.u32), simde_mm_load_si128((simde__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v56,v62,0
	simde_mm_store_ps(ctx.v56.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vcsxwfp128 v55,v58,0
	simde_mm_store_ps(ctx.v55.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v54,v57,0
	simde_mm_store_ps(ctx.v54.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v13,v59,0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// vaddfp128 v11,v55,v56
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v12,v56,v55
	simde_mm_store_ps(ctx.v12.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v55.f32)));
	// li r6,-32
	ctx.r6.s64 = -32;
	// vmulfp128 v7,v63,v54
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v54.f32)));
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v53,v63,v13
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v13.f32)));
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// vmulfp128 v52,v10,v54
	simde_mm_store_ps(ctx.v52.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v54.f32)));
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// vcfpsxws128 v51,v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v11.f32)));
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lvx128 v9,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v8,v9,v11,v0
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v11.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v9,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vcfpsxws128 v50,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v50.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v10,v13,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vsubfp128 v49,v53,v52
	simde_mm_store_ps(ctx.v49.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v53.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vsraw128 v5,v51,v61
	ctx.v5.s32[0] = ctx.v51.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v5.s32[1] = ctx.v51.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v5.s32[2] = ctx.v51.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v5.s32[3] = ctx.v51.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vctsxs v13,v8,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v8.f32)));
	// vctsxs v11,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v0.f32)));
	// vsraw128 v4,v50,v61
	ctx.v4.s32[0] = ctx.v50.s32[0] >> (ctx.v61.u8[0] & 0x1F);
	ctx.v4.s32[1] = ctx.v50.s32[1] >> (ctx.v61.u8[4] & 0x1F);
	ctx.v4.s32[2] = ctx.v50.s32[2] >> (ctx.v61.u8[8] & 0x1F);
	ctx.v4.s32[3] = ctx.v50.s32[3] >> (ctx.v61.u8[12] & 0x1F);
	// vctsxs v0,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v12.f32)));
	// vaddsws v12,v13,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vcfpsxws128 v13,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v49.f32)));
	// vaddsws v11,v11,v4
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vaddsws v3,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v2,v12,v0
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v0.s32[0]);
	ctx.v2.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v0.s32[1]);
	ctx.v2.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v0.s32[2]);
	ctx.v2.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v0.s32[3]);
	ctx.v2.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v48,v3,v60
	ctx.v48.s32[0] = ctx.v3.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v48.s32[1] = ctx.v3.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v48.s32[2] = ctx.v3.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v48.s32[3] = ctx.v3.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vaddsws v1,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i sum = simde_mm_add_epi32(a, b);
		simde__m128i overflow = simde_mm_and_si128(simde_mm_xor_si128(a, sum), simde_mm_xor_si128(b, sum));
		simde__m128i sat_val = simde_mm_xor_si128(simde_mm_srai_epi32(a, 31), simde_mm_set1_epi32(0x7FFFFFFF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_castps_si128(simde_mm_blendv_ps(simde_mm_castsi128_ps(sum), simde_mm_castsi128_ps(sat_val), simde_mm_castsi128_ps(overflow))));
	}
	// vsubsws v31,v11,v13
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v13.s32[0]);
	v31.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v13.s32[1]);
	v31.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v13.s32[2]);
	v31.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v13.s32[3]);
	v31.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v47,v2,v60
	ctx.v47.s32[0] = ctx.v2.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v47.s32[1] = ctx.v2.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v47.s32[2] = ctx.v2.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v47.s32[3] = ctx.v2.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vpkswss128 v46,v48,v48
	simde_mm_store_si128((simde__m128i*)ctx.v46.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.s32), simde_mm_load_si128((simde__m128i*)ctx.v48.s32)));
	// vsraw128 v45,v1,v60
	ctx.v45.s32[0] = ctx.v1.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v45.s32[1] = ctx.v1.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v45.s32[2] = ctx.v1.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v45.s32[3] = ctx.v1.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vsraw128 v44,v31,v60
	ctx.v44.s32[0] = v31.s32[0] >> (ctx.v60.u8[0] & 0x1F);
	ctx.v44.s32[1] = v31.s32[1] >> (ctx.v60.u8[4] & 0x1F);
	ctx.v44.s32[2] = v31.s32[2] >> (ctx.v60.u8[8] & 0x1F);
	ctx.v44.s32[3] = v31.s32[3] >> (ctx.v60.u8[12] & 0x1F);
	// vpkswss128 v43,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v43.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.s32), simde_mm_load_si128((simde__m128i*)ctx.v47.s32)));
	// vpkswss128 v42,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v42.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.s32), simde_mm_load_si128((simde__m128i*)ctx.v45.s32)));
	// vpkswss128 v41,v44,v44
	simde_mm_store_si128((simde__m128i*)ctx.v41.s16, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.s32), simde_mm_load_si128((simde__m128i*)ctx.v44.s32)));
	// stvewx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stvewx128 v42,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stvewx128 v41,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82791AB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82791ac0
	if (!ctx.cr6.eq) goto loc_82791AC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82791AC0:
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82791af0
	if (ctx.cr0.eq) goto loc_82791AF0;
loc_82791AC8:
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82791af0
	if (ctx.cr0.eq) goto loc_82791AF0;
	// lhz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82791af0
	if (!ctx.cr6.eq) goto loc_82791AF0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x82791ac8
	if (!ctx.cr0.eq) goto loc_82791AC8;
loc_82791AF0:
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82791FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82791FB8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x822f6338
	ctx.lr = 0x82791FC4;
	sub_822F6338(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r29,r30,1136
	r29.s64 = r30.s64 + 1136;
	// lwz r4,1136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 1136);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x82791FE0;
	sub_826A1E70(ctx, base);
	// lwz r3,1136(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1136);
	// bl 0x8269ce98
	ctx.lr = 0x82791FE8;
	sub_8269CE98(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// stw r31,1136(r30)
	REX_STORE_U32(r30.u32 + 1136, r31.u32);
	// lis r10,-32135
	ctx.r10.s64 = -2105999360;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// addi r3,r10,12328
	ctx.r3.s64 = ctx.r10.s64 + 12328;
	// bl 0x8269d008
	ctx.lr = 0x82792000;
	sub_8269D008(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82792458) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,15292
	ctx.r4.s64 = ctx.r11.s64 + 15292;
	// addi r3,r10,6008
	ctx.r3.s64 = ctx.r10.s64 + 6008;
	// bl 0x82120600
	ctx.lr = 0x82792478;
	sub_82120600(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13376
	ctx.r3.s64 = ctx.r11.s64 + 13376;
	// bl 0x8269d008
	ctx.lr = 0x82792484;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792B08) {
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
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// addi r11,r11,22236
	ctx.r11.s64 = ctx.r11.s64 + 22236;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82793894
	ctx.lr = 0x82792B24;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,13776
	ctx.r3.s64 = ctx.r11.s64 + 13776;
	// bl 0x8269d008
	ctx.lr = 0x82792B30;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82792EF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r11,964
	ctx.r3.s64 = ctx.r11.s64 + 964;
	// b 0x82122800
	sub_82122800(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82793080) {
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
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,1552
	ctx.r11.s64 = ctx.r11.s64 + 1552;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
loc_827930A4:
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8214ab00
	ctx.lr = 0x827930B0;
	sub_8214AB00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x827930a4
	if (!ctx.cr0.lt) goto loc_827930A4;
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

DEFINE_REX_FUNC(sub_827939D8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100f7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793B48) {
	REX_FUNC_PROLOGUE();
	// .long 0x201005a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793CE8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101df
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793EA8) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010103
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827940A8) {
	REX_FUNC_PROLOGUE();
	// .long 0x200000b
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_827942B8) {
	REX_FUNC_PROLOGUE();
	// .long 0x201006d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799A68) {
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
	// lwz r11,2952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2952);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,2112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2112);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r8,r11,732
	ctx.r8.s64 = ctx.r11.s64 + 732;
	// lwz r7,3984(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 3984);
	// addi r6,r11,735
	ctx.r6.s64 = ctx.r11.s64 + 735;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r10,266
	ctx.r3.s64 = ctx.r10.s64 + 266;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r10,r5,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r31.u32);
	// rlwinm r8,r3,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,2904(r31)
	REX_STORE_U32(r31.u32 + 2904, ctx.r10.u32);
	// lwzx r7,r4,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// stw r7,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r7.u32);
	// lwz r6,2124(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 2124);
	// stw r6,2116(r31)
	REX_STORE_U32(r31.u32 + 2116, ctx.r6.u32);
	// lwzx r5,r8,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r5,2120(r31)
	REX_STORE_U32(r31.u32 + 2120, ctx.r5.u32);
	// bne cr6,0x82799ae8
	if (!ctx.cr6.eq) goto loc_82799AE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r11.u32);
	// b 0x82799aec
	goto loc_82799AEC;
loc_82799AE8:
	// stw r9,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r9.u32);
loc_82799AEC:
	// lwz r11,14808(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14808);
	// lwz r10,3416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3416);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82799b14
	if (ctx.cr6.eq) goto loc_82799B14;
	// stw r9,14816(r31)
	REX_STORE_U32(r31.u32 + 14816, ctx.r9.u32);
	// stw r11,14812(r31)
	REX_STORE_U32(r31.u32 + 14812, ctx.r11.u32);
	// b 0x82799b1c
	goto loc_82799B1C;
loc_82799B14:
	// stw r9,14812(r31)
	REX_STORE_U32(r31.u32 + 14812, ctx.r9.u32);
	// stw r11,14816(r31)
	REX_STORE_U32(r31.u32 + 14816, ctx.r11.u32);
loc_82799B1C:
	// lwz r11,20912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82799b30
	if (!ctx.cr6.eq) goto loc_82799B30;
	// lwz r11,22400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22400);
	// b 0x82799b34
	goto loc_82799B34;
loc_82799B30:
	// lwz r11,22404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22404);
loc_82799B34:
	// stw r11,22396(r31)
	REX_STORE_U32(r31.u32 + 22396, ctx.r11.u32);
	// lwz r11,21928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21928);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82799b5c
	if (!ctx.cr6.eq) goto loc_82799B5C;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,22196(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r10.u32);
	// b 0x82799b64
	goto loc_82799B64;
loc_82799B5C:
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// stw r11,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r11.u32);
loc_82799B64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x827035c8
	ctx.lr = 0x82799B70;
	sub_827035C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x8274e3f0
	ctx.lr = 0x82799B7C;
	sub_8274E3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827407a8
	ctx.lr = 0x82799B84;
	sub_827407A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827408b0
	ctx.lr = 0x82799B8C;
	sub_827408B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756b90
	ctx.lr = 0x82799B98;
	sub_82756B90(ctx, base);
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

DEFINE_REX_FUNC(sub_827B0A90) {
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
	ctx.lr = 0x827B0A98;
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
	// vspltish v29,1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_set1_epi16(short(0x1)));
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
	// vaddshs v30,v8,v11
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// vspltish v28,5
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_set1_epi16(short(0x5)));
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
	// bne cr6,0x827b0c3c
	if (!ctx.cr6.eq) goto loc_827B0C3C;
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
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v7,v58,v59,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v5,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b0e24
	if (!ctx.cr6.gt) goto loc_827B0E24;
	// li r9,0
	ctx.r9.s64 = 0;
loc_827B0B60:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vslh v6,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v11,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vadduhm v22,v6,v11
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// lvx128 v57,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v26,v10,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v25,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// vperm128 v6,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v21,v3,v10
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v5,v11,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v4,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vslh v20,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v9,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v11,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v16,v27,v31
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v15,v25,v26
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v3,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// vadduhm v27,v17,v18
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v31,v22,v16
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vadduhm v26,v21,v15
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v14,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v6,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v25,v0,v24
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vadduhm v24,v31,v3
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vsubshs v21,v9,v14
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsubshs v20,v7,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v23,v0,v23
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vadduhm v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v19,v24,v30
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v17,v21,v25
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v16,v20,v23
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v18,v22,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v6,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v3,v18,v16
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v18.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsrah v15,v6,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r6,48
	ctx.r6.s64 = ctx.r6.s64 + 48;
	// blt cr6,0x827b0b60
	if (ctx.cr6.lt) goto loc_827B0B60;
	// b 0x827b0e24
	goto loc_827B0E24;
loc_827B0C3C:
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
	// lvlx128 v54,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v6,v54,v52
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvrx128 v51,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lvrx128 v49,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v55,v53
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvlx128 v48,r10,r9
	temp.u32 = ctx.r10.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vor128 v9,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vmrghb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v47,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v11,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvlx128 v46,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvrx128 v45,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v46,v47
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvlx128 v44,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v4,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v31,v0,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x827b0e24
	if (!ctx.cr6.gt) goto loc_827B0E24;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// li r30,-32
	r30.s64 = -32;
	// li r31,-16
	r31.s64 = -16;
loc_827B0CC8:
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vor v27,v11,v11
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v11.u8));
	// vor v11,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// vor v7,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vor v26,v10,v10
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v10,v6,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v6.u8));
	// lvx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v2,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)ctx.v2.u8));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vor v6,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v31,v11,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v42,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v24,v11,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v3,v43,v63,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v23,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v10,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v19,v63,v42,v2
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vslh v21,v10,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v18,v0,v3
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v20,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v24,v31
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v7,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v14,v0,v19
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v17,v7,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v31,v18,v18
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// vadduhm v18,v21,v22
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v22.u16)));
	// vadduhm v24,v23,v11
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v22,v20,v10
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vor v25,v9,v9
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vslh v23,v6,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v6,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v9,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v16,v24,v15
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vslh v21,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v19,v23
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v23.u16)));
	// vadduhm v27,v22,v18
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vslh v20,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vor v5,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vslh v24,v9,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v9,v28
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v15,v27,v15
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vor v4,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vslh v22,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v17,v16,v17
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v16.u16), simde_mm_load_si128((simde__m128i*)v17.u16)));
	// vadduhm v26,v24,v26
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v19,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v5,v29
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v24,v23,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// vsubshs v16,v0,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vsubshs v18,v0,v21
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsubshs v23,v3,v22
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vadduhm v20,v15,v30
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v15.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsubshs v22,v31,v19
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vadduhm v21,v17,v30
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v17.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vadduhm v15,v27,v14
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)v14.u16)));
	// vadduhm v14,v24,v26
	simde_mm_store_si128((simde__m128i*)v14.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vslh v19,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v27,v23,v18
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v18.u16)));
	// vadduhm v26,v22,v16
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v22.u16), simde_mm_load_si128((simde__m128i*)v16.u16)));
	// vsubshs v25,v0,v19
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsubshs v24,v4,v17
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vadduhm v23,v14,v15
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)v15.u16)));
	// vadduhm v22,v21,v27
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v21.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v21,v20,v26
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v26.u16)));
	// vadduhm v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v19,v23,v30
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v18,v22,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vadduhm v16,v19,v20
	simde_mm_store_si128((simde__m128i*)v16.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v19.u16), simde_mm_load_si128((simde__m128i*)v20.u16)));
	// stvx128 v18,r10,r30
	ea = (ctx.r10.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v15,v16,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stvx128 v15,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vor128 v2,v41,v41
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x827b0cc8
	if (ctx.cr6.lt) goto loc_827B0CC8;
loc_827B0E24:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827afcd8
	ctx.lr = 0x827B0E34;
	sub_827AFCD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

