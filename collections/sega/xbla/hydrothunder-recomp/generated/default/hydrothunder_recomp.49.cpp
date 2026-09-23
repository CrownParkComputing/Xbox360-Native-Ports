#include "hydrothunder_funcs.49.h"

DEFINE_REX_FUNC(sub_82122518) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82122520;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r30,4(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 4);
	// b 0x8212255c
	goto loc_8212255C;
loc_82122538:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x82120780
	ctx.lr = 0x82122544;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82122554
	if (!ctx.cr0.lt) goto loc_82122554;
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x8212255c
	goto loc_8212255C;
loc_82122554:
	// mr r31,r30
	r31.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8212255C:
	// lbz r11,57(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 57);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82122538
	if (ctx.cr0.eq) goto loc_82122538;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82122588
	if (ctx.cr6.eq) goto loc_82122588;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120780
	ctx.lr = 0x82122580;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821225ec
	if (!ctx.cr0.lt) goto loc_821225EC;
loc_82122588:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120d70
	ctx.lr = 0x82122594;
	sub_82120D70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82122c38
	ctx.lr = 0x821225C4;
	sub_82122C38(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82122800
	ctx.lr = 0x821225D4;
	sub_82122800(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x821225E4;
	sub_82120AC0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82122800
	ctx.lr = 0x821225EC;
	sub_82122800(ctx, base);
loc_821225EC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8212CAE0) {
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
	ctx.lr = 0x8212CAE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8212cb24
	goto loc_8212CB24;
loc_8212CB04:
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82125d00
	ctx.lr = 0x8212CB14;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212cb48
	if (ctx.cr0.eq) goto loc_8212CB48;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
loc_8212CB24:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8212cb04
	if (!ctx.cr6.eq) goto loc_8212CB04;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212CB30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212cbc4
	if (ctx.cr6.eq) goto loc_8212CBC4;
	// lwz r28,28(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r29,r11,28
	r29.s64 = ctx.r11.s64 + 28;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8212cbb8
	goto loc_8212CBB8;
loc_8212CB48:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// b 0x8212cb30
	goto loc_8212CB30;
loc_8212CB50:
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212CB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x8212cb78
	if (ctx.cr6.eq) goto loc_8212CB78;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8212cb84
	goto loc_8212CB84;
loc_8212CB78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8212CB80;
	sub_8269CE98(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_8212CB84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8212cbb4
	if (ctx.cr0.eq) goto loc_8212CBB4;
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
	ctx.lr = 0x8212CBA4;
	sub_8269CE98(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r11.u32);
	// b 0x8212cbb8
	goto loc_8212CBB8;
loc_8212CBB4:
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_8212CBB8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bne cr6,0x8212cb50
	if (!ctx.cr6.eq) goto loc_8212CB50;
	// b 0x8212cbdc
	goto loc_8212CBDC;
loc_8212CBC4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-24028
	ctx.r4.s64 = ctx.r11.s64 + -24028;
	// addi r3,r10,-23680
	ctx.r3.s64 = ctx.r10.s64 + -23680;
	// li r5,242
	ctx.r5.s64 = 242;
	// bl 0x821231d0
	ctx.lr = 0x8212CBDC;
	sub_821231D0(ctx, base);
loc_8212CBDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82134898) {
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
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822c4808
	ctx.lr = 0x821348B0;
	sub_822C4808(ctx, base);
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

DEFINE_REX_FUNC(sub_821359A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19192
	ctx.r11.s64 = ctx.r11.s64 + -19192;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821359d4
	if (ctx.cr0.eq) goto loc_821359D4;
	// bl 0x8269ce98
	ctx.lr = 0x821359D4;
	sub_8269CE98(ctx, base);
loc_821359D4:
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

DEFINE_REX_FUNC(sub_821384E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821384E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r5,r3,64
	ctx.r5.s64 = ctx.r3.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,6096(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6096);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82173338
	ctx.lr = 0x82138508;
	sub_82173338(ctx, base);
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
	// lwz r4,72(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// bctrl 
	ctx.lr = 0x82138530;
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
	ctx.lr = 0x8213854C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6092(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6092);
	// li r7,12
	ctx.r7.s64 = 12;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,-2
	ctx.r5.s64 = ctx.r11.s64 + -2;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82138574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213C218) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82162af8
	ctx.lr = 0x8213C238;
	sub_82162AF8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8213c958
	ctx.lr = 0x8213C24C;
	sub_8213C958(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213c264
	if (ctx.cr6.eq) goto loc_8213C264;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x8213c268
	goto loc_8213C268;
loc_8213C264:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8213C268:
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

DEFINE_REX_FUNC(sub_8213FC60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17140
	ctx.r11.s64 = ctx.r11.s64 + -17140;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8213fc8c
	if (ctx.cr0.eq) goto loc_8213FC8C;
	// bl 0x8269ce98
	ctx.lr = 0x8213FC8C;
	sub_8269CE98(ctx, base);
loc_8213FC8C:
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

DEFINE_REX_FUNC(sub_82142250) {
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
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82142270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82144DC8) {
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
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82144e10
	if (ctx.cr6.eq) goto loc_82144E10;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82144e10
	if (ctx.cr6.eq) goto loc_82144E10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82144e10
	if (ctx.cr6.eq) goto loc_82144E10;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-15244
	ctx.r4.s64 = ctx.r11.s64 + -15244;
	// addi r3,r10,-15200
	ctx.r3.s64 = ctx.r10.s64 + -15200;
	// li r5,195
	ctx.r5.s64 = 195;
	// bl 0x821231d0
	ctx.lr = 0x82144E10;
	sub_821231D0(ctx, base);
loc_82144E10:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82148090) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821480BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6036(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821480D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821480F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6120(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82148110
	if (ctx.cr6.eq) goto loc_82148110;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148110;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148110:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x82148164
	if (!ctx.cr6.gt) goto loc_82148164;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8214814c
	goto loc_8214814C;
loc_82148134:
	// lbz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82148148
	if (ctx.cr0.eq) goto loc_82148148;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
loc_82148148:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_8214814C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82148134
	if (!ctx.cr6.eq) goto loc_82148134;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82148164;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82148164:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_8214F708) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8214F710;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8214f8b8
	ctx.lr = 0x8214F71C;
	sub_8214F8B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8214f744
	if (ctx.cr0.eq) goto loc_8214F744;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-15536
	ctx.r4.s64 = ctx.r11.s64 + -15536;
	// bl 0x821fd140
	ctx.lr = 0x8214F738;
	sub_821FD140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r31
	r29.u64 = r31.u64;
	// bne 0x8214f748
	if (!ctx.cr0.eq) goto loc_8214F748;
loc_8214F744:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8214F748:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8214f824
	if (ctx.cr6.eq) goto loc_8214F824;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8214f7bc
	if (ctx.cr6.eq) goto loc_8214F7BC;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8214f77c
	if (!ctx.cr6.eq) goto loc_8214F77C;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8214F77C:
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214f78c
	if (ctx.cr6.eq) goto loc_8214F78C;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
loc_8214F78C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8214f798
	if (ctx.cr6.eq) goto loc_8214F798;
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8214F798:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82196388
	ctx.lr = 0x8214F7B4;
	sub_82196388(ctx, base);
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// b 0x8214f7c0
	goto loc_8214F7C0;
loc_8214F7BC:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8214F7C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8214f824
	if (ctx.cr6.eq) goto loc_8214F824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82196490
	ctx.lr = 0x8214F7D0;
	sub_82196490(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8214f828
	if (!ctx.cr0.eq) goto loc_8214F828;
	// bl 0x82196648
	ctx.lr = 0x8214F7E0;
	sub_82196648(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8214f808
	if (ctx.cr6.eq) goto loc_8214F808;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8214f810
	goto loc_8214F810;
loc_8214F808:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
loc_8214F810:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
loc_8214F824:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8214F828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82157778) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
loc_821577A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157810
	if (ctx.cr6.eq) goto loc_82157810;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821577f0
	if (ctx.cr6.eq) goto loc_821577F0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821577cc
	if (ctx.cr6.eq) goto loc_821577CC;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821577d8
	if (ctx.cr6.eq) goto loc_821577D8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82157810
	if (!ctx.cr6.eq) goto loc_82157810;
loc_821577CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// b 0x821577f8
	goto loc_821577F8;
loc_821577D8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821577EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82157808
	goto loc_82157808;
loc_821577F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
loc_821577F8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x82157808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82157808:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82157814
	if (ctx.cr6.eq) goto loc_82157814;
loc_82157810:
	// li r31,1
	r31.s64 = 1;
loc_82157814:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821577a0
	if (ctx.cr0.eq) goto loc_821577A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82157824;
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

DEFINE_REX_FUNC(sub_8215C8F8) {
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
	// beq cr6,0x8215c91c
	if (ctx.cr6.eq) goto loc_8215C91C;
	// bl 0x8269d770
	ctx.lr = 0x8215C91C;
	sub_8269D770(ctx, base);
loc_8215C91C:
	// li r11,0
	ctx.r11.s64 = 0;
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

DEFINE_REX_FUNC(sub_8215E650) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,65(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 65);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8215e670
	if (!ctx.cr0.eq) goto loc_8215E670;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8215E670:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8215e690
	if (!ctx.cr6.eq) goto loc_8215E690;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8215e6ac
	goto loc_8215E6AC;
loc_8215E690:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8215e6a8
	if (!ctx.cr6.eq) goto loc_8215E6A8;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x8215e6ac
	goto loc_8215E6AC;
loc_8215E6A8:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_8215E6AC:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821609F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821609F8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82160728
	ctx.lr = 0x82160A14;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x82160a38
	if (!ctx.cr6.eq) goto loc_82160A38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82160A2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82160A30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
loc_82160A38:
	// li r30,0
	r30.s64 = 0;
loc_82160A3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160728
	ctx.lr = 0x82160A44;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
	// bne cr6,0x82160b30
	if (!ctx.cr6.eq) goto loc_82160B30;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160A60;
	sub_82120AC0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160fc8
	ctx.lr = 0x82160A6C;
	sub_82160FC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160b48
	if (ctx.cr0.eq) goto loc_82160B48;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f3b8
	ctx.lr = 0x82160A80;
	sub_8215F3B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82160b64
	if (!ctx.cr0.eq) goto loc_82160B64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160728
	ctx.lr = 0x82160A90;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,58
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 58, ctx.xer);
	// bne cr6,0x82160b90
	if (!ctx.cr6.eq) goto loc_82160B90;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f5f8
	ctx.lr = 0x82160AB4;
	sub_8215F5F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160858
	ctx.lr = 0x82160AC0;
	sub_82160858(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160b48
	if (ctx.cr0.eq) goto loc_82160B48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160728
	ctx.lr = 0x82160AD0;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82160b04
	if (ctx.cr6.eq) goto loc_82160B04;
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x82160ba0
	if (!ctx.cr6.eq) goto loc_82160BA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82160728
	ctx.lr = 0x82160AF8;
	sub_82160728(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// bne cr6,0x82160b14
	if (!ctx.cr6.eq) goto loc_82160B14;
loc_82160B04:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r30,1
	r30.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82160B14:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160B24;
	sub_82120AC0(ctx, base);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82160a3c
	if (ctx.cr0.eq) goto loc_82160A3C;
	// b 0x82160a2c
	goto loc_82160A2C;
loc_82160B30:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18924
	ctx.r4.s64 = ctx.r11.s64 + 18924;
	// bl 0x82160698
	ctx.lr = 0x82160B44;
	sub_82160698(ctx, base);
	// b 0x82160a30
	goto loc_82160A30;
loc_82160B48:
	// li r31,0
	r31.s64 = 0;
loc_82160B4C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x82160B5C;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82160a30
	goto loc_82160A30;
loc_82160B64:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82160b78
	if (!ctx.cr6.lt) goto loc_82160B78;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_82160B78:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,18964
	ctx.r4.s64 = ctx.r11.s64 + 18964;
loc_82160B80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82160698
	ctx.lr = 0x82160B88;
	sub_82160698(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82160b4c
	goto loc_82160B4C;
loc_82160B90:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,18992
	ctx.r4.s64 = ctx.r11.s64 + 18992;
	// b 0x82160b80
	goto loc_82160B80;
loc_82160BA0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,19032
	ctx.r4.s64 = ctx.r11.s64 + 19032;
	// b 0x82160b80
	goto loc_82160B80;
}

DEFINE_REX_FUNC(sub_82170348) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82170368
	if (ctx.cr6.eq) goto loc_82170368;
loc_82170358:
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
loc_82170368:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170358
	if (!ctx.cr6.eq) goto loc_82170358;
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// lwz r10,396(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170358
	if (!ctx.cr6.eq) goto loc_82170358;
	// lwz r11,788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 788);
	// lwz r10,788(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 788);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170358
	if (!ctx.cr6.eq) goto loc_82170358;
	// lwz r11,1884(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1884);
	// lwz r10,1884(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 1884);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82170358
	if (!ctx.cr6.eq) goto loc_82170358;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821733F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82173400;
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
	// lwz r31,80(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
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
	ctx.lr = 0x82173440;
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
	ctx.lr = 0x82173460;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,27504
	ctx.r4.s64 = ctx.r10.s64 + 27504;
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
	ctx.lr = 0x8217348C;
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
	ctx.lr = 0x821734AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82179E08) {
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
	ctx.lr = 0x82179E10;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// std r27,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// bl 0x82160340
	ctx.lr = 0x82179E30;
	sub_82160340(ctx, base);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179E48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82126238
	ctx.lr = 0x82179E58;
	sub_82126238(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82160388
	ctx.lr = 0x82179E68;
	sub_82160388(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82179E84;
	sub_82120AC0(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x82179eb0
	if (ctx.cr0.eq) goto loc_82179EB0;
loc_82179E8C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82120ac0
	ctx.lr = 0x82179E9C;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82179EA4;
	sub_8215F0F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82179EA8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d04
	return;
loc_82179EB0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-18676
	r28.s64 = ctx.r11.s64 + -18676;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f418
	ctx.lr = 0x82179EC4;
	sub_8215F418(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179e8c
	if (ctx.cr0.eq) goto loc_82179E8C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f670
	ctx.lr = 0x82179ED8;
	sub_8215F670(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8217a030
	ctx.lr = 0x82179EE8;
	sub_8217A030(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82179f14
	if (!ctx.cr0.eq) goto loc_82179F14;
	// mr r31,r27
	r31.u64 = r27.u64;
loc_82179EF4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82120ac0
	ctx.lr = 0x82179F04;
	sub_82120AC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f0f0
	ctx.lr = 0x82179F0C;
	sub_8215F0F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82179ea8
	goto loc_82179EA8;
loc_82179F14:
	// lwz r3,6072(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6072);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82179F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82126238
	ctx.lr = 0x82179F38;
	sub_82126238(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,28452
	ctx.r4.s64 = ctx.r11.s64 + 28452;
	// bl 0x82121928
	ctx.lr = 0x82179F44;
	sub_82121928(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82160388
	ctx.lr = 0x82179F54;
	sub_82160388(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82179F64;
	sub_82120AC0(ctx, base);
	// li r31,1
	r31.s64 = 1;
	// b 0x82179ef4
	goto loc_82179EF4;
}

DEFINE_REX_FUNC(sub_82183478) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// lfs f0,172(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// std r10,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r10.u64);
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// std r9,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// bl 0x82176380
	ctx.lr = 0x821834E4;
	sub_82176380(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_821892B8) {
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
	ctx.lr = 0x821892C0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2c8c
	ctx.lr = 0x821892C8;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// li r26,0
	r26.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// addi r25,r11,12
	r25.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821897ac
	if (!ctx.cr6.gt) goto loc_821897AC;
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
	// addi r21,r4,100
	r21.s64 = ctx.r4.s64 + 100;
	// lfs f0,15048(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r20,r4,104
	r20.s64 = ctx.r4.s64 + 104;
	// lfs f28,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	f28.f64 = double(temp.f32);
	// addi r22,r4,96
	r22.s64 = ctx.r4.s64 + 96;
	// lfs f12,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f12.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f4,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// addi r24,r10,-27152
	r24.s64 = ctx.r10.s64 + -27152;
	// lfs f27,160(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	f27.f64 = double(temp.f32);
	// addi r23,r9,-27136
	r23.s64 = ctx.r9.s64 + -27136;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	f26.f64 = double(temp.f32);
loc_82189330:
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r9,0(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwzx r10,r27,r10
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82189788
	if (!ctx.cr6.eq) goto loc_82189788;
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f10,208(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r3,208
	ctx.r7.s64 = ctx.r3.s64 + 208;
	// lfs f9,212(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f9,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,224(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f7,228(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f7.f64 = double(temp.f32);
	// addi r6,r3,212
	ctx.r6.s64 = ctx.r3.s64 + 212;
	// lfs f6,256(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f5,260(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r3,224
	ctx.r5.s64 = ctx.r3.s64 + 224;
	// addi r31,r3,228
	r31.s64 = ctx.r3.s64 + 228;
	// fmadds f10,f9,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f8.f64, ctx.f10.f64)));
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
	// bge cr6,0x82189788
	if (!ctx.cr6.lt) goto loc_82189788;
	// lfs f9,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r11,256
	r29.s64 = ctx.r11.s64 + 256;
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// addi r19,r1,-288
	r19.s64 = ctx.r1.s64 + -288;
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f9,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,-288(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -288, temp.u32);
	// addi r18,r1,-308
	r18.s64 = ctx.r1.s64 + -308;
	// lvx128 v63,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r17,r1,-320
	r17.s64 = ctx.r1.s64 + -320;
	// addi r9,r3,116
	ctx.r9.s64 = ctx.r3.s64 + 116;
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// addi r8,r3,108
	ctx.r8.s64 = ctx.r3.s64 + 108;
	// addi r10,r3,124
	ctx.r10.s64 = ctx.r3.s64 + 124;
	// fmsubs f11,f9,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, -ctx.f11.f64)));
	// fmadds f11,f11,f4,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f12.f64)));
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// fmuls f11,f9,f28
	ctx.f11.f64 = double(float(ctx.f9.f64 * f28.f64));
	// rlwinm r15,r16,27,29,29
	r15.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x4;
	// rlwinm r16,r16,30,29,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 30) & 0x4;
	// or r16,r15,r16
	r16.u64 = r15.u64 | r16.u64;
	// lfsx f7,r29,r16
	temp.u32 = REX_LOAD_U32(r29.u32 + r16.u32);
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
	// lvx128 v62,r0,r19
	ea = (r19.u32) & ~0xF;
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
	// stvewx128 v60,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r17
	ea = (r17.u32) & ~0x3;
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
	// ble cr6,0x82189538
	if (!ctx.cr6.gt) goto loc_82189538;
	// lfs f9,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r11,256
	r29.s64 = ctx.r11.s64 + 256;
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f13,-272(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -272, temp.u32);
	// fsubs f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// addi r19,r1,-272
	r19.s64 = ctx.r1.s64 + -272;
	// addi r18,r1,-316
	r18.s64 = ctx.r1.s64 + -316;
	// addi r17,r1,-304
	r17.s64 = ctx.r1.s64 + -304;
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
	// lfsx f6,r29,r16
	temp.u32 = REX_LOAD_U32(r29.u32 + r16.u32);
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
	// lvx128 v61,r0,r19
	ea = (r19.u32) & ~0xF;
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
	// stvewx128 v59,r0,r18
	ea = (r18.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v61,v61,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v61,r0,r17
	ea = (r17.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-316(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -316);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f2,f9,f26
	ctx.f2.f64 = double(float(ctx.f9.f64 * f26.f64));
loc_82189538:
	// lfs f9,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r3,120
	r29.s64 = ctx.r3.s64 + 120;
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// fcmpu cr6,f30,f9
	ctx.cr6.compare(f30.f64, ctx.f9.f64);
	// ble cr6,0x821895f4
	if (!ctx.cr6.gt) goto loc_821895F4;
	// lfs f9,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r19,r11,256
	r19.s64 = ctx.r11.s64 + 256;
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// addi r18,r1,-256
	r18.s64 = ctx.r1.s64 + -256;
	// fsubs f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 - ctx.f9.f64));
	// stfs f13,-256(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -256, temp.u32);
	// addi r17,r1,-312
	r17.s64 = ctx.r1.s64 + -312;
	// addi r16,r1,-300
	r16.s64 = ctx.r1.s64 + -300;
	// fdivs f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// fmadds f9,f9,f12,f12
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f12.f64)));
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// mfcr r15
	r15.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r15.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r15.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r15.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r15.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r15.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r15.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r15.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r15.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r15.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r15.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r15.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r15.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r15.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r15.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r15.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r15.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r15.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r15.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r15.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r15.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r15.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r15.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r15.u64 |= ctx.cr5.so ? 0x100 : 0;
	r15.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r15.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r15.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r15.u64 |= ctx.cr6.so ? 0x10 : 0;
	r15.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r15.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r15.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r15.u64 |= ctx.cr7.so ? 0x1 : 0;
	// fmuls f9,f7,f28
	ctx.f9.f64 = double(float(ctx.f7.f64 * f28.f64));
	// rlwinm r14,r15,27,29,29
	r14.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 27) & 0x4;
	// rlwinm r15,r15,30,29,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 30) & 0x4;
	// or r15,r14,r15
	r15.u64 = r14.u64 | r15.u64;
	// lfsx f6,r19,r15
	temp.u32 = REX_LOAD_U32(r19.u32 + r15.u32);
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
	// lvx128 v61,r0,r18
	ea = (r18.u32) & ~0xF;
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
	// stvewx128 v63,r0,r17
	ea = (r17.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v61,v62
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// stvewx128 v63,r0,r16
	ea = (r16.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f9,-312(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -312);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fmuls f3,f9,f26
	ctx.f3.f64 = double(float(ctx.f9.f64 * f26.f64));
loc_821895F4:
	// fmuls f11,f3,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// rlwinm r17,r19,27,29,29
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// rlwinm r19,r19,30,29,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x4;
	// mfcr r18
	r18.u64 = ctx.cr0.lt ? 0x80000000 : 0;
	r18.u64 |= ctx.cr0.gt ? 0x40000000 : 0;
	r18.u64 |= ctx.cr0.eq ? 0x20000000 : 0;
	r18.u64 |= ctx.cr0.so ? 0x10000000 : 0;
	r18.u64 |= ctx.cr1.lt ? 0x8000000 : 0;
	r18.u64 |= ctx.cr1.gt ? 0x4000000 : 0;
	r18.u64 |= ctx.cr1.eq ? 0x2000000 : 0;
	r18.u64 |= ctx.cr1.so ? 0x1000000 : 0;
	r18.u64 |= ctx.cr2.lt ? 0x800000 : 0;
	r18.u64 |= ctx.cr2.gt ? 0x400000 : 0;
	r18.u64 |= ctx.cr2.eq ? 0x200000 : 0;
	r18.u64 |= ctx.cr2.so ? 0x100000 : 0;
	r18.u64 |= ctx.cr3.lt ? 0x80000 : 0;
	r18.u64 |= ctx.cr3.gt ? 0x40000 : 0;
	r18.u64 |= ctx.cr3.eq ? 0x20000 : 0;
	r18.u64 |= ctx.cr3.so ? 0x10000 : 0;
	r18.u64 |= ctx.cr4.lt ? 0x8000 : 0;
	r18.u64 |= ctx.cr4.gt ? 0x4000 : 0;
	r18.u64 |= ctx.cr4.eq ? 0x2000 : 0;
	r18.u64 |= ctx.cr4.so ? 0x1000 : 0;
	r18.u64 |= ctx.cr5.lt ? 0x800 : 0;
	r18.u64 |= ctx.cr5.gt ? 0x400 : 0;
	r18.u64 |= ctx.cr5.eq ? 0x200 : 0;
	r18.u64 |= ctx.cr5.so ? 0x100 : 0;
	r18.u64 |= ctx.cr6.lt ? 0x80 : 0;
	r18.u64 |= ctx.cr6.gt ? 0x40 : 0;
	r18.u64 |= ctx.cr6.eq ? 0x20 : 0;
	r18.u64 |= ctx.cr6.so ? 0x10 : 0;
	r18.u64 |= ctx.cr7.lt ? 0x8 : 0;
	r18.u64 |= ctx.cr7.gt ? 0x4 : 0;
	r18.u64 |= ctx.cr7.eq ? 0x2 : 0;
	r18.u64 |= ctx.cr7.so ? 0x1 : 0;
	// rlwinm r16,r18,27,29,29
	r16.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 27) & 0x4;
	// lfs f5,-308(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -308);
	ctx.f5.f64 = double(temp.f32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f1,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r6,r18,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 30) & 0x4;
	// lfs f7,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fneg f31,f1
	f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f25,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmuls f24,f7,f1
	f24.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// lfs f22,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	f22.f64 = double(temp.f32);
	// fmuls f23,f7,f25
	f23.f64 = double(float(ctx.f7.f64 * f25.f64));
	// or r9,r17,r19
	ctx.r9.u64 = r17.u64 | r19.u64;
	// lfs f7,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// fneg f21,f25
	f21.u64 = f25.u64 ^ 0x8000000000000000;
	// or r6,r16,r6
	ctx.r6.u64 = r16.u64 | ctx.r6.u64;
	// addi r31,r11,256
	r31.s64 = ctx.r11.s64 + 256;
	// lfs f7,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfsx f8,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f1,f8,f1,f31
	ctx.f1.f64 = ctx.f8.f64 >= 0.0 ? ctx.f1.f64 : f31.f64;
	// fmuls f8,f24,f4
	ctx.f8.f64 = double(float(f24.f64 * ctx.f4.f64));
	// lfsx f31,r31,r6
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r6.u32);
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
	// ble cr6,0x82189710
	if (!ctx.cr6.gt) goto loc_82189710;
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
	// rlwinm r7,r9,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
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
	// rlwinm r6,r8,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fneg f29,f6
	f29.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// rlwinm r10,r8,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fsubs f25,f13,f10
	f25.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lfs f10,-304(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -304);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfsx f24,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f24.f64 = double(temp.f32);
	// fsel f9,f24,f7,f9
	ctx.f9.f64 = f24.f64 >= 0.0 ? ctx.f7.f64 : ctx.f9.f64;
	// lfsx f7,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
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
loc_82189710:
	// fmuls f6,f8,f2
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// lfs f29,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
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
	// ble cr6,0x82189760
	if (!ctx.cr6.gt) goto loc_82189760;
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
loc_82189760:
	// fmuls f8,f8,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f6,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// lfs f7,4(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f10,f10,f3,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f3.f64, ctx.f8.f64)));
	// fmadds f11,f9,f3,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, ctx.f11.f64)));
	// fadds f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f6.f64));
	// stfs f10,0(r25)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// fadds f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// stfs f11,4(r25)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r25.u32 + 4, temp.u32);
loc_82189788:
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// add r25,r10,r25
	r25.u64 = ctx.r10.u64 + r25.u64;
	// cmpw cr6,r26,r9
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82189330
	if (ctx.cr6.lt) goto loc_82189330;
loc_821897AC:
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cd8
	ctx.lr = 0x821897B4;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_821C8240) {
	REX_FUNC_PROLOGUE();
	// lwz r10,100(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mulli r11,r4,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x821c825c
	if (ctx.cr6.lt) goto loc_821C825C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821C825C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C93F8) {
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
	ctx.lr = 0x821C9400;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	r25.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x82178268
	ctx.lr = 0x821C941C;
	sub_82178268(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,255
	ctx.r11.s64 = 255;
	// addi r8,r10,-16084
	ctx.r8.s64 = ctx.r10.s64 + -16084;
	// li r9,204
	ctx.r9.s64 = 204;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r8,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// stb r9,127(r30)
	REX_STORE_U8(r30.u32 + 127, ctx.r9.u8);
	// li r3,52
	ctx.r3.s64 = 52;
	// stb r9,126(r30)
	REX_STORE_U8(r30.u32 + 126, ctx.r9.u8);
	// addi r31,r30,124
	r31.s64 = r30.s64 + 124;
	// stb r9,125(r30)
	REX_STORE_U8(r30.u32 + 125, ctx.r9.u8);
	// addi r29,r30,128
	r29.s64 = r30.s64 + 128;
	// stb r11,124(r30)
	REX_STORE_U8(r30.u32 + 124, ctx.r11.u8);
	// addi r27,r30,132
	r27.s64 = r30.s64 + 132;
	// stb r10,131(r30)
	REX_STORE_U8(r30.u32 + 131, ctx.r10.u8);
	// stb r10,130(r30)
	REX_STORE_U8(r30.u32 + 130, ctx.r10.u8);
	// stb r10,129(r30)
	REX_STORE_U8(r30.u32 + 129, ctx.r10.u8);
	// stb r11,128(r30)
	REX_STORE_U8(r30.u32 + 128, ctx.r11.u8);
	// stb r11,135(r30)
	REX_STORE_U8(r30.u32 + 135, ctx.r11.u8);
	// stb r11,134(r30)
	REX_STORE_U8(r30.u32 + 134, ctx.r11.u8);
	// stb r11,133(r30)
	REX_STORE_U8(r30.u32 + 133, ctx.r11.u8);
	// stb r11,132(r30)
	REX_STORE_U8(r30.u32 + 132, ctx.r11.u8);
	// bl 0x822f6280
	ctx.lr = 0x821C9478;
	sub_822F6280(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq 0x821c94a8
	if (ctx.cr0.eq) goto loc_821C94A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x82120600
	ctx.lr = 0x821C9490;
	sub_82120600(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x8219d708
	ctx.lr = 0x821C94A4;
	sub_8219D708(ctx, base);
	// b 0x821c94ac
	goto loc_821C94AC;
loc_821C94A8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C94AC:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r26,r30,80
	r26.s64 = r30.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x821C94C0;
	sub_82145710(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c94dc
	if (ctx.cr0.eq) goto loc_821C94DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r28,r28,0,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821C94DC;
	sub_82120AC0(ctx, base);
loc_821C94DC:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821C94E4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c9514
	if (ctx.cr0.eq) goto loc_821C9514;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-16096
	ctx.r4.s64 = ctx.r11.s64 + -16096;
	// bl 0x82120600
	ctx.lr = 0x821C94FC;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,2
	r28.u64 = r28.u64 | 2;
	// bl 0x8219d708
	ctx.lr = 0x821C9510;
	sub_8219D708(ctx, base);
	// b 0x821c9518
	goto loc_821C9518;
loc_821C9514:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C9518:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x821C9528;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c9544
	if (ctx.cr0.eq) goto loc_821C9544;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r28,r28,0,31,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821C9544;
	sub_82120AC0(ctx, base);
loc_821C9544:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821C954C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c957c
	if (ctx.cr0.eq) goto loc_821C957C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-16240
	ctx.r4.s64 = ctx.r11.s64 + -16240;
	// bl 0x82120600
	ctx.lr = 0x821C9564;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
	// bl 0x8219d708
	ctx.lr = 0x821C9578;
	sub_8219D708(ctx, base);
	// b 0x821c9580
	goto loc_821C9580;
loc_821C957C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_821C9580:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x821C9590;
	sub_82145710(ctx, base);
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c95ac
	if (ctx.cr0.eq) goto loc_821C95AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r28,r28,0,30,28
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821C95AC;
	sub_82120AC0(ctx, base);
loc_821C95AC:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x822f6280
	ctx.lr = 0x821C95B4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c95f0
	if (ctx.cr0.eq) goto loc_821C95F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// bl 0x82120600
	ctx.lr = 0x821C95CC;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r28,r28,8
	r28.u64 = r28.u64 | 8;
	// bl 0x821911f8
	ctx.lr = 0x821C95DC;
	sub_821911F8(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,-23192
	ctx.r10.s64 = ctx.r10.s64 + -23192;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x821c95f4
	goto loc_821C95F4;
loc_821C95F0:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C95F4:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82145710
	ctx.lr = 0x821C9604;
	sub_82145710(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8269ce98
	ctx.lr = 0x821C9610;
	sub_8269CE98(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821C9618;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9644
	if (ctx.cr0.eq) goto loc_821C9644;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-26512
	ctx.r10.s64 = ctx.r10.s64 + -26512;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c9648
	goto loc_821C9648;
loc_821C9644:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C9648:
	// rlwinm. r10,r28,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// stb r25,33(r31)
	REX_STORE_U8(r31.u32 + 33, r25.u8);
	// beq 0x821c9668
	if (ctx.cr0.eq) goto loc_821C9668;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x821C9668;
	sub_82120AC0(ctx, base);
loc_821C9668:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821C9670;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9690
	if (ctx.cr0.eq) goto loc_821C9690;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821C9688;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c9694
	goto loc_821C9694;
loc_821C9690:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C9694:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r31,r30,96
	r31.s64 = r30.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C96A4;
	sub_821D3988(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821C96AC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c96c4
	if (ctx.cr0.eq) goto loc_821C96C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821C96BC;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c96c8
	goto loc_821C96C8;
loc_821C96C4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C96C8:
	// stw r4,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C96D4;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821C96DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c96f4
	if (ctx.cr0.eq) goto loc_821C96F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821c9b18
	ctx.lr = 0x821C96EC;
	sub_821C9B18(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821c96f8
	goto loc_821C96F8;
loc_821C96F4:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
loc_821C96F8:
	// stw r4,120(r30)
	REX_STORE_U32(r30.u32 + 120, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3988
	ctx.lr = 0x821C9704;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821C970C;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821c9780
	if (ctx.cr0.eq) goto loc_821C9780;
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-22996
	ctx.r4.s64 = ctx.r11.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821C9730;
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
	ctx.lr = 0x821C9744;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c9770
	if (ctx.cr0.eq) goto loc_821C9770;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-26568
	ctx.r10.s64 = ctx.r10.s64 + -26568;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821c9774
	goto loc_821C9774;
loc_821C9770:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_821C9774:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821c9784
	goto loc_821C9784;
loc_821C9780:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_821C9784:
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
	ctx.lr = 0x821C979C;
	sub_82264568(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// lfs f13,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f0,668(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lfs f0,620(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,528(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// std r7,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r7.u64);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// std r4,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r4.u64);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ld r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// ld r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// ld r8,16(r5)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// ld r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// ld r9,8(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r9,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.r9.u64);
	// std r8,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r8.u64);
	// std r6,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, ctx.r6.u64);
	// std r10,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, ctx.r10.u64);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_821E7F18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821E7F20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e7f5c
	if (ctx.cr6.eq) goto loc_821E7F5C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,15068
	ctx.r4.s64 = ctx.r11.s64 + 15068;
	// addi r3,r10,15224
	ctx.r3.s64 = ctx.r10.s64 + 15224;
	// li r5,219
	ctx.r5.s64 = 219;
	// bl 0x821231d0
	ctx.lr = 0x821E7F5C;
	sub_821231D0(ctx, base);
loc_821E7F5C:
	// rlwinm r29,r29,6,0,25
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821E7F70;
	sub_826A1E70(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x826a1e70
	ctx.lr = 0x821E7F98;
	sub_826A1E70(ctx, base);
	// addi r11,r31,48
	ctx.r11.s64 = r31.s64 + 48;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
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
	// lfs f11,80(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f6,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f6.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f10,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fsubs f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f8,64(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f6,72(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f8,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f7
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fadds f11,f6,f11
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f8,52(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f10,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f10,68(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f9,72(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f10,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f13,48(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x826a1e70
	ctx.lr = 0x821E8078;
	sub_826A1E70(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821F6320) {
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
	ctx.lr = 0x821F6328;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lbz r11,45(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 45);
	// b 0x821f637c
	goto loc_821F637C;
loc_821F634C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bl 0x821f6700
	ctx.lr = 0x821F6358;
	sub_821F6700(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82120ac0
	ctx.lr = 0x821F636C;
	sub_82120AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F6374;
	sub_8269CE98(ctx, base);
	// lbz r11,45(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 45);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821F637C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f634c
	if (ctx.cr0.eq) goto loc_821F634C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8269ce98
	ctx.lr = 0x821F63AC;
	sub_8269CE98(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r11,r11,23688
	ctx.r11.s64 = ctx.r11.s64 + 23688;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// beq 0x821f63c8
	if (ctx.cr0.eq) goto loc_821F63C8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821F63C8;
	sub_8269CE98(ctx, base);
loc_821F63C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821FAEC0) {
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
	// addi r11,r11,25640
	ctx.r11.s64 = ctx.r11.s64 + 25640;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x821faeec
	if (ctx.cr0.eq) goto loc_821FAEEC;
	// bl 0x8269ce98
	ctx.lr = 0x821FAEEC;
	sub_8269CE98(ctx, base);
loc_821FAEEC:
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

DEFINE_REX_FUNC(sub_821FC610) {
	REX_FUNC_PROLOGUE();
	// add r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lbz r3,41(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 41);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FC6E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821FC6F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821fc7f4
	if (ctx.cr0.eq) goto loc_821FC7F4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc764
	if (ctx.cr0.eq) goto loc_821FC764;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC764;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FC764:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc7ac
	if (ctx.cr0.eq) goto loc_821FC7AC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FC7AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC7C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc7f4
	if (ctx.cr0.eq) goto loc_821FC7F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FC7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821FC7F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82204AD8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82204BC8) {
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
	ctx.lr = 0x82204BD0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82204cb8
	if (ctx.cr6.eq) goto loc_82204CB8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6280(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204C00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82204cb8
	if (ctx.cr0.eq) goto loc_82204CB8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r12,3081
	ctx.r12.s64 = 3081;
	// lis r29,-32106
	r29.s64 = -2104098816;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// lwz r11,6060(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lfs f31,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f31.f64 = double(temp.f32);
	// addi r30,r31,100
	r30.s64 = r31.s64 + 100;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r28,r31,52
	r28.s64 = r31.s64 + 52;
	// lwz r10,6096(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r9,r9,15
	ctx.r9.u64 = ctx.r9.u64 & 0x1FFFFFFFFFFFF;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | ctx.r12.u64;
	// std r9,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r9.u64);
	// lwz r27,16(r10)
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r26,120(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 120);
	// bl 0x822e6ff8
	ctx.lr = 0x82204C58;
	sub_822E6FF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,134
	ctx.r9.s64 = 134;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x82204C7C;
	sub_82174318(ctx, base);
	// lbz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82204cb8
	if (ctx.cr0.eq) goto loc_82204CB8;
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r3,6096(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6096);
	// li r10,255
	ctx.r10.s64 = 255;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r9,128
	ctx.r9.s64 = 128;
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r9,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82136970
	ctx.lr = 0x82204CB8;
	sub_82136970(ctx, base);
loc_82204CB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8220B410) {
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
	ctx.lr = 0x8220B418;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8220ad10
	ctx.lr = 0x8220B428;
	sub_8220AD10(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8220b538
	if (ctx.cr0.lt) goto loc_8220B538;
	// mulli r11,r29,92
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(92));
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r30,152
	ctx.r3.s64 = r30.s64 + 152;
	// bl 0x822e6ff8
	ctx.lr = 0x8220B440;
	sub_822E6FF8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8220b538
	if (ctx.cr0.eq) goto loc_8220B538;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f11,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 112);
	// mulli r11,r29,28
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(28));
	// lfs f10,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,6140(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6140);
	// lfs f8,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,16592(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,440
	ctx.r4.s64 = ctx.r11.s64 + 440;
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// fdivs f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f31,f6,f13,f12
	f31.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f12.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f13,f5,f10
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bctrl 
	ctx.lr = 0x8220B4CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r30,196
	ctx.r4.s64 = r30.s64 + 196;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x826a1e70
	ctx.lr = 0x8220B4E0;
	sub_826A1E70(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// blt cr6,0x8220b500
	if (ctx.cr6.lt) goto loc_8220B500;
	// lwz r30,0(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_8220B500:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r3,r31,428
	ctx.r3.s64 = r31.s64 + 428;
	// lwz r11,6096(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6096);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x822ee818
	ctx.lr = 0x8220B514;
	sub_822EE818(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bl 0x82174318
	ctx.lr = 0x8220B538;
	sub_82174318(ctx, base);
loc_8220B538:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_822184A8) {
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
	ctx.lr = 0x822184B0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x822e6ff8
	ctx.lr = 0x822184D4;
	sub_822E6FF8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82218598
	if (ctx.cr0.eq) goto loc_82218598;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,120(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,116(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 116);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r29,44
	ctx.r4.s64 = r29.s64 + 44;
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// li r5,40
	ctx.r5.s64 = 40;
	// lfs f6,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f7,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f0,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f6,f13,f0
	f31.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8221854C;
	sub_826A1E70(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221855c
	if (ctx.cr0.eq) goto loc_8221855C;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_8221855C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r6,-32106
	ctx.r6.s64 = -2104098816;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,112
	ctx.r9.s64 = 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,6096(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 6096);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82174318
	ctx.lr = 0x82218598;
	sub_82174318(ctx, base);
loc_82218598:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82224CF8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-17296
	ctx.r4.s64 = ctx.r11.s64 + -17296;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224D20;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224D24;
	sub_8215FA30(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-17164
	ctx.r4.s64 = ctx.r11.s64 + -17164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224D38;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224D3C;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82125d00
	ctx.lr = 0x82224D50;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224d74
	if (!ctx.cr0.eq) goto loc_82224D74;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6248(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// bl 0x821ef4d0
	ctx.lr = 0x82224D68;
	sub_821EF4D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82224d78
	if (ctx.cr0.eq) goto loc_82224D78;
loc_82224D74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82224D78:
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

DEFINE_REX_FUNC(sub_82228730) {
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
	ctx.lr = 0x82228750;
	sub_82178268(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-23644
	ctx.r11.s64 = ctx.r11.s64 + -23644;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x82228764;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228784
	if (ctx.cr0.eq) goto loc_82228784;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x8222877C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82228788
	goto loc_82228788;
loc_82228784:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82228788:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x82228794;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8222879C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82228814
	if (ctx.cr0.eq) goto loc_82228814;
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
	ctx.lr = 0x822287C4;
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
	ctx.lr = 0x822287D8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82228804
	if (ctx.cr0.eq) goto loc_82228804;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-30640
	ctx.r10.s64 = ctx.r10.s64 + -30640;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82228808
	goto loc_82228808;
loc_82228804:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82228808:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x82228818
	goto loc_82228818;
loc_82228814:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82228818:
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
	ctx.lr = 0x82228830;
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

DEFINE_REX_FUNC(sub_8222C6C0) {
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
	// lbz r11,544(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 544);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c778
	if (ctx.cr0.eq) goto loc_8222C778;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C6FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C710;
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
	ctx.lr = 0x8222C728;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,141(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c770
	if (ctx.cr0.eq) goto loc_8222C770;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222c770
	if (ctx.cr0.eq) goto loc_8222C770;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23932
	ctx.r3.s64 = ctx.r11.s64 + -23932;
	// bl 0x82162af8
	ctx.lr = 0x8222C764;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x8217f770
	ctx.lr = 0x8222C770;
	sub_8217F770(ctx, base);
loc_8222C770:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,544(r31)
	REX_STORE_U8(r31.u32 + 544, ctx.r11.u8);
loc_8222C778:
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

DEFINE_REX_FUNC(sub_82233538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,976(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223354c
	if (!ctx.cr6.eq) goto loc_8223354C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,976(r4)
	REX_STORE_U32(ctx.r4.u32 + 976, ctx.r11.u32);
loc_8223354C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82233BD8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,976(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 976);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82233c94
	if (!ctx.cr6.eq) goto loc_82233C94;
	// bl 0x82233778
	ctx.lr = 0x82233C00;
	sub_82233778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82233840
	ctx.lr = 0x82233C08;
	sub_82233840(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822338f8
	ctx.lr = 0x82233C10;
	sub_822338F8(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r5,r31,992
	ctx.r5.s64 = r31.s64 + 992;
	// addi r3,r31,848
	ctx.r3.s64 = r31.s64 + 848;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x822eeb50
	ctx.lr = 0x82233C24;
	sub_822EEB50(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = r31.s64 + 480;
	// bl 0x821e44f0
	ctx.lr = 0x82233C2C;
	sub_821E44F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 756);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 980, temp.u32);
	// stw r11,976(r31)
	REX_STORE_U32(r31.u32 + 976, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-19592
	ctx.r4.s64 = ctx.r10.s64 + -19592;
	// bl 0x82120600
	ctx.lr = 0x82233C4C;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x821dd040
	ctx.lr = 0x82233C58;
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
	ctx.lr = 0x82233C80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82233C90;
	sub_82120AC0(ctx, base);
	// b 0x82233ccc
	goto loc_82233CCC;
loc_82233C94:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82233ccc
	if (!ctx.cr6.eq) goto loc_82233CCC;
	// lfs f0,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 980);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f0,980(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 980, temp.u32);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82233ccc
	if (!ctx.cr6.lt) goto loc_82233CCC;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// bl 0x82191520
	ctx.lr = 0x82233CC0;
	sub_82191520(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stfs f31,980(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 980, temp.u32);
	// stw r11,976(r31)
	REX_STORE_U32(r31.u32 + 976, ctx.r11.u32);
loc_82233CCC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_8223C3D0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c84
	ctx.lr = 0x8223C3D8;
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r26,3884(r29)
	r26.u64 = REX_LOAD_U32(r29.u32 + 3884);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,1624
	ctx.r11.s64 = ctx.r11.s64 + 1624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,-27048
	ctx.r4.s64 = ctx.r10.s64 + -27048;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C420;
	sub_8215F670(ctx, base);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C428;
	sub_8215F0F0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r4,r11,-24980
	ctx.r4.s64 = ctx.r11.s64 + -24980;
	// lbz r31,113(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 113);
	// bl 0x8215f670
	ctx.lr = 0x8223C43C;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C444;
	sub_8215F0F0(ctx, base);
	// li r19,3
	r19.s64 = 3;
	// stb r31,8(r28)
	REX_STORE_U8(r28.u32 + 8, r31.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r19,0(r28)
	REX_STORE_U32(r28.u32 + 0, r19.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r16,r11,-26752
	r16.s64 = ctx.r11.s64 + -26752;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C464;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215fc78
	ctx.lr = 0x8223C46C;
	sub_8215FC78(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x8215dc10
	ctx.lr = 0x8223C478;
	sub_8215DC10(ctx, base);
	// lwz r11,316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 316);
	// mr r31,r19
	r31.u64 = r19.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bgt cr6,0x8223c48c
	if (ctx.cr6.gt) goto loc_8223C48C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8223C48C:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C498;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x8223C4A0;
	sub_8215F200(ctx, base);
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 460);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8223c4c0
	if (ctx.cr6.lt) goto loc_8223C4C0;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8223c4c4
	goto loc_8223C4C4;
loc_8223C4C0:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
loc_8223C4C4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-26828
	ctx.r4.s64 = ctx.r11.s64 + -26828;
	// bl 0x8215f670
	ctx.lr = 0x8223C4D4;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x8223C4DC;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24968
	ctx.r4.s64 = ctx.r11.s64 + -24968;
	// lfs f31,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 28);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x8223C4F0;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C4F8;
	sub_8215F0F0(ctx, base);
	// li r15,2
	r15.s64 = 2;
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r15,0(r28)
	REX_STORE_U32(r28.u32 + 0, r15.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24932
	ctx.r4.s64 = ctx.r11.s64 + -24932;
	// lwz r28,16(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 16);
	// bl 0x8215f670
	ctx.lr = 0x8223C518;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C520;
	sub_8215F0F0(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// stw r28,8(r25)
	REX_STORE_U32(r25.u32 + 8, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// lfs f31,24(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 24);
	f31.f64 = double(temp.f32);
	// bl 0x8215f670
	ctx.lr = 0x8223C540;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C548;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stw r15,0(r28)
	REX_STORE_U32(r28.u32 + 0, r15.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17040
	ctx.r4.s64 = ctx.r11.s64 + -17040;
	// lwz r28,304(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 304);
	// bl 0x8215f670
	ctx.lr = 0x8223C564;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C56C;
	sub_8215F0F0(ctx, base);
	// stw r28,8(r25)
	REX_STORE_U32(r25.u32 + 8, r28.u32);
	// stw r27,0(r25)
	REX_STORE_U32(r25.u32 + 0, r27.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-24740
	ctx.r4.s64 = ctx.r11.s64 + -24740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C59C;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C5A4;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r25)
	REX_STORE_U8(r25.u32 + 8, r28.u8);
	// stw r19,0(r25)
	REX_STORE_U32(r25.u32 + 0, r19.u32);
	// lwz r3,460(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 460);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C5C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-26744
	ctx.r4.s64 = ctx.r11.s64 + -26744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C5D4;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C5DC;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r25)
	REX_STORE_U8(r25.u32 + 8, r28.u8);
	// stw r19,0(r25)
	REX_STORE_U32(r25.u32 + 0, r19.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17788
	ctx.r4.s64 = ctx.r11.s64 + -17788;
	// addi r28,r30,208
	r28.s64 = r30.s64 + 208;
	// bl 0x8215f670
	ctx.lr = 0x8223C5F8;
	sub_8215F670(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223c60c
	if (ctx.cr6.lt) goto loc_8223C60C;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x8223c610
	goto loc_8223C610;
loc_8223C60C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8223C610:
	// bl 0x8215fbf8
	ctx.lr = 0x8223C614;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24944
	ctx.r4.s64 = ctx.r11.s64 + -24944;
	// lbz r28,224(r26)
	r28.u64 = REX_LOAD_U8(r26.u32 + 224);
	// bl 0x8215f670
	ctx.lr = 0x8223C628;
	sub_8215F670(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C630;
	sub_8215F0F0(ctx, base);
	// stb r28,8(r25)
	REX_STORE_U8(r25.u32 + 8, r28.u8);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r19,0(r25)
	REX_STORE_U32(r25.u32 + 0, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24748
	ctx.r4.s64 = ctx.r11.s64 + -24748;
	// addi r30,r30,236
	r30.s64 = r30.s64 + 236;
	// bl 0x8215f670
	ctx.lr = 0x8223C64C;
	sub_8215F670(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223c660
	if (ctx.cr6.lt) goto loc_8223C660;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x8223c664
	goto loc_8223C664;
loc_8223C660:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8223C664:
	// bl 0x8215fbf8
	ctx.lr = 0x8223C668;
	sub_8215FBF8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17028
	ctx.r4.s64 = ctx.r11.s64 + -17028;
	// lwz r31,316(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 316);
	// bl 0x8215f670
	ctx.lr = 0x8223C67C;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C684;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r31,r29,124
	r31.s64 = r29.s64 + 124;
	// addi r30,r29,3776
	r30.s64 = r29.s64 + 3776;
	// bl 0x8227a148
	ctx.lr = 0x8223C6A0;
	sub_8227A148(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223C6A8;
	sub_8215F2D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8223C6B0;
	sub_8215F2D0(ctx, base);
	// addi r4,r29,3832
	ctx.r4.s64 = r29.s64 + 3832;
	// bl 0x8215f2d0
	ctx.lr = 0x8223C6B8;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31192
	ctx.r4.s64 = ctx.r11.s64 + -31192;
	// bl 0x8215f338
	ctx.lr = 0x8223C6C4;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r22,-32106
	r22.s64 = -2104098816;
	// addi r21,r11,-16992
	r21.s64 = ctx.r11.s64 + -16992;
	// addi r20,r10,-24760
	r20.s64 = ctx.r10.s64 + -24760;
	// addi r25,r9,-24772
	r25.s64 = ctx.r9.s64 + -24772;
	// addi r24,r8,-24784
	r24.s64 = ctx.r8.s64 + -24784;
	// addi r23,r7,-17012
	r23.s64 = ctx.r7.s64 + -17012;
loc_8223C6F8:
	// lwz r11,316(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 316);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8223c708
	if (!ctx.cr6.eq) goto loc_8223C708;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_8223C708:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C714;
	sub_8215F670(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f200
	ctx.lr = 0x8223C71C;
	sub_8215F200(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bl 0x826a0568
	ctx.lr = 0x8223C734;
	sub_826A0568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C740;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C748;
	sub_8215F0F0(ctx, base);
	// stw r19,0(r29)
	REX_STORE_U32(r29.u32 + 0, r19.u32);
	// stb r27,8(r29)
	REX_STORE_U8(r29.u32 + 8, r27.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6140(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 6140);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223C768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C778;
	sub_8215F670(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8223c78c
	if (ctx.cr6.lt) goto loc_8223C78C;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x8223c790
	goto loc_8223C790;
loc_8223C78C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8223C790:
	// bl 0x8215fbf8
	ctx.lr = 0x8223C794;
	sub_8215FBF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8223C7A0;
	sub_8215F1B0(ctx, base);
	// bl 0x8215f9e0
	ctx.lr = 0x8223C7A4;
	sub_8215F9E0(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8215f670
	ctx.lr = 0x8223C7B4;
	sub_8215F670(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C7BC;
	sub_8215F0F0(ctx, base);
	// stfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// stw r15,0(r29)
	REX_STORE_U32(r29.u32 + 0, r15.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x8223C7D0;
	sub_8215F670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x8223C7D8;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// blt cr6,0x8223c6f8
	if (ctx.cr6.lt) goto loc_8223C6F8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82256798) {
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
	ctx.lr = 0x822567A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8225680c
	if (!ctx.cr6.gt) goto loc_8225680C;
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
	// bgt cr6,0x822567d8
	if (ctx.cr6.gt) goto loc_822567D8;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_822567D8:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8225680c
	if (!ctx.cr6.gt) goto loc_8225680C;
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822f6338
	ctx.lr = 0x822567E8;
	sub_822F6338(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r5,r11,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x826a1e70
	ctx.lr = 0x822567FC;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x82256804;
	sub_8269CE98(ctx, base);
	// stw r27,0(r31)
	REX_STORE_U32(r31.u32 + 0, r27.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_8225680C:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82256840
	ctx.lr = 0x82256818;
	sub_82256840(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82256834
	if (ctx.cr0.eq) goto loc_82256834;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120d70
	ctx.lr = 0x8225682C;
	sub_82120D70(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_82256834:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8225DB48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8225DB50;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x822626a8
	ctx.lr = 0x8225DB5C;
	sub_822626A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r31,r11,-31468
	r31.s64 = ctx.r11.s64 + -31468;
	// addi r30,r10,1624
	r30.s64 = ctx.r10.s64 + 1624;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225DB78;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-9428
	ctx.r4.s64 = ctx.r11.s64 + -9428;
	// bl 0x8215f670
	ctx.lr = 0x8225DB84;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225DB88;
	sub_8215F0F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225DB94;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31460
	ctx.r4.s64 = ctx.r11.s64 + -31460;
	// bl 0x8215f670
	ctx.lr = 0x8225DBA0;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225DBA4;
	sub_8215F0F0(ctx, base);
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8225dc1c
	if (!ctx.cr6.gt) goto loc_8225DC1C;
	// addi r28,r29,192
	r28.s64 = r29.s64 + 192;
loc_8225DBB8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8228c340
	ctx.lr = 0x8225DBC4;
	sub_8228C340(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DBDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dc0c
	if (ctx.cr0.eq) goto loc_8225DC0C;
	// lbz r11,102(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 102);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225dc0c
	if (!ctx.cr0.eq) goto loc_8225DC0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r11,102(r31)
	REX_STORE_U8(r31.u32 + 102, ctx.r11.u8);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227d560
	ctx.lr = 0x8225DC0C;
	sub_8227D560(ctx, base);
loc_8225DC0C:
	// lwz r11,272(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 272);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8225dbb8
	if (ctx.cr6.lt) goto loc_8225DBB8;
loc_8225DC1C:
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
	ctx.lr = 0x8225DC34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225dc54
	if (!ctx.cr0.eq) goto loc_8225DC54;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6320(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6320);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225DC54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225DC54:
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
	ctx.lr = 0x8225DC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82265098) {
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
	ctx.lr = 0x822650A0;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// bne cr6,0x822650d8
	if (!ctx.cr6.eq) goto loc_822650D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r11,30288
	ctx.r3.s64 = ctx.r11.s64 + 30288;
	// b 0x82265384
	goto loc_82265384;
loc_822650D8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8226528c
	if (!ctx.cr6.eq) goto loc_8226528C;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f30,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	f30.f64 = double(temp.f32);
	// fnmsubs f12,f31,f30,f13
	ctx.f12.f64 = double(float(-std::fma(f31.f64, f30.f64, -ctx.f13.f64)));
	// lfs f0,15048(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
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
	// lfsx f11,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f12,f11,f12,f0
	ctx.f12.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8226537c
	if (ctx.cr6.gt) goto loc_8226537C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82265200
	if (!ctx.cr6.gt) goto loc_82265200;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r3,6036(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82265150;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82265180
	if (!ctx.cr6.eq) goto loc_82265180;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-7092
	ctx.r4.s64 = ctx.r11.s64 + -7092;
	// bl 0x82120600
	ctx.lr = 0x82265170;
	sub_82120600(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822654a8
	ctx.lr = 0x82265178;
	sub_822654A8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x822651cc
	goto loc_822651CC;
loc_82265180:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822651a8
	if (!ctx.cr6.eq) goto loc_822651A8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-7072
	ctx.r4.s64 = ctx.r11.s64 + -7072;
	// bl 0x82120600
	ctx.lr = 0x82265198;
	sub_82120600(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822654a8
	ctx.lr = 0x822651A0;
	sub_822654A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x822651cc
	goto loc_822651CC;
loc_822651A8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822651d8
	if (!ctx.cr6.eq) goto loc_822651D8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-7052
	ctx.r4.s64 = ctx.r11.s64 + -7052;
	// bl 0x82120600
	ctx.lr = 0x822651C0;
	sub_82120600(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822654a8
	ctx.lr = 0x822651C8;
	sub_822654A8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
loc_822651CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x822651D8;
	sub_82120AC0(ctx, base);
loc_822651D8:
	// lwz r3,6036(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6036);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822651EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsub f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 - f29.f64;
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_82265200:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// ble cr6,0x8226537c
	if (!ctx.cr6.gt) goto loc_8226537C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8226526c
	if (ctx.cr6.eq) goto loc_8226526C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82265264
	if (ctx.cr6.eq) goto loc_82265264;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8226525c
	if (ctx.cr6.eq) goto loc_8226525C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82265254
	if (ctx.cr6.eq) goto loc_82265254;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-7036
	ctx.r4.s64 = ctx.r11.s64 + -7036;
	// addi r3,r10,-6980
	ctx.r3.s64 = ctx.r10.s64 + -6980;
	// li r5,189
	ctx.r5.s64 = 189;
	// bl 0x821231d0
	ctx.lr = 0x82265250;
	sub_821231D0(ctx, base);
	// b 0x8226537c
	goto loc_8226537C;
loc_82265254:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82265284
	goto loc_82265284;
loc_8226525C:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82265284
	goto loc_82265284;
loc_82265264:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82265284
	goto loc_82265284;
loc_8226526C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226537c
	if (!ctx.cr6.gt) goto loc_8226537C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82265284:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8226537c
	goto loc_8226537C;
loc_8226528C:
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,-19392(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19392);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// fmadds f13,f31,f0,f13
	ctx.f13.f64 = double(float(std::fma(f31.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f31,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// rlwinm r8,r11,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lfsx f12,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f12,f13,f0
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8226537c
	if (ctx.cr6.lt) goto loc_8226537C;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822652fc
	if (ctx.cr6.eq) goto loc_822652FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82208770
	ctx.lr = 0x822652F4;
	sub_82208770(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x822652FC;
	sub_8269CE98(ctx, base);
loc_822652FC:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// addi r30,r11,-19248
	r30.s64 = ctx.r11.s64 + -19248;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82265378
	if (ctx.cr0.eq) goto loc_82265378;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822f6280
	ctx.lr = 0x82265328;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82265358
	if (ctx.cr0.eq) goto loc_82265358;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82120600
	ctx.lr = 0x82265344;
	sub_82120600(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r28,1
	r28.s64 = 1;
	// bl 0x82208610
	ctx.lr = 0x82265354;
	sub_82208610(ctx, base);
	// b 0x8226535c
	goto loc_8226535C;
loc_82265358:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8226535C:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x82265378
	if (ctx.cr0.eq) goto loc_82265378;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82120ac0
	ctx.lr = 0x82265378;
	sub_82120AC0(ctx, base);
loc_82265378:
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_8226537C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26856
	ctx.r3.s64 = ctx.r11.s64 + -26856;
loc_82265384:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

DEFINE_REX_FUNC(sub_822817D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x822817E0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c8c
	ctx.lr = 0x822817E8;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,248
	ctx.r10.s64 = ctx.r1.s64 + 248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r30,468(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// addi r9,r4,-8
	ctx.r9.s64 = ctx.r4.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82281810:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82281810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82281810;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8216ab58
	ctx.lr = 0x82281824;
	sub_8216AB58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r11,468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// addi r9,r11,336
	ctx.r9.s64 = ctx.r11.s64 + 336;
	// ld r9,336(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 336);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// ld r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 344);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bl 0x823fbe48
	ctx.lr = 0x82281854;
	sub_823FBE48(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r10,436(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 436);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,16592
	r29.s64 = ctx.r11.s64 + 16592;
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// std r8,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r8.u64);
	// std r7,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r7.u64);
	// bgt cr6,0x8228189c
	if (ctx.cr6.gt) goto loc_8228189C;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// b 0x822818b8
	goto loc_822818B8;
loc_8228189C:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// blt cr6,0x822818ac
	if (ctx.cr6.lt) goto loc_822818AC;
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// b 0x822818b8
	goto loc_822818B8;
loc_822818AC:
	// fsubs f12,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
loc_822818B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f1,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f6,f30,f13
	ctx.f6.f64 = double(float(f30.f64 - ctx.f13.f64));
	// lfs f12,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f12,f13
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lwz r8,468(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 468);
	// fsubs f29,f0,f1
	f29.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,236(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,132(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// ld r6,320(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 320);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// ld r5,328(r8)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r8.u32 + 328);
	// addi r8,r8,320
	ctx.r8.s64 = ctx.r8.s64 + 320;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// lfs f28,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	f28.f64 = double(temp.f32);
	// lfs f26,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	f26.f64 = double(temp.f32);
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// lfs f27,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	f27.f64 = double(temp.f32);
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// lfs f25,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	f25.f64 = double(temp.f32);
	// std r5,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// lfs f12,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// lfs f10,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,456(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 456);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fsubs f13,f10,f1
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fdivs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 / f29.f64));
	// fsubs f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r7,r8,27,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f30,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
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
	// rlwinm r8,r10,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f13,f11,f31,f13
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? f31.f64 : ctx.f13.f64;
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fmuls f1,f28,f13
	ctx.f1.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmuls f13,f26,f13
	ctx.f13.f64 = double(float(f26.f64 * ctx.f13.f64));
	// fmadds f1,f27,f11,f1
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f1.f64)));
	// fmadds f13,f25,f11,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, ctx.f11.f64, ctx.f13.f64)));
	// fmadds f11,f1,f6,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f3.f64)));
	// fmadds f13,f13,f6,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f2.f64)));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822819fc
	if (ctx.cr6.eq) goto loc_822819FC;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// b 0x82281a00
	goto loc_82281A00;
loc_822819FC:
	// lfs f11,596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f11.f64 = double(temp.f32);
loc_82281A00:
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281a14
	if (ctx.cr6.eq) goto loc_82281A14;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x82281a18
	goto loc_82281A18;
loc_82281A14:
	// lfs f0,596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
loc_82281A18:
	// fabs f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// fmuls f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// bgt cr6,0x82281a44
	if (ctx.cr6.gt) goto loc_82281A44;
	// lfs f9,228(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x82281b10
	if (!ctx.cr6.lt) goto loc_82281B10;
loc_82281A44:
	// lfs f13,216(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lfs f12,24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f10,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lfs f13,-19392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -19392);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r11,r9,16592
	ctx.r11.s64 = ctx.r9.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// addi r11,r10,16592
	ctx.r11.s64 = ctx.r10.s64 + 16592;
	// addi r10,r7,16592
	ctx.r10.s64 = ctx.r7.s64 + 16592;
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - f30.f64));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fsubs f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 - f30.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
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
	// lfsx f10,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f12,f10,f30,f12
	ctx.f12.f64 = ctx.f10.f64 >= 0.0 ? f30.f64 : ctx.f12.f64;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
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
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
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
	// rlwinm r5,r8,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// lfsx f10,r9,r7
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f10,f10,f30,f13
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? f30.f64 : ctx.f13.f64;
	// lfsx f13,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f13,f13,f0,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// fsel f12,f12,f0,f10
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
loc_82281B10:
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f2,f10,f13
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f12,f7
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f7,f11,f6
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, f31.f64);
	// ble cr6,0x82281b40
	if (!ctx.cr6.gt) goto loc_82281B40;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f9
	ctx.f9.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82281b40
	if (!ctx.cr6.gt) goto loc_82281B40;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
loc_82281B40:
	// lfs f10,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// ble cr6,0x82281b64
	if (!ctx.cr6.gt) goto loc_82281B64;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f8
	ctx.f9.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82281b64
	if (!ctx.cr6.gt) goto loc_82281B64;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
loc_82281B64:
	// lfs f10,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// ble cr6,0x82281b88
	if (!ctx.cr6.gt) goto loc_82281B88;
	// fabs f10,f10
	ctx.f10.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f9,f7
	ctx.f9.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x82281b88
	if (!ctx.cr6.gt) goto loc_82281B88;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
loc_82281B88:
	// fcmpu cr6,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
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
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
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
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// rlwinm r5,r8,27,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x4;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, f31.f64);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
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
	// rlwinm r4,r7,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// fabs f29,f13
	f29.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// fabs f28,f12
	f28.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// rlwinm r8,r8,30,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x4;
	// fabs f27,f11
	f27.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// rlwinm r3,r6,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x4;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// addi r9,r9,16592
	ctx.r9.s64 = ctx.r9.s64 + 16592;
	// rlwinm r6,r6,30,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x4;
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// addi r9,r9,256
	ctx.r9.s64 = ctx.r9.s64 + 256;
	// lfsx f13,r11,r8
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fsel f13,f13,f30,f0
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfsx f12,r10,r7
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// fsel f12,f12,f30,f0
	ctx.f12.f64 = ctx.f12.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// lfsx f11,r9,r6
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f30,f0
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? f30.f64 : ctx.f0.f64;
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x82281C34;
	sub_823FBE48(ctx, base);
	// addi r11,r30,272
	ctx.r11.s64 = r30.s64 + 272;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lfs f11,308(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,304(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,312(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 312);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,272(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,280(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,296(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f4,f13,f10
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f3,276(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f6,f10,f9,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f9.f64, -ctx.f6.f64)));
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmuls f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f26,f3,f8
	f26.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmsubs f4,f8,f11,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, -ctx.f4.f64)));
	// fmsubs f2,f13,f7,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, -ctx.f2.f64)));
	// fmuls f24,f5,f11
	f24.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmr f25,f12
	f25.f64 = ctx.f12.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// fmsubs f26,f5,f10,f26
	f26.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, -f26.f64)));
	// fmuls f23,f5,f7
	f23.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmadds f0,f12,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmsubs f12,f3,f13,f24
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f13.f64, -f24.f64)));
	// fmuls f22,f25,f13
	f22.f64 = double(float(f25.f64 * ctx.f13.f64));
	// fmadds f0,f2,f3,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f3.f64, ctx.f0.f64)));
	// fdivs f3,f30,f0
	ctx.f3.f64 = double(float(f30.f64 / ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f26,f3
	f26.f64 = double(float(f26.f64 * ctx.f3.f64));
	// fmuls f24,f12,f3
	f24.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmuls f2,f2,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f21,f1,f9
	f21.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f8,f25,f8,f23
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, -f23.f64)));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// fmsubs f9,f5,f9,f22
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f9.f64, -f22.f64)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmuls f10,f25,f10
	ctx.f10.f64 = double(float(f25.f64 * ctx.f10.f64));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmsubs f11,f25,f11,f21
	ctx.f11.f64 = double(float(std::fma(f25.f64, ctx.f11.f64, -f21.f64)));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmsubs f10,f1,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, -ctx.f10.f64)));
	// fmadds f7,f4,f13,f5
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f5.f64)));
	// fmuls f11,f11,f3
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmadds f9,f6,f12,f7
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f9,f26,f13,f8
	ctx.f9.f64 = double(float(std::fma(f26.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f0,f24,f13,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f13,f10,f12,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f0,f11,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x82281D44;
	sub_823FBE48(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
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
	// bl 0x823fbe48
	ctx.lr = 0x82281D6C;
	sub_823FBE48(ctx, base);
	// lbz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 344);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = f30.f64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// beq 0x82281da0
	if (ctx.cr0.eq) goto loc_82281DA0;
	// lfs f0,668(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82281e30
	goto loc_82281E30;
loc_82281DA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281db8
	if (ctx.cr6.eq) goto loc_82281DB8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// b 0x82281dbc
	goto loc_82281DBC;
loc_82281DB8:
	// lfs f0,596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 596);
	ctx.f0.f64 = double(temp.f32);
loc_82281DBC:
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281dd4
	if (ctx.cr6.eq) goto loc_82281DD4;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// b 0x82281dd8
	goto loc_82281DD8;
loc_82281DD4:
	// lfs f12,600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
loc_82281DD8:
	// fmuls f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x82281e24
	if (!ctx.cr6.gt) goto loc_82281E24;
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82281df8
	if (ctx.cr6.eq) goto loc_82281DF8;
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// b 0x82281dfc
	goto loc_82281DFC;
loc_82281DF8:
	// lfs f12,600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
loc_82281DFC:
	// fabs f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// addi r11,r29,256
	ctx.r11.s64 = r29.s64 + 256;
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, f31.f64);
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
	// lfsx f10,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f0,f10,f0,f12
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_82281E24:
	// fsubs f10,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f12,668(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 668);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f12,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f10.f64)));
loc_82281E30:
	// lfs f12,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f29
	ctx.f11.f64 = double(float(f30.f64 - f29.f64));
	// lfs f8,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f30,f28
	ctx.f9.f64 = double(float(f30.f64 - f28.f64));
	// lfs f10,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f30,f27
	ctx.f7.f64 = double(float(f30.f64 - f27.f64));
	// lfs f6,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmuls f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmadds f12,f7,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f12.f64)));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f0,f11,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f0.f64)));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f9,f6,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f13.f64)));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x823fbe48
	ctx.lr = 0x82281E8C;
	sub_823FBE48(ctx, base);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r11.u64);
	// std r10,0(r27)
	REX_STORE_U64(r27.u32 + 0, ctx.r10.u64);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2cd8
	ctx.lr = 0x82281EC0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822D2EF0) {
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
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d22f8
	ctx.lr = 0x822D2F44;
	sub_822D22F8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x823f02b8
	ctx.lr = 0x822D2F50;
	sub_823F02B8(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822d2f60
	if (!ctx.cr0.eq) goto loc_822D2F60;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d2fa8
	goto loc_822D2FA8;
loc_822D2F60:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// li r7,17409
	ctx.r7.s64 = 17409;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r31,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, r31.u32);
	// rlwimi r9,r7,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// bl 0x822c5e78
	ctx.lr = 0x822D2FA4;
	sub_822C5E78(ctx, base);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
loc_822D2FA8:
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

DEFINE_REX_FUNC(sub_822D9790) {
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
	ctx.lr = 0x822D9798;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r24,13808(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 13808);
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lwz r23,24192(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 24192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r11,-20856
	r28.s64 = ctx.r11.s64 + -20856;
loc_822D97B8:
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 4);
	// add r9,r29,r31
	ctx.r9.u64 = r29.u64 + r31.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,137
	ctx.r11.s64 = ctx.r11.s64 + 137;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D97F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplwi cr6,r29,404
	ctx.cr6.compare<uint32_t>(r29.u32, 404, ctx.xer);
	// blt cr6,0x822d97b8
	if (ctx.cr6.lt) goto loc_822D97B8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r27,r30
	r27.u64 = r30.u64;
	// addi r26,r31,1152
	r26.s64 = r31.s64 + 1152;
	// addi r25,r11,-19640
	r25.s64 = ctx.r11.s64 + -19640;
loc_822D9814:
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r28,r25,8
	r28.s64 = r25.s64 + 8;
loc_822D981C:
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + -4);
	// add r9,r29,r31
	ctx.r9.u64 = r29.u64 + r31.u64;
	// addi r8,r11,117
	ctx.r8.s64 = ctx.r11.s64 + 117;
	// addi r11,r11,238
	ctx.r11.s64 = ctx.r11.s64 + 238;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,-8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + -8);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,468(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D985C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplwi cr6,r29,80
	ctx.cr6.compare<uint32_t>(r29.u32, 80, ctx.xer);
	// blt cr6,0x822d981c
	if (ctx.cr6.lt) goto loc_822D981C;
	// addi r11,r27,32
	ctx.r11.s64 = r27.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3538
	ctx.lr = 0x822D9890;
	sub_822D3538(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// cmplwi cr6,r27,26
	ctx.cr6.compare<uint32_t>(r27.u32, 26, ctx.xer);
	// blt cr6,0x822d9814
	if (ctx.cr6.lt) goto loc_822D9814;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r28,1
	r28.s64 = 1;
	// stw r11,12368(r31)
	REX_STORE_U32(r31.u32 + 12368, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r28,12372(r31)
	REX_STORE_U32(r31.u32 + 12372, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r31,12368
	r29.s64 = r31.s64 + 12368;
	// bl 0x822d7048
	ctx.lr = 0x822D98C0;
	sub_822D7048(ctx, base);
	// stb r30,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r30.u8);
	// stb r30,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, r30.u8);
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r30,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, r30.u8);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// stw r9,12608(r31)
	REX_STORE_U32(r31.u32 + 12608, ctx.r9.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r9,r10,9145
	ctx.r9.u64 = ctx.r10.u64 | 9145;
	// sth r30,12420(r31)
	REX_STORE_U16(r31.u32 + 12420, r30.u16);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// sth r30,12422(r31)
	REX_STORE_U16(r31.u32 + 12422, r30.u16);
	// stw r9,12424(r31)
	REX_STORE_U32(r31.u32 + 12424, ctx.r9.u32);
	// clrlwi. r8,r23,31
	ctx.r8.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,12428(r31)
	REX_STORE_U8(r31.u32 + 12428, r30.u8);
	// stb r30,12429(r31)
	REX_STORE_U8(r31.u32 + 12429, r30.u8);
	// stb r30,12430(r31)
	REX_STORE_U8(r31.u32 + 12430, r30.u8);
	// sth r30,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, r30.u16);
	// stw r10,12440(r31)
	REX_STORE_U32(r31.u32 + 12440, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,12432(r31)
	REX_STORE_U32(r31.u32 + 12432, ctx.r10.u32);
	// stw r11,12436(r31)
	REX_STORE_U32(r31.u32 + 12436, ctx.r11.u32);
	// stw r28,12392(r31)
	REX_STORE_U32(r31.u32 + 12392, r28.u32);
	// stw r30,12396(r31)
	REX_STORE_U32(r31.u32 + 12396, r30.u32);
	// stw r30,12416(r31)
	REX_STORE_U32(r31.u32 + 12416, r30.u32);
	// stw r29,11992(r31)
	REX_STORE_U32(r31.u32 + 11992, r29.u32);
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// stw r24,13808(r31)
	REX_STORE_U32(r31.u32 + 13808, r24.u32);
	// lwz r10,24192(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24192);
	// beq 0x822d9950
	if (ctx.cr0.eq) goto loc_822D9950;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// b 0x822d9954
	goto loc_822D9954;
loc_822D9950:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_822D9954:
	// stw r10,24192(r31)
	REX_STORE_U32(r31.u32 + 24192, ctx.r10.u32);
	// lbz r9,10940(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,12892(r31)
	REX_STORE_U32(r31.u32 + 12892, r30.u32);
	// bne 0x822d9a28
	if (!ctx.cr0.eq) goto loc_822D9A28;
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d9a28
	if (!ctx.cr0.eq) goto loc_822D9A28;
	// lbz r10,12363(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12363);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822d9a28
	if (!ctx.cr0.eq) goto loc_822D9A28;
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d998c
	if (ctx.cr0.eq) goto loc_822D998C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x822d9a1c
	goto loc_822D9A1C;
loc_822D998C:
	// rlwinm. r10,r9,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d9a14
	if (ctx.cr0.eq) goto loc_822D9A14;
	// lwz r10,12616(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12616);
	// lwz r8,12904(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12904);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d99ac
	if (ctx.cr6.eq) goto loc_822D99AC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d9a14
	if (!ctx.cr6.eq) goto loc_822D9A14;
loc_822D99AC:
	// lwz r10,12620(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12620);
	// lwz r8,12908(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12908);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d99c4
	if (ctx.cr6.eq) goto loc_822D99C4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d9a14
	if (!ctx.cr6.eq) goto loc_822D9A14;
loc_822D99C4:
	// lwz r10,12624(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12624);
	// lwz r8,12912(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12912);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d99dc
	if (ctx.cr6.eq) goto loc_822D99DC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d9a14
	if (!ctx.cr6.eq) goto loc_822D9A14;
loc_822D99DC:
	// lwz r10,12628(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12628);
	// lwz r8,12916(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12916);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d99f4
	if (ctx.cr6.eq) goto loc_822D99F4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d9a14
	if (!ctx.cr6.eq) goto loc_822D9A14;
loc_822D99F4:
	// lwz r10,12632(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12632);
	// lwz r8,12920(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12920);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d9a0c
	if (ctx.cr6.eq) goto loc_822D9A0C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d9a14
	if (!ctx.cr6.eq) goto loc_822D9A14;
loc_822D9A0C:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x822d9a18
	goto loc_822D9A18;
loc_822D9A14:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822D9A18:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_822D9A1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// bne 0x822d9a2c
	if (!ctx.cr0.eq) goto loc_822D9A2C;
loc_822D9A28:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_822D9A2C:
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,12884(r31)
	REX_STORE_U32(r31.u32 + 12884, ctx.r11.u32);
	// stw r30,12888(r31)
	REX_STORE_U32(r31.u32 + 12888, r30.u32);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r30,10932(r31)
	REX_STORE_U32(r31.u32 + 10932, r30.u32);
	// stw r30,10936(r31)
	REX_STORE_U32(r31.u32 + 10936, r30.u32);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,10940(r31)
	REX_STORE_U8(r31.u32 + 10940, ctx.r11.u8);
	// bne 0x822d9a64
	if (!ctx.cr0.eq) goto loc_822D9A64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c9a30
	ctx.lr = 0x822D9A64;
	sub_822C9A30(ctx, base);
loc_822D9A64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822ED388) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r10,117(r4)
	REX_STORE_U8(ctx.r4.u32 + 117, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822ED5E0) {
	REX_FUNC_PROLOGUE();
	// b 0x822ed7b0
	sub_822ED7B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ED708) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,32576
	ctx.r10.s64 = ctx.r10.s64 + 32576;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x822f6280
	ctx.lr = 0x822ED758;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ed784
	if (ctx.cr0.eq) goto loc_822ED784;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,-10784
	ctx.r10.s64 = ctx.r10.s64 + -10784;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x822ed788
	goto loc_822ED788;
loc_822ED784:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ED788:
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822e7a50
	ctx.lr = 0x822ED794;
	sub_822E7A50(ctx, base);
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

DEFINE_REX_FUNC(sub_822F1308) {
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
	ctx.lr = 0x822F1310;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f133c
	if (ctx.cr6.eq) goto loc_822F133C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,18008
	ctx.r4.s64 = ctx.r11.s64 + 18008;
	// bl 0x822f3c00
	ctx.lr = 0x822F133C;
	sub_822F3C00(ctx, base);
loc_822F133C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r11,-11216
	r29.s64 = ctx.r11.s64 + -11216;
	// beq cr6,0x822f1358
	if (ctx.cr6.eq) goto loc_822F1358;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1358;
	sub_822F3C00(ctx, base);
loc_822F1358:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,18036
	ctx.r4.s64 = ctx.r11.s64 + 18036;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F136C;
	sub_822F3C00(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,28268
	ctx.r4.s64 = ctx.r11.s64 + 28268;
	// bl 0x822f3c00
	ctx.lr = 0x822F137C;
	sub_822F3C00(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822f1428
	if (ctx.cr6.eq) goto loc_822F1428;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x822f3c00
	ctx.lr = 0x822F1394;
	sub_822F3C00(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// clrlwi r10,r30,30
	ctx.r10.u64 = r30.u32 & 0x3;
	// addi r11,r11,18028
	ctx.r11.s64 = ctx.r11.s64 + 18028;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r9,17936
	r28.s64 = ctx.r9.s64 + 17936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F13BC;
	sub_822F3C00(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18044
	ctx.r10.s64 = ctx.r10.s64 + 18044;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F13E0;
	sub_822F3C00(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	ctx.r11.s64 = r30.s32 >> 4;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18052
	ctx.r10.s64 = ctx.r10.s64 + 18052;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F1404;
	sub_822F3C00(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = r30.s32 >> 6;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,18060
	ctx.r10.s64 = ctx.r10.s64 + 18060;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x822f3c00
	ctx.lr = 0x822F1428;
	sub_822F3C00(ctx, base);
loc_822F1428:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x822f1438
	if (ctx.cr6.eq) goto loc_822F1438;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x822f1440
	goto loc_822F1440;
loc_822F1438:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
loc_822F1440:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3c00
	ctx.lr = 0x822F1448;
	sub_822F3C00(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_822F7A98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f7aac
	if (ctx.cr0.eq) goto loc_822F7AAC;
loc_822F7AA4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822F7AAC:
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// b 0x822f7ac4
	goto loc_822F7AC4;
loc_822F7AB4:
	// lbz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822f7aa4
	if (!ctx.cr0.eq) goto loc_822F7AA4;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_822F7AC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f7ab4
	if (!ctx.cr6.eq) goto loc_822F7AB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FA5C8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fa608
	if (!ctx.cr0.eq) goto loc_822FA608;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa5e8
	if (ctx.cr6.eq) goto loc_822FA5E8;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fa5ec
	goto loc_822FA5EC;
loc_822FA5E8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FA5EC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fa608
	if (ctx.cr6.eq) goto loc_822FA608;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa604
	if (ctx.cr6.eq) goto loc_822FA604;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fa608
	goto loc_822FA608;
loc_822FA604:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FA608:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822fa618
	if (!ctx.cr6.eq) goto loc_822FA618;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FA618:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FBE60) {
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
	// bl 0x822fbbf8
	ctx.lr = 0x822FBE7C;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbe9c
	if (!ctx.cr0.eq) goto loc_822FBE9C;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBE9C:
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

DEFINE_REX_FUNC(sub_822FD488) {
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
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fd4dc
	if (!ctx.cr0.eq) goto loc_822FD4DC;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd4b8
	if (ctx.cr6.eq) goto loc_822FD4B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fd4bc
	goto loc_822FD4BC;
loc_822FD4B8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FD4BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fd4dc
	if (ctx.cr6.eq) goto loc_822FD4DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd4d4
	if (ctx.cr6.eq) goto loc_822FD4D4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fd4e0
	goto loc_822FD4E0;
loc_822FD4D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fd4e0
	goto loc_822FD4E0;
loc_822FD4DC:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822FD4E0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822fdcb8
	if (ctx.cr6.lt) goto loc_822FDCB8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822fdcb8
	if (ctx.cr6.eq) goto loc_822FDCB8;
	// lwz r30,172(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// cmplwi cr6,r4,47
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 47, ctx.xer);
	// subfic r10,r30,0
	ctx.xer.ca = r30.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// bgt cr6,0x822fdca0
	if (ctx.cr6.gt) goto loc_822FDCA0;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,3608
	ctx.r12.s64 = ctx.r12.s64 + 3608;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32208
	ctx.r12.s64 = -2110783488;
	// addi r12,r12,-10960
	ctx.r12.s64 = ctx.r12.s64 + -10960;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_822FD530;
	case 1:
		goto loc_822FD538;
	case 2:
		goto loc_822FD5C4;
	case 3:
		goto loc_822FD554;
	case 4:
		goto loc_822FD574;
	case 5:
		goto loc_822FD57C;
	case 6:
		goto loc_822FD584;
	case 7:
		goto loc_822FD58C;
	case 8:
		goto loc_822FD5AC;
	case 9:
		goto loc_822FD5B4;
	case 10:
		goto loc_822FD5BC;
	case 11:
		goto loc_822FD5E0;
	case 12:
		goto loc_822FD530;
	case 13:
		goto loc_822FD5FC;
	case 14:
		goto loc_822FD780;
	case 15:
		goto loc_822FD7AC;
	case 16:
		goto loc_822FD7C8;
	case 17:
		goto loc_822FD7DC;
	case 18:
		goto loc_822FD7F8;
	case 19:
		goto loc_822FD804;
	case 20:
		goto loc_822FD82C;
	case 21:
		goto loc_822FD84C;
	case 22:
		goto loc_822FD858;
	case 23:
		goto loc_822FD868;
	case 24:
		goto loc_822FD884;
	case 25:
		goto loc_822FD8A0;
	case 26:
		goto loc_822FD8BC;
	case 27:
		goto loc_822FD8F8;
	case 28:
		goto loc_822FD934;
	case 29:
		goto loc_822FD970;
	case 30:
		goto loc_822FD9AC;
	case 31:
		goto loc_822FD9E8;
	case 32:
		goto loc_822FDA24;
	case 33:
		goto loc_822FDA60;
	case 34:
		goto loc_822FDA9C;
	case 35:
		goto loc_822FDAB8;
	case 36:
		goto loc_822FDBB8;
	case 37:
		goto loc_822FDBDC;
	case 38:
		goto loc_822FDBEC;
	case 39:
		goto loc_822FDC08;
	case 40:
		goto loc_822FDC24;
	case 41:
		goto loc_822FDC40;
	case 42:
		goto loc_822FD75C;
	case 43:
		goto loc_822FD814;
	case 44:
		goto loc_822FD530;
	case 45:
		goto loc_822FD764;
	case 46:
		goto loc_822FDC5C;
	case 47:
		goto loc_822FD530;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_822FD530:
	// li r3,80
	ctx.r3.s64 = 80;
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD538:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822fac90
	ctx.lr = 0x822FD550;
	sub_822FAC90(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD554:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822FD558:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822faee0
	ctx.lr = 0x822FD570;
	sub_822FAEE0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD574:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822fd558
	goto loc_822FD558;
loc_822FD57C:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x822fd558
	goto loc_822FD558;
loc_822FD584:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x822fd558
	goto loc_822FD558;
loc_822FD58C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_822FD590:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822f80e0
	ctx.lr = 0x822FD5A8;
	sub_822F80E0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD5AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x822fd590
	goto loc_822FD590;
loc_822FD5B4:
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x822fd590
	goto loc_822FD590;
loc_822FD5BC:
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x822fd590
	goto loc_822FD590;
loc_822FD5C4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8288
	ctx.lr = 0x822FD5DC;
	sub_822F8288(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD5E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f83f0
	ctx.lr = 0x822FD5F8;
	sub_822F83F0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD5FC:
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r9,r9,0,24,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// rlwinm r9,r9,0,9,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x822fd658
	if (ctx.cr6.eq) goto loc_822FD658;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x822fd650
	if (ctx.cr6.eq) goto loc_822FD650;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x822fd648
	if (ctx.cr6.eq) goto loc_822FD648;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x822fd640
	if (ctx.cr6.eq) goto loc_822FD640;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// bne cr6,0x822fd658
	if (!ctx.cr6.eq) goto loc_822FD658;
	// oris r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 8388608;
	// b 0x822fd65c
	goto loc_822FD65C;
loc_822FD640:
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// b 0x822fd65c
	goto loc_822FD65C;
loc_822FD648:
	// ori r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 | 1024;
	// b 0x822fd65c
	goto loc_822FD65C;
loc_822FD650:
	// ori r9,r9,512
	ctx.r9.u64 = ctx.r9.u64 | 512;
	// b 0x822fd65c
	goto loc_822FD65C;
loc_822FD658:
	// ori r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 256;
loc_822FD65C:
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822fd75c
	if (ctx.cr0.eq) goto loc_822FD75C;
	// lis r12,-53
	ctx.r12.s64 = -3473408;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r12,r12,36863
	ctx.r12.u64 = ctx.r12.u64 | 36863;
	// and r31,r9,r12
	r31.u64 = ctx.r9.u64 & ctx.r12.u64;
	// bne 0x822fd740
	if (!ctx.cr0.eq) goto loc_822FD740;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fd694
	if (ctx.cr6.eq) goto loc_822FD694;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822fd698
	goto loc_822FD698;
loc_822FD694:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FD698:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd6b4
	if (ctx.cr6.eq) goto loc_822FD6B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fd6b0
	if (ctx.cr6.eq) goto loc_822FD6B0;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822fd6b4
	goto loc_822FD6B4;
loc_822FD6B0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_822FD6B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fd6d4
	if (ctx.cr6.eq) goto loc_822FD6D4;
	// lis r12,52
	ctx.r12.s64 = 3407872;
	// lwz r11,96(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// ori r12,r12,28672
	ctx.r12.u64 = ctx.r12.u64 | 28672;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// stw r11,96(r7)
	REX_STORE_U32(ctx.r7.u32 + 96, ctx.r11.u32);
loc_822FD6D4:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fd75c
	if (!ctx.cr6.gt) goto loc_822FD75C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FD6EC:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fd724
	if (ctx.cr6.eq) goto loc_822FD724;
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fd724
	if (ctx.cr6.eq) goto loc_822FD724;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822f86b0
	ctx.lr = 0x822FD71C;
	sub_822F86B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fdcbc
	if (!ctx.cr0.eq) goto loc_822FDCBC;
loc_822FD724:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fd6ec
	if (ctx.cr6.lt) goto loc_822FD6EC;
	// b 0x822fd75c
	goto loc_822FD75C;
loc_822FD740:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fd75c
	if (ctx.cr6.eq) goto loc_822FD75C;
	// lis r12,52
	ctx.r12.s64 = 3407872;
	// ori r12,r12,28672
	ctx.r12.u64 = ctx.r12.u64 | 28672;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
loc_822FD75C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD764:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8550
	ctx.lr = 0x822FD77C;
	sub_822F8550(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD780:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r8,r9,0,27,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
loc_822FD78C:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r8,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_822FD794:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822f8800
	ctx.lr = 0x822FD7A8;
	sub_822F8800(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD7AC:
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// oris r4,r9,16384
	ctx.r4.u64 = ctx.r9.u64 | 1073741824;
	// bne cr6,0x822fd794
	if (!ctx.cr6.eq) goto loc_822FD794;
	// rlwinm r4,r9,0,2,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// b 0x822fd794
	goto loc_822FD794;
loc_822FD7C8:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r8,r9,0,10,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000) | (ctx.r8.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwimi r8,r9,0,5,5
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000000) | (ctx.r8.u64 & 0xFFFFFFFFFBFFFFFF);
	// b 0x822fd78c
	goto loc_822FD78C;
loc_822FD7DC:
	// lfs f2,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_822FD7E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8978
	ctx.lr = 0x822FD7F4;
	sub_822F8978(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD7F8:
	// lfs f1,212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// b 0x822fd7e4
	goto loc_822FD7E4;
loc_822FD804:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r8,64(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// rlwimi r8,r9,0,12,13
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0000) | (ctx.r8.u64 & 0xFFFFFFFFFFF3FFFF);
	// b 0x822fd78c
	goto loc_822FD78C;
loc_822FD814:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822fd0a8
	ctx.lr = 0x822FD828;
	sub_822FD0A8(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD82C:
	// lfs f2,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
loc_822FD834:
	// lfs f3,256(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 256);
	ctx.f3.f64 = double(temp.f32);
loc_822FD838:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8b70
	ctx.lr = 0x822FD848;
	sub_822F8B70(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD84C:
	// lfs f1,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// b 0x822fd834
	goto loc_822FD834;
loc_822FD858:
	// lfs f2,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,248(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// b 0x822fd838
	goto loc_822FD838;
loc_822FD868:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8d30
	ctx.lr = 0x822FD880;
	sub_822F8D30(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD884:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f91b0
	ctx.lr = 0x822FD89C;
	sub_822F91B0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD8A0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f9340
	ctx.lr = 0x822FD8B8;
	sub_822F9340(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD8BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f1,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FD8F4;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD8F8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FD930;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD934:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FD96C;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD970:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FD9A8;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD9AC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FD9E4;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FD9E8:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FDA20;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDA24:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,292(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 292);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FDA5C;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDA60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f8,308(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f7,304(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f7.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lfs f6,300(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,296(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lfs f4,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f3.f64 = double(temp.f32);
	// stb r10,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// lfs f2,284(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 284);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f94d0
	ctx.lr = 0x822FDA98;
	sub_822F94D0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDA9C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f8eb0
	ctx.lr = 0x822FDAB4;
	sub_822F8EB0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDAB8:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,96(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// beq cr6,0x822fdad0
	if (ctx.cr6.eq) goto loc_822FDAD0;
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// b 0x822fdad4
	goto loc_822FDAD4;
loc_822FDAD0:
	// rlwinm r9,r9,0,13,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
loc_822FDAD4:
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822fd75c
	if (ctx.cr0.eq) goto loc_822FD75C;
	// lis r12,-53
	ctx.r12.s64 = -3473408;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r12,r12,36863
	ctx.r12.u64 = ctx.r12.u64 | 36863;
	// and r31,r9,r12
	r31.u64 = ctx.r9.u64 & ctx.r12.u64;
	// bne 0x822fd740
	if (!ctx.cr0.eq) goto loc_822FD740;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fdb0c
	if (ctx.cr6.eq) goto loc_822FDB0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822fdb10
	goto loc_822FDB10;
loc_822FDB0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FDB10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdb2c
	if (ctx.cr6.eq) goto loc_822FDB2C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fdb28
	if (ctx.cr6.eq) goto loc_822FDB28;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x822fdb2c
	goto loc_822FDB2C;
loc_822FDB28:
	// li r7,0
	ctx.r7.s64 = 0;
loc_822FDB2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822fdb4c
	if (ctx.cr6.eq) goto loc_822FDB4C;
	// lis r12,52
	ctx.r12.s64 = 3407872;
	// lwz r11,96(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 96);
	// ori r12,r12,28672
	ctx.r12.u64 = ctx.r12.u64 | 28672;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | r31.u64;
	// stw r11,96(r7)
	REX_STORE_U32(ctx.r7.u32 + 96, ctx.r11.u32);
loc_822FDB4C:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fd75c
	if (!ctx.cr6.gt) goto loc_822FD75C;
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FDB64:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fdb9c
	if (ctx.cr6.eq) goto loc_822FDB9C;
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fdb9c
	if (ctx.cr6.eq) goto loc_822FDB9C;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822f86b0
	ctx.lr = 0x822FDB94;
	sub_822F86B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fdcbc
	if (!ctx.cr0.eq) goto loc_822FDCBC;
loc_822FDB9C:
	// lwz r11,168(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 168);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fdb64
	if (ctx.cr6.lt) goto loc_822FDB64;
	// b 0x822fd75c
	goto loc_822FD75C;
loc_822FDBB8:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lhz r5,166(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 166);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
loc_822FDBC4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f9748
	ctx.lr = 0x822FDBD8;
	sub_822F9748(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDBDC:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lhz r4,164(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 164);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// b 0x822fdbc4
	goto loc_822FDBC4;
loc_822FDBEC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f9030
	ctx.lr = 0x822FDC04;
	sub_822F9030(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDC08:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f9a80
	ctx.lr = 0x822FDC20;
	sub_822F9A80(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDC24:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822fd210
	ctx.lr = 0x822FDC3C;
	sub_822FD210(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDC40:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822f9bf8
	ctx.lr = 0x822FDC58;
	sub_822F9BF8(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDC5C:
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822fdc74
	if (ctx.cr6.eq) goto loc_822FDC74;
	// lhz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 100);
	// ori r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 8192;
	// b 0x822fdc7c
	goto loc_822FDC7C;
loc_822FDC74:
	// lha r9,100(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// rlwinm r9,r9,0,19,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_822FDC7C:
	// sth r9,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r9.u16);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822f86b0
	ctx.lr = 0x822FDC9C;
	sub_822F86B0(ctx, base);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDCA0:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FDCB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822fdcbc
	goto loc_822FDCBC;
loc_822FDCB8:
	// li r3,37
	ctx.r3.s64 = 37;
loc_822FDCBC:
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

DEFINE_REX_FUNC(sub_8234CF38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234cf4c
	if (!ctx.cr6.eq) goto loc_8234CF4C;
	// li r3,36
	ctx.r3.s64 = 36;
	// blr 
	return;
loc_8234CF4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234cf64
	if (!ctx.cr6.eq) goto loc_8234CF64;
	// li r3,49
	ctx.r3.s64 = 49;
	// blr 
	return;
loc_8234CF64:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234cf74
	if (ctx.cr6.eq) goto loc_8234CF74;
	// lfs f0,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8234CF74:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234cf84
	if (ctx.cr6.eq) goto loc_8234CF84;
	// lfs f0,368(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_8234CF84:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8234D998) {
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
	ctx.lr = 0x8234D9A0;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,24(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8234dce8
	if (ctx.cr6.eq) goto loc_8234DCE8;
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d9d0
	if (ctx.cr6.eq) goto loc_8234D9D0;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_8234D9D0:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d9fc
	if (ctx.cr6.eq) goto loc_8234D9FC;
	// lwz r10,200(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234d9fc
	if (ctx.cr6.eq) goto loc_8234D9FC;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234d9fc
	if (!ctx.cr6.eq) goto loc_8234D9FC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_8234D9FC:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dce8
	if (ctx.cr6.eq) goto loc_8234DCE8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234dce0
	if (ctx.cr6.eq) goto loc_8234DCE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234DA28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234dce0
	if (!ctx.cr6.eq) goto loc_8234DCE0;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x8234db04
	if (ctx.cr6.eq) goto loc_8234DB04;
	// lfs f13,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234da5c
	if (!ctx.cr6.gt) goto loc_8234DA5C;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8234da64
	goto loc_8234DA64;
loc_8234DA5C:
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8234DA64:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
loc_8234DA6C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234da84
	if (!ctx.cr6.gt) goto loc_8234DA84;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234da9c
	if (ctx.cr6.gt) goto loc_8234DA9C;
loc_8234DA84:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234dce4
	if (!ctx.cr6.lt) goto loc_8234DCE4;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234dce4
	if (!ctx.cr6.lt) goto loc_8234DCE4;
loc_8234DA9C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234dad4
	if (!ctx.cr6.gt) goto loc_8234DAD4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8234dce4
	if (!ctx.cr6.lt) goto loc_8234DCE4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234da6c
	if (!ctx.cr6.eq) goto loc_8234DA6C;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_8234DAD4:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8234dce4
	if (!ctx.cr6.gt) goto loc_8234DCE4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234da6c
	if (!ctx.cr6.eq) goto loc_8234DA6C;
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_8234DB04:
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	r28.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8234db24
	if (!ctx.cr6.gt) goto loc_8234DB24;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234db38
	if (ctx.cr6.lt) goto loc_8234DB38;
loc_8234DB24:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8234db3c
	if (!ctx.cr6.lt) goto loc_8234DB3C;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8234db3c
	if (!ctx.cr6.gt) goto loc_8234DB3C;
loc_8234DB38:
	// li r28,1
	r28.s64 = 1;
loc_8234DB3C:
	// lfs f0,180(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8234db58
	if (!ctx.cr6.gt) goto loc_8234DB58;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8234db7c
	if (ctx.cr6.gt) goto loc_8234DB7C;
loc_8234DB58:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8234db70
	if (!ctx.cr6.lt) goto loc_8234DB70;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8234db7c
	if (ctx.cr6.lt) goto loc_8234DB7C;
loc_8234DB70:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dce4
	if (ctx.cr6.eq) goto loc_8234DCE4;
loc_8234DB7C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8234dc30
	if (!ctx.cr6.gt) goto loc_8234DC30;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8234dc00
	if (ctx.cr6.eq) goto loc_8234DC00;
	// lwz r9,140(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r29,0(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234dbc4
	if (ctx.cr6.eq) goto loc_8234DBC4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,156(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lhz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 28);
	// subf r6,r7,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ctx.r11.u64;
loc_8234DBC4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dbfc
	if (ctx.cr6.eq) goto loc_8234DBFC;
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234dbfc
	if (ctx.cr6.eq) goto loc_8234DBFC;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lhz r5,30(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 30);
	// bctrl 
	ctx.lr = 0x8234DBF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8234DBFC:
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
loc_8234DC00:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234db3c
	if (ctx.cr6.eq) goto loc_8234DB3C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,208(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 208);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234db3c
	if (!ctx.cr6.eq) goto loc_8234DB3C;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// b 0x8234db3c
	goto loc_8234DB3C;
loc_8234DC30:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234dcb0
	if (ctx.cr6.eq) goto loc_8234DCB0;
	// lwz r7,140(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234dc68
	if (ctx.cr6.eq) goto loc_8234DC68;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r7,156(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 156);
	// lhz r6,28(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 28);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8234dc74
	if (!ctx.cr6.eq) goto loc_8234DC74;
loc_8234DC68:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234dc78
	if (!ctx.cr6.eq) goto loc_8234DC78;
loc_8234DC74:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8234DC78:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234dcac
	if (ctx.cr6.eq) goto loc_8234DCAC;
	// lwz r10,416(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 416);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234dcac
	if (ctx.cr6.eq) goto loc_8234DCAC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,30(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8234DCA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8234DCAC:
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
loc_8234DCB0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234db3c
	if (ctx.cr6.eq) goto loc_8234DB3C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234db3c
	if (!ctx.cr6.eq) goto loc_8234DB3C;
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// b 0x8234db3c
	goto loc_8234DB3C;
loc_8234DCE0:
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8234DCE4:
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
loc_8234DCE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82365DE8) {
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
	// addi r31,r11,3912
	r31.s64 = ctx.r11.s64 + 3912;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82365E10;
	sub_823EF5F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,13264
	ctx.r4.s64 = ctx.r10.s64 + 13264;
	// bl 0x82331480
	ctx.lr = 0x82365E20;
	sub_82331480(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r3,-32202
	ctx.r3.s64 = -2110390272;
	// addi r9,r11,3528
	ctx.r9.s64 = ctx.r11.s64 + 3528;
	// lis r10,-32202
	ctx.r10.s64 = -2110390272;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// addi r9,r3,23608
	ctx.r9.s64 = ctx.r3.s64 + 23608;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r10,23584
	ctx.r10.s64 = ctx.r10.s64 + 23584;
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lis r4,-32202
	ctx.r4.s64 = -2110390272;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// lis r5,-32202
	ctx.r5.s64 = -2110390272;
	// stw r9,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// lis r8,-32202
	ctx.r8.s64 = -2110390272;
	// addi r11,r4,23720
	ctx.r11.s64 = ctx.r4.s64 + 23720;
	// addi r10,r5,23800
	ctx.r10.s64 = ctx.r5.s64 + 23800;
	// addi r9,r8,24016
	ctx.r9.s64 = ctx.r8.s64 + 24016;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lis r6,-32202
	ctx.r6.s64 = -2110390272;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lis r7,-32202
	ctx.r7.s64 = -2110390272;
	// stw r9,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// addi r11,r6,23824
	ctx.r11.s64 = ctx.r6.s64 + 23824;
	// addi r10,r7,23848
	ctx.r10.s64 = ctx.r7.s64 + 23848;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stw r10,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r10.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r9,33160
	ctx.r9.u64 = ctx.r9.u64 | 33160;
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

DEFINE_REX_FUNC(sub_8236E140) {
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
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x8236e1a8
	if (ctx.cr6.eq) goto loc_8236E1A8;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8236e1c8
	if (ctx.cr6.lt) goto loc_8236E1C8;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// bgt cr6,0x8236e1c8
	if (ctx.cr6.gt) goto loc_8236E1C8;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,11508
	ctx.r4.s64 = ctx.r9.s64 + 11508;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfsx f1,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x826a0568
	ctx.lr = 0x8236E194;
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
loc_8236E1A8:
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
	ctx.lr = 0x8236E1C8;
	sub_826A0568(ctx, base);
loc_8236E1C8:
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

DEFINE_REX_FUNC(sub_82374700) {
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
	// lis r31,-32124
	r31.s64 = -2105278464;
	// lwz r11,-7928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -7928);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82374760
	if (!ctx.cr6.eq) goto loc_82374760;
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,1
	ctx.r4.s64 = 1;
	// ori r3,r3,44100
	ctx.r3.u64 = ctx.r3.u64 | 44100;
	// bl 0x823bf0d0
	ctx.lr = 0x82374738;
	sub_823BF0D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,-7928(r31)
	REX_STORE_U32(r31.u32 + -7928, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82374760
	if (ctx.cr6.eq) goto loc_82374760;
	// li r3,33
	ctx.r3.s64 = 33;
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
loc_82374760:
	// lis r10,-32124
	ctx.r10.s64 = -2105278464;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-7920(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7920);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-7920(r10)
	REX_STORE_U32(ctx.r10.u32 + -7920, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82377508) {
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
	ctx.lr = 0x82377510;
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// bne cr6,0x82377530
	if (!ctx.cr6.eq) goto loc_82377530;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
loc_82377530:
	// li r26,0
	r26.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,0(r25)
	REX_STORE_U32(r25.u32 + 0, r26.u32);
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lis r24,-32
	r24.s64 = -2097152;
	// addi r23,r11,18132
	r23.s64 = ctx.r11.s64 + 18132;
loc_8237754C:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r5,1792
	ctx.r5.s64 = 1792;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r26
	r29.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82377568;
	sub_823EF5F0(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,260(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82377590
	if (!ctx.cr6.gt) goto loc_82377590;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// mulli r10,r28,18732
	ctx.r10.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(18732));
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r10.u32);
loc_82377590:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82340718
	ctx.lr = 0x823775A8;
	sub_82340718(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237771c
	if (!ctx.cr6.eq) goto loc_8237771C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x823775c4
	if (ctx.cr6.eq) goto loc_823775C4;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r26,18616(r11)
	REX_STORE_U32(ctx.r11.u32 + 18616, r26.u32);
loc_823775C4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1728
	ctx.lr = 0x823775DC;
	sub_823C1728(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377694
	if (!ctx.cr6.eq) goto loc_82377694;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x82377600
	if (!ctx.cr6.eq) goto loc_82377600;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823776c0
	if (ctx.cr6.eq) goto loc_823776C0;
loc_82377600:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x8237760C;
	sub_82340FF0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237771c
	if (!ctx.cr6.eq) goto loc_8237771C;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82377628;
	sub_82340E38(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82340718
	ctx.lr = 0x82377640;
	sub_82340718(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r11,0,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFE00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r24.u32, ctx.xer);
	// bne cr6,0x82377668
	if (!ctx.cr6.eq) goto loc_82377668;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// rlwinm r9,r11,15,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x3;
	// subfic r8,r9,4
	ctx.xer.ca = ctx.r9.u32 <= 4;
	ctx.r8.u64 = static_cast<uint64_t>(4) - ctx.r9.u64;
	// lwz r7,18536(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 18536);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x8237766c
	if (ctx.cr6.eq) goto loc_8237766C;
loc_82377668:
	// li r30,19
	r30.s64 = 19;
loc_8237766C:
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8237768c
	if (ctx.cr6.eq) goto loc_8237768C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82340e38
	ctx.lr = 0x8237768C;
	sub_82340E38(ctx, base);
loc_8237768C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823776c0
	if (ctx.cr6.eq) goto loc_823776C0;
loc_82377694:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82331620
	ctx.lr = 0x823776A4;
	sub_82331620(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,124
	ctx.r4.s64 = 124;
	// beq cr6,0x823776bc
	if (ctx.cr6.eq) goto loc_823776BC;
	// li r4,-3
	ctx.r4.s64 = -3;
loc_823776BC:
	// bl 0x82340e38
	ctx.lr = 0x823776C0;
	sub_82340E38(ctx, base);
loc_823776C0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82377590
	if (!ctx.cr6.eq) goto loc_82377590;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82340718
	ctx.lr = 0x823776E4;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82377764
	if (!ctx.cr6.eq) goto loc_82377764;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1dc8
	ctx.lr = 0x82377700;
	sub_823C1DC8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r7,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// and r30,r6,r3
	r30.u64 = ctx.r6.u64 & ctx.r3.u64;
loc_8237771C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8237772c
	if (!ctx.cr6.eq) goto loc_8237772C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8237772C:
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// lwz r11,260(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8237754c
	if (ctx.cr6.lt) goto loc_8237754C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82377760
	if (!ctx.cr6.gt) goto loc_82377760;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r10,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r10.u32);
loc_82377760:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82377764:
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82393C28) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82340718
	ctx.lr = 0x82393C50;
	sub_82340718(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82393c64
	if (ctx.cr6.eq) goto loc_82393C64;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bne cr6,0x82393c68
	if (!ctx.cr6.eq) goto loc_82393C68;
loc_82393C64:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82393C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82395858) {
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
	// addi r30,r31,15800
	r30.s64 = r31.s64 + 15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82395884;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20236
	ctx.r11.s64 = ctx.r11.s64 + 20236;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// lis r3,-32199
	ctx.r3.s64 = -2110193664;
	// stw r11,15800(r31)
	REX_STORE_U32(r31.u32 + 15800, ctx.r11.u32);
	// lis r4,-32199
	ctx.r4.s64 = -2110193664;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r11,r3,21552
	ctx.r11.s64 = ctx.r3.s64 + 21552;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r4,21576
	ctx.r10.s64 = ctx.r4.s64 + 21576;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r5,-32199
	ctx.r5.s64 = -2110193664;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r6,-32199
	ctx.r6.s64 = -2110193664;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// lis r7,-32199
	ctx.r7.s64 = -2110193664;
	// addi r9,r5,21648
	ctx.r9.s64 = ctx.r5.s64 + 21648;
	// addi r11,r6,22592
	ctx.r11.s64 = ctx.r6.s64 + 22592;
	// addi r10,r7,21600
	ctx.r10.s64 = ctx.r7.s64 + 21600;
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// lis r8,-32199
	ctx.r8.s64 = -2110193664;
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// stw r10,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// addi r9,r8,21624
	ctx.r9.s64 = ctx.r8.s64 + 21624;
	// li r10,360
	ctx.r10.s64 = 360;
	// stw r11,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r11.u32);
	// stw r9,88(r30)
	REX_STORE_U32(r30.u32 + 88, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,68(r30)
	REX_STORE_U32(r30.u32 + 68, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8239D578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r9,r3,-2
	ctx.r9.s64 = ctx.r3.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_8239D580:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bne cr6,0x8239d580
	if (!ctx.cr6.eq) goto loc_8239D580;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239DE80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8239DE88;
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
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// bne cr6,0x8239dee4
	if (!ctx.cr6.eq) goto loc_8239DEE4;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239deb4
	if (!ctx.cr6.eq) goto loc_8239DEB4;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
loc_8239DEB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,256(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 256);
	// bl 0x82340ff0
	ctx.lr = 0x8239DEC0;
	sub_82340FF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8239ded4
	if (ctx.cr6.eq) goto loc_8239DED4;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8239DED4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,188(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 188);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
loc_8239DEE4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8239defc
	if (!ctx.cr6.eq) goto loc_8239DEFC;
	// li r3,82
	ctx.r3.s64 = 82;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8239DEFC:
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// and r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 & r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8239df18
	if (!ctx.cr6.eq) goto loc_8239DF18;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8239DF18:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bctrl 
	ctx.lr = 0x8239DF2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823A1858) {
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
	ctx.lr = 0x823A1860;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823a18c4
	if (!ctx.cr6.gt) goto loc_823A18C4;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r4,16
	r28.s64 = ctx.r4.s64 + 16;
loc_823A1884:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x8235f468
	ctx.lr = 0x823A1894;
	sub_8235F468(ctx, base);
	// lbzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + r31.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823a18b0
	if (!ctx.cr6.eq) goto loc_823A18B0;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823a18b0
	if (ctx.cr6.eq) goto loc_823A18B0;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_823A18B0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823a1884
	if (ctx.cr6.lt) goto loc_823A1884;
loc_823A18C4:
	// subf r3,r27,r11
	ctx.r3.u64 = ctx.r11.u64 - r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823A3E68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// addi r8,r11,262
	ctx.r8.s64 = ctx.r11.s64 + 262;
	// lwz r10,48(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r11,r7,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// beq cr6,0x823a3fb4
	if (ctx.cr6.eq) goto loc_823A3FB4;
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// bgt cr6,0x823a3fb4
	if (ctx.cr6.gt) goto loc_823A3FB4;
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16044
	ctx.r12.s64 = ctx.r12.s64 + 16044;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A3F14;
	case 1:
		goto loc_823A3EDC;
	case 2:
		goto loc_823A3EE4;
	case 3:
		goto loc_823A3EEC;
	case 4:
		goto loc_823A3EF4;
	case 5:
		goto loc_823A3EF4;
	case 6:
		goto loc_823A3F14;
	case 7:
		goto loc_823A3F14;
	case 8:
		goto loc_823A3F14;
	case 9:
		goto loc_823A3F14;
	case 10:
		goto loc_823A3F14;
	case 11:
		goto loc_823A3F14;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3EDC:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823a3ef8
	goto loc_823A3EF8;
loc_823A3EE4:
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823a3ef8
	goto loc_823A3EF8;
loc_823A3EEC:
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x823a3ef8
	goto loc_823A3EF8;
loc_823A3EF4:
	// li r10,32
	ctx.r10.s64 = 32;
loc_823A3EF8:
	// rldicl r11,r11,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 3) & 0x7FFFFFFFF;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// rldicr r11,r11,0,60
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFFFF8;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// divdu r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3F14:
	// lis r12,-32198
	ctx.r12.s64 = -2110128128;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16172
	ctx.r12.s64 = ctx.r12.s64 + 16172;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_823A3F9C;
	case 1:
		goto loc_823A3FB4;
	case 2:
		goto loc_823A3FB4;
	case 3:
		goto loc_823A3FB4;
	case 4:
		goto loc_823A3FB4;
	case 5:
		goto loc_823A3FB4;
	case 6:
		goto loc_823A3F5C;
	case 7:
		goto loc_823A3F6C;
	case 8:
		goto loc_823A3F80;
	case 9:
		goto loc_823A3F90;
	case 10:
		goto loc_823A3F90;
	case 11:
		goto loc_823A3F90;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823A3F5C:
	// mulli r11,r11,14
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(14));
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3F6C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,36
	ctx.r10.s64 = 36;
	// divwu r8,r11,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3F80:
	// mulli r11,r11,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x823a3fa4
	goto loc_823A3FA4;
loc_823A3F90:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A3F9C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_823A3FA4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_823A3FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ADAC0) {
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
	// beq cr6,0x823adb08
	if (ctx.cr6.eq) goto loc_823ADB08;
	// lbz r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823adb30
	if (!ctx.cr6.eq) goto loc_823ADB30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ADAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823adb34
	if (!ctx.cr6.eq) goto loc_823ADB34;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823adb2c
	goto loc_823ADB2C;
loc_823ADB08:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823ADB20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823adb34
	if (!ctx.cr6.eq) goto loc_823ADB34;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823ADB2C:
	// stb r11,288(r31)
	REX_STORE_U8(r31.u32 + 288, ctx.r11.u8);
loc_823ADB30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ADB34:
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

DEFINE_REX_FUNC(sub_823B2598) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32121
	r31.s64 = -2105081856;
	// lwz r11,-26716(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -26716);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823b25f8
	if (!ctx.cr6.eq) goto loc_823B25F8;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x823B25C8;
	sub_823EF5F0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// bl 0x8264c7d8
	ctx.lr = 0x823B25E0;
	sub_8264C7D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8264ce38
	ctx.lr = 0x823B25EC;
	sub_8264CE38(ctx, base);
	// lwz r11,-26716(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -26716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-26716(r31)
	REX_STORE_U32(r31.u32 + -26716, ctx.r11.u32);
loc_823B25F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BBFF0) {
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
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bc03c
	if (ctx.cr6.eq) goto loc_823BC03C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,32356
	ctx.r5.s64 = ctx.r10.s64 + 32356;
	// li r6,117
	ctx.r6.s64 = 117;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823BC030;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_823BC03C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bac90
	ctx.lr = 0x823BC044;
	sub_823BAC90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823badc8
	ctx.lr = 0x823BC04C;
	sub_823BADC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bacf0
	ctx.lr = 0x823BC054;
	sub_823BACF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bad50
	ctx.lr = 0x823BC05C;
	sub_823BAD50(ctx, base);
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

DEFINE_REX_FUNC(sub_823BF000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823BF008;
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
	// bl 0x823bef58
	ctx.lr = 0x823BF01C;
	sub_823BEF58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bf030
	if (ctx.cr6.eq) goto loc_823BF030;
	// li r3,-2
	ctx.r3.s64 = -2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF030:
	// cmpwi cr6,r30,1002
	ctx.cr6.compare<int32_t>(r30.s32, 1002, ctx.xer);
	// bgt cr6,0x823bf088
	if (ctx.cr6.gt) goto loc_823BF088;
	// beq cr6,0x823bf074
	if (ctx.cr6.eq) goto loc_823BF074;
	// cmpwi cr6,r30,1000
	ctx.cr6.compare<int32_t>(r30.s32, 1000, ctx.xer);
	// beq cr6,0x823bf060
	if (ctx.cr6.eq) goto loc_823BF060;
	// cmpwi cr6,r30,1001
	ctx.cr6.compare<int32_t>(r30.s32, 1001, ctx.xer);
	// bne cr6,0x823bf098
	if (!ctx.cr6.eq) goto loc_823BF098;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF060:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF074:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF088:
	// cmpwi cr6,r30,1003
	ctx.cr6.compare<int32_t>(r30.s32, 1003, ctx.xer);
	// beq cr6,0x823bf0bc
	if (ctx.cr6.eq) goto loc_823BF0BC;
	// cmpwi cr6,r30,2000
	ctx.cr6.compare<int32_t>(r30.s32, 2000, ctx.xer);
	// beq cr6,0x823bf0a4
	if (ctx.cr6.eq) goto loc_823BF0A4;
loc_823BF098:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF0A4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,9
	ctx.r10.u64 = ctx.r11.u64 | 9;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_823BF0BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_823C6A30) {
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
	ctx.lr = 0x823C6A38;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r6,4652
	ctx.r10.s64 = ctx.r6.s64 + 4652;
	// lwz r11,264(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// lis r8,-32121
	ctx.r8.s64 = -2105081856;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r8,-20968
	r25.s64 = ctx.r8.s64 + -20968;
	// lis r10,-32121
	ctx.r10.s64 = -2105081856;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// addi r24,r10,13392
	r24.s64 = ctx.r10.s64 + 13392;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subfic r10,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r5,20(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 20);
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r4,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r10,9284
	r30.s64 = ctx.r10.s64 + 9284;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r29,r11,9284
	r29.s64 = ctx.r11.s64 + 9284;
	// beq cr6,0x823c6af8
	if (ctx.cr6.eq) goto loc_823C6AF8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r31,2
	r31.s64 = 2;
	// bl 0x823c6000
	ctx.lr = 0x823C6AD4;
	sub_823C6000(ctx, base);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r7,r28,4
	ctx.r7.s64 = r28.s64 + 4;
	// addi r5,r29,72
	ctx.r5.s64 = r29.s64 + 72;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// bl 0x823c6000
	ctx.lr = 0x823C6AEC;
	sub_823C6000(ctx, base);
	// addi r30,r30,144
	r30.s64 = r30.s64 + 144;
	// addi r29,r29,144
	r29.s64 = r29.s64 + 144;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
loc_823C6AF8:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823c6b74
	if (!ctx.cr6.eq) goto loc_823C6B74;
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c6bf4
	if (!ctx.cr6.lt) goto loc_823C6BF4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
loc_823C6B20:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r6,r24,288
	ctx.r6.s64 = r24.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c65f0
	ctx.lr = 0x823C6B38;
	sub_823C65F0(ctx, base);
	// addi r7,r28,4
	ctx.r7.s64 = r28.s64 + 4;
	// addi r5,r29,72
	ctx.r5.s64 = r29.s64 + 72;
	// addi r6,r25,288
	ctx.r6.s64 = r25.s64 + 288;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// bl 0x823c65f0
	ctx.lr = 0x823C6B50;
	sub_823C65F0(ctx, base);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r27,r27,144
	r27.s64 = r27.s64 + 144;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,144
	r30.s64 = r30.s64 + 144;
	// addi r29,r29,144
	r29.s64 = r29.s64 + 144;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c6b20
	if (ctx.cr6.lt) goto loc_823C6B20;
	// b 0x823c6bf4
	goto loc_823C6BF4;
loc_823C6B74:
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 64);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823c6bf4
	if (!ctx.cr6.lt) goto loc_823C6BF4;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r11,r24
	r24.u64 = ctx.r11.u64 + r24.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r27,r10,r27
	r27.u64 = ctx.r10.u64 + r27.u64;
loc_823C6BA4:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c6000
	ctx.lr = 0x823C6BBC;
	sub_823C6000(ctx, base);
	// addi r7,r28,4
	ctx.r7.s64 = r28.s64 + 4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r29,72
	ctx.r5.s64 = r29.s64 + 72;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// addi r3,r27,72
	ctx.r3.s64 = r27.s64 + 72;
	// bl 0x823c6000
	ctx.lr = 0x823C6BD4;
	sub_823C6000(ctx, base);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 64);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r27,r27,144
	r27.s64 = r27.s64 + 144;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,144
	r30.s64 = r30.s64 + 144;
	// addi r29,r29,144
	r29.s64 = r29.s64 + 144;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c6ba4
	if (ctx.cr6.lt) goto loc_823C6BA4;
loc_823C6BF4:
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(r31.s32, 32, ctx.xer);
	// bge cr6,0x823c6c38
	if (!ctx.cr6.lt) goto loc_823C6C38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subfic r7,r31,32
	ctx.xer.ca = r31.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - r31.u64;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// lfs f13,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
loc_823C6C10:
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r11,r28,-128
	ctx.r11.s64 = r28.s64 + -128;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C6C1C:
	// lfsu f0,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfsu f0,128(r11)
	ea = 128 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823c6c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6C1C;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x823c6c10
	if (!ctx.cr0.eq) goto loc_823C6C10;
loc_823C6C38:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_823CF7E0) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c90
	ctx.lr = 0x823CF7E8;
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r18,r10
	r18.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x823cf834
	if (!ctx.cr6.lt) goto loc_823CF834;
loc_823CF820:
	// li r3,-131
	ctx.r3.s64 = -131;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_823CF834:
	// lwz r11,88(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 88);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823cf85c
	if (!ctx.cr6.eq) goto loc_823CF85C;
	// addi r19,r21,472
	r19.s64 = r21.s64 + 472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823e2ba8
	ctx.lr = 0x823CF850;
	sub_823E2BA8(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823cf894
	if (!ctx.cr6.eq) goto loc_823CF894;
loc_823CF85C:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ce4e0
	ctx.lr = 0x823CF874;
	sub_823CE4E0(ctx, base);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x823cfcc8
	if (ctx.cr6.eq) goto loc_823CFCC8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x823cf834
	if (ctx.cr6.gt) goto loc_823CF834;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_823CF894:
	// ble cr6,0x823cfcb4
	if (!ctx.cr6.gt) goto loc_823CFCB4;
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823cf8c4
	if (ctx.cr6.eq) goto loc_823CF8C4;
	// lwz r11,88(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,72(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 72);
	// blt cr6,0x823cf8c8
	if (ctx.cr6.lt) goto loc_823CF8C8;
	// lwz r10,96(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 96);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823cf8c8
	goto loc_823CF8C8;
loc_823CF8C4:
	// lwz r11,72(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 72);
loc_823CF8C8:
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 1);
	// mullw r20,r23,r28
	r20.s64 = int64_t(r23.s32) * int64_t(r28.s32);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// divw r11,r29,r20
	ctx.r11.u64 = uint32_t((r20.s32 && !(r29.s32 == INT32_MIN && r20.s32 == -1)) ? r29.s32 / r20.s32 : 0);
	// andc r9,r20,r10
	ctx.r9.u64 = r20.u64 & ~ctx.r10.u64;
	// twllei r20,0
	if (r20.s32 == 0 || r20.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823cf8f4
	if (!ctx.cr6.gt) goto loc_823CF8F4;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
loc_823CF8F4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823cf820
	if (!ctx.cr6.gt) goto loc_823CF820;
	// lwz r11,324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823cf920
	if (ctx.cr6.eq) goto loc_823CF920;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823CF920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823CF920:
	// addic r11,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	ctx.r11.s64 = r27.s64 + -1;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x823cf9d4
	if (!ctx.cr6.eq) goto loc_823CF9D4;
	// li r9,128
	ctx.r9.s64 = 128;
	// li r27,0
	r27.s64 = 0;
	// and r26,r8,r9
	r26.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823cfc74
	if (!ctx.cr6.gt) goto loc_823CFC74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r31,-1
	r29.s64 = r31.s64 + -1;
	// lfd f30,32424(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lfs f31,19036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19036);
	f31.f64 = double(temp.f32);
loc_823CF958:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823cf9c4
	if (!ctx.cr6.gt) goto loc_823CF9C4;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_823CF96C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fadd f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 + f30.f64;
	// bl 0x826a2f00
	ctx.lr = 0x823CF984;
	sub_826A2F00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x823cf9a4
	if (!ctx.cr6.gt) goto loc_823CF9A4;
	// li r11,127
	ctx.r11.s64 = 127;
	// b 0x823cf9b0
	goto loc_823CF9B0;
loc_823CF9A4:
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x823cf9b0
	if (!ctx.cr6.lt) goto loc_823CF9B0;
	// li r11,-128
	ctx.r11.s64 = -128;
loc_823CF9B0:
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stbu r11,1(r29)
	ea = 1 + r29.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r29.u32 = ea;
	// bne 0x823cf96c
	if (!ctx.cr0.eq) goto loc_823CF96C;
loc_823CF9C4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// blt cr6,0x823cf958
	if (ctx.cr6.lt) goto loc_823CF958;
	// b 0x823cfc74
	goto loc_823CFC74;
loc_823CF9D4:
	// lis r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// ori r7,r9,32768
	ctx.r7.u64 = ctx.r9.u64 | 32768;
	// and r24,r8,r7
	r24.u64 = ctx.r8.u64 & ctx.r7.u64;
	// bne cr6,0x823cfb2c
	if (!ctx.cr6.eq) goto loc_823CFB2C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823cfa8c
	if (ctx.cr6.eq) goto loc_823CFA8C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823cfc74
	if (!ctx.cr6.gt) goto loc_823CFC74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lfs f30,10520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	f30.f64 = double(temp.f32);
	// lfd f31,32424(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
loc_823CFA10:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lwzx r29,r26,r11
	r29.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// ble cr6,0x823cfa78
	if (!ctx.cr6.gt) goto loc_823CFA78;
	// rlwinm r27,r23,1,0,30
	r27.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r22
	r30.u64 = r22.u64;
	// subf r28,r27,r31
	r28.u64 = r31.u64 - r27.u64;
loc_823CFA2C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadd f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 + f31.f64;
	// bl 0x826a2f00
	ctx.lr = 0x823CFA3C;
	sub_826A2F00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823cfa5c
	if (!ctx.cr6.gt) goto loc_823CFA5C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823cfa68
	goto loc_823CFA68;
loc_823CFA5C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823cfa68
	if (!ctx.cr6.lt) goto loc_823CFA68;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_823CFA68:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// sthux r11,r28,r27
	ea = r28.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r28.u32 = ea;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823cfa2c
	if (!ctx.cr0.eq) goto loc_823CFA2C;
loc_823CFA78:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bne 0x823cfa10
	if (!ctx.cr0.eq) goto loc_823CFA10;
	// b 0x823cfc74
	goto loc_823CFC74;
loc_823CFA8C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823cfc74
	if (!ctx.cr6.gt) goto loc_823CFC74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lfs f30,10520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	f30.f64 = double(temp.f32);
	// lfd f31,32424(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
loc_823CFAAC:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// lwzx r29,r26,r11
	r29.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// ble cr6,0x823cfb18
	if (!ctx.cr6.gt) goto loc_823CFB18;
	// rlwinm r27,r23,1,0,30
	r27.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r22
	r30.u64 = r22.u64;
	// subf r28,r27,r31
	r28.u64 = r31.u64 - r27.u64;
loc_823CFAC8:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadd f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 + f31.f64;
	// bl 0x826a2f00
	ctx.lr = 0x823CFAD8;
	sub_826A2F00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823cfaf8
	if (!ctx.cr6.gt) goto loc_823CFAF8;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823cfb04
	goto loc_823CFB04;
loc_823CFAF8:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823cfb04
	if (!ctx.cr6.lt) goto loc_823CFB04;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_823CFB04:
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// sthux r11,r28,r27
	ea = r28.u32 + r27.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	r28.u32 = ea;
	// bne 0x823cfac8
	if (!ctx.cr0.eq) goto loc_823CFAC8;
loc_823CFB18:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// bne 0x823cfaac
	if (!ctx.cr0.eq) goto loc_823CFAAC;
	// b 0x823cfc74
	goto loc_823CFC74;
loc_823CFB2C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x823cfbd8
	if (ctx.cr6.eq) goto loc_823CFBD8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823cfc74
	if (!ctx.cr6.gt) goto loc_823CFC74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,10520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	f30.f64 = double(temp.f32);
	// lfd f31,32424(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
loc_823CFB50:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823cfbc8
	if (!ctx.cr6.gt) goto loc_823CFBC8;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_823CFB64:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadd f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 + f31.f64;
	// bl 0x826a2f00
	ctx.lr = 0x823CFB7C;
	sub_826A2F00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823cfb9c
	if (!ctx.cr6.gt) goto loc_823CFB9C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823cfba8
	goto loc_823CFBA8;
loc_823CFB9C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823cfba8
	if (!ctx.cr6.lt) goto loc_823CFBA8;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_823CFBA8:
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x823cfb64
	if (!ctx.cr0.eq) goto loc_823CFB64;
loc_823CFBC8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// blt cr6,0x823cfb50
	if (ctx.cr6.lt) goto loc_823CFB50;
	// b 0x823cfc74
	goto loc_823CFC74;
loc_823CFBD8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823cfc74
	if (!ctx.cr6.gt) goto loc_823CFC74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,10520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10520);
	f30.f64 = double(temp.f32);
	// lfd f31,32424(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
loc_823CFBF0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823cfc68
	if (!ctx.cr6.gt) goto loc_823CFC68;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_823CFC04:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// fadd f1,f13,f31
	ctx.f1.f64 = ctx.f13.f64 + f31.f64;
	// bl 0x826a2f00
	ctx.lr = 0x823CFC1C;
	sub_826A2F00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x823cfc3c
	if (!ctx.cr6.gt) goto loc_823CFC3C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x823cfc48
	goto loc_823CFC48;
loc_823CFC3C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x823cfc48
	if (!ctx.cr6.lt) goto loc_823CFC48;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_823CFC48:
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stbu r10,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	r31.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x823cfc04
	if (!ctx.cr0.eq) goto loc_823CFC04;
loc_823CFC68:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(r27.s32, r22.s32, ctx.xer);
	// blt cr6,0x823cfbf0
	if (ctx.cr6.lt) goto loc_823CFBF0;
loc_823CFC74:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x823e2c30
	ctx.lr = 0x823CFC80;
	sub_823E2C30(ctx, base);
	// ld r11,80(r21)
	ctx.r11.u64 = REX_LOAD_U64(r21.u32 + 80);
	// extsw r10,r22
	ctx.r10.s64 = r22.s32;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,80(r21)
	REX_STORE_U64(r21.u32 + 80, ctx.r11.u64);
	// beq cr6,0x823cfca0
	if (ctx.cr6.eq) goto loc_823CFCA0;
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 96);
	// stw r11,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r11.u32);
loc_823CFCA0:
	// mullw r3,r20,r22
	ctx.r3.s64 = int64_t(r20.s32) * int64_t(r22.s32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_823CFCB4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
loc_823CFCC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x826a1ce0
	return;
}

DEFINE_REX_FUNC(sub_823ECF40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,104
	ctx.r11.s64 = 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793964
	ctx.lr = 0x823ECF64;
	__imp__MmQueryStatistics(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r8,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r8.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EE5E0) {
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
	// rlwinm r11,r4,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xF0000000;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// bne cr6,0x823ee634
	if (!ctx.cr6.eq) goto loc_823EE634;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82793904
	ctx.lr = 0x823EE624;
	__imp__XexCheckExecutablePrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ee634
	if (!ctx.cr0.eq) goto loc_823EE634;
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x823ee684
	goto loc_823EE684;
loc_823EE634:
	// lis r4,11
	ctx.r4.s64 = 720896;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// ori r4,r4,7
	ctx.r4.u64 = ctx.r4.u64 | 7;
	// li r3,251
	ctx.r3.s64 = 251;
	// bl 0x827937c4
	ctx.lr = 0x823EE650;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823ee660
	if (!ctx.cr0.lt) goto loc_823EE660;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x823ee684
	goto loc_823EE684;
loc_823EE660:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x823ee680
	if (!ctx.cr6.eq) goto loc_823EE680;
	// bl 0x823f0058
	ctx.lr = 0x823EE66C;
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
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x823ee684
	goto loc_823EE684;
loc_823EE680:
	// li r3,997
	ctx.r3.s64 = 997;
loc_823EE684:
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

DEFINE_REX_FUNC(sub_823F04F8) {
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
	// bl 0x82793be4
	ctx.lr = 0x823F0508;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f051c
	if (!ctx.cr0.lt) goto loc_823F051C;
	// bl 0x823eff48
	ctx.lr = 0x823F0514;
	sub_823EFF48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f0520
	goto loc_823F0520;
loc_823F051C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823F0520:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F3150) {
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
	ctx.lr = 0x823F3158;
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r21,0
	r21.s64 = 0;
	// addi r10,r31,128
	ctx.r10.s64 = r31.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r21,80(r31)
	REX_STORE_U32(r31.u32 + 80, r21.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r4,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r4.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r5,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r5.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// stw r6,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r6.u32);
	// stw r7,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r7.u32);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_823F31A0:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x823f31a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F31A0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823f3214
	if (ctx.cr6.eq) goto loc_823F3214;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x823f31d8
	if (!ctx.cr6.eq) goto loc_823F31D8;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8269cc20
	ctx.lr = 0x823F31D4;
	sub_8269CC20(ctx, base);
	// lwz r5,324(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 324);
loc_823F31D8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823f3200
	goto loc_823F3200;
loc_823F3200:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x823f3210
	if (!ctx.cr6.lt) goto loc_823F3210;
loc_823F3208:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f3704
	goto loc_823F3704;
loc_823F3210:
	// lwz r6,332(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 332);
loc_823F3214:
	// lis r22,-32106
	r22.s64 = -2104098816;
	// lwz r11,13404(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 13404);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f3228
	if (ctx.cr0.eq) goto loc_823F3228;
	// ori r23,r23,128
	r23.u64 = r23.u64 | 128;
loc_823F3228:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3240
	if (!ctx.cr6.eq) goto loc_823F3240;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30800(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30800);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_823F3240:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3258
	if (!ctx.cr6.eq) goto loc_823F3258;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30796(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30796);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_823F3258:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3270
	if (!ctx.cr6.eq) goto loc_823F3270;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30788(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30788);
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_823F3270:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3288
	if (!ctx.cr6.eq) goto loc_823F3288;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r11,-30792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30792);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
loc_823F3288:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f32a0
	if (!ctx.cr6.eq) goto loc_823F32A0;
	// lis r11,32764
	ctx.r11.s64 = 2147221504;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
loc_823F32A0:
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f32b8
	if (ctx.cr6.eq) goto loc_823F32B8;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823f32c0
	if (!ctx.cr6.gt) goto loc_823F32C0;
loc_823F32B8:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
loc_823F32C0:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lis r30,1
	r30.s64 = 65536;
	// bne cr6,0x823f3318
	if (!ctx.cr6.eq) goto loc_823F3318;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
	// bne cr6,0x823f32e8
	if (!ctx.cr6.eq) goto loc_823F32E8;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r25,r10,65535
	r25.u64 = ctx.r10.u64 | 65535;
	// b 0x823f32f8
	goto loc_823F32F8;
loc_823F32E8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r25,r11,65535
	r25.u64 = ctx.r11.u64 | 65535;
loc_823F32F0:
	// add r11,r5,r25
	ctx.r11.u64 = ctx.r5.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
loc_823F32F8:
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,1432
	r24.s64 = 1432;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// bne 0x823f3350
	if (!ctx.cr0.eq) goto loc_823F3350;
	// beq cr6,0x823f3344
	if (ctx.cr6.eq) goto loc_823F3344;
	// oris r23,r23,32768
	r23.u64 = r23.u64 | 2147483648;
	// b 0x823f3354
	goto loc_823F3354;
loc_823F3318:
	// lis r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ori r25,r11,65535
	r25.u64 = ctx.r11.u64 | 65535;
	// add r11,r6,r25
	ctx.r11.u64 = ctx.r6.u64 + r25.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// bne cr6,0x823f32f0
	if (!ctx.cr6.eq) goto loc_823F32F0;
	// addis r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 1048576;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// b 0x823f32f8
	goto loc_823F32F8;
loc_823F3344:
	// li r24,1460
	r24.s64 = 1460;
	// li r20,-1
	r20.s64 = -1;
	// b 0x823f3354
	goto loc_823F3354;
loc_823F3350:
	// bne cr6,0x823f3208
	if (!ctx.cr6.eq) goto loc_823F3208;
loc_823F3354:
	// rlwinm. r11,r23,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f336c
	if (ctx.cr0.eq) goto loc_823F336C;
	// bl 0x82793a84
	ctx.lr = 0x823F3360;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r27,3
	r27.s64 = 3;
	// beq cr6,0x823f3370
	if (ctx.cr6.eq) goto loc_823F3370;
loc_823F336C:
	// mr r27,r21
	r27.u64 = r21.u64;
loc_823F3370:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// beq cr6,0x823f3478
	if (ctx.cr6.eq) goto loc_823F3478;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f33cc
	if (ctx.cr6.eq) goto loc_823F33CC;
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823f3208
	if (ctx.cr6.eq) goto loc_823F3208;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f3208
	if (ctx.cr6.eq) goto loc_823F3208;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f3208
	if (ctx.cr6.gt) goto loc_823F3208;
	// rlwinm. r9,r23,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823f3208
	if (!ctx.cr0.eq) goto loc_823F3208;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r29,84(r31)
	REX_STORE_U32(r31.u32 + 84, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r28,r10,r29
	r28.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x823F33C8;
	sub_826A2E60(ctx, base);
	// b 0x823f3468
	goto loc_823F3468;
loc_823F33CC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82793954
	ctx.lr = 0x823F33DC;
	__imp__NtQueryVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f3208
	if (ctx.cr0.lt) goto loc_823F3208;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, ctx.xer);
	// bne cr6,0x823f3208
	if (!ctx.cr6.eq) goto loc_823F3208;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// beq cr6,0x823f3208
	if (ctx.cr6.eq) goto loc_823F3208;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x823f3460
	if (!ctx.cr6.eq) goto loc_823F3460;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x823F3414;
	sub_826A2E60(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82793954
	ctx.lr = 0x823F3434;
	__imp__NtQueryVirtualMemory(ctx, base);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// blt 0x823f3468
	if (ctx.cr0.lt) goto loc_823F3468;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x823f3468
	if (!ctx.cr6.eq) goto loc_823F3468;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// b 0x823f3468
	goto loc_823F3468;
loc_823F3460:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_823F3468:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r26,1
	r26.s64 = 1;
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x823f34c4
	goto loc_823F34C4;
loc_823F3478:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f3208
	if (!ctx.cr6.eq) goto loc_823F3208;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82793b54
	ctx.lr = 0x823F349C;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f3208
	if (ctx.cr0.lt) goto loc_823F3208;
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f34b8
	if (!ctx.cr6.eq) goto loc_823F34B8;
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_823F34B8:
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_823F34C4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x823f3524
	if (!ctx.cr6.eq) goto loc_823F3524;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r31,332
	ctx.r4.s64 = r31.s64 + 332;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82793b54
	ctx.lr = 0x823F34EC;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f3518
	if (!ctx.cr0.lt) goto loc_823F3518;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823f3208
	if (!ctx.cr6.eq) goto loc_823F3208;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r31,324
	ctx.r4.s64 = r31.s64 + 324;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82793b64
	ctx.lr = 0x823F3514;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x823f3208
	goto loc_823F3208;
loc_823F3518:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
loc_823F3524:
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r11,r10,1439
	ctx.r11.s64 = ctx.r10.s64 + 1439;
	// addi r9,r24,128
	ctx.r9.s64 = r24.s64 + 128;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,76
	ctx.r10.s64 = ctx.r10.s64 + 76;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823F353C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823f353c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F353C;
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r21.u32);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// lwz r10,13404(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 13404);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f3584
	if (ctx.cr0.eq) goto loc_823F3584;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r9,r9,1548
	ctx.r9.s64 = ctx.r9.s64 + 1548;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,380(r10)
	REX_STORE_U32(ctx.r10.u32 + 380, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,380(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// addi r29,r10,1548
	r29.s64 = ctx.r10.s64 + 1548;
	// b 0x823f3588
	goto loc_823F3588;
loc_823F3584:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_823F3588:
	// addi r10,r9,15
	ctx.r10.s64 = ctx.r9.s64 + 15;
	// lis r9,-4353
	ctx.r9.s64 = -285278208;
	// rlwinm r30,r10,0,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r30,28,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFF;
	// ori r9,r9,61183
	ctx.r9.u64 = ctx.r9.u64 | 61183;
	// sth r8,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lis r12,24577
	ctx.r12.s64 = 1610678272;
	// ori r12,r12,125
	ctx.r12.u64 = ctx.r12.u64 | 125;
	// and r11,r23,r12
	ctx.r11.u64 = r23.u64 & ctx.r12.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stb r10,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r10.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r23,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, r23.u32);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// sth r25,368(r11)
	REX_STORE_U16(ctx.r11.u32 + 368, r25.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// sth r10,58(r11)
	REX_STORE_U16(ctx.r11.u32 + 58, ctx.r10.u16);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r21,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r21.u32);
	// bl 0x82793a84
	ctx.lr = 0x823F35F0;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r11,128
	ctx.r11.s64 = 128;
	// stb r3,379(r10)
	REX_STORE_U8(ctx.r10.u32 + 379, ctx.r3.u8);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r27,1424(r10)
	REX_STORE_U32(ctx.r10.u32 + 1424, r27.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
loc_823F3610:
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x823f3610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F3610;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(r20.s32, -1, ctx.xer);
	// addi r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 + 88;
	// stw r11,88(r10)
	REX_STORE_U32(ctx.r10.u32 + 88, ctx.r11.u32);
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
	// bne cr6,0x823f3644
	if (!ctx.cr6.eq) goto loc_823F3644;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r20,r29
	r20.u64 = r29.u64;
	// bl 0x82793894
	ctx.lr = 0x823F3644;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_823F3644:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,1408(r11)
	REX_STORE_U32(ctx.r11.u32 + 1408, r20.u32);
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// add r4,r30,r3
	ctx.r4.u64 = r30.u64 + ctx.r3.u64;
	// lwz r7,84(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 84);
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bl 0x823f2a40
	ctx.lr = 0x823F3670;
	sub_823F2A40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f3208
	if (ctx.cr0.eq) goto loc_823F3208;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm. r10,r23,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r21,56(r11)
	REX_STORE_U16(ctx.r11.u32 + 56, r21.u16);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 148);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 152);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r11,1412(r10)
	REX_STORE_U32(ctx.r10.u32 + 1412, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// li r10,31
	ctx.r10.s64 = 31;
	// li r9,-16
	ctx.r9.s64 = -16;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r9,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r9.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_823F3704:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_82412E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82412e9c
	if (!ctx.cr6.eq) goto loc_82412E9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20240);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82412ea4
	goto loc_82412EA4;
loc_82412E9C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,20204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20204);
	ctx.f13.f64 = double(temp.f32);
loc_82412EA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f12,20228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20228);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f11,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,20224(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20224);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f8,f8,f12,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,20232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20236(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20236);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f9
	ctx.f11.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwa r11,-28(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -28));
	// lwa r9,-12(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lwa r10,-20(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r11,-20(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8241BA48) {
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
	ctx.lr = 0x8241BA50;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8241ba84
	goto loc_8241BA84;
loc_8241BA6C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x8241BA78;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241ba8c
	if (ctx.cr0.eq) goto loc_8241BA8C;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_8241BA84:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8241ba6c
	if (!ctx.cr0.eq) goto loc_8241BA6C;
loc_8241BA8C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241baa8
	if (ctx.cr0.eq) goto loc_8241BAA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a08a0
	ctx.lr = 0x8241BAA4;
	sub_826A08A0(ctx, base);
	// b 0x8241baac
	goto loc_8241BAAC;
loc_8241BAA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8241BAAC:
	// clrlwi r27,r3,24
	r27.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r27,15
	ctx.cr6.compare<uint32_t>(r27.u32, 15, ctx.xer);
	// ble cr6,0x8241bad4
	if (!ctx.cr6.gt) goto loc_8241BAD4;
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r28,0(r26)
	REX_STORE_U8(r26.u32 + 0, r28.u8);
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
loc_8241BAC4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8241BACC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
loc_8241BAD4:
	// subf. r29,r30,r31
	r29.u64 = r31.u64 - r30.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8241bac4
	if (ctx.cr0.eq) goto loc_8241BAC4;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(r29.u32, 20, ctx.xer);
	// bgt cr6,0x8241bac4
	if (ctx.cr6.gt) goto loc_8241BAC4;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// b 0x8241bafc
	goto loc_8241BAFC;
loc_8241BAEC:
	// bl 0x826a0820
	ctx.lr = 0x8241BAF0;
	sub_826A0820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241bb04
	if (ctx.cr0.eq) goto loc_8241BB04;
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
loc_8241BAFC:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8241baec
	if (!ctx.cr0.eq) goto loc_8241BAEC;
loc_8241BB04:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8241bac4
	if (!ctx.cr0.eq) goto loc_8241BAC4;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8241bb58
	if (ctx.cr0.eq) goto loc_8241BB58;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r30,r30,r11
	r30.u64 = ctx.r11.u64 - r30.u64;
loc_8241BB28:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a0800
	ctx.lr = 0x8241BB34;
	sub_826A0800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241bb58
	if (ctx.cr0.eq) goto loc_8241BB58;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x826a2bb8
	ctx.lr = 0x8241BB48;
	sub_826A2BB8(ctx, base);
	// stbx r3,r30,r31
	REX_STORE_U8(r30.u32 + r31.u32, ctx.r3.u8);
	// lbzu r11,1(r31)
	ea = 1 + r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r31.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8241bb28
	if (!ctx.cr0.eq) goto loc_8241BB28;
loc_8241BB58:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29184
	ctx.r10.s64 = ctx.r10.s64 + -29184;
	// stbx r28,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, r28.u8);
loc_8241BB6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bb90
	if (ctx.cr0.eq) goto loc_8241BB90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bb6c
	if (ctx.cr6.eq) goto loc_8241BB6C;
loc_8241BB90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bba0
	if (!ctx.cr0.eq) goto loc_8241BBA0;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BBA0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29196
	ctx.r10.s64 = ctx.r10.s64 + -29196;
loc_8241BBAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bbd0
	if (ctx.cr0.eq) goto loc_8241BBD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bbac
	if (ctx.cr6.eq) goto loc_8241BBAC;
loc_8241BBD0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bbe0
	if (!ctx.cr0.eq) goto loc_8241BBE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BBE0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29212
	ctx.r10.s64 = ctx.r10.s64 + -29212;
loc_8241BBEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bc10
	if (ctx.cr0.eq) goto loc_8241BC10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bbec
	if (ctx.cr6.eq) goto loc_8241BBEC;
loc_8241BC10:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bc20
	if (!ctx.cr0.eq) goto loc_8241BC20;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BC20:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,12520
	ctx.r10.s64 = ctx.r10.s64 + 12520;
loc_8241BC2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bc50
	if (ctx.cr0.eq) goto loc_8241BC50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bc2c
	if (ctx.cr6.eq) goto loc_8241BC2C;
loc_8241BC50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bc60
	if (!ctx.cr0.eq) goto loc_8241BC60;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BC60:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29220
	ctx.r10.s64 = ctx.r10.s64 + -29220;
loc_8241BC6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bc90
	if (ctx.cr0.eq) goto loc_8241BC90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bc6c
	if (ctx.cr6.eq) goto loc_8241BC6C;
loc_8241BC90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bca0
	if (!ctx.cr0.eq) goto loc_8241BCA0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BCA0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29232
	ctx.r10.s64 = ctx.r10.s64 + -29232;
loc_8241BCAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bcd0
	if (ctx.cr0.eq) goto loc_8241BCD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bcac
	if (ctx.cr6.eq) goto loc_8241BCAC;
loc_8241BCD0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bce0
	if (!ctx.cr0.eq) goto loc_8241BCE0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BCE0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29240
	ctx.r10.s64 = ctx.r10.s64 + -29240;
loc_8241BCEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bd10
	if (ctx.cr0.eq) goto loc_8241BD10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bcec
	if (ctx.cr6.eq) goto loc_8241BCEC;
loc_8241BD10:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bd20
	if (!ctx.cr0.eq) goto loc_8241BD20;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BD20:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29252
	ctx.r10.s64 = ctx.r10.s64 + -29252;
loc_8241BD2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bd50
	if (ctx.cr0.eq) goto loc_8241BD50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bd2c
	if (ctx.cr6.eq) goto loc_8241BD2C;
loc_8241BD50:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bd60
	if (!ctx.cr0.eq) goto loc_8241BD60;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BD60:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29264
	ctx.r10.s64 = ctx.r10.s64 + -29264;
loc_8241BD6C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bd90
	if (ctx.cr0.eq) goto loc_8241BD90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bd6c
	if (ctx.cr6.eq) goto loc_8241BD6C;
loc_8241BD90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bda0
	if (!ctx.cr0.eq) goto loc_8241BDA0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BDA0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29276
	ctx.r10.s64 = ctx.r10.s64 + -29276;
loc_8241BDAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bdd0
	if (ctx.cr0.eq) goto loc_8241BDD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bdac
	if (ctx.cr6.eq) goto loc_8241BDAC;
loc_8241BDD0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bde0
	if (!ctx.cr0.eq) goto loc_8241BDE0;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BDE0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29284
	ctx.r10.s64 = ctx.r10.s64 + -29284;
loc_8241BDEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241be10
	if (ctx.cr0.eq) goto loc_8241BE10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bdec
	if (ctx.cr6.eq) goto loc_8241BDEC;
loc_8241BE10:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8241bfd4
	if (ctx.cr0.eq) goto loc_8241BFD4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29288
	ctx.r10.s64 = ctx.r10.s64 + -29288;
loc_8241BE24:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241be48
	if (ctx.cr0.eq) goto loc_8241BE48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241be24
	if (ctx.cr6.eq) goto loc_8241BE24;
loc_8241BE48:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241be58
	if (!ctx.cr0.eq) goto loc_8241BE58;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BE58:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29296
	ctx.r10.s64 = ctx.r10.s64 + -29296;
loc_8241BE64:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241be88
	if (ctx.cr0.eq) goto loc_8241BE88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241be64
	if (ctx.cr6.eq) goto loc_8241BE64;
loc_8241BE88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241be98
	if (!ctx.cr0.eq) goto loc_8241BE98;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BE98:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29304
	ctx.r10.s64 = ctx.r10.s64 + -29304;
loc_8241BEA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bec8
	if (ctx.cr0.eq) goto loc_8241BEC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bea4
	if (ctx.cr6.eq) goto loc_8241BEA4;
loc_8241BEC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bed8
	if (!ctx.cr0.eq) goto loc_8241BED8;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BED8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29312
	ctx.r10.s64 = ctx.r10.s64 + -29312;
loc_8241BEE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bf08
	if (ctx.cr0.eq) goto loc_8241BF08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bee4
	if (ctx.cr6.eq) goto loc_8241BEE4;
loc_8241BF08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bf18
	if (!ctx.cr0.eq) goto loc_8241BF18;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BF18:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29320
	ctx.r10.s64 = ctx.r10.s64 + -29320;
loc_8241BF24:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bf48
	if (ctx.cr0.eq) goto loc_8241BF48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bf24
	if (ctx.cr6.eq) goto loc_8241BF24;
loc_8241BF48:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bf58
	if (!ctx.cr0.eq) goto loc_8241BF58;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8241bfd8
	goto loc_8241BFD8;
loc_8241BF58:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29328
	ctx.r10.s64 = ctx.r10.s64 + -29328;
loc_8241BF64:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bf88
	if (ctx.cr0.eq) goto loc_8241BF88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bf64
	if (ctx.cr6.eq) goto loc_8241BF64;
loc_8241BF88:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bf98
	if (!ctx.cr0.eq) goto loc_8241BF98;
	// mr r27,r28
	r27.u64 = r28.u64;
	// b 0x8241bfd4
	goto loc_8241BFD4;
loc_8241BF98:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,-29340
	ctx.r10.s64 = ctx.r10.s64 + -29340;
loc_8241BFA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8241bfc8
	if (ctx.cr0.eq) goto loc_8241BFC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8241bfa4
	if (ctx.cr6.eq) goto loc_8241BFA4;
loc_8241BFC8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8241bac4
	if (!ctx.cr0.eq) goto loc_8241BAC4;
	// li r27,1
	r27.s64 = 1;
loc_8241BFD4:
	// li r11,10
	ctx.r11.s64 = 10;
loc_8241BFD8:
	// stb r11,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r11.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r27,0(r25)
	REX_STORE_U8(r25.u32 + 0, r27.u8);
	// b 0x8241bacc
	goto loc_8241BACC;
}

DEFINE_REX_FUNC(sub_824499E8) {
	REX_FUNC_PROLOGUE();
	// b 0x824498f8
	sub_824498F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82449A10) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82449a3c
	if (ctx.cr6.eq) goto loc_82449A3C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82449a34
	if (ctx.cr6.eq) goto loc_82449A34;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82449af4
	if (!ctx.cr6.eq) goto loc_82449AF4;
loc_82449A34:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x82449ac0
	if (!ctx.cr6.eq) goto loc_82449AC0;
loc_82449A3C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,1812
	ctx.r10.s64 = ctx.r10.s64 + 1812;
loc_82449A48:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82449a6c
	if (ctx.cr0.eq) goto loc_82449A6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82449a48
	if (ctx.cr6.eq) goto loc_82449A48;
loc_82449A6C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82449b1c
	if (ctx.cr0.eq) goto loc_82449B1C;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,-16604
	ctx.r10.s64 = ctx.r10.s64 + -16604;
loc_82449A80:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x82449aa4
	if (ctx.cr0.eq) goto loc_82449AA4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82449a80
	if (ctx.cr6.eq) goto loc_82449A80;
loc_82449AA4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82449b1c
	if (ctx.cr0.eq) goto loc_82449B1C;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82449b10
	if (!ctx.cr6.eq) goto loc_82449B10;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82449b10
	goto loc_82449B10;
loc_82449AC0:
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82449b10
	if (!ctx.cr6.eq) goto loc_82449B10;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x82449aec
	if (!ctx.cr6.eq) goto loc_82449AEC;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82449AEC:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82449b10
	if (ctx.cr6.eq) goto loc_82449B10;
loc_82449AF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82449AFC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82449af4
	if (ctx.cr6.lt) goto loc_82449AF4;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82449af4
	if (ctx.cr6.gt) goto loc_82449AF4;
loc_82449B10:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82449afc
	if (!ctx.cr0.eq) goto loc_82449AFC;
loc_82449B1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82454C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82454C38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82454c58
	if (!ctx.cr6.eq) goto loc_82454C58;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82454da8
	goto loc_82454DA8;
loc_82454C58:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82454c70
	if (!ctx.cr6.eq) goto loc_82454C70;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82454da8
	goto loc_82454DA8;
loc_82454C70:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82454C88:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82454cec
	if (!ctx.cr6.eq) goto loc_82454CEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82454cec
	if (!ctx.cr6.eq) goto loc_82454CEC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82454cec
	if (!ctx.cr6.eq) goto loc_82454CEC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82454d94
	if (ctx.cr6.eq) goto loc_82454D94;
loc_82454CEC:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// oris r9,r10,45056
	ctx.r9.u64 = ctx.r10.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82454d50
	if (ctx.cr6.lt) goto loc_82454D50;
	// beq cr6,0x82454d48
	if (ctx.cr6.eq) goto loc_82454D48;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82454d40
	if (ctx.cr6.lt) goto loc_82454D40;
	// bne cr6,0x82454d50
	if (!ctx.cr6.eq) goto loc_82454D50;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x82454d4c
	goto loc_82454D4C;
loc_82454D40:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x82454d4c
	goto loc_82454D4C;
loc_82454D48:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_82454D4C:
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82454D50:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82454d64
	if (!ctx.cr6.eq) goto loc_82454D64;
	// oris r11,r9,3328
	ctx.r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82454D64:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r4,r10,r29
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82454D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82454da8
	if (ctx.cr0.lt) goto loc_82454DA8;
loc_82454D94:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// blt cr6,0x82454c88
	if (ctx.cr6.lt) goto loc_82454C88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82472e28
	ctx.lr = 0x82454DA8;
	sub_82472E28(ctx, base);
loc_82454DA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8245EC80) {
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
	// addi r5,r11,18820
	ctx.r5.s64 = ctx.r11.s64 + 18820;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245ECAC;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824739c0
	ctx.lr = 0x8245ECB4;
	sub_824739C0(ctx, base);
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

DEFINE_REX_FUNC(sub_82462498) {
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
	ctx.lr = 0x824624A0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,21784
	r29.s64 = ctx.r11.s64 + 21784;
	// li r26,0
	r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,1
	r28.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-96
	ctx.r5.s64 = r29.s64 + -96;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// clrlwi r31,r10,12
	r31.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462504;
	sub_8245F158(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82462538
	if (!ctx.cr6.eq) goto loc_82462538;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
	// bl 0x8245f158
	ctx.lr = 0x82462538;
	sub_8245F158(ctx, base);
loc_82462538:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8246262c
	if (!ctx.cr6.eq) goto loc_8246262C;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824625cc
	if (ctx.cr6.eq) goto loc_824625CC;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfd f0,-3744(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
loc_8246255C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x824625e8
	if (!ctx.cr6.eq) goto loc_824625E8;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x824625e8
	if (ctx.cr0.eq) goto loc_824625E8;
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x824625e8
	if (!ctx.cr6.eq) goto loc_824625E8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x824625e8
	if (!ctx.cr6.eq) goto loc_824625E8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// blt cr6,0x8246255c
	if (ctx.cr6.lt) goto loc_8246255C;
loc_824625CC:
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// beq cr6,0x824625f0
	if (ctx.cr6.eq) goto loc_824625F0;
	// li r9,1847
	ctx.r9.s64 = 1847;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824625f8
	goto loc_824625F8;
loc_824625E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246262c
	goto loc_8246262C;
loc_824625F0:
	// li r9,231
	ctx.r9.s64 = 231;
	// rlwimi r10,r9,23,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_824625F8:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82462628
	if (ctx.cr6.eq) goto loc_82462628;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8246260C:
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8246260c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246260C;
loc_82462628:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8246262C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8246DCD8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r11,352(r3)
	REX_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lis r5,14
	ctx.r5.s64 = 917504;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8246d648
	ctx.lr = 0x8246DD14;
	sub_8246D648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8246dd24
	if (ctx.cr0.lt) goto loc_8246DD24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82461818
	ctx.lr = 0x8246DD24;
	sub_82461818(ctx, base);
loc_8246DD24:
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

DEFINE_REX_FUNC(sub_824716D8) {
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
	// bl 0x8246e840
	ctx.lr = 0x824716E8;
	sub_8246E840(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82471F30) {
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
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824715b8
	ctx.lr = 0x82471F4C;
	sub_824715B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82471f84
	if (ctx.cr0.lt) goto loc_82471F84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82471F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82471f84
	if (ctx.cr0.lt) goto loc_82471F84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82468dd8
	ctx.lr = 0x82471F78;
	sub_82468DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82471f84
	if (ctx.cr0.lt) goto loc_82471F84;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82471F84:
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

DEFINE_REX_FUNC(sub_82473650) {
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
	ctx.lr = 0x82473658;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r30,0
	r30.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r30
	r26.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r29,r11,12
	r29.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x824736dc
	if (ctx.cr0.eq) goto loc_824736DC;
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82473680:
	// lwz r8,260(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,16(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + ctx.r11.u64;
	// add r7,r31,r11
	ctx.r7.u64 = r31.u64 + ctx.r11.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// bl 0x82471828
	ctx.lr = 0x824736C0;
	sub_82471828(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x824736e0
	if (ctx.cr0.lt) goto loc_824736E0;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// blt cr6,0x82473680
	if (ctx.cr6.lt) goto loc_82473680;
loc_824736DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824736E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824757C8) {
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
	// addi r11,r11,29608
	ctx.r11.s64 = ctx.r11.s64 + 29608;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x824691d0
	ctx.lr = 0x824757F4;
	sub_824691D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82475808
	if (ctx.cr0.eq) goto loc_82475808;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82475808;
	sub_823F0350(ctx, base);
loc_82475808:
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

DEFINE_REX_FUNC(sub_82477A88) {
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
	ctx.lr = 0x82477AA0;
	sub_82448598(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82444608
	ctx.lr = 0x82477AB0;
	sub_82444608(ctx, base);
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

DEFINE_REX_FUNC(sub_824786B8) {
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
	ctx.lr = 0x824786C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x823f02b8
	ctx.lr = 0x824786E4;
	sub_823F02B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824786f8
	if (ctx.cr0.eq) goto loc_824786F8;
	// bl 0x82130e88
	ctx.lr = 0x824786F0;
	sub_82130E88(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x824786fc
	goto loc_824786FC;
loc_824786F8:
	// li r31,0
	r31.s64 = 0;
loc_824786FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8247870c
	if (!ctx.cr6.eq) goto loc_8247870C;
loc_82478704:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82478750
	goto loc_82478750;
loc_8247870C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824c54e8
	ctx.lr = 0x82478724;
	sub_824C54E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82478744
	if (!ctx.cr0.lt) goto loc_82478744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82130e88
	ctx.lr = 0x82478734;
	sub_82130E88(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82478740;
	sub_823F0350(ctx, base);
	// b 0x82478704
	goto loc_82478704;
loc_82478744:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82478358
	ctx.lr = 0x82478750;
	sub_82478358(ctx, base);
loc_82478750:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8247B348) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8247B350;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8247b2b8
	ctx.lr = 0x8247B364;
	sub_8247B2B8(ctx, base);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8247b41c
	if (!ctx.cr6.gt) goto loc_8247B41C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r3,1
	ctx.r3.s64 = 65536;
loc_8247B37C:
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8247b408
	if (!ctx.cr6.eq) goto loc_8247B408;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8247b408
	if (!ctx.cr6.gt) goto loc_8247B408;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8247B3A4:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r30,24(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r29,56(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, ctx.xer);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// bne cr6,0x8247b3dc
	if (!ctx.cr6.eq) goto loc_8247B3DC;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247b3f4
	if (ctx.cr6.eq) goto loc_8247B3F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// b 0x8247b3f0
	goto loc_8247B3F0;
loc_8247B3DC:
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8247b3f4
	if (!ctx.cr6.eq) goto loc_8247B3F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8247B3F0:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8247B3F4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8247b3a4
	if (ctx.cr6.lt) goto loc_8247B3A4;
loc_8247B408:
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8247b37c
	if (ctx.cr6.lt) goto loc_8247B37C;
loc_8247B41C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82485898) {
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
	ctx.lr = 0x824858A0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82481098
	ctx.lr = 0x824858AC;
	sub_82481098(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8248592c
	if (!ctx.cr6.gt) goto loc_8248592C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_824858C0:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lwzx r8,r5,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r5,r9,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82485900
	if (ctx.cr0.eq) goto loc_82485900;
	// rlwinm. r9,r9,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82485900
	if (!ctx.cr0.eq) goto loc_82485900;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82485900:
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82485918
	if (ctx.cr0.eq) goto loc_82485918;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82485918:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824858c0
	if (ctx.cr6.lt) goto loc_824858C0;
loc_8248592C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485c20
	if (!ctx.cr6.gt) goto loc_82485C20;
	// li r27,0
	r27.s64 = 0;
loc_82485940:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// lwzx r8,r27,r11
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82485c0c
	if (ctx.cr0.eq) goto loc_82485C0C;
	// lis r9,20496
	ctx.r9.s64 = 1343225856;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82485bc4
	if (ctx.cr6.eq) goto loc_82485BC4;
	// lis r9,4352
	ctx.r9.s64 = 285212672;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82485bc4
	if (ctx.cr6.eq) goto loc_82485BC4;
	// lis r9,4384
	ctx.r9.s64 = 287309824;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82485bc4
	if (ctx.cr6.eq) goto loc_82485BC4;
	// rlwinm r10,r10,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82485bc4
	if (ctx.cr6.eq) goto loc_82485BC4;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485b78
	if (ctx.cr6.eq) goto loc_82485B78;
	// lis r10,4368
	ctx.r10.s64 = 286261248;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485b78
	if (ctx.cr6.eq) goto loc_82485B78;
	// lis r10,4416
	ctx.r10.s64 = 289406976;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82485b78
	if (ctx.cr6.eq) goto loc_82485B78;
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82485a38
	if (ctx.cr6.eq) goto loc_82485A38;
	// li r7,0
	ctx.r7.s64 = 0;
loc_824859C0:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
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
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82485a24
	if (ctx.cr0.eq) goto loc_82485A24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x824796e8
	ctx.lr = 0x824859FC;
	sub_824796E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82485a24
	if (ctx.cr0.eq) goto loc_82485A24;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82485A24:
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x824859c0
	if (ctx.cr6.lt) goto loc_824859C0;
loc_82485A38:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485af0
	if (ctx.cr6.lt) goto loc_82485AF0;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82485af0
	if (ctx.cr6.gt) goto loc_82485AF0;
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// divwu r28,r10,r11
	r28.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82485c0c
	if (ctx.cr6.eq) goto loc_82485C0C;
	// li r29,0
	r29.s64 = 0;
loc_82485A78:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82485ad8
	if (ctx.cr6.eq) goto loc_82485AD8;
	// lwz r31,8(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_82485A88:
	// mullw r11,r6,r7
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x824796e8
	ctx.lr = 0x82485AA0;
	sub_824796E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82485ab8
	if (!ctx.cr0.eq) goto loc_82485AB8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, ctx.xer);
	// blt cr6,0x82485a88
	if (ctx.cr6.lt) goto loc_82485A88;
	// b 0x82485ad8
	goto loc_82485AD8;
loc_82485AB8:
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82485AD8:
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82485a78
	if (ctx.cr6.lt) goto loc_82485A78;
	// b 0x82485c0c
	goto loc_82485C0C;
loc_82485AF0:
	// lwz r29,4(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82485c0c
	if (ctx.cr6.eq) goto loc_82485C0C;
	// lwz r31,8(r8)
	r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
loc_82485B08:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwzx r4,r7,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// bl 0x824796e8
	ctx.lr = 0x82485B14;
	sub_824796E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82485b30
	if (!ctx.cr0.eq) goto loc_82485B30;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r29.u32, ctx.xer);
	// blt cr6,0x82485b08
	if (ctx.cr6.lt) goto loc_82485B08;
	// b 0x82485c0c
	goto loc_82485C0C;
loc_82485B30:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82485c0c
	if (ctx.cr6.eq) goto loc_82485C0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82485B40:
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485b40
	if (ctx.cr6.lt) goto loc_82485B40;
	// b 0x82485c0c
	goto loc_82485C0C;
loc_82485B78:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485c0c
	if (!ctx.cr6.gt) goto loc_82485C0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82485B8C:
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485b8c
	if (ctx.cr6.lt) goto loc_82485B8C;
	// b 0x82485c0c
	goto loc_82485C0C;
loc_82485BC4:
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485c0c
	if (!ctx.cr6.gt) goto loc_82485C0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82485BD8:
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 | 32;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82485bd8
	if (ctx.cr6.lt) goto loc_82485BD8;
loc_82485C0C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82485940
	if (ctx.cr6.lt) goto loc_82485940;
loc_82485C20:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82485c78
	if (!ctx.cr6.gt) goto loc_82485C78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82485C34:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82485c64
	if (ctx.cr0.eq) goto loc_82485C64;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82485C64:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82485c34
	if (ctx.cr6.lt) goto loc_82485C34;
loc_82485C78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_824AC6D0) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x824AC6D8;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824ac748
	if (!ctx.cr6.gt) goto loc_824AC748;
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_824AC710:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x824ac738
	if (!ctx.cr6.eq) goto loc_824AC738;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824ac738
	if (ctx.cr6.eq) goto loc_824AC738;
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r23.u32, ctx.xer);
	// blt cr6,0x824ac738
	if (ctx.cr6.lt) goto loc_824AC738;
	// addi r23,r10,1
	r23.s64 = ctx.r10.s64 + 1;
loc_824AC738:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824ac710
	if (ctx.cr6.lt) goto loc_824AC710;
loc_824AC748:
	// lwz r21,552(r30)
	r21.u64 = REX_LOAD_U32(r30.u32 + 552);
	// lwz r25,76(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(r25.u32, r21.u32, ctx.xer);
	// bge cr6,0x824acce0
	if (!ctx.cr6.lt) goto loc_824ACCE0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r22,r25,2,0,29
	r22.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r24,1
	r24.s64 = 1;
	// lfd f29,32424(r11)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// lfd f30,4296(r10)
	f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 4296);
	// lfd f31,-3744(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
loc_824AC778:
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// lwzx r27,r11,r22
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + r22.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824accd0
	if (ctx.cr6.eq) goto loc_824ACCD0;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824accd0
	if (ctx.cr6.eq) goto loc_824ACCD0;
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// lis r9,28688
	ctx.r9.s64 = 1880096768;
	// clrlwi r26,r11,12
	r26.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824ac944
	if (!ctx.cr6.eq) goto loc_824AC944;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824ac944
	if (ctx.cr0.eq) goto loc_824AC944;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,22,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824ac944
	if (ctx.cr0.eq) goto loc_824AC944;
	// rlwinm r8,r26,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824ac944
	if (ctx.cr0.eq) goto loc_824AC944;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AC830;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824ac844
	if (ctx.cr0.eq) goto loc_824AC844;
	// bl 0x824773d0
	ctx.lr = 0x824AC83C;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824ac848
	goto loc_824AC848;
loc_824AC844:
	// li r29,0
	r29.s64 = 0;
loc_824AC848:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r24,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477b60
	ctx.lr = 0x824AC86C;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477420
	ctx.lr = 0x824AC880;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824ac904
	if (ctx.cr6.eq) goto loc_824AC904;
	// li r31,0
	r31.s64 = 0;
loc_824AC898:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82478758
	ctx.lr = 0x824AC8D4;
	sub_82478758(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// blt cr6,0x824ac898
	if (ctx.cr6.lt) goto loc_824AC898;
loc_824AC904:
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824acd78
	if (!ctx.cr6.lt) goto loc_824ACD78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824785e8
	ctx.lr = 0x824AC920;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r30)
	REX_STORE_U32(r30.u32 + 552, ctx.r11.u32);
loc_824AC944:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824acc58
	if (!ctx.cr6.eq) goto loc_824ACC58;
	// lwz r7,200(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 200);
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x824acc58
	if (ctx.cr6.eq) goto loc_824ACC58;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// cmplwi cr6,r26,1
	ctx.cr6.compare<uint32_t>(r26.u32, 1, ctx.xer);
	// ble cr6,0x824ac99c
	if (!ctx.cr6.gt) goto loc_824AC99C;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_824AC980:
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x824acd2c
	if (!ctx.cr6.eq) goto loc_824ACD2C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, ctx.xer);
	// blt cr6,0x824ac980
	if (ctx.cr6.lt) goto loc_824AC980;
loc_824AC99C:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824AC9A4;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824ac9b8
	if (ctx.cr0.eq) goto loc_824AC9B8;
	// bl 0x824773d0
	ctx.lr = 0x824AC9B0;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824ac9bc
	goto loc_824AC9BC;
loc_824AC9B8:
	// li r29,0
	r29.s64 = 0;
loc_824AC9BC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824785e8
	ctx.lr = 0x824AC9D0;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// blt 0x824acd54
	if (ctx.cr0.lt) goto loc_824ACD54;
	// lis r4,28720
	ctx.r4.s64 = 1882193920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82477b60
	ctx.lr = 0x824AC9F4;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477420
	ctx.lr = 0x824ACA08;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 120);
	// bl 0x82478758
	ctx.lr = 0x824ACA38;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 120);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x82478758
	ctx.lr = 0x824ACA58;
	sub_82478758(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82478758
	ctx.lr = 0x824ACA94;
	sub_82478758(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824acb08
	if (ctx.cr6.eq) goto loc_824ACB08;
	// rlwinm r8,r26,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_824ACAC8:
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stwx r7,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwzx r4,r7,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stwx r5,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,8(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 8);
	// stwx r4,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r4.u32);
	// bdnz 0x824acac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ACAC8;
loc_824ACB08:
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824acd78
	if (!ctx.cr6.lt) goto loc_824ACD78;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r30)
	REX_STORE_U32(r30.u32 + 552, ctx.r11.u32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824ACB4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824acc48
	if (ctx.cr0.eq) goto loc_824ACC48;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824ACB5C;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824acb70
	if (ctx.cr0.eq) goto loc_824ACB70;
	// bl 0x824773d0
	ctx.lr = 0x824ACB68;
	sub_824773D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x824acb74
	goto loc_824ACB74;
loc_824ACB70:
	// li r28,0
	r28.s64 = 0;
loc_824ACB74:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824785e8
	ctx.lr = 0x824ACB80;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// blt 0x824acd60
	if (ctx.cr0.lt) goto loc_824ACD60;
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// lis r4,8256
	ctx.r4.s64 = 541065216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477b60
	ctx.lr = 0x824ACBAC;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82477420
	ctx.lr = 0x824ACBC0;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 136);
	// bl 0x82478758
	ctx.lr = 0x824ACC00;
	sub_82478758(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lis r10,8272
	ctx.r10.s64 = 542113792;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824acd78
	if (!ctx.cr6.lt) goto loc_824ACD78;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r30)
	REX_STORE_U32(r30.u32 + 552, ctx.r11.u32);
loc_824ACC48:
	// li r11,1807
	ctx.r11.s64 = 1807;
	// stw r24,1104(r30)
	REX_STORE_U32(r30.u32 + 1104, r24.u32);
	// rlwimi r26,r11,20,0,11
	r26.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (r26.u64 & 0xFFFFFFFF000FFFFF);
	// stw r26,0(r27)
	REX_STORE_U32(r27.u32 + 0, r26.u32);
loc_824ACC58:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824ACC60;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824acc74
	if (ctx.cr0.eq) goto loc_824ACC74;
	// bl 0x824773d0
	ctx.lr = 0x824ACC6C;
	sub_824773D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x824acc78
	goto loc_824ACC78;
loc_824ACC74:
	// li r29,0
	r29.s64 = 0;
loc_824ACC78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824acd78
	if (ctx.cr6.eq) goto loc_824ACD78;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82477e80
	ctx.lr = 0x824ACC8C;
	sub_82477E80(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x824acd78
	if (!ctx.cr6.lt) goto loc_824ACD78;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824785e8
	ctx.lr = 0x824ACCAC;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x824acd14
	if (ctx.cr0.lt) goto loc_824ACD14;
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,552(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,552(r30)
	REX_STORE_U32(r30.u32 + 552, ctx.r11.u32);
loc_824ACCD0:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r25,r21
	ctx.cr6.compare<uint32_t>(r25.u32, r21.u32, ctx.xer);
	// blt cr6,0x824ac778
	if (ctx.cr6.lt) goto loc_824AC778;
loc_824ACCE0:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bge cr6,0x824acd10
	if (!ctx.cr6.lt) goto loc_824ACD10;
	// subf r10,r11,r21
	ctx.r10.u64 = r21.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824ACCF8:
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 564);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x824accf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824ACCF8;
loc_824ACD10:
	// li r31,0
	r31.s64 = 0;
loc_824ACD14:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
loc_824ACD2C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,60(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 60);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// addi r6,r11,-404
	ctx.r6.s64 = ctx.r11.s64 + -404;
	// li r5,4554
	ctx.r5.s64 = 4554;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489c30
	ctx.lr = 0x824ACD48;
	sub_82489C30(ctx, base);
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
	// b 0x824acd14
	goto loc_824ACD14;
loc_824ACD54:
	// bl 0x82130e88
	ctx.lr = 0x824ACD58;
	sub_82130E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x824acd70
	goto loc_824ACD70;
loc_824ACD60:
	// beq cr6,0x824acd14
	if (ctx.cr6.eq) goto loc_824ACD14;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82130e88
	ctx.lr = 0x824ACD6C;
	sub_82130E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_824ACD70:
	// bl 0x82477b20
	ctx.lr = 0x824ACD74;
	sub_82477B20(ctx, base);
	// b 0x824acd14
	goto loc_824ACD14;
loc_824ACD78:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x824acd14
	goto loc_824ACD14;
}

DEFINE_REX_FUNC(sub_824D46A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// addi r11,r4,28
	ctx.r11.s64 = ctx.r4.s64 + 28;
	// lfs f0,3716(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f0,-8(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
loc_824D46D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824d46f8
	if (!ctx.cr6.eq) goto loc_824D46F8;
	// fsubs f12,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_824D46F8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x824d46d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D46D8;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v1,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D7FA8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D7FE8) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,124(r3)
	REX_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D82C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824D82D0;
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
	// ble cr6,0x824d834c
	if (!ctx.cr6.gt) goto loc_824D834C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x824d82f8
	if (!ctx.cr6.lt) goto loc_824D82F8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_824D82F8:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824e5af8
	ctx.lr = 0x824D8304;
	sub_824E5AF8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x824d831c
	if (!ctx.cr0.eq) goto loc_824D831C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x824d834c
	goto loc_824D834C;
loc_824D831C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824d8348
	if (ctx.cr6.eq) goto loc_824D8348;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x824D833C;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824e5b08
	ctx.lr = 0x824D8348;
	sub_824E5B08(ctx, base);
loc_824D8348:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
loc_824D834C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824DB028) {
	REX_FUNC_PROLOGUE();
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x824db084
	goto loc_824DB084;
loc_824DB044:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,16,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r10,58368
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 58368, ctx.xer);
	// bne cr6,0x824db06c
	if (!ctx.cr6.eq) goto loc_824DB06C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,0,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// lwzx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// rlwimi r10,r9,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_824DB06C:
	// lwz r10,68(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_824DB084:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824db044
	if (ctx.cr6.lt) goto loc_824DB044;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824DCBB0) {
	REX_FUNC_PROLOGUE();
	// b 0x824dc178
	sub_824DC178(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824DD138) {
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
	ctx.lr = 0x824DD140;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824dc558
	ctx.lr = 0x824DD158;
	sub_824DC558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// blt 0x824dd1c8
	if (ctx.cr0.lt) goto loc_824DD1C8;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mulli r28,r10,276
	r28.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(276));
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824dd1c8
	if (!ctx.cr6.eq) goto loc_824DD1C8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r3,r29,1
	ctx.r3.s64 = r29.s64 + 1;
	// bl 0x823f02b8
	ctx.lr = 0x824DD18C;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824dd1a4
	if (!ctx.cr0.eq) goto loc_824DD1A4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r11.u32);
	// b 0x824dd1c8
	goto loc_824DD1C8;
loc_824DD1A4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x824DD1B4;
	sub_826A1E70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	REX_STORE_U8(r31.u32 + r29.u32, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
	// stw r31,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, r31.u32);
loc_824DD1C8:
	// lwz r3,144(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 144);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824DFC60) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824dfc8c
	if (!ctx.cr6.eq) goto loc_824DFC8C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23560
	ctx.r4.s64 = ctx.r11.s64 + 23560;
	// b 0x824dfcfc
	goto loc_824DFCFC;
loc_824DFC8C:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824dfd04
	if (!ctx.cr6.eq) goto loc_824DFD04;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824dfcb0
	if (!ctx.cr6.eq) goto loc_824DFCB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24552
	ctx.r4.s64 = ctx.r11.s64 + 24552;
	// b 0x824dfcfc
	goto loc_824DFCFC;
loc_824DFCB0:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824dfcc8
	if (!ctx.cr6.eq) goto loc_824DFCC8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23552
	ctx.r4.s64 = ctx.r11.s64 + 23552;
	// b 0x824dfcfc
	goto loc_824DFCFC;
loc_824DFCC8:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824dfce0
	if (!ctx.cr6.eq) goto loc_824DFCE0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24560
	ctx.r4.s64 = ctx.r11.s64 + 24560;
	// b 0x824dfcfc
	goto loc_824DFCFC;
loc_824DFCE0:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824dfcf4
	if (ctx.cr0.eq) goto loc_824DFCF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24544
	ctx.r4.s64 = ctx.r11.s64 + 24544;
	// b 0x824dfcfc
	goto loc_824DFCFC;
loc_824DFCF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,24536
	ctx.r4.s64 = ctx.r11.s64 + 24536;
loc_824DFCFC:
	// bl 0x824df9f0
	ctx.lr = 0x824DFD00;
	sub_824DF9F0(ctx, base);
	// b 0x824dfd18
	goto loc_824DFD18;
loc_824DFD04:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,23544
	ctx.r4.s64 = ctx.r11.s64 + 23544;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x824df9f0
	ctx.lr = 0x824DFD18;
	sub_824DF9F0(ctx, base);
loc_824DFD18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824E5D68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824E5D70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,52
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 52, ctx.xer);
	// beq cr6,0x824e5d98
	if (ctx.cr6.eq) goto loc_824E5D98;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x824e5d98
	if (ctx.cr6.eq) goto loc_824E5D98;
	// bl 0x826b40a0
	ctx.lr = 0x824E5D98;
	sub_826B40A0(ctx, base);
loc_824E5D98:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824e5db8
	if (!ctx.cr6.eq) goto loc_824E5DB8;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x824e5dbc
	goto loc_824E5DBC;
loc_824E5DB8:
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_824E5DBC:
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r11,r29,4
	ctx.r11.s64 = r29.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824e5e30
	if (ctx.cr6.eq) goto loc_824E5E30;
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,-19960
	ctx.r8.s64 = ctx.r8.s64 + -19960;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r6,r7,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x824e5e3c
	goto loc_824E5E3C;
loc_824E5E30:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_824E5E3C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824EDE28) {
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
	// bl 0x825a27b8
	ctx.lr = 0x824EDE44;
	sub_825A27B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824ede70
	if (!ctx.cr0.eq) goto loc_824EDE70;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-26736
	ctx.r6.s64 = ctx.r11.s64 + -26736;
	// addi r5,r10,-26748
	ctx.r5.s64 = ctx.r10.s64 + -26748;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EDE70;
	sub_824EA978(ctx, base);
loc_824EDE70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824EF768) {
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
	ctx.lr = 0x824EF770;
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
	// bne cr6,0x824ef7b0
	if (!ctx.cr6.eq) goto loc_824EF7B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26132
	ctx.r5.s64 = ctx.r11.s64 + -26132;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF7B0;
	sub_824EA978(ctx, base);
loc_824EF7B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824ede28
	ctx.lr = 0x824EF7B8;
	sub_824EDE28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x824ef7dc
	if (!ctx.cr0.eq) goto loc_824EF7DC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26748
	ctx.r5.s64 = ctx.r11.s64 + -26748;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EF7DC;
	sub_824EA978(ctx, base);
loc_824EF7DC:
	// stw r27,12(r30)
	REX_STORE_U32(r30.u32 + 12, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ef6a0
	ctx.lr = 0x824EF7EC;
	sub_824EF6A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_824F1030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x824F1038;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-25912
	r29.s64 = ctx.r10.s64 + -25912;
	// bne cr6,0x824f1074
	if (!ctx.cr6.eq) goto loc_824F1074;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26852
	ctx.r5.s64 = ctx.r11.s64 + -26852;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F1074;
	sub_824EA978(ctx, base);
loc_824F1074:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f109c
	if (!ctx.cr6.eq) goto loc_824F109C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-24980
	ctx.r5.s64 = ctx.r11.s64 + -24980;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F109C;
	sub_824EA978(ctx, base);
loc_824F109C:
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x824f1758
	ctx.lr = 0x824F10A8;
	sub_824F1758(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824F7120) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,804(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f7134
	if (ctx.cr6.eq) goto loc_824F7134;
	// lwz r3,800(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 800);
	// blr 
	return;
loc_824F7134:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f7148
	if (ctx.cr0.eq) goto loc_824F7148;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_824F7148:
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824F8B30) {
	REX_FUNC_PROLOGUE();
	// b 0x824f8950
	sub_824F8950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824F8EA0) {
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
	ctx.lr = 0x824F8EA8;
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stw r4,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r6,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r6.u32);
	// mr r14,r6
	r14.u64 = ctx.r6.u64;
	// li r23,0
	r23.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f8ee4
	if (ctx.cr0.eq) goto loc_824F8EE4;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x824f8ee8
	if (ctx.cr0.eq) goto loc_824F8EE8;
loc_824F8EE4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824F8EE8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f8f1c
	if (ctx.cr0.eq) goto loc_824F8F1C;
	// li r4,192
	ctx.r4.s64 = 192;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x824f8f00
	if (ctx.cr6.eq) goto loc_824F8F00;
	// li r4,193
	ctx.r4.s64 = 193;
loc_824F8F00:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cd7f0
	ctx.lr = 0x824F8F08;
	sub_822CD7F0(ctx, base);
	// lwz r3,16(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f8f1c
	if (ctx.cr6.eq) goto loc_824F8F1C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821c3fc8
	ctx.lr = 0x824F8F1C;
	sub_821C3FC8(ctx, base);
loc_824F8F1C:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
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
	// bne 0x824f8ff4
	if (!ctx.cr0.eq) goto loc_824F8FF4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f8ff4
	if (ctx.cr0.eq) goto loc_824F8FF4;
loc_824F8F48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x824f8fd8
	if (!ctx.cr6.eq) goto loc_824F8FD8;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824f8fd8
	if (ctx.cr6.eq) goto loc_824F8FD8;
	// rlwinm. r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// beq 0x824f8f98
	if (ctx.cr0.eq) goto loc_824F8F98;
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r31,40
	ctx.r9.s64 = r31.s64 + 40;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_824F8F84:
	// lfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// stfsu f0,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x824f8f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F8F84;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bge cr6,0x824f8fc4
	if (!ctx.cr6.lt) goto loc_824F8FC4;
loc_824F8F98:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// subfic r11,r11,4
	ctx.xer.ca = ctx.r11.u32 <= 4;
	ctx.r11.u64 = static_cast<uint64_t>(4) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f8fc4
	if (ctx.cr6.eq) goto loc_824F8FC4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824F8FBC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824f8fbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F8FBC;
loc_824F8FC4:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// rlwinm r4,r11,15,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// bl 0x822cd9e8
	ctx.lr = 0x824F8FD8;
	sub_822CD9E8(ctx, base);
loc_824F8FD8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f8ff4
	if (!ctx.cr0.eq) goto loc_824F8FF4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f8f48
	if (!ctx.cr6.eq) goto loc_824F8F48;
loc_824F8FF4:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// lis r17,-1
	r17.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824f9064
	if (ctx.cr6.eq) goto loc_824F9064;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x824f9064
	if (!ctx.cr6.eq) goto loc_824F9064;
	// lwz r11,336(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 336);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824f9064
	if (!ctx.cr6.gt) goto loc_824F9064;
	// addi r31,r15,124
	r31.s64 = r15.s64 + 124;
loc_824F9024:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r4,r11,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bgt cr6,0x824f9050
	if (ctx.cr6.gt) goto loc_824F9050;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// rlwinm r11,r10,27,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xF;
	// rlwinm r10,r10,4,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF0;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x822cdad8
	ctx.lr = 0x824F9050;
	sub_822CDAD8(ctx, base);
loc_824F9050:
	// lwz r11,336(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 336);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f9024
	if (ctx.cr6.lt) goto loc_824F9024;
loc_824F9064:
	// lwz r11,536(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 536);
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824f91a0
	if (!ctx.cr6.gt) goto loc_824F91A0;
	// addi r30,r15,348
	r30.s64 = r15.s64 + 348;
loc_824F9080:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f90b4
	if (ctx.cr0.eq) goto loc_824F90B4;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f918c
	if (ctx.cr0.eq) goto loc_824F918C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x824f90a4
	if (!ctx.cr6.eq) goto loc_824F90A4;
	// li r27,2
	r27.s64 = 2;
	// b 0x824f918c
	goto loc_824F918C;
loc_824F90A4:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bge cr6,0x824f918c
	if (!ctx.cr6.lt) goto loc_824F918C;
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x824f918c
	goto loc_824F918C;
loc_824F90B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14720
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14720, ctx.xer);
	// beq cr6,0x824f918c
	if (ctx.cr6.eq) goto loc_824F918C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_824F90CC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f918c
	if (ctx.cr6.eq) goto loc_824F918C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f90ec
	if (ctx.cr6.eq) goto loc_824F90EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824f90f4
	if (!ctx.cr0.eq) goto loc_824F90F4;
loc_824F90EC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x824f90cc
	goto loc_824F90CC;
loc_824F90F4:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bne cr6,0x824f9144
	if (!ctx.cr6.eq) goto loc_824F9144;
	// rlwinm r31,r10,15,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r5,r9,31,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// rlwimi r10,r11,31,17,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r9,r11,4,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwinm r11,r10,27,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3FF;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// bl 0x822cdad8
	ctx.lr = 0x824F9134;
	sub_822CDAD8(ctx, base);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// ble cr6,0x824f918c
	if (!ctx.cr6.gt) goto loc_824F918C;
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x824f918c
	goto loc_824F918C;
loc_824F9144:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwimi r9,r10,28,11,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1FE000) | (ctx.r9.u64 & 0xFFFFFFFFFFE01FFF);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// rlwinm r10,r9,23,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0xFFF;
	// bne cr6,0x824f9160
	if (!ctx.cr6.eq) goto loc_824F9160;
	// li r11,9
	ctx.r11.s64 = 9;
loc_824F9160:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r4,r10,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// rlwinm r11,r11,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0;
	// rlwimi r8,r9,31,17,18
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x6000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF9FFF);
	// rlwinm r10,r8,27,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FF;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x822cdb70
	ctx.lr = 0x824F918C;
	sub_822CDB70(ctx, base);
loc_824F918C:
	// lwz r11,536(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 536);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f9080
	if (ctx.cr6.lt) goto loc_824F9080;
loc_824F91A0:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824f91d4
	if (ctx.cr6.eq) goto loc_824F91D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8c28
	ctx.lr = 0x824F91C0;
	sub_824F8C28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r6,4(r14)
	ctx.r6.u64 = REX_LOAD_U32(r14.u32 + 4);
	// lwz r5,0(r14)
	ctx.r5.u64 = REX_LOAD_U32(r14.u32 + 0);
	// bl 0x824f77b8
	ctx.lr = 0x824F91D4;
	sub_824F77B8(ctx, base);
loc_824F91D4:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
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
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x824f7bf8
	ctx.lr = 0x824F91F4;
	sub_824F7BF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824f9248
	if (ctx.cr6.eq) goto loc_824F9248;
loc_824F9204:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// beq cr6,0x824f9218
	if (ctx.cr6.eq) goto loc_824F9218;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9248
	if (!ctx.cr0.eq) goto loc_824F9248;
loc_824F9218:
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7bf8
	ctx.lr = 0x824F9224;
	sub_824F7BF8(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// ble cr6,0x824f9230
	if (!ctx.cr6.gt) goto loc_824F9230;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824F9230:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9248
	if (!ctx.cr0.eq) goto loc_824F9248;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824f9204
	if (!ctx.cr6.eq) goto loc_824F9204;
loc_824F9248:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824f926c
	if (ctx.cr6.eq) goto loc_824F926C;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r30,0,26,31
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x824f928c
	goto loc_824F928C;
loc_824F926C:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f927c
	if (!ctx.cr6.gt) goto loc_824F927C;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_824F927C:
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,8,18,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFC0FF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_824F928C:
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 4);
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x822cd828
	ctx.lr = 0x824F92A4;
	sub_822CD828(ctx, base);
	// li r19,-1
	r19.s64 = -1;
	// mr r20,r23
	r20.u64 = r23.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r18,8(r14)
	r18.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r21,12(r14)
	r21.u64 = REX_LOAD_U32(r14.u32 + 12);
	// lwz r16,16(r14)
	r16.u64 = REX_LOAD_U32(r14.u32 + 16);
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// beq cr6,0x824f9f2c
	if (ctx.cr6.eq) goto loc_824F9F2C;
loc_824F92D8:
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(r26.u32, r25.u32, ctx.xer);
	// beq cr6,0x824f92ec
	if (ctx.cr6.eq) goto loc_824F92EC;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9f2c
	if (!ctx.cr0.eq) goto loc_824F9F2C;
loc_824F92EC:
	// lwz r31,20(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9344
	if (!ctx.cr0.eq) goto loc_824F9344;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x824f9344
	if (ctx.cr0.eq) goto loc_824F9344;
loc_824F9300:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14848
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14848, ctx.xer);
	// bne cr6,0x824f932c
	if (!ctx.cr6.eq) goto loc_824F932C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f932c
	if (ctx.cr6.eq) goto loc_824F932C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9f48
	if (ctx.cr0.eq) goto loc_824F9F48;
loc_824F932C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9344
	if (!ctx.cr0.eq) goto loc_824F9344;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824f9300
	if (!ctx.cr6.eq) goto loc_824F9300;
loc_824F9344:
	// lwz r31,28(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9f10
	if (!ctx.cr0.eq) goto loc_824F9F10;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x824f9f10
	if (ctx.cr0.eq) goto loc_824F9F10;
loc_824F9358:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r30,r19
	r30.u64 = r19.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r25,r31
	r25.u64 = r31.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824f9384
	if (ctx.cr6.lt) goto loc_824F9384;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// ble cr6,0x824f9388
	if (!ctx.cr6.gt) goto loc_824F9388;
loc_824F9384:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_824F9388:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824f9704
	if (ctx.cr0.eq) goto loc_824F9704;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9400
	if (ctx.cr0.eq) goto loc_824F9400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x824F93A4;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9400
	if (ctx.cr0.eq) goto loc_824F9400;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f93e8
	if (ctx.cr0.eq) goto loc_824F93E8;
	// b 0x824f93cc
	goto loc_824F93CC;
loc_824F93C0:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f93d8
	if (ctx.cr0.eq) goto loc_824F93D8;
loc_824F93CC:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f93c0
	if (!ctx.cr6.eq) goto loc_824F93C0;
loc_824F93D8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f93cc
	if (!ctx.cr0.eq) goto loc_824F93CC;
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
loc_824F93E8:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9400
	if (ctx.cr0.eq) goto loc_824F9400;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824F9400;
	sub_822CDDA0(ctx, base);
loc_824F9400:
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// bl 0x825c01c0
	ctx.lr = 0x824F941C;
	sub_825C01C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7af8
	ctx.lr = 0x824F9424;
	sub_824F7AF8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x824f9440
	if (ctx.cr0.eq) goto loc_824F9440;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825c01c0
	ctx.lr = 0x824F943C;
	sub_825C01C0(ctx, base);
	// mr r25,r28
	r25.u64 = r28.u64;
loc_824F9440:
	// lwz r11,204(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f95c8
	if (ctx.cr0.eq) goto loc_824F95C8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f9460
	if (!ctx.cr0.eq) goto loc_824F9460;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x824f9488
	goto loc_824F9488;
loc_824F9460:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x824f9480
	if (ctx.cr6.eq) goto loc_824F9480;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x824f9480
	if (ctx.cr6.eq) goto loc_824F9480;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bne cr6,0x824f9484
	if (!ctx.cr6.eq) goto loc_824F9484;
loc_824F9480:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_824F9484:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_824F9488:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f94dc
	if (!ctx.cr0.eq) goto loc_824F94DC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824f95c8
	if (ctx.cr6.eq) goto loc_824F95C8;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f94ac
	if (!ctx.cr0.eq) goto loc_824F94AC;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x824f94d4
	goto loc_824F94D4;
loc_824F94AC:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x824f94cc
	if (ctx.cr6.eq) goto loc_824F94CC;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x824f94cc
	if (ctx.cr6.eq) goto loc_824F94CC;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bne cr6,0x824f94d0
	if (!ctx.cr6.eq) goto loc_824F94D0;
loc_824F94CC:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_824F94D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_824F94D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f95c8
	if (ctx.cr0.eq) goto loc_824F95C8;
loc_824F94DC:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdeb8
	ctx.lr = 0x824F94E4;
	sub_822CDEB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824f957c
	if (ctx.cr6.eq) goto loc_824F957C;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f957c
	if (!ctx.cr0.eq) goto loc_824F957C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824F9504;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x824f9570
	if (!ctx.cr6.eq) goto loc_824F9570;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x824f9570
	if (ctx.cr6.eq) goto loc_824F9570;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f9570
	if (ctx.cr6.eq) goto loc_824F9570;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x822cdf00
	ctx.lr = 0x824F9548;
	sub_822CDF00(ctx, base);
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f9574
	if (ctx.cr6.eq) goto loc_824F9574;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,17,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,20480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20480, ctx.xer);
	// bne cr6,0x824f957c
	if (!ctx.cr6.eq) goto loc_824F957C;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824F956C;
	sub_822CDDA0(ctx, base);
	// b 0x824f957c
	goto loc_824F957C;
loc_824F9570:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_824F9574:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x824f95c8
	if (!ctx.cr6.eq) goto loc_824F95C8;
loc_824F957C:
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// bl 0x822cdca0
	ctx.lr = 0x824F95B0;
	sub_822CDCA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F95C8;
	sub_824F8770(ctx, base);
loc_824F95C8:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdca0
	ctx.lr = 0x824F95D4;
	sub_822CDCA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F95F0;
	sub_824F8770(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// bl 0x822cdf18
	ctx.lr = 0x824F95FC;
	sub_822CDF18(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r3,-1
	r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdeb8
	ctx.lr = 0x824F9614;
	sub_822CDEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// rlwinm r11,r29,12,17,19
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x7000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r10,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// beq cr6,0x824f9670
	if (ctx.cr6.eq) goto loc_824F9670;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// lwz r9,16(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 16);
	// rlwinm r9,r9,0,8,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r9,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// rlwinm r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r9,r9,20
	ctx.r9.u64 = ctx.r9.u32 & 0xFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,20(r28)
	REX_STORE_U32(r28.u32 + 20, ctx.r11.u32);
loc_824F9670:
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 76);
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9de0
	if (ctx.cr0.eq) goto loc_824F9DE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x824F9688;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9de0
	if (ctx.cr0.eq) goto loc_824F9DE0;
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f96cc
	if (ctx.cr0.eq) goto loc_824F96CC;
	// b 0x824f96b0
	goto loc_824F96B0;
loc_824F96A4:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f96bc
	if (ctx.cr0.eq) goto loc_824F96BC;
loc_824F96B0:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f96a4
	if (!ctx.cr6.eq) goto loc_824F96A4;
loc_824F96BC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f96b0
	if (!ctx.cr0.eq) goto loc_824F96B0;
	// stw r11,112(r26)
	REX_STORE_U32(r26.u32 + 112, ctx.r11.u32);
loc_824F96CC:
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 112);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9de0
	if (ctx.cr0.eq) goto loc_824F9DE0;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
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
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9de0
	if (ctx.cr0.eq) goto loc_824F9DE0;
	// b 0x824f9db0
	goto loc_824F9DB0;
loc_824F9704:
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x824f9718
	if (ctx.cr6.lt) goto loc_824F9718;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// ble cr6,0x824f971c
	if (!ctx.cr6.gt) goto loc_824F971C;
loc_824F9718:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_824F971C:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824f997c
	if (ctx.cr0.eq) goto loc_824F997C;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x824f9734
	if (!ctx.cr6.eq) goto loc_824F9734;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9ef4
	if (ctx.cr0.eq) goto loc_824F9EF4;
loc_824F9734:
	// cmplwi cr6,r10,84
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 84, ctx.xer);
	// bne cr6,0x824f9790
	if (!ctx.cr6.eq) goto loc_824F9790;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F9750;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-32
	ctx.r11.s64 = r31.s64 + -32;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824f9790
	if (ctx.cr6.eq) goto loc_824F9790;
	// stw r10,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r10.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// stw r23,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, r23.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822cd968
	ctx.lr = 0x824F9790;
	sub_822CD968(ctx, base);
loc_824F9790:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x824f97dc
	if (!ctx.cr6.eq) goto loc_824F97DC;
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// beq cr6,0x824f97d0
	if (ctx.cr6.eq) goto loc_824F97D0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwimi r11,r22,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// b 0x824f9834
	goto loc_824F9834;
loc_824F97D0:
	// bl 0x822cdda0
	ctx.lr = 0x824F97D4;
	sub_822CDDA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824f9854
	goto loc_824F9854;
loc_824F97DC:
	// addi r11,r1,216
	ctx.r11.s64 = ctx.r1.s64 + 216;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// bl 0x825bb398
	ctx.lr = 0x824F97F4;
	sub_825BB398(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f982c
	if (ctx.cr0.eq) goto loc_824F982C;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824F9804;
	sub_822CDDA0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x824F9820;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = r31.s64 + -12;
	// mr r20,r22
	r20.u64 = r22.u64;
	// stwx r30,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, r30.u32);
loc_824F982C:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
loc_824F9834:
	// bl 0x822cdcb8
	ctx.lr = 0x824F9838;
	sub_822CDCB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F9854;
	sub_824F8770(ctx, base);
loc_824F9854:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// clrlwi r10,r30,20
	ctx.r10.u64 = r30.u32 & 0xFFF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r27,r22
	r27.u64 = r22.u64;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// sth r10,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r10.u16);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// cmplwi cr6,r9,10624
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10624, ctx.xer);
	// bne cr6,0x824f9de0
	if (!ctx.cr6.eq) goto loc_824F9DE0;
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// bne cr6,0x824f9de0
	if (!ctx.cr6.eq) goto loc_824F9DE0;
	// lbz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 48);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x824f9908
	goto loc_824F9908;
loc_824F98A0:
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824f9fac
	if (!ctx.cr0.eq) goto loc_824F9FAC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824f9fac
	if (ctx.cr0.eq) goto loc_824F9FAC;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16128, ctx.xer);
	// bne cr6,0x824f9fac
	if (!ctx.cr6.eq) goto loc_824F9FAC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r8,r11,20
	ctx.r8.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, ctx.xer);
	// blt cr6,0x824f9914
	if (ctx.cr6.lt) goto loc_824F9914;
	// rlwinm. r11,r11,16,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9918
	if (!ctx.cr0.eq) goto loc_824F9918;
	// lwz r11,76(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9918
	if (!ctx.cr0.eq) goto loc_824F9918;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f9918
	if (!ctx.cr0.eq) goto loc_824F9918;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r10.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f9918
	if (ctx.cr0.eq) goto loc_824F9918;
	// lbz r11,48(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 48);
loc_824F9908:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f98a0
	if (ctx.cr0.eq) goto loc_824F98A0;
	// b 0x824f9918
	goto loc_824F9918;
loc_824F9914:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_824F9918:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9de0
	if (ctx.cr0.eq) goto loc_824F9DE0;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// lwz r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// bl 0x822cdca0
	ctx.lr = 0x824F9954;
	sub_822CDCA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F9970;
	sub_824F8770(ctx, base);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// b 0x824f9de0
	goto loc_824F9DE0;
loc_824F997C:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x824f9990
	if (ctx.cr6.lt) goto loc_824F9990;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// ble cr6,0x824f9994
	if (!ctx.cr6.gt) goto loc_824F9994;
loc_824F9990:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_824F9994:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824f9b9c
	if (ctx.cr0.eq) goto loc_824F9B9C;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x824f9b18
	if (!ctx.cr6.eq) goto loc_824F9B18;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// bl 0x825b9c48
	ctx.lr = 0x824F99C0;
	sub_825B9C48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r29,r11,13,29,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r30,r11,25,25,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F99E0;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = r31.s64 + -20;
	// add r28,r3,r11
	r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbz r11,15(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 15);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x824f9a10
	if (ctx.cr6.eq) goto loc_824F9A10;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// rlwinm r6,r11,16,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x822cdc88
	ctx.lr = 0x824F9A0C;
	sub_822CDC88(ctx, base);
	// b 0x824f9b38
	goto loc_824F9B38;
loc_824F9A10:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9b00
	if (!ctx.cr0.eq) goto loc_824F9B00;
	// cmplwi cr6,r30,96
	ctx.cr6.compare<uint32_t>(r30.u32, 96, ctx.xer);
	// bne cr6,0x824f9a2c
	if (!ctx.cr6.eq) goto loc_824F9A2C;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// bgt cr6,0x824f9a30
	if (ctx.cr6.gt) goto loc_824F9A30;
loc_824F9A2C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824F9A30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9b00
	if (ctx.cr0.eq) goto loc_824F9B00;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdeb8
	ctx.lr = 0x824F9A40;
	sub_822CDEB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824f9af8
	if (ctx.cr6.eq) goto loc_824F9AF8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r22
	r30.u64 = r22.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f9abc
	if (!ctx.cr0.eq) goto loc_824F9ABC;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824f9abc
	if (ctx.cr6.eq) goto loc_824F9ABC;
loc_824F9A6C:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,12288
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12288, ctx.xer);
	// bne cr6,0x824f9a88
	if (!ctx.cr6.eq) goto loc_824F9A88;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x824f9a8c
	if (ctx.cr0.eq) goto loc_824F9A8C;
loc_824F9A88:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824F9A8C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9ab4
	if (ctx.cr0.eq) goto loc_824F9AB4;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f9ab4
	if (!ctx.cr0.eq) goto loc_824F9AB4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f9a6c
	if (!ctx.cr6.eq) goto loc_824F9A6C;
loc_824F9AB4:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// bgt cr6,0x824f9fb8
	if (ctx.cr6.gt) goto loc_824F9FB8;
loc_824F9ABC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824F9AC8;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x824f9aec
	if (!ctx.cr6.eq) goto loc_824F9AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824f9af0
	if (!ctx.cr6.gt) goto loc_824F9AF0;
loc_824F9AEC:
	// mr r29,r19
	r29.u64 = r19.u64;
loc_824F9AF0:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// bne cr6,0x824f9b00
	if (!ctx.cr6.eq) goto loc_824F9B00;
loc_824F9AF8:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cde38
	ctx.lr = 0x824F9B00;
	sub_822CDE38(ctx, base);
loc_824F9B00:
	// lhz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 12);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// bl 0x822cdc28
	ctx.lr = 0x824F9B14;
	sub_822CDC28(ctx, base);
	// b 0x824f9b38
	goto loc_824F9B38;
loc_824F9B18:
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// std r23,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r23.u64);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// bl 0x825b9f78
	ctx.lr = 0x824F9B2C;
	sub_825B9F78(ctx, base);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdbd0
	ctx.lr = 0x824F9B38;
	sub_822CDBD0(ctx, base);
loc_824F9B38:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F9B54;
	sub_824F8770(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// bl 0x822cdf18
	ctx.lr = 0x824F9B64;
	sub_822CDF18(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r29,r3,-1
	r29.s64 = ctx.r3.s64 + -1;
	// rlwinm r11,r11,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdeb8
	ctx.lr = 0x824F9B7C;
	sub_822CDEB8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r10,r29,12,17,19
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x7000;
	// clrlwi r9,r3,20
	ctx.r9.u64 = ctx.r3.u32 & 0xFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_824F9B94:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x824f9de0
	goto loc_824F9DE0;
loc_824F9B9C:
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// bne cr6,0x824f9c50
	if (!ctx.cr6.eq) goto loc_824F9C50;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9bb8
	if (ctx.cr0.eq) goto loc_824F9BB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824F9BB8:
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 20);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9be4
	if (ctx.cr0.eq) goto loc_824F9BE4;
	// bl 0x822cdda0
	ctx.lr = 0x824F9BCC;
	sub_822CDDA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// clrlwi r10,r3,20
	ctx.r10.u64 = ctx.r3.u32 & 0xFFF;
	// rlwinm r11,r11,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// mr r27,r22
	r27.u64 = r22.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x824f9b94
	goto loc_824F9B94;
loc_824F9BE4:
	// mr r28,r23
	r28.u64 = r23.u64;
	// bl 0x822cdeb8
	ctx.lr = 0x824F9BEC;
	sub_822CDEB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x824f9c3c
	if (ctx.cr6.eq) goto loc_824F9C3C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824F9C04;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// bne cr6,0x824f9c3c
	if (!ctx.cr6.eq) goto loc_824F9C3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r28,r11,20,29,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r28,6
	ctx.cr6.compare<uint32_t>(r28.u32, 6, ctx.xer);
	// bne cr6,0x824f9c3c
	if (!ctx.cr6.eq) goto loc_824F9C3C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r28,r23
	r28.u64 = r23.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_824F9C3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwimi r29,r28,12,17,19
	r29.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0x7000) | (r29.u64 & 0xFFFFFFFFFFFF8FFF);
	// rlwimi r29,r11,0,0,16
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000) | (r29.u64 & 0xFFFFFFFF00007FFF);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// b 0x824f9de0
	goto loc_824F9DE0;
loc_824F9C50:
	// cmplwi cr6,r10,106
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 106, ctx.xer);
	// bne cr6,0x824f9dc0
	if (!ctx.cr6.eq) goto loc_824F9DC0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_824F9C5C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f9c78
	if (ctx.cr6.eq) goto loc_824F9C78;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824f9c78
	if (!ctx.cr0.eq) goto loc_824F9C78;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x824f9c5c
	goto loc_824F9C5C;
loc_824F9C78:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// rlwimi r11,r10,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r30,r11,31,20,31
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// std r23,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r23.u64);
	// stw r23,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r23.u32);
	// rlwinm r10,r30,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r29,r30,12,16,19
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xF000;
	// rlwinm r11,r30,28,26,31
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x3F;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r9,r9,6
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// oris r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 536870912;
	// rlwimi r8,r22,25,3,7
	ctx.r8.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 25) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r9,r9,0,24,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// rlwinm r9,r9,0,12,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// rlwinm r8,r8,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// oris r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 16777216;
	// ori r9,r8,128
	ctx.r9.u64 = ctx.r8.u64 | 128;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x822cdca0
	ctx.lr = 0x824F9CF0;
	sub_822CDCA0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F9D08;
	sub_824F8770(ctx, base);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824F9D10;
	sub_822CDDA0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,25
	ctx.r5.s64 = 25;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7678
	ctx.lr = 0x824F9D24;
	sub_824F7678(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// rlwinm r9,r30,28,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0x3F;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r23,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r23.u64);
	// stw r23,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r23.u32);
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | r29.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r22,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,9216
	ctx.r10.u64 = ctx.r10.u64 | 603979776;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x822cdca0
	ctx.lr = 0x824F9D90;
	sub_822CDCA0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8770
	ctx.lr = 0x824F9DAC;
	sub_824F8770(ctx, base);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
loc_824F9DB0:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824F9DB8;
	sub_822CDDA0(ctx, base);
	// mr r27,r22
	r27.u64 = r22.u64;
	// b 0x824f9de0
	goto loc_824F9DE0;
loc_824F9DC0:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824f9dd4
	if (ctx.cr6.lt) goto loc_824F9DD4;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// ble cr6,0x824f9dd8
	if (!ctx.cr6.gt) goto loc_824F9DD8;
loc_824F9DD4:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824F9DD8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9fc4
	if (!ctx.cr0.eq) goto loc_824F9FC4;
loc_824F9DE0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x824f9e68
	if (ctx.cr6.eq) goto loc_824F9E68;
loc_824F9DE8:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824f9dfc
	if (ctx.cr6.eq) goto loc_824F9DFC;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f9e68
	if (!ctx.cr6.eq) goto loc_824F9E68;
loc_824F9DFC:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8870
	ctx.lr = 0x824F9E14;
	sub_824F8870(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824f9e2c
	if (ctx.cr6.eq) goto loc_824F9E2C;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f9de8
	if (!ctx.cr6.eq) goto loc_824F9DE8;
loc_824F9E2C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r18)
	REX_STORE_U32(r18.u32 + 0, r30.u32);
	// rlwimi r11,r10,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,4(r18)
	REX_STORE_U32(r18.u32 + 4, ctx.r11.u32);
	// addi r18,r18,12
	r18.s64 = r18.s64 + 12;
	// stw r18,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// lwz r11,740(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 740);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lwz r11,736(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 736);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f9de8
	if (ctx.cr6.lt) goto loc_824F9DE8;
	// mr r18,r23
	r18.u64 = r23.u64;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r23.u32);
loc_824F9E68:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824f9ef0
	if (ctx.cr6.eq) goto loc_824F9EF0;
loc_824F9E70:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824f9e84
	if (ctx.cr6.eq) goto loc_824F9E84;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f9ef0
	if (!ctx.cr6.eq) goto loc_824F9EF0;
loc_824F9E84:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f8870
	ctx.lr = 0x824F9E9C;
	sub_824F8870(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824f9eb4
	if (ctx.cr6.eq) goto loc_824F9EB4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824f9e70
	if (!ctx.cr6.eq) goto loc_824F9E70;
loc_824F9EB4:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,0(r21)
	REX_STORE_U32(r21.u32 + 0, r30.u32);
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,4(r21)
	REX_STORE_U32(r21.u32 + 4, ctx.r11.u32);
	// addi r21,r21,12
	r21.s64 = r21.s64 + 12;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// lwz r10,764(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 764);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r11,760(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 760);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824f9e70
	if (ctx.cr6.lt) goto loc_824F9E70;
	// mr r21,r23
	r21.u64 = r23.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
loc_824F9EF0:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_824F9EF4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f9f0c
	if (!ctx.cr0.eq) goto loc_824F9F0C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824f9358
	if (!ctx.cr6.eq) goto loc_824F9358;
loc_824F9F0C:
	// lwz r25,476(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_824F9F10:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824f9f40
	if (!ctx.cr0.eq) goto loc_824F9F40;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f92d8
	if (!ctx.cr6.eq) goto loc_824F92D8;
loc_824F9F2C:
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824f9fd8
	if (ctx.cr6.eq) goto loc_824F9FD8;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x824fa070
	goto loc_824FA070;
loc_824F9F40:
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x824f9f2c
	goto loc_824F9F2C;
loc_824F9F48:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824F9F5C;
	sub_824F71B8(ctx, base);
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// clrlwi r4,r10,17
	ctx.r4.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f9f98
	if (ctx.cr0.eq) goto loc_824F9F98;
	// bl 0x8257f6f8
	ctx.lr = 0x824F9F88;
	sub_8257F6F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3507
	ctx.r4.s64 = 3507;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F9F98;
	sub_824E4368(ctx, base);
loc_824F9F98:
	// bl 0x8257f6f8
	ctx.lr = 0x824F9F9C;
	sub_8257F6F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3527
	ctx.r4.s64 = 3527;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F9FAC;
	sub_824E4368(ctx, base);
loc_824F9FAC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F9FB8;
	sub_824E4368(ctx, base);
loc_824F9FB8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F9FC4;
	sub_824E4368(ctx, base);
loc_824F9FC4:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,-22264
	ctx.r5.s64 = ctx.r11.s64 + -22264;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824F9FD8;
	sub_824E4368(ctx, base);
loc_824F9FD8:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa07c
	if (!ctx.cr0.eq) goto loc_824FA07C;
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 0);
loc_824F9FE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_824F9FF0:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// beq 0x824fa0a4
	if (ctx.cr0.eq) goto loc_824FA0A4;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa064
	if (!ctx.cr0.eq) goto loc_824FA064;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// b 0x824fa058
	goto loc_824FA058;
loc_824FA010:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6f20
	ctx.lr = 0x824FA018;
	sub_824F6F20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa048
	if (ctx.cr0.eq) goto loc_824FA048;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x824fa03c
	if (ctx.cr6.lt) goto loc_824FA03C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// ble cr6,0x824fa040
	if (!ctx.cr6.gt) goto loc_824FA040;
loc_824FA03C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824FA040:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa084
	if (!ctx.cr0.eq) goto loc_824FA084;
loc_824FA048:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa064
	if (!ctx.cr0.eq) goto loc_824FA064;
loc_824FA058:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824fa010
	if (!ctx.cr0.eq) goto loc_824FA010;
loc_824FA064:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// beq cr6,0x824fa07c
	if (ctx.cr6.eq) goto loc_824FA07C;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_824FA070:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824f9fe8
	if (ctx.cr0.eq) goto loc_824F9FE8;
loc_824FA07C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x824f9ff0
	goto loc_824F9FF0;
loc_824FA084:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// clrlwi r4,r11,20
	ctx.r4.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x822cded0
	ctx.lr = 0x824FA094;
	sub_822CDED0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_824FA0A4:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FA0AC;
	sub_822CDDA0(ctx, base);
	// lwz r6,808(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 808);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x824fa0c8
	if (ctx.cr6.eq) goto loc_824FA0C8;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x824fa0e0
	goto loc_824FA0E0;
loc_824FA0C8:
	// lwz r11,48(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r17,r11
	ctx.r11.u64 = ctx.r11.u64 - r17.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2046
	ctx.r11.s64 = ctx.r11.s64 + 2046;
loc_824FA0E0:
	// add r5,r10,r29
	ctx.r5.u64 = ctx.r10.u64 + r29.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824fa108
	if (!ctx.cr6.gt) goto loc_824FA108;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// beq cr6,0x824fa100
	if (ctx.cr6.eq) goto loc_824FA100;
	// li r4,3617
	ctx.r4.s64 = 3617;
	// bl 0x824e4368
	ctx.lr = 0x824FA100;
	sub_824E4368(ctx, base);
loc_824FA100:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// bl 0x824e4368
	ctx.lr = 0x824FA108;
	sub_824E4368(ctx, base);
loc_824FA108:
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824fa150
	if (ctx.cr6.eq) goto loc_824FA150;
loc_824FA114:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FA120;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,18,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF3FFF;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824fa114
	if (!ctx.cr6.eq) goto loc_824FA114;
loc_824FA150:
	// clrlwi. r11,r20,24
	ctx.r11.u64 = r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa258
	if (ctx.cr0.eq) goto loc_824FA258;
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824fa258
	if (ctx.cr6.eq) goto loc_824FA258;
loc_824FA164:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// beq cr6,0x824fa178
	if (ctx.cr6.eq) goto loc_824FA178;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa258
	if (!ctx.cr0.eq) goto loc_824FA258;
loc_824FA178:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa23c
	if (!ctx.cr0.eq) goto loc_824FA23C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fa23c
	if (ctx.cr0.eq) goto loc_824FA23C;
loc_824FA190:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x824fa1c4
	if (ctx.cr6.eq) goto loc_824FA1C4;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x824fa1c4
	if (ctx.cr6.eq) goto loc_824FA1C4;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x824fa1c4
	if (ctx.cr6.eq) goto loc_824FA1C4;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x824fa1c4
	if (ctx.cr6.eq) goto loc_824FA1C4;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bne cr6,0x824fa1c8
	if (!ctx.cr6.eq) goto loc_824FA1C8;
loc_824FA1C4:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_824FA1C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa220
	if (ctx.cr0.eq) goto loc_824FA220;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x824FA1E8;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// lwz r10,768(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 768);
	// add r29,r3,r11
	r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x822cded0
	ctx.lr = 0x824FA200;
	sub_822CDED0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_824FA220:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa23c
	if (!ctx.cr0.eq) goto loc_824FA23C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fa190
	if (!ctx.cr6.eq) goto loc_824FA190;
loc_824FA23C:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa258
	if (!ctx.cr0.eq) goto loc_824FA258;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fa164
	if (!ctx.cr6.eq) goto loc_824FA164;
loc_824FA258:
	// mr r17,r25
	r17.u64 = r25.u64;
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824fac18
	if (ctx.cr6.eq) goto loc_824FAC18;
	// li r14,3
	r14.s64 = 3;
loc_824FA26C:
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824fa284
	if (ctx.cr6.eq) goto loc_824FA284;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fac10
	if (!ctx.cr0.eq) goto loc_824FAC10;
loc_824FA284:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r29,r17,24
	r29.s64 = r17.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa344
	if (!ctx.cr0.eq) goto loc_824FA344;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa344
	if (ctx.cr0.eq) goto loc_824FA344;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x824fa344
	if (!ctx.cr6.eq) goto loc_824FA344;
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa2f0
	if (!ctx.cr0.eq) goto loc_824FA2F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fa2f0
	if (ctx.cr6.eq) goto loc_824FA2F0;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fa2f0
	if (ctx.cr6.eq) goto loc_824FA2F0;
	// bl 0x824f7ba8
	ctx.lr = 0x824FA2EC;
	sub_824F7BA8(ctx, base);
	// b 0x824fa2f8
	goto loc_824FA2F8;
loc_824FA2F0:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FA2F8;
	sub_822CDDA0(ctx, base);
loc_824FA2F8:
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FA304;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x824fa344
	if (ctx.cr6.eq) goto loc_824FA344;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x824fa32c
	if (!ctx.cr6.eq) goto loc_824FA32C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// rlwimi r11,r10,12,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rlwimi r11,r22,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_824FA32C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// bne cr6,0x824fac40
	if (!ctx.cr6.eq) goto loc_824FAC40;
	// rlwimi r11,r22,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_824FA344:
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 48);
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa4e8
	if (ctx.cr0.eq) goto loc_824FA4E8;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824f7ba8
	ctx.lr = 0x824FA358;
	sub_824F7BA8(ctx, base);
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824FA360:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa3c4
	if (ctx.cr0.eq) goto loc_824FA3C4;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_824FA370:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FA378;
	sub_822CDDA0(ctx, base);
loc_824FA378:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x824fa4b0
	goto loc_824FA4B0;
loc_824FA380:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fac4c
	if (!ctx.cr0.eq) goto loc_824FAC4C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fac4c
	if (ctx.cr0.eq) goto loc_824FAC4C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x824fac4c
	if (!ctx.cr6.eq) goto loc_824FAC4C;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa3d8
	if (!ctx.cr0.eq) goto loc_824FA3D8;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa3d4
	if (!ctx.cr0.eq) goto loc_824FA3D4;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// b 0x824fa360
	goto loc_824FA360;
loc_824FA3C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// bne cr6,0x824fa380
	if (!ctx.cr6.eq) goto loc_824FA380;
	// b 0x824fa370
	goto loc_824FA370;
loc_824FA3D4:
	// mr r31,r23
	r31.u64 = r23.u64;
loc_824FA3D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fa370
	if (ctx.cr6.eq) goto loc_824FA370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f7ba8
	ctx.lr = 0x824FA3E8;
	sub_824F7BA8(ctx, base);
	// b 0x824fa378
	goto loc_824FA378;
loc_824FA3EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FA3F8;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x824fa44c
	if (!ctx.cr6.eq) goto loc_824FA44C;
	// lbz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U8(r17.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa440
	if (ctx.cr0.eq) goto loc_824FA440;
	// rlwimi r11,r14,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm r10,r10,7,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwimi r11,r10,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,72(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 72);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r10,17,22,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC03);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x824fa4ac
	goto loc_824FA4AC;
loc_824FA440:
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r11,r10,12,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// b 0x824fa494
	goto loc_824FA494;
loc_824FA44C:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x824fa4ac
	if (!ctx.cr6.eq) goto loc_824FA4AC;
	// lbz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U8(r17.u32 + 76);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// beq 0x824fa490
	if (ctx.cr0.eq) goto loc_824FA490;
	// rlwimi r11,r22,14,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 14) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,7,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7F;
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r11,72(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 72);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// b 0x824fa4a8
	goto loc_824FA4A8;
loc_824FA490:
	// rlwimi r11,r14,13,16,19
	ctx.r11.u64 = (__builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 13) & 0xF000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0FFF);
loc_824FA494:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm r11,r11,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFF;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r11,10,21,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x400) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFBFF);
loc_824FA4A8:
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_824FA4AC:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_824FA4B0:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x824fa3ec
	if (ctx.cr6.lt) goto loc_824FA3EC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fac10
	if (ctx.cr6.eq) goto loc_824FAC10;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa4d8
	if (ctx.cr0.eq) goto loc_824FA4D8;
	// stw r23,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// b 0x824fabd4
	goto loc_824FABD4;
loc_824FA4D8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x824fabd4
	goto loc_824FABD4;
loc_824FA4E8:
	// lbz r10,76(r17)
	ctx.r10.u64 = REX_LOAD_U8(r17.u32 + 76);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fabd4
	if (!ctx.cr0.eq) goto loc_824FABD4;
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fabd4
	if (!ctx.cr0.eq) goto loc_824FABD4;
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa5ac
	if (!ctx.cr0.eq) goto loc_824FA5AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fa5ac
	if (ctx.cr6.eq) goto loc_824FA5AC;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa5ac
	if (!ctx.cr0.eq) goto loc_824FA5AC;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fac74
	if (!ctx.cr0.eq) goto loc_824FAC74;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fac74
	if (ctx.cr0.eq) goto loc_824FAC74;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x824fac74
	if (!ctx.cr6.eq) goto loc_824FAC74;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r16,r11,20
	r16.u64 = ctx.r11.u32 & 0xFFF;
	// cmpwi cr6,r16,-1
	ctx.cr6.compare<int32_t>(r16.s32, -1, ctx.xer);
	// beq cr6,0x824fabd4
	if (ctx.cr6.eq) goto loc_824FABD4;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FA560;
	sub_822CDDA0(ctx, base);
	// cmplw cr6,r16,r3
	ctx.cr6.compare<uint32_t>(r16.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x824fa5b8
	if (!ctx.cr6.lt) goto loc_824FA5B8;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fac60
	if (!ctx.cr0.eq) goto loc_824FAC60;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fac60
	if (ctx.cr0.eq) goto loc_824FAC60;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x824fac60
	if (!ctx.cr6.eq) goto loc_824FAC60;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa5b8
	if (!ctx.cr0.eq) goto loc_824FA5B8;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa5b8
	if (!ctx.cr0.eq) goto loc_824FA5B8;
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// b 0x824fa5b8
	goto loc_824FA5B8;
loc_824FA5AC:
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FA5B4;
	sub_822CDDA0(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
loc_824FA5B8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fac9c
	if (!ctx.cr0.eq) goto loc_824FAC9C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fac9c
	if (ctx.cr0.eq) goto loc_824FAC9C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16128, ctx.xer);
	// bne cr6,0x824fac9c
	if (!ctx.cr6.eq) goto loc_824FAC9C;
	// lhz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 20);
	// mr r27,r19
	r27.u64 = r19.u64;
	// mr r26,r23
	r26.u64 = r23.u64;
	// clrlwi r28,r11,31
	r28.u64 = ctx.r11.u32 & 0x1;
	// mr r22,r23
	r22.u64 = r23.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r25,r28
	r25.u64 = r28.u64;
	// mr r18,r23
	r18.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// mr r21,r23
	r21.u64 = r23.u64;
loc_824FA604:
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r20,r17,24
	r20.s64 = r17.s64 + 24;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824faacc
	if (!ctx.cr0.eq) goto loc_824FAACC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824faacc
	if (ctx.cr0.eq) goto loc_824FAACC;
loc_824FA620:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x824fa63c
	if (ctx.cr6.lt) goto loc_824FA63C;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824fa640
	if (!ctx.cr6.gt) goto loc_824FA640;
loc_824FA63C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA640:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faab0
	if (ctx.cr0.eq) goto loc_824FAAB0;
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// blt cr6,0x824fa65c
	if (ctx.cr6.lt) goto loc_824FA65C;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824fa660
	if (!ctx.cr6.gt) goto loc_824FA660;
loc_824FA65C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA660:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa9ec
	if (!ctx.cr0.eq) goto loc_824FA9EC;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// rlwinm r10,r11,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r10,28672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28672, ctx.xer);
	// beq cr6,0x824fab40
	if (ctx.cr6.eq) goto loc_824FAB40;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x824fa888
	if (ctx.cr6.eq) goto loc_824FA888;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824fa888
	if (ctx.cr6.eq) goto loc_824FA888;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa6b0
	if (ctx.cr0.eq) goto loc_824FA6B0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7878
	ctx.lr = 0x824FA6AC;
	sub_824F7878(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_824FA6B0:
	// clrlwi. r31,r28,24
	r31.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824fa6c8
	if (ctx.cr0.eq) goto loc_824FA6C8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7908
	ctx.lr = 0x824FA6C8;
	sub_824F7908(ctx, base);
loc_824FA6C8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FA6D4;
	sub_822CDED0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r12,-683
	ctx.r12.s64 = -683;
	// rlwinm r10,r11,16,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FF;
	// rlwinm r9,r11,16,20,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFE;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// li r12,-1365
	ctx.r12.s64 = -1365;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// bne cr6,0x824fa778
	if (!ctx.cr6.eq) goto loc_824FA778;
	// clrlwi. r8,r25,24
	ctx.r8.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x824fa730
	if (ctx.cr0.eq) goto loc_824FA730;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x824fa72c
	if (!ctx.cr6.eq) goto loc_824FA72C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fa730
	if (ctx.cr6.eq) goto loc_824FA730;
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// li r8,1365
	ctx.r8.s64 = 1365;
	// subfic r11,r11,6
	ctx.xer.ca = ctx.r11.u32 <= 6;
	ctx.r11.u64 = static_cast<uint64_t>(6) - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x824fa730
	if (ctx.cr6.eq) goto loc_824FA730;
loc_824FA72C:
	// li r29,1
	r29.s64 = 1;
loc_824FA730:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824fa778
	if (!ctx.cr6.eq) goto loc_824FA778;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa778
	if (!ctx.cr0.eq) goto loc_824FA778;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fa76c
	if (ctx.cr6.eq) goto loc_824FA76C;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// rotlw r11,r9,r11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, ctx.r11.u8 & 0x1F);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// nor r11,r9,r11
	ctx.r11.u64 = ~(ctx.r9.u64 | ctx.r11.u64);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_824FA76C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fa778
	if (ctx.cr6.eq) goto loc_824FA778;
	// li r22,1
	r22.s64 = 1;
loc_824FA778:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// li r25,1
	r25.s64 = 1;
	// bne 0x824fa85c
	if (!ctx.cr0.eq) goto loc_824FA85C;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa858
	if (!ctx.cr0.eq) goto loc_824FA858;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fa858
	if (ctx.cr0.eq) goto loc_824FA858;
loc_824FA7A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f6f20
	ctx.lr = 0x824FA7AC;
	sub_824F6F20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa83c
	if (ctx.cr0.eq) goto loc_824FA83C;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824fa858
	if (ctx.cr6.gt) goto loc_824FA858;
	// lwz r31,4(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 4);
loc_824FA7C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fa83c
	if (ctx.cr6.eq) goto loc_824FA83C;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fa830
	if (ctx.cr6.eq) goto loc_824FA830;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa7f4
	if (ctx.cr0.eq) goto loc_824FA7F4;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824fa7f8
	if (ctx.cr0.eq) goto loc_824FA7F8;
loc_824FA7F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA7F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa830
	if (ctx.cr0.eq) goto loc_824FA830;
	// rlwinm. r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x824fa830
	if (ctx.cr0.lt) goto loc_824FA830;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x824fa830
	if (ctx.cr6.gt) goto loc_824FA830;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f6f20
	ctx.lr = 0x824FA818;
	sub_824F6F20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa830
	if (ctx.cr0.eq) goto loc_824FA830;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// bgt cr6,0x824fa838
	if (ctx.cr6.gt) goto loc_824FA838;
loc_824FA830:
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// b 0x824fa7c8
	goto loc_824FA7C8;
loc_824FA838:
	// li r28,0
	r28.s64 = 0;
loc_824FA83C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fa858
	if (!ctx.cr0.eq) goto loc_824FA858;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fa7a4
	if (!ctx.cr6.eq) goto loc_824FA7A4;
loc_824FA858:
	// mr r29,r28
	r29.u64 = r28.u64;
loc_824FA85C:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x824fa884
	if (ctx.cr6.eq) goto loc_824FA884;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(r27.u32, r21.u32, ctx.xer);
	// bne cr6,0x824fa884
	if (!ctx.cr6.eq) goto loc_824FA884;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7958
	ctx.lr = 0x824FA87C;
	sub_824F7958(ctx, base);
	// li r19,-1
	r19.s64 = -1;
	// li r21,0
	r21.s64 = 0;
loc_824FA884:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_824FA888:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 20);
	// clrlwi r27,r11,20
	r27.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r27,r16
	ctx.cr6.compare<uint32_t>(r27.u32, r16.u32, ctx.xer);
	// bge cr6,0x824fab3c
	if (!ctx.cr6.lt) goto loc_824FAB3C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FA8A4;
	sub_822CDED0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824fa8bc
	if (ctx.cr6.eq) goto loc_824FA8BC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x824fab3c
	if (!ctx.cr6.eq) goto loc_824FAB3C;
loc_824FA8BC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r18,r24
	r18.u64 = r24.u64;
	// bl 0x824f6e38
	ctx.lr = 0x824FA8C8;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa8d8
	if (ctx.cr0.eq) goto loc_824FA8D8;
	// li r25,0
	r25.s64 = 0;
	// li r29,0
	r29.s64 = 0;
loc_824FA8D8:
	// lwz r31,8(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm. r11,r31,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa918
	if (ctx.cr0.eq) goto loc_824FA918;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa910
	if (ctx.cr0.eq) goto loc_824FA910;
	// rlwinm r11,r31,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x1;
loc_824FA8F0:
	// clrlwi r10,r23,24
	ctx.r10.u64 = r23.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824fa900
	if (ctx.cr6.eq) goto loc_824FA900;
loc_824FA8FC:
	// li r28,0
	r28.s64 = 0;
loc_824FA900:
	// rlwinm. r11,r31,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa950
	if (!ctx.cr0.eq) goto loc_824FA950;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x824fa978
	goto loc_824FA978;
loc_824FA910:
	// rlwinm r23,r31,14,31,31
	r23.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0x1;
	// b 0x824fa948
	goto loc_824FA948;
loc_824FA918:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824f6ec8
	ctx.lr = 0x824FA920;
	sub_824F6EC8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa8fc
	if (!ctx.cr0.eq) goto loc_824FA8FC;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r10,r11,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa8fc
	if (ctx.cr0.eq) goto loc_824FA8FC;
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fa944
	if (ctx.cr0.eq) goto loc_824FA944;
	// rlwinm r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	// b 0x824fa8f0
	goto loc_824FA8F0;
loc_824FA944:
	// rlwinm r23,r11,9,31,31
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
loc_824FA948:
	// li r26,1
	r26.s64 = 1;
	// b 0x824fa900
	goto loc_824FA900;
loc_824FA950:
	// rlwinm r11,r31,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x824fa970
	if (ctx.cr6.eq) goto loc_824FA970;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x824fa970
	if (ctx.cr6.eq) goto loc_824FA970;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824fa974
	if (!ctx.cr6.eq) goto loc_824FA974;
loc_824FA970:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824FA974:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_824FA978:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faab0
	if (ctx.cr0.eq) goto loc_824FAAB0;
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// bne cr6,0x824fa98c
	if (!ctx.cr6.eq) goto loc_824FA98C;
	// mr r19,r27
	r19.u64 = r27.u64;
loc_824FA98C:
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(r24.u32 + 4);
loc_824FA990:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824faab0
	if (ctx.cr6.eq) goto loc_824FAAB0;
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fa9e4
	if (ctx.cr6.eq) goto loc_824FA9E4;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa9bc
	if (ctx.cr0.eq) goto loc_824FA9BC;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824fa9c0
	if (ctx.cr0.eq) goto loc_824FA9C0;
loc_824FA9BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FA9C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fa9e4
	if (ctx.cr0.eq) goto loc_824FA9E4;
	// rlwinm. r11,r10,0,7,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fa9e4
	if (!ctx.cr0.eq) goto loc_824FA9E4;
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// ble cr6,0x824fa9e4
	if (!ctx.cr6.gt) goto loc_824FA9E4;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_824FA9E4:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x824fa990
	goto loc_824FA990;
loc_824FA9EC:
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x824faa00
	if (ctx.cr6.lt) goto loc_824FAA00;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x824faa04
	if (!ctx.cr6.gt) goto loc_824FAA04;
loc_824FAA00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FAA04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824faa14
	if (!ctx.cr0.eq) goto loc_824FAA14;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// bne cr6,0x824fab40
	if (!ctx.cr6.eq) goto loc_824FAB40;
loc_824FAA14:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x824faa54
	if (ctx.cr6.eq) goto loc_824FAA54;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faa54
	if (ctx.cr0.eq) goto loc_824FAA54;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7878
	ctx.lr = 0x824FAA3C;
	sub_824F7878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faa54
	if (ctx.cr0.eq) goto loc_824FAA54;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7908
	ctx.lr = 0x824FAA54;
	sub_824F7908(ctx, base);
loc_824FAA54:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(r24.u32 + 8);
	// li r26,0
	r26.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// li r27,-1
	r27.s64 = -1;
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// blt cr6,0x824faa80
	if (ctx.cr6.lt) goto loc_824FAA80;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// ble cr6,0x824faa84
	if (!ctx.cr6.gt) goto loc_824FAA84;
loc_824FAA80:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824FAA84:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824faa98
	if (!ctx.cr0.eq) goto loc_824FAA98;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x824faa9c
	if (!ctx.cr6.eq) goto loc_824FAA9C;
loc_824FAA98:
	// li r11,1
	ctx.r11.s64 = 1;
loc_824FAA9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824faaac
	if (!ctx.cr0.eq) goto loc_824FAAAC;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faab0
	if (ctx.cr0.eq) goto loc_824FAAB0;
loc_824FAAAC:
	// li r29,1
	r29.s64 = 1;
loc_824FAAB0:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824faacc
	if (!ctx.cr0.eq) goto loc_824FAACC;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fa620
	if (!ctx.cr6.eq) goto loc_824FA620;
loc_824FAACC:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fab40
	if (!ctx.cr0.eq) goto loc_824FAB40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fab40
	if (ctx.cr6.eq) goto loc_824FAB40;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fab40
	if (!ctx.cr0.eq) goto loc_824FAB40;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r10,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fab40
	if (!ctx.cr0.eq) goto loc_824FAB40;
	// rlwinm. r10,r10,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fab40
	if (!ctx.cr0.eq) goto loc_824FAB40;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824fac88
	if (!ctx.cr0.eq) goto loc_824FAC88;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x824fac88
	if (ctx.cr0.eq) goto loc_824FAC88;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16128, ctx.xer);
	// bne cr6,0x824fac88
	if (!ctx.cr6.eq) goto loc_824FAC88;
	// lhz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 20);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fab40
	if (!ctx.cr0.eq) goto loc_824FAB40;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// b 0x824fa604
	goto loc_824FA604;
loc_824FAB3C:
	// li r27,-1
	r27.s64 = -1;
loc_824FAB40:
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(r27.s32, -1, ctx.xer);
	// beq cr6,0x824faba8
	if (ctx.cr6.eq) goto loc_824FABA8;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faba8
	if (ctx.cr0.eq) goto loc_824FABA8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cded0
	ctx.lr = 0x824FAB5C;
	sub_822CDED0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 20);
	// rlwinm r11,r11,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwinm r10,r10,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824faba8
	if (!ctx.cr6.eq) goto loc_824FABA8;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7878
	ctx.lr = 0x824FAB90;
	sub_824F7878(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824faba8
	if (ctx.cr0.eq) goto loc_824FABA8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7908
	ctx.lr = 0x824FABA8;
	sub_824F7908(ctx, base);
loc_824FABA8:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(r19.s32, -1, ctx.xer);
	// beq cr6,0x824fabd4
	if (ctx.cr6.eq) goto loc_824FABD4;
	// lwz r11,20(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 20);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x824fabc4
	if (!ctx.cr6.gt) goto loc_824FABC4;
	// mr r21,r11
	r21.u64 = ctx.r11.u64;
loc_824FABC4:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f7958
	ctx.lr = 0x824FABD4;
	sub_824F7958(ctx, base);
loc_824FABD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r19,-1
	r19.s64 = -1;
	// lwz r16,108(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r23,0
	r23.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r18,104(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r22,1
	r22.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fac38
	if (!ctx.cr0.eq) goto loc_824FAC38;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fa26c
	if (!ctx.cr6.eq) goto loc_824FA26C;
loc_824FAC10:
	// lwz r14,492(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r25,476(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_824FAC18:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824facb0
	if (ctx.cr6.eq) goto loc_824FACB0;
	// lwz r10,740(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 740);
	// lwz r11,736(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 736);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824facb4
	goto loc_824FACB4;
loc_824FAC38:
	// mr r17,r23
	r17.u64 = r23.u64;
	// b 0x824fac10
	goto loc_824FAC10;
loc_824FAC40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FAC4C;
	sub_824E4368(ctx, base);
loc_824FAC4C:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824FAC60;
	sub_824E4368(ctx, base);
loc_824FAC60:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824FAC74;
	sub_824E4368(ctx, base);
loc_824FAC74:
	// rlwinm r11,r30,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824FAC88;
	sub_824E4368(ctx, base);
loc_824FAC88:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824FAC9C;
	sub_824E4368(ctx, base);
loc_824FAC9C:
	// rlwinm r11,r17,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x824e4368
	ctx.lr = 0x824FACB0;
	sub_824E4368(ctx, base);
loc_824FACB0:
	// mr r27,r23
	r27.u64 = r23.u64;
loc_824FACB4:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824facd4
	if (ctx.cr6.eq) goto loc_824FACD4;
	// lwz r10,764(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 764);
	// lwz r11,760(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 760);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x824facd8
	goto loc_824FACD8;
loc_824FACD4:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_824FACD8:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x824fb754
	if (ctx.cr6.eq) goto loc_824FB754;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82130e88
	ctx.lr = 0x824FACE8;
	sub_82130E88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cd870
	ctx.lr = 0x824FACF4;
	sub_822CD870(ctx, base);
	// lwz r11,568(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 568);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// b 0x824fad0c
	goto loc_824FAD0C;
loc_824FAD00:
	// stw r4,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r4.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_824FAD0C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fad00
	if (!ctx.cr6.eq) goto loc_824FAD00;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824dcb60
	ctx.lr = 0x824FAD1C;
	sub_824DCB60(ctx, base);
	// lwz r31,568(r15)
	r31.u64 = REX_LOAD_U32(r15.u32 + 568);
	// b 0x824fad38
	goto loc_824FAD38;
loc_824FAD24:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x824dd580
	ctx.lr = 0x824FAD34;
	sub_824DD580(ctx, base);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
loc_824FAD38:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x824fad24
	if (!ctx.cr6.eq) goto loc_824FAD24;
	// lwz r11,756(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 756);
	// lis r10,7
	ctx.r10.s64 = 458752;
	// ori r28,r10,65535
	r28.u64 = ctx.r10.u64 | 65535;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fadec
	if (ctx.cr6.eq) goto loc_824FADEC;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,748(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 748);
	// bl 0x824dcb80
	ctx.lr = 0x824FAD60;
	sub_824DCB80(ctx, base);
	// lwz r11,744(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 744);
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
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
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
loc_824FAD84:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fada0
	if (ctx.cr6.eq) goto loc_824FADA0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// bne cr6,0x824fada4
	if (!ctx.cr6.eq) goto loc_824FADA4;
loc_824FADA0:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_824FADA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fadec
	if (!ctx.cr0.eq) goto loc_824FADEC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82553828
	ctx.lr = 0x824FADB4;
	sub_82553828(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r5,r11,13
	ctx.r5.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r28.u32, ctx.xer);
	// bne cr6,0x824fadc8
	if (!ctx.cr6.eq) goto loc_824FADC8;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_824FADC8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r28.u32, ctx.xer);
	// bne cr6,0x824faddc
	if (!ctx.cr6.eq) goto loc_824FADDC;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
loc_824FADDC:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824dcb88
	ctx.lr = 0x824FADE4;
	sub_824DCB88(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x824fad84
	goto loc_824FAD84;
loc_824FADEC:
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fae58
	if (ctx.cr6.eq) goto loc_824FAE58;
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// divw r4,r11,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// bl 0x824dcb68
	ctx.lr = 0x824FAE0C;
	sub_824DCB68(ctx, base);
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r31,12(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 12);
	// b 0x824fae50
	goto loc_824FAE50;
loc_824FAE18:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r6,r11,31,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq 0x824fae44
	if (ctx.cr0.eq) goto loc_824FAE44;
	// bl 0x824dcb70
	ctx.lr = 0x824FAE40;
	sub_824DCB70(ctx, base);
	// b 0x824fae48
	goto loc_824FAE48;
loc_824FAE44:
	// bl 0x824dcb78
	ctx.lr = 0x824FAE48;
	sub_824DCB78(ctx, base);
loc_824FAE48:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_824FAE50:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x824fae18
	if (ctx.cr6.lt) goto loc_824FAE18;
loc_824FAE58:
	// lwz r29,16(r15)
	r29.u64 = REX_LOAD_U32(r15.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824dcb30
	ctx.lr = 0x824FAE68;
	sub_824DCB30(ctx, base);
	// mr r31,r23
	r31.u64 = r23.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824faed4
	if (ctx.cr6.eq) goto loc_824FAED4;
	// mr r30,r23
	r30.u64 = r23.u64;
loc_824FAE78:
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 12);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r28.u32, ctx.xer);
	// bne cr6,0x824fae94
	if (!ctx.cr6.eq) goto loc_824FAE94;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
loc_824FAE94:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824faea8
	if (ctx.cr6.eq) goto loc_824FAEA8;
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x824faeac
	goto loc_824FAEAC;
loc_824FAEA8:
	// mr r8,r19
	ctx.r8.u64 = r19.u64;
loc_824FAEAC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x824dd578
	ctx.lr = 0x824FAEC4;
	sub_824DD578(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x824fae78
	if (ctx.cr6.lt) goto loc_824FAE78;
loc_824FAED4:
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// b 0x824faf60
	goto loc_824FAF60;
loc_824FAEDC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,114
	ctx.r6.s64 = 114;
	// rlwinm r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x824faefc
	if (ctx.cr6.eq) goto loc_824FAEFC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x824faf5c
	if (!ctx.cr6.eq) goto loc_824FAF5C;
	// li r6,99
	ctx.r6.s64 = 99;
loc_824FAEFC:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r10,28
	ctx.r11.u64 = ctx.r10.u32 & 0xF;
	// beq 0x824faf10
	if (ctx.cr0.eq) goto loc_824FAF10;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// b 0x824faf2c
	goto loc_824FAF2C;
loc_824FAF10:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824faf20
	if (ctx.cr0.eq) goto loc_824FAF20;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// b 0x824faf2c
	goto loc_824FAF2C;
loc_824FAF20:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_824FAF2C:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,30,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FC;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r4,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// rlwinm r8,r4,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// rlwinm r5,r4,17,18,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x3FFF;
	// clrlwi r4,r4,17
	ctx.r4.u64 = ctx.r4.u32 & 0x7FFF;
	// bl 0x824dcb38
	ctx.lr = 0x824FAF5C;
	sub_824DCB38(ctx, base);
loc_824FAF5C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_824FAF60:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(r31.u32, r27.u32, ctx.xer);
	// blt cr6,0x824faedc
	if (ctx.cr6.lt) goto loc_824FAEDC;
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 44);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb210
	if (ctx.cr0.eq) goto loc_824FB210;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fb208
	if (ctx.cr6.eq) goto loc_824FB208;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r11,r11,1280
	ctx.r11.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fb208
	if (ctx.cr0.eq) goto loc_824FB208;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,556(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 556);
	// bl 0x824dcb98
	ctx.lr = 0x824FAF9C;
	sub_824DCB98(ctx, base);
	// mr r17,r25
	r17.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824fb210
	if (ctx.cr6.eq) goto loc_824FB210;
loc_824FAFA8:
	// cmplw cr6,r17,r25
	ctx.cr6.compare<uint32_t>(r17.u32, r25.u32, ctx.xer);
	// beq cr6,0x824fafbc
	if (ctx.cr6.eq) goto loc_824FAFBC;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fb210
	if (!ctx.cr0.eq) goto loc_824FB210;
loc_824FAFBC:
	// lwz r11,68(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb1d4
	if (ctx.cr0.eq) goto loc_824FB1D4;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// addi r31,r17,24
	r31.s64 = r17.s64 + 24;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fafe0
	if (ctx.cr0.eq) goto loc_824FAFE0;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// b 0x824fafec
	goto loc_824FAFEC;
loc_824FAFE0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_824FAFEC:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11392
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11392, ctx.xer);
	// bne cr6,0x824fb014
	if (!ctx.cr6.eq) goto loc_824FB014;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb090
	if (!ctx.cr0.eq) goto loc_824FB090;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_824FB014:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fb090
	if (ctx.cr6.eq) goto loc_824FB090;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x824fb090
	if (!ctx.cr6.eq) goto loc_824FB090;
	// lwz r9,12(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 12);
loc_824FB030:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824fb1fc
	if (ctx.cr6.eq) goto loc_824FB1FC;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fb074
	if (!ctx.cr0.eq) goto loc_824FB074;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fb06c
	if (ctx.cr6.eq) goto loc_824FB06C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fb06c
	if (ctx.cr6.eq) goto loc_824FB06C;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fb074
	if (!ctx.cr0.eq) goto loc_824FB074;
loc_824FB06C:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x824fb030
	goto loc_824FB030;
loc_824FB074:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824fb1fc
	if (ctx.cr6.eq) goto loc_824FB1FC;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// clrlwi r28,r11,20
	r28.u64 = ctx.r11.u32 & 0xFFF;
	// bl 0x824f7ba8
	ctx.lr = 0x824FB088;
	sub_824F7BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x824fb0a0
	goto loc_824FB0A0;
loc_824FB090:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824f7ba8
	ctx.lr = 0x824FB098;
	sub_824F7BA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_824FB0A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb1d4
	if (!ctx.cr0.eq) goto loc_824FB1D4;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fb1d4
	if (ctx.cr0.eq) goto loc_824FB1D4;
loc_824FB0C0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x824fb110
	if (!ctx.cr6.eq) goto loc_824FB110;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB0E4;
	sub_824F71B8(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x824fb110
	if (!ctx.cr6.eq) goto loc_824FB110;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x824fb110
	if (!ctx.cr6.eq) goto loc_824FB110;
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_824FB110:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb12c
	if (!ctx.cr0.eq) goto loc_824FB12C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fb0c0
	if (!ctx.cr6.eq) goto loc_824FB0C0;
loc_824FB12C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fb1d4
	if (ctx.cr6.eq) goto loc_824FB1D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e8f0
	ctx.lr = 0x824FB140;
	sub_8257E8F0(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x824fb1d4
	if (!ctx.cr6.eq) goto loc_824FB1D4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824fb1d4
	if (!ctx.cr6.eq) goto loc_824FB1D4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82423870
	ctx.lr = 0x824FB168;
	sub_82423870(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824fb1d4
	if (ctx.cr0.eq) goto loc_824FB1D4;
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x8269cce0
	ctx.lr = 0x824FB17C;
	sub_8269CCE0(ctx, base);
	// addi r26,r3,1
	r26.s64 = ctx.r3.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e8f0
	ctx.lr = 0x824FB18C;
	sub_8257E8F0(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8257e8f0
	ctx.lr = 0x824FB1A0;
	sub_8257E8F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - r26.u64;
	// bl 0x824dd588
	ctx.lr = 0x824FB1D4;
	sub_824DD588(ctx, base);
loc_824FB1D4:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb1f4
	if (!ctx.cr0.eq) goto loc_824FB1F4;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fafa8
	if (!ctx.cr6.eq) goto loc_824FAFA8;
	// b 0x824fb210
	goto loc_824FB210;
loc_824FB1F4:
	// mr r17,r23
	r17.u64 = r23.u64;
	// b 0x824fb210
	goto loc_824FB210;
loc_824FB1FC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB208;
	sub_824E4368(ctx, base);
loc_824FB208:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82641d78
	ctx.lr = 0x824FB210;
	sub_82641D78(ctx, base);
loc_824FB210:
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 44);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb754
	if (ctx.cr0.eq) goto loc_824FB754;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fb74c
	if (ctx.cr6.eq) goto loc_824FB74C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb74c
	if (ctx.cr0.eq) goto loc_824FB74C;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,560(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 560);
	// bl 0x824dcba0
	ctx.lr = 0x824FB240;
	sub_824DCBA0(ctx, base);
	// mr r17,r25
	r17.u64 = r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// b 0x824fb708
	goto loc_824FB708;
loc_824FB24C:
	// cmplw cr6,r17,r25
	ctx.cr6.compare<uint32_t>(r17.u32, r25.u32, ctx.xer);
	// beq cr6,0x824fb260
	if (ctx.cr6.eq) goto loc_824FB260;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824fb754
	if (!ctx.cr0.eq) goto loc_824FB754;
loc_824FB260:
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb6f0
	if (ctx.cr0.eq) goto loc_824FB6F0;
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 28);
	// beq 0x824fb31c
	if (ctx.cr0.eq) goto loc_824FB31C;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb71c
	if (!ctx.cr0.eq) goto loc_824FB71C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fb71c
	if (ctx.cr0.eq) goto loc_824FB71C;
loc_824FB294:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12032, ctx.xer);
	// bne cr6,0x824fb2c8
	if (!ctx.cr6.eq) goto loc_824FB2C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB2B8;
	sub_824F71B8(ctx, base);
	// addi r11,r27,-8
	ctx.r11.s64 = r27.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fb2e4
	if (!ctx.cr6.eq) goto loc_824FB2E4;
loc_824FB2C8:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb71c
	if (!ctx.cr0.eq) goto loc_824FB71C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fb294
	if (!ctx.cr6.eq) goto loc_824FB294;
loc_824FB2E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824fb71c
	if (ctx.cr6.eq) goto loc_824FB71C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB300;
	sub_824F71B8(ctx, base);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + r27.u64;
	// add r9,r3,r27
	ctx.r9.u64 = ctx.r3.u64 + r27.u64;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// clrlwi r30,r11,20
	r30.u64 = ctx.r11.u32 & 0xFFF;
	// lwz r31,-8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r25,-4(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// b 0x824fb3d0
	goto loc_824FB3D0;
loc_824FB31C:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb728
	if (!ctx.cr0.eq) goto loc_824FB728;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x824fb728
	if (ctx.cr0.eq) goto loc_824FB728;
loc_824FB330:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x824fb378
	if (!ctx.cr6.eq) goto loc_824FB378;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB354;
	sub_824F71B8(ctx, base);
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + r27.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x824fb378
	if (!ctx.cr6.eq) goto loc_824FB378;
	// add r11,r3,r27
	ctx.r11.u64 = ctx.r3.u64 + r27.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824fb394
	if (ctx.cr6.eq) goto loc_824FB394;
loc_824FB378:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb728
	if (!ctx.cr0.eq) goto loc_824FB728;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824fb330
	if (!ctx.cr6.eq) goto loc_824FB330;
loc_824FB394:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824fb728
	if (ctx.cr6.eq) goto loc_824FB728;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB3B0;
	sub_824F71B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r31,-4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r25,-8(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// bl 0x824f7ba8
	ctx.lr = 0x824FB3CC;
	sub_824F7BA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_824FB3D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fb6ec
	if (ctx.cr6.eq) goto loc_824FB6EC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e8f0
	ctx.lr = 0x824FB3E4;
	sub_8257E8F0(ctx, base);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x824fb6ec
	if (!ctx.cr6.eq) goto loc_824FB6EC;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x824fb410
	if (ctx.cr6.eq) goto loc_824FB410;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x824fb6ec
	if (!ctx.cr6.eq) goto loc_824FB6EC;
loc_824FB410:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x8257e9f8
	ctx.lr = 0x824FB41C;
	sub_8257E9F8(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e9f8
	ctx.lr = 0x824FB428;
	sub_8257E9F8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825898c0
	ctx.lr = 0x824FB43C;
	sub_825898C0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82589980
	ctx.lr = 0x824FB444;
	sub_82589980(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x8257e950
	ctx.lr = 0x824FB458;
	sub_8257E950(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e950
	ctx.lr = 0x824FB46C;
	sub_8257E950(ctx, base);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e9f8
	ctx.lr = 0x824FB478;
	sub_8257E9F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8257e9d0
	ctx.lr = 0x824FB488;
	sub_8257E9D0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824fb6e4
	if (!ctx.cr6.eq) goto loc_824FB6E4;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824dcba8
	ctx.lr = 0x824FB4A8;
	sub_824DCBA8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r23
	r31.u64 = r23.u64;
	// bl 0x82589980
	ctx.lr = 0x824FB4B4;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824fb6e4
	if (ctx.cr0.eq) goto loc_824FB6E4;
loc_824FB4BC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x82589980
	ctx.lr = 0x824FB4C8;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824fb4bc
	if (!ctx.cr0.eq) goto loc_824FB4BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fb6e4
	if (ctx.cr6.eq) goto loc_824FB6E4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824dcbb0
	ctx.lr = 0x824FB4E8;
	sub_824DCBB0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82589ac0
	ctx.lr = 0x824FB4F4;
	sub_82589AC0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82589980
	ctx.lr = 0x824FB4FC;
	sub_82589980(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r26,r23
	r26.u64 = r23.u64;
	// bl 0x82589980
	ctx.lr = 0x824FB508;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824fb6e4
	if (ctx.cr0.eq) goto loc_824FB6E4;
loc_824FB510:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824fb734
	if (ctx.cr6.eq) goto loc_824FB734;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e918
	ctx.lr = 0x824FB528;
	sub_8257E918(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x824fb548
	if (ctx.cr6.eq) goto loc_824FB548;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8257e9a8
	ctx.lr = 0x824FB540;
	sub_8257E9A8(ctx, base);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x824fb54c
	goto loc_824FB54C;
loc_824FB548:
	// li r6,55
	ctx.r6.s64 = 55;
loc_824FB54C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824dcbb8
	ctx.lr = 0x824FB564;
	sub_824DCBB8(ctx, base);
	// lwz r11,56(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb6b4
	if (ctx.cr0.eq) goto loc_824FB6B4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r23,108(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r24,r11,r10
	r24.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824dcbc0
	ctx.lr = 0x824FB598;
	sub_824DCBC0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x824fb6b4
	if (ctx.cr6.eq) goto loc_824FB6B4;
loc_824FB5A4:
	// lwz r29,0(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 0);
loc_824FB5A8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x824fb740
	if (ctx.cr6.eq) goto loc_824FB740;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb5c4
	if (!ctx.cr0.eq) goto loc_824FB5C4;
	// lwz r29,4(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 4);
	// b 0x824fb5a8
	goto loc_824FB5A8;
loc_824FB5C4:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824fb614
	if (ctx.cr6.eq) goto loc_824FB614;
	// li r31,0
	r31.s64 = 0;
loc_824FB5D4:
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r31.u8 & 0x3F));
	// rlwimi r10,r11,17,22,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC03);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// clrlwi r7,r10,22
	ctx.r7.u64 = ctx.r10.u32 & 0x3FF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x824dcbc8
	ctx.lr = 0x824FB5F8;
	sub_824DCBC8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824fb5d4
	if (ctx.cr6.lt) goto loc_824FB5D4;
loc_824FB614:
	// lwz r30,4(r27)
	r30.u64 = REX_LOAD_U32(r27.u32 + 4);
loc_824FB618:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824fb6a8
	if (ctx.cr6.eq) goto loc_824FB6A8;
	// lwz r31,16(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824fb698
	if (ctx.cr6.eq) goto loc_824FB698;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb644
	if (!ctx.cr0.eq) goto loc_824FB644;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x824fb648
	if (ctx.cr0.eq) goto loc_824FB648;
loc_824FB644:
	// li r11,0
	ctx.r11.s64 = 0;
loc_824FB648:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb698
	if (ctx.cr0.eq) goto loc_824FB698;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x824fb698
	if (!ctx.cr6.eq) goto loc_824FB698;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824f71b8
	ctx.lr = 0x824FB674;
	sub_824F71B8(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// lwz r11,-16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x824fb698
	if (!ctx.cr6.eq) goto loc_824FB698;
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + r31.u64;
	// lwz r11,-12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x824fb6a0
	if (ctx.cr6.eq) goto loc_824FB6A0;
loc_824FB698:
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// b 0x824fb618
	goto loc_824FB618;
loc_824FB6A0:
	// mr r27,r31
	r27.u64 = r31.u64;
	// b 0x824fb6ac
	goto loc_824FB6AC;
loc_824FB6A8:
	// li r27,0
	r27.s64 = 0;
loc_824FB6AC:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x824fb5a4
	if (ctx.cr6.lt) goto loc_824FB5A4;
loc_824FB6B4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// bl 0x82589980
	ctx.lr = 0x824FB6C0;
	sub_82589980(ctx, base);
	// lwz r16,108(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x824fb510
	if (!ctx.cr0.eq) goto loc_824FB510;
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r23,0
	r23.s64 = 0;
	// lwz r18,104(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r22,1
	r22.s64 = 1;
	// lwz r17,96(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r14,492(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
loc_824FB6E4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825806e8
	ctx.lr = 0x824FB6EC;
	sub_825806E8(ctx, base);
loc_824FB6EC:
	// lwz r25,476(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_824FB6F0:
	// rlwinm r11,r17,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fb714
	if (!ctx.cr0.eq) goto loc_824FB714;
	// mr r17,r11
	r17.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_824FB708:
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// bne cr6,0x824fb24c
	if (!ctx.cr6.eq) goto loc_824FB24C;
	// b 0x824fb754
	goto loc_824FB754;
loc_824FB714:
	// mr r17,r23
	r17.u64 = r23.u64;
	// b 0x824fb754
	goto loc_824FB754;
loc_824FB71C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB728;
	sub_824E4368(ctx, base);
loc_824FB728:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB734;
	sub_824E4368(ctx, base);
loc_824FB734:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB740;
	sub_824E4368(ctx, base);
loc_824FB740:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x824e4368
	ctx.lr = 0x824FB74C;
	sub_824E4368(ctx, base);
loc_824FB74C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824d7fe8
	ctx.lr = 0x824FB754;
	sub_824D7FE8(ctx, base);
loc_824FB754:
	// lwz r11,44(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824fb76c
	if (ctx.cr0.eq) goto loc_824FB76C;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// beq 0x824fb770
	if (ctx.cr0.eq) goto loc_824FB770;
loc_824FB76C:
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_824FB770:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824fb7a4
	if (ctx.cr0.eq) goto loc_824FB7A4;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cd810
	ctx.lr = 0x824FB780;
	sub_822CD810(ctx, base);
	// lwz r11,16(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824fb7a4
	if (ctx.cr6.eq) goto loc_824FB7A4;
	// lwz r3,768(r15)
	ctx.r3.u64 = REX_LOAD_U32(r15.u32 + 768);
	// bl 0x822cdda0
	ctx.lr = 0x824FB794;
	sub_822CDDA0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// lwz r3,16(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 16);
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x824d7fd8
	ctx.lr = 0x824FB7A4;
	sub_824D7FD8(ctx, base);
loc_824FB7A4:
	// stw r18,8(r14)
	REX_STORE_U32(r14.u32 + 8, r18.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r21,12(r14)
	REX_STORE_U32(r14.u32 + 12, r21.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826599E0) {
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
	ctx.lr = 0x826599E8;
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r29,24(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659c70
	if (!ctx.cr6.eq) goto loc_82659C70;
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,400(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 400);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265d740
	ctx.lr = 0x82659A20;
	sub_8265D740(ctx, base);
	// addi r27,r31,380
	r27.s64 = r31.s64 + 380;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82659A30:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659a68
	if (ctx.cr6.eq) goto loc_82659A68;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// bl 0x8264c918
	ctx.lr = 0x82659A54;
	sub_8264C918(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,424
	ctx.r3.s64 = r31.s64 + 424;
	// bl 0x8265d9a0
	ctx.lr = 0x82659A60;
	sub_8265D9A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
loc_82659A68:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x82659a30
	if (ctx.cr6.lt) goto loc_82659A30;
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82659b44
	if (ctx.cr0.eq) goto loc_82659B44;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82659AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82659AB0:
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r29,4
	r29.s64 = 4;
loc_82659AB8:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82659ad0
	if (ctx.cr6.eq) goto loc_82659AD0;
	// li r5,255
	ctx.r5.s64 = 255;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8265dd20
	ctx.lr = 0x82659AD0;
	sub_8265DD20(ctx, base);
loc_82659AD0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82659ab8
	if (!ctx.cr0.eq) goto loc_82659AB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654388
	ctx.lr = 0x82659AE4;
	sub_82654388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// mr r30,r27
	r30.u64 = r27.u64;
	// li r29,4
	r29.s64 = 4;
loc_82659AF4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659b30
	if (ctx.cr6.eq) goto loc_82659B30;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82659B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82659B30:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82659af4
	if (!ctx.cr0.eq) goto loc_82659AF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82659d80
	goto loc_82659D80;
loc_82659B44:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,32(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 28);
	// bl 0x82657648
	ctx.lr = 0x82659B58;
	sub_82657648(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// li r11,31
	ctx.r11.s64 = 31;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// bl 0x8265d750
	ctx.lr = 0x82659B7C;
	sub_8265D750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82659BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82659c58
	if (ctx.cr6.eq) goto loc_82659C58;
	// addi r30,r1,304
	r30.s64 = ctx.r1.s64 + 304;
loc_82659BC4:
	// li r11,169
	ctx.r11.s64 = 169;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8265d760
	ctx.lr = 0x82659BE0;
	sub_8265D760(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,169
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 169, ctx.xer);
	// bne cr6,0x82659c64
	if (!ctx.cr6.eq) goto loc_82659C64;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// addi r11,r8,-42
	ctx.r11.s64 = ctx.r8.s64 + -42;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82659C0C:
	// li r12,42
	ctx.r12.s64 = 42;
	// ldux r9,r11,r12
	ea = ctx.r11.u32 + ctx.r12.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82659c0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82659C0C;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656d70
	ctx.lr = 0x82659C3C;
	sub_82656D70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82659bc4
	if (ctx.cr6.lt) goto loc_82659BC4;
loc_82659C58:
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82659ab0
	if (!ctx.cr6.eq) goto loc_82659AB0;
loc_82659C64:
	// lis r3,-32747
	ctx.r3.s64 = -2146107392;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82659d80
	goto loc_82659D80;
loc_82659C70:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82659cdc
	if (!ctx.cr6.eq) goto loc_82659CDC;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82659cc8
	if (!ctx.cr6.eq) goto loc_82659CC8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654028
	ctx.lr = 0x82659C94;
	sub_82654028(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8265d750
	ctx.lr = 0x82659CB4;
	sub_8265D750(ctx, base);
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// oris r11,r11,80
	ctx.r11.u64 = ctx.r11.u64 | 5242880;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// stw r10,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r10.u32);
loc_82659CC8:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// b 0x82659d80
	goto loc_82659D80;
loc_82659CDC:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x8265d720
	ctx.lr = 0x82659CF0;
	sub_8265D720(ctx, base);
	// lwz r3,400(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 400);
	// bl 0x8265d710
	ctx.lr = 0x82659CF8;
	sub_8265D710(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,400(r31)
	REX_STORE_U32(r31.u32 + 400, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r26,664(r31)
	REX_STORE_U64(r31.u32 + 664, r26.u64);
	// std r26,672(r31)
	REX_STORE_U64(r31.u32 + 672, r26.u64);
	// stw r26,728(r31)
	REX_STORE_U32(r31.u32 + 728, r26.u32);
	// stw r26,732(r31)
	REX_STORE_U32(r31.u32 + 732, r26.u32);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x82652930
	ctx.lr = 0x82659D20;
	sub_82652930(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82659d3c
	if (ctx.cr6.eq) goto loc_82659D3C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82659d3c
	if (ctx.cr6.eq) goto loc_82659D3C;
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x82659d68
	goto loc_82659D68;
loc_82659D3C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x82659d50
	if (ctx.cr6.lt) goto loc_82659D50;
	// lis r30,-32747
	r30.s64 = -2146107392;
	// ori r30,r30,10
	r30.u64 = r30.u64 | 10;
	// b 0x82659d68
	goto loc_82659D68;
loc_82659D50:
	// lis r5,-32761
	ctx.r5.s64 = -2147024896;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r5,r5,1232
	ctx.r5.u64 = ctx.r5.u64 | 1232;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264ff28
	ctx.lr = 0x82659D64;
	sub_8264FF28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82659D68:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659660
	ctx.lr = 0x82659D74;
	sub_82659660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82659d80
	if (ctx.cr0.lt) goto loc_82659D80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82659D80:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8266F510) {
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
	ctx.lr = 0x8266F518;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,132
	r26.s64 = ctx.r3.s64 + 132;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x827938a4
	ctx.lr = 0x8266F530;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,84
	ctx.r11.s64 = r30.s64 + 84;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8266f56c
	if (!ctx.cr6.eq) goto loc_8266F56C;
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f6d8
	if (ctx.cr0.eq) goto loc_8266F6D8;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4106
	ctx.r5.u64 = ctx.r5.u64 | 4106;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82665e68
	ctx.lr = 0x8266F560;
	sub_82665E68(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x826757a0
	ctx.lr = 0x8266F568;
	sub_826757A0(ctx, base);
	// b 0x8266f6d8
	goto loc_8266F6D8;
loc_8266F56C:
	// addi r29,r30,388
	r29.s64 = r30.s64 + 388;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x8266f5a0
	if (!ctx.cr6.eq) goto loc_8266F5A0;
	// lwz r11,428(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 428);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f6d8
	if (ctx.cr0.eq) goto loc_8266F6D8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266c398
	ctx.lr = 0x8266F58C;
	sub_8266C398(ctx, base);
	// li r5,15000
	ctx.r5.s64 = 15000;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82671018
	ctx.lr = 0x8266F59C;
	sub_82671018(ctx, base);
	// b 0x8266f6d8
	goto loc_8266F6D8;
loc_8266F5A0:
	// addi r31,r31,-96
	r31.s64 = r31.s64 + -96;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8266f6ac
	if (ctx.cr0.eq) goto loc_8266F6AC;
	// rlwinm r11,r11,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// beq 0x8266f694
	if (ctx.cr0.eq) goto loc_8266F694;
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// addi r28,r30,240
	r28.s64 = r30.s64 + 240;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x8266f684
	if (ctx.cr6.eq) goto loc_8266F684;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8266f684
	if (ctx.cr0.eq) goto loc_8266F684;
loc_8266F5E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// subf r10,r11,r28
	ctx.r10.u64 = r28.u64 - ctx.r11.u64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, ctx.xer);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x8266f668
	if (ctx.cr6.eq) goto loc_8266F668;
	// lwz r11,292(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 292);
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8266f668
	if (!ctx.cr0.eq) goto loc_8266F668;
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266f668
	if (!ctx.cr0.eq) goto loc_8266F668;
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r10,29,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 136);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8266f650
	if (!ctx.cr0.eq) goto loc_8266F650;
	// lwz r11,152(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266f668
	if (ctx.cr6.eq) goto loc_8266F668;
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8266f668
	if (ctx.cr0.eq) goto loc_8266F668;
loc_8266F650:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4121
	ctx.r5.u64 = ctx.r5.u64 | 4121;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266F664;
	sub_8266BFC8(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8266F668:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8266f5e0
	if (!ctx.cr6.eq) goto loc_8266F5E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8266f684
	if (ctx.cr6.eq) goto loc_8266F684;
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4121
	ctx.r5.u64 = ctx.r5.u64 | 4121;
	// b 0x8266f69c
	goto loc_8266F69C;
loc_8266F684:
	// lwz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 292);
	// rlwinm r11,r11,0,20,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFCFFF;
	// stw r11,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r11.u32);
	// b 0x8266f6ac
	goto loc_8266F6AC;
loc_8266F694:
	// lis r5,-32646
	ctx.r5.s64 = -2139488256;
	// ori r5,r5,4103
	ctx.r5.u64 = ctx.r5.u64 | 4103;
loc_8266F69C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x8266F6AC;
	sub_8266BFC8(ctx, base);
loc_8266F6AC:
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
	// bne 0x8266f6ac
	if (!ctx.cr0.eq) goto loc_8266F6AC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8266f6d8
	if (!ctx.cr6.eq) goto loc_8266F6D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82670cd8
	ctx.lr = 0x8266F6D8;
	sub_82670CD8(ctx, base);
loc_8266F6D8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827938b4
	ctx.lr = 0x8266F6E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826784C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826784D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82661180
	ctx.lr = 0x826784E4;
	sub_82661180(ctx, base);
	// addi r29,r31,172
	r29.s64 = r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x826784F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8267859c
	if (!ctx.cr0.eq) goto loc_8267859C;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8267859c
	if (!ctx.cr0.eq) goto loc_8267859C;
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82678550
	if (ctx.cr6.eq) goto loc_82678550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826775f0
	ctx.lr = 0x82678518;
	sub_826775F0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
loc_82678520:
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
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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
	// bne 0x82678520
	if (!ctx.cr0.eq) goto loc_82678520;
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// li r30,0
	r30.s64 = 0;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// b 0x826785a8
	goto loc_826785A8;
loc_82678550:
	// addi r31,r31,200
	r31.s64 = r31.s64 + 200;
	// b 0x82678590
	goto loc_82678590;
loc_82678558:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-168
	ctx.r3.s64 = ctx.r11.s64 + -168;
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
	// bl 0x8267c840
	ctx.lr = 0x82678584;
	sub_8267C840(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x826785a8
	if (!ctx.cr6.eq) goto loc_826785A8;
loc_82678590:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82678558
	if (!ctx.cr6.eq) goto loc_82678558;
loc_8267859C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_826785A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x826785B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8267E140) {
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
	ctx.lr = 0x8267E148;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,40
	r23.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x827938a4
	ctx.lr = 0x8267E174;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,476
	r29.s64 = r31.s64 + 476;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r31,536
	ctx.r5.s64 = r31.s64 + 536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826825c0
	ctx.lr = 0x8267E190;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e1b8
	if (!ctx.cr0.eq) goto loc_8267E1B8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82682570
	ctx.lr = 0x8267E1A4;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8267e1b8
	if (!ctx.cr0.eq) goto loc_8267E1B8;
	// lis r30,-32646
	r30.s64 = -2139488256;
	// ori r30,r30,4111
	r30.u64 = r30.u64 | 4111;
	// b 0x8267e1d8
	goto loc_8267E1D8;
loc_8267E1B8:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x826845e0
	ctx.lr = 0x8267E1D0;
	sub_826845E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8267e1e4
	if (!ctx.cr0.lt) goto loc_8267E1E4;
loc_8267E1D8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267E1E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8267e1ec
	goto loc_8267E1EC;
loc_8267E1E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8267cae0
	ctx.lr = 0x8267E1EC;
	sub_8267CAE0(ctx, base);
loc_8267E1EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82681C60) {
	REX_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x82680a60
	sub_82680A60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82681D60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82681D68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82681dc0
	if (ctx.cr0.eq) goto loc_82681DC0;
	// addi r30,r3,72
	r30.s64 = ctx.r3.s64 + 72;
loc_82681D88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82681dac
	if (ctx.cr6.eq) goto loc_82681DAC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82681DAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82681DAC:
	// lhz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 328);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82681d88
	if (ctx.cr6.lt) goto loc_82681D88;
loc_82681DC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,330(r31)
	REX_STORE_U16(r31.u32 + 330, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82683D70) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826847F8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r4,4
	ctx.r11.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82684828
	if (ctx.cr6.eq) goto loc_82684828;
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
loc_82684828:
	// addi r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 + 56;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82686598) {
	REX_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82686658) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// bge cr6,0x826866c4
	if (!ctx.cr6.lt) goto loc_826866C4;
	// cmpwi cr6,r11,-256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -256, ctx.xer);
	// blt cr6,0x826866c4
	if (ctx.cr6.lt) goto loc_826866C4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x826866b4
	if (ctx.cr6.lt) goto loc_826866B4;
	// lhz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq cr6,0x826866bc
	if (ctx.cr6.eq) goto loc_826866BC;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826866bc
	if (ctx.cr0.eq) goto loc_826866BC;
loc_826866B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826866BC:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_826866C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82689100) {
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
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82689164
	if (ctx.cr6.lt) goto loc_82689164;
	// beq cr6,0x82689140
	if (ctx.cr6.eq) goto loc_82689140;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82689134
	if (ctx.cr6.lt) goto loc_82689134;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// b 0x8268916c
	goto loc_8268916C;
loc_82689134:
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x827938b4
	ctx.lr = 0x8268913C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8268916c
	goto loc_8268916C;
loc_82689140:
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x827938c4
	ctx.lr = 0x82689148;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// ori r10,r10,16388
	ctx.r10.u64 = ctx.r10.u64 | 16388;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8268916c
	goto loc_8268916C;
loc_82689164:
	// addi r3,r3,232
	ctx.r3.s64 = ctx.r3.s64 + 232;
	// bl 0x827938a4
	ctx.lr = 0x8268916C;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_8268916C:
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

DEFINE_REX_FUNC(sub_8268CAE0) {
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
	ctx.lr = 0x8268CAE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8268c308
	ctx.lr = 0x8268CAF8;
	sub_8268C308(ctx, base);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827941d4
	ctx.lr = 0x8268CB0C;
	__imp__XamVoiceCreate(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// blt 0x8268cb78
	if (ctx.cr0.lt) goto loc_8268CB78;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82691de0
	ctx.lr = 0x8268CB24;
	sub_82691DE0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r27,4(r31)
	REX_STORE_U32(r31.u32 + 4, r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// addi r11,r31,84
	ctx.r11.s64 = r31.s64 + 84;
loc_8268CB44:
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
	// stwcx. r8,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8268cb44
	if (!ctx.cr0.eq) goto loc_8268CB44;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-9980
	ctx.r4.s64 = ctx.r11.s64 + -9980;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x826a1e70
	ctx.lr = 0x8268CB70;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8268cb8c
	if (!ctx.cr6.lt) goto loc_8268CB8C;
loc_8268CB78:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268cb8c
	if (ctx.cr6.eq) goto loc_8268CB8C;
	// bl 0x827941b4
	ctx.lr = 0x8268CB88;
	__imp__XamVoiceClose(ctx, base);
	// stw r27,0(r28)
	REX_STORE_U32(r28.u32 + 0, r27.u32);
loc_8268CB8C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826940F0) {
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
	ctx.lr = 0x826940F8;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// addi r24,r10,24600
	r24.s64 = ctx.r10.s64 + 24600;
	// lfs f0,19812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19812);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,-8896
	ctx.r11.s64 = ctx.r11.s64 + -8896;
	// ble cr6,0x82694138
	if (!ctx.cr6.gt) goto loc_82694138;
	// addi r9,r11,1644
	ctx.r9.s64 = ctx.r11.s64 + 1644;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// b 0x82694144
	goto loc_82694144;
loc_82694138:
	// addi r9,r11,2744
	ctx.r9.s64 = ctx.r11.s64 + 2744;
	// addi r22,r11,48
	r22.s64 = ctx.r11.s64 + 48;
	// addi r10,r24,24
	ctx.r10.s64 = r24.s64 + 24;
loc_82694144:
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r9,r11,3600
	ctx.r9.s64 = ctx.r11.s64 + 3600;
	// addi r8,r11,4324
	ctx.r8.s64 = ctx.r11.s64 + 4324;
	// addi r11,r11,4984
	ctx.r11.s64 = ctx.r11.s64 + 4984;
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// ble cr6,0x82694194
	if (!ctx.cr6.gt) goto loc_82694194;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// subf r9,r22,r20
	ctx.r9.u64 = r20.u64 - r22.u64;
	// subf r8,r22,r8
	ctx.r8.u64 = ctx.r8.u64 - r22.u64;
loc_8269417C:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8269417c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269417C;
loc_82694194:
	// addi r11,r24,48
	ctx.r11.s64 = r24.s64 + 48;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r29,r11,-16
	r29.s64 = ctx.r11.s64 + -16;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f31,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	f31.f64 = double(temp.f32);
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// addi r26,r1,148
	r26.s64 = ctx.r1.s64 + 148;
	// subf r23,r9,r10
	r23.u64 = ctx.r10.u64 - ctx.r9.u64;
loc_826941C4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r10,r23,r27
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + r27.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_826941E0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82694208
	if (!ctx.cr6.gt) goto loc_82694208;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_826941F4:
	// lfsx f13,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bdnz 0x826941f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826941F4;
loc_82694208:
	// stfsu f0,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bne 0x826941e0
	if (!ctx.cr0.eq) goto loc_826941E0;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// bge cr6,0x82694284
	if (!ctx.cr6.lt) goto loc_82694284;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r19,28(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r18,24(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r17,20(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// stw r17,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r17.u32);
	// bl 0x82693e78
	ctx.lr = 0x82694280;
	sub_82693E78(ctx, base);
	// b 0x826942d4
	goto loc_826942D4;
loc_82694284:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82693e08
	ctx.lr = 0x82694298;
	sub_82693E08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subfc r9,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsux f0,r11,r10
	ctx.fpscr.disableFlushMode();
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
loc_826942D4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r24,48
	ctx.r11.s64 = r24.s64 + 48;
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfsu f0,4(r31)
	ea = 4 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r31.u32 = ea;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826941c4
	if (ctx.cr6.lt) goto loc_826941C4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82694350
	if (!ctx.cr6.gt) goto loc_82694350;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// subf r10,r10,r22
	ctx.r10.u64 = r22.u64 - ctx.r10.u64;
	// subf r9,r9,r20
	ctx.r9.u64 = r20.u64 - ctx.r9.u64;
loc_82694338:
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82694338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82694338;
loc_82694350:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(__restgprlr_17) {
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
	// ld r17,-128(r1)
	r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
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

DEFINE_REX_FUNC(__restfpr_26) {
	REX_FUNC_PROLOGUE();
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f26,-48(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_826A38B8) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a36f0
	sub_826A36F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826A3CB0) {
	REX_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f0,19024(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 19024);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 - ctx.f1.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_105) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_123) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_826A4AE8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,-3744(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x826a4b18
	if (!ctx.cr6.eq) goto loc_826A4B18;
	// b 0x826a4bd0
	goto loc_826A4BD0;
loc_826A4B18:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,19080
	ctx.r11.s64 = ctx.r11.s64 + 19080;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a4b78
	if (!ctx.cr6.gt) goto loc_826A4B78;
	// lfd f13,-40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x826a4b44
	if (!ctx.cr6.gt) goto loc_826A4B44;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// b 0x826a4bc8
	goto loc_826A4BC8;
loc_826A4B44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,8312(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * f31.f64;
	// bl 0x826a03b0
	ctx.lr = 0x826A4B54;
	sub_826A03B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,32424(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * f31.f64;
	// b 0x826a4bc8
	goto loc_826A4BC8;
loc_826A4B78:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f12,-16(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f11,16(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f9,8(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,19120(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 19120);
	// lfd f10,19112(r9)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r9.u32 + 19112);
	// lfd f7,3728(r8)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + 3728);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f6.f64, -ctx.f10.f64);
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f9.f64);
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f8.f64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_826A4BC8:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_826A4BD0:
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

DEFINE_REX_FUNC(sub_826AB450) {
	REX_FUNC_PROLOGUE();
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// lfd f4,22032(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = REX_LOAD_U64(ctx.r12.u32 + 22032);
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// lfd f5,22040(r12)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r12.u32 + 22040);
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x826ab490
	if (ctx.cr0.eq) goto loc_826AB490;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	ctx.cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x826ab490
	if (!ctx.cr0.lt) goto loc_826AB490;
	// fcmpu cr0,f1,f4
	ctx.cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x826ab488
	if (ctx.cr0.lt) goto loc_826AB488;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x826ab490
	goto loc_826AB490;
loc_826AB488:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_826AB490:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AE178) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AEFB0) {
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
	ctx.lr = 0x826AEFB8;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r7,r10,102
	ctx.r7.u64 = ctx.r10.u64 & 102;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq 0x826af11c
	if (ctx.cr0.eq) goto loc_826AF11C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826af1ac
	if (ctx.cr6.eq) goto loc_826AF1AC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x826af1ac
	if (!ctx.cr6.eq) goto loc_826AF1AC;
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826af074
	if (ctx.cr0.eq) goto loc_826AF074;
	// bl 0x826a23d0
	ctx.lr = 0x826AF004;
	sub_826A23D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826af074
	if (ctx.cr0.eq) goto loc_826AF074;
	// bl 0x826a3a68
	ctx.lr = 0x826AF010;
	sub_826A3A68(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826af020
	if (!ctx.cr6.eq) goto loc_826AF020;
	// bl 0x826af230
	ctx.lr = 0x826AF020;
	sub_826AF230(ctx, base);
loc_826AF020:
	// bl 0x826a3a68
	ctx.lr = 0x826AF024;
	sub_826A3A68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// bl 0x826a2418
	ctx.lr = 0x826AF030;
	sub_826A2418(ctx, base);
	// lwz r29,0(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a3a68
	ctx.lr = 0x826AF038;
	sub_826A3A68(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, r29.u64);
	// lwz r29,4(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x826a3a68
	ctx.lr = 0x826AF048;
	sub_826A3A68(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// std r29,56(r11)
	REX_STORE_U64(ctx.r11.u32 + 56, r29.u64);
	// lwz r30,8(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x826a3a68
	ctx.lr = 0x826AF058;
	sub_826A3A68(ctx, base);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// std r30,64(r11)
	REX_STORE_U64(ctx.r11.u32 + 64, r30.u64);
	// bl 0x826a23d0
	ctx.lr = 0x826AF064;
	sub_826A23D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a2418
	ctx.lr = 0x826AF070;
	sub_826A2418(ctx, base);
	// b 0x826af1ac
	goto loc_826AF1AC;
loc_826AF074:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a24a8
	ctx.lr = 0x826AF084;
	sub_826A24A8(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826af1ac
	if (ctx.cr6.eq) goto loc_826AF1AC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x826af1ac
	if (ctx.cr6.eq) goto loc_826AF1AC;
	// lwz r30,8(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826af1ac
	if (ctx.cr6.eq) goto loc_826AF1AC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// bl 0x826a2940
	ctx.lr = 0x826AF0BC;
	sub_826A2940(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826a28e8
	ctx.lr = 0x826AF0C4;
	sub_826A28E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826af110
	if (ctx.cr0.eq) goto loc_826AF110;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826af110
	if (ctx.cr6.eq) goto loc_826AF110;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AF0EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x826af108
	goto loc_826AF108;
loc_826AF108:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_826AF110:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// b 0x826af1ac
	goto loc_826AF1AC;
loc_826AF11C:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826af1ac
	if (ctx.cr6.eq) goto loc_826AF1AC;
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826af18c
	if (!ctx.cr6.eq) goto loc_826AF18C;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x826af18c
	if (ctx.cr6.lt) goto loc_826AF18C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x826af18c
	if (!ctx.cr6.gt) goto loc_826AF18C;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826af18c
	if (ctx.cr6.eq) goto loc_826AF18C;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bctrl 
	ctx.lr = 0x826AF188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826af1b0
	goto loc_826AF1B0;
loc_826AF18C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826aecf8
	ctx.lr = 0x826AF1AC;
	sub_826AECF8(ctx, base);
loc_826AF1AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826AF1B0:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_826BD7A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826bd828
	if (ctx.cr6.eq) goto loc_826BD828;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826bd828
	if (ctx.cr6.eq) goto loc_826BD828;
	// lwz r11,528(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bd828
	if (ctx.cr6.eq) goto loc_826BD828;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826BD7D0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x826bd7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826BD7D0;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r7,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,20(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// stw r5,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,68(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 68);
	// stb r7,16(r4)
	REX_STORE_U8(ctx.r4.u32 + 16, ctx.r7.u8);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_826BD828:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826C1B80) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r10,r4,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(60));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x826C1BB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_826C3518) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x82793e24
	__imp__KeSetEvent(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826C3680) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C36AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,224(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// or r7,r9,r30
	ctx.r7.u64 = ctx.r9.u64 | r30.u64;
	// stw r7,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r7.u32);
	// lwz r6,20(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x826C36CC;
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

DEFINE_REX_FUNC(sub_826C7270) {
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
	ctx.lr = 0x826C7278;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lhz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x826c6cf0
	ctx.lr = 0x826C72AC;
	sub_826C6CF0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7480
	if (ctx.cr6.lt) goto loc_826C7480;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r26,1
	r26.s64 = 1;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x826c72e8
	if (!ctx.cr6.eq) goto loc_826C72E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x826c74dc
	if (ctx.cr6.eq) goto loc_826C74DC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826c74dc
	if (!ctx.cr6.eq) goto loc_826C74DC;
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r26.u32);
loc_826C72E8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c6880
	ctx.lr = 0x826C72FC;
	sub_826C6880(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7480
	if (ctx.cr6.lt) goto loc_826C7480;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_826C731C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x826c731c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826C731C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,56(r10)
	REX_STORE_U32(ctx.r10.u32 + 56, r30.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x826c73d0
	if (ctx.cr6.eq) goto loc_826C73D0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c6880
	ctx.lr = 0x826C7354;
	sub_826C6880(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7480
	if (ctx.cr6.lt) goto loc_826C7480;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r30.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6880
	ctx.lr = 0x826C738C;
	sub_826C6880(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7480
	if (ctx.cr6.lt) goto loc_826C7480;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826a1e70
	ctx.lr = 0x826C73B0;
	sub_826A1E70(ctx, base);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// stw r4,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
loc_826C73D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lhz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 4);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// sth r6,8(r8)
	REX_STORE_U16(ctx.r8.u32 + 8, ctx.r6.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r8.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,52(r6)
	REX_STORE_U32(ctx.r6.u32 + 52, r30.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, r30.u32);
	// ld r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 24);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r4,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r4.u64);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ble cr6,0x826c7508
	if (!ctx.cr6.gt) goto loc_826C7508;
	// lwz r10,44(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 44);
	// rotlwi r11,r7,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826c7508
	if (ctx.cr6.eq) goto loc_826C7508;
	// lis r28,-32688
	r28.s64 = -2142240768;
	// ori r28,r28,214
	r28.u64 = r28.u64 | 214;
loc_826C7480:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c749c
	if (ctx.cr6.eq) goto loc_826C749C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c68d8
	ctx.lr = 0x826C749C;
	sub_826C68D8(ctx, base);
loc_826C749C:
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x826c74d0
	if (ctx.cr6.eq) goto loc_826C74D0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826c74c0
	if (ctx.cr6.eq) goto loc_826C74C0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x826c68d8
	ctx.lr = 0x826C74C0;
	sub_826C68D8(ctx, base);
loc_826C74C0:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x826c68d8
	ctx.lr = 0x826C74D0;
	sub_826C68D8(ctx, base);
loc_826C74D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826C74DC:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826C74F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826c7480
	if (ctx.cr6.lt) goto loc_826C7480;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
loc_826C7508:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x826c7548
	if (!ctx.cr6.eq) goto loc_826C7548;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r8.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x826c7568
	goto loc_826C7568;
loc_826C7548:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r11.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r7,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_826C7568:
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lwz r8,48(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// std r11,32(r29)
	REX_STORE_U64(r29.u32 + 32, ctx.r11.u64);
	// bne cr6,0x826c74d0
	if (!ctx.cr6.eq) goto loc_826C74D0;
	// std r11,40(r29)
	REX_STORE_U64(r29.u32 + 40, ctx.r11.u64);
	// stw r26,48(r29)
	REX_STORE_U32(r29.u32 + 48, r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826DFA80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826DFA88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826dfab4
	if (!ctx.cr6.eq) goto loc_826DFAB4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_826DFAB4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826dfb90
	if (ctx.cr6.eq) goto loc_826DFB90;
loc_826DFAC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826dfb90
	if (ctx.cr6.eq) goto loc_826DFB90;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bge cr6,0x826dfb90
	if (!ctx.cr6.lt) goto loc_826DFB90;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x826DFAF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfb90
	if (ctx.cr6.lt) goto loc_826DFB90;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826dfb40
	if (ctx.cr6.eq) goto loc_826DFB40;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x826dfb48
	goto loc_826DFB48;
loc_826DFB40:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_826DFB48:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bne 0x826dfb64
	if (!ctx.cr0.eq) goto loc_826DFB64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
loc_826DFB64:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x826c68d8
	ctx.lr = 0x826DFB74;
	sub_826C68D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826dfb90
	if (ctx.cr6.lt) goto loc_826DFB90;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826dfac8
	if (!ctx.cr6.eq) goto loc_826DFAC8;
loc_826DFB90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826E6D98) {
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
	ctx.lr = 0x826E6DA0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r30,-5
	r30.s64 = -5;
	// addi r29,r11,12488
	r29.s64 = ctx.r11.s64 + 12488;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f31,10608(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
loc_826E6DC4:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x8269f778
	ctx.lr = 0x826E6DDC;
	sub_8269F778(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e6dc4
	if (ctx.cr6.lt) goto loc_826E6DC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,80
	r31.s64 = r29.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,8516(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8516);
	f30.f64 = double(temp.f32);
loc_826E6E08:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x8269f778
	ctx.lr = 0x826E6E28;
	sub_8269F778(ctx, base);
	// addi r11,r29,80
	ctx.r11.s64 = r29.s64 + 80;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x826e6e08
	if (ctx.cr6.lt) goto loc_826E6E08;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826F0DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826F0DB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x826f0e4c
	if (!ctx.cr6.eq) goto loc_826F0E4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x826e58b8
	ctx.lr = 0x826F0DF4;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0edc
	if (ctx.cr6.lt) goto loc_826F0EDC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x826f0e28
	if (!ctx.cr6.eq) goto loc_826F0E28;
	// li r11,-64
	ctx.r11.s64 = -64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_826F0E28:
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r10,-32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
	// ble cr6,0x826f0e44
	if (!ctx.cr6.gt) goto loc_826F0E44;
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// blt cr6,0x826f0e4c
	if (ctx.cr6.lt) goto loc_826F0E4C;
loc_826F0E44:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_826F0E4C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f0edc
	if (ctx.cr6.eq) goto loc_826F0EDC;
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
loc_826F0E5C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826F0E6C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826f0edc
	if (ctx.cr6.lt) goto loc_826F0EDC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,296(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 296);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x826f0eb4
	if (!ctx.cr6.eq) goto loc_826F0EB4;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x826f0ecc
	if (ctx.cr6.lt) goto loc_826F0ECC;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826f0e5c
	if (!ctx.cr6.eq) goto loc_826F0E5C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826F0EB4:
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r8.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_826F0ECC:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// li r11,62
	ctx.r11.s64 = 62;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// stw r11,296(r30)
	REX_STORE_U32(r30.u32 + 296, ctx.r11.u32);
loc_826F0EDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826F9200) {
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
	ctx.lr = 0x826F9208;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,-21728
	ctx.r8.s64 = ctx.r10.s64 + -21728;
	// addi r7,r9,-21744
	ctx.r7.s64 = ctx.r9.s64 + -21744;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x826f932c
	if (ctx.cr6.eq) goto loc_826F932C;
	// clrlwi r30,r5,16
	r30.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x826f95b0
	if (!ctx.cr6.gt) goto loc_826F95B0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f13,3720(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,3716(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
loc_826F9254:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x826f9314
	if (!ctx.cr6.gt) goto loc_826F9314;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
loc_826F9274:
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r9,r10,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfsx f0,r9,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x826f92c0
	if (!ctx.cr6.lt) goto loc_826F92C0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x826f92e4
	if (!ctx.cr6.lt) goto loc_826F92E4;
	// b 0x826f92e0
	goto loc_826F92E0;
loc_826F92C0:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// slw r9,r5,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826f92e4
	if (!ctx.cr6.gt) goto loc_826F92E4;
loc_826F92E0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_826F92E4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// stb r9,5(r8)
	REX_STORE_U8(ctx.r8.u32 + 5, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 8;
	// stb r11,4(r8)
	REX_STORE_U8(ctx.r8.u32 + 4, ctx.r11.u8);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// stbu r9,3(r8)
	ea = 3 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r8.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826f9274
	if (ctx.cr6.lt) goto loc_826F9274;
loc_826F9314:
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// extsh r31,r10
	r31.s64 = ctx.r10.s16;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// blt cr6,0x826f9254
	if (ctx.cr6.lt) goto loc_826F9254;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d04
	return;
loc_826F932C:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// extsh r30,r10
	r30.s64 = ctx.r10.s16;
	// subf r8,r30,r11
	ctx.r8.u64 = ctx.r11.u64 - r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// extsh r29,r8
	r29.s64 = ctx.r8.s16;
	// ble cr6,0x826f9464
	if (!ctx.cr6.gt) goto loc_826F9464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
loc_826F9354:
	// lwz r5,320(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,-64
	r28.s64 = ctx.r1.s64 + -64;
	// addi r27,r1,-64
	r27.s64 = ctx.r1.s64 + -64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lwz r8,60(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r31,1836(r5)
	r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 1836);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// stfs f0,-64(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-56(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f12,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f11,-52(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// lvx128 v61,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaxfp128 v60,v63,v61
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vminfp128 v59,v62,v60
	simde_mm_store_ps(ctx.v59.f32, simde_mm_min_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// stvx128 v59,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-56(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-52(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-64(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,-60(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -60);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f5,f10
	ctx.f5.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f5,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f5.u64);
	// lwz r8,-76(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f4,f9
	ctx.f4.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f4,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f4.u64);
	// lwz r5,-76(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f3,f8
	ctx.f3.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f3,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f3.u64);
	// lwz r31,-76(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f6.u64);
	// lwz r28,-76(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// srawi r9,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	ctx.r9.s64 = r28.s32 >> 8;
	// srawi r27,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r27.s64 = ctx.r9.s32 >> 8;
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stb r28,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r28.u8);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// stb r27,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r27.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r28,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r28.s64 = ctx.r9.s32 >> 8;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// srawi r9,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r5.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r28,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, r28.u8);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// srawi r9,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r9.s64 = r31.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
	// srawi r31,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	r31.s64 = ctx.r9.s32 >> 8;
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// stb r9,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// stbu r31,3(r11)
	ea = 3 + ctx.r11.u32;
	REX_STORE_U8(ea, r31.u8);
	ctx.r11.u32 = ea;
	// blt cr6,0x826f9354
	if (ctx.cr6.lt) goto loc_826F9354;
loc_826F9464:
	// extsh r11,r29
	ctx.r11.s64 = r29.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826f95b0
	if (ctx.cr6.eq) goto loc_826F95B0;
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,110(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r8,60(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,3716(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3716);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,3720
	ctx.r11.s64 = ctx.r11.s64 + 3720;
	// lfsx f13,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x826f94d4
	if (!ctx.cr6.lt) goto loc_826F94D4;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// slw r11,r5,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f94f8
	if (!ctx.cr6.lt) goto loc_826F94F8;
	// b 0x826f94f4
	goto loc_826F94F4;
loc_826F94D4:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f11.u64);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f94f8
	if (!ctx.cr6.gt) goto loc_826F94F8;
loc_826F94F4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826F94F8:
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// stbx r10,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u8);
	// stb r31,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r31.u8);
	// stb r30,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r30.u8);
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// lwz r10,1836(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1836);
	// lfsx f13,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x826f9568
	if (!ctx.cr6.lt) goto loc_826F9568;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x826f958c
	if (!ctx.cr6.lt) goto loc_826F958C;
	// b 0x826f9588
	goto loc_826F9588;
loc_826F9568:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfd f13,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f13.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x826f958c
	if (!ctx.cr6.gt) goto loc_826F958C;
loc_826F9588:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_826F958C:
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r6,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_826F95B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82725628) {
	REX_FUNC_PROLOGUE();
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827257B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_827257C8:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x827257c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827257C8;
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82725A90) {
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
	// addi r30,r3,24
	r30.s64 = ctx.r3.s64 + 24;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// bl 0x82716b40
	ctx.lr = 0x82725AC8;
	sub_82716B40(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,15504(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15504);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82725b34
	if (!ctx.cr6.eq) goto loc_82725B34;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82725b34
	if (ctx.cr6.eq) goto loc_82725B34;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82716398
	ctx.lr = 0x82725B00;
	sub_82716398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82725b10
	if (ctx.cr6.eq) goto loc_82725B10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82725B10:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82725b4c
	if (ctx.cr6.eq) goto loc_82725B4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x827257d8
	ctx.lr = 0x82725B30;
	sub_827257D8(ctx, base);
	// b 0x82725b4c
	goto loc_82725B4C;
loc_82725B34:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_82725B4C:
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

DEFINE_REX_FUNC(sub_8272C4A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8272C4B0;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// li r28,1
	r28.s64 = 1;
	// rlwinm r29,r11,0,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// subf r30,r10,r6
	r30.u64 = ctx.r6.u64 - ctx.r10.u64;
	// ble cr6,0x8272c958
	if (!ctx.cr6.gt) goto loc_8272C958;
loc_8272C4D4:
	// lwz r10,60(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// lbzx r6,r9,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8272c4fc
	if (!ctx.cr6.eq) goto loc_8272C4FC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, r31.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8272c950
	goto loc_8272C950;
loc_8272C4FC:
	// cmplwi cr6,r6,255
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 255, ctx.xer);
	// bne cr6,0x8272c7ac
	if (!ctx.cr6.eq) goto loc_8272C7AC;
	// lwz r8,68(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r8,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 20;
	// add. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c550
	if (ctx.cr0.lt) goto loc_8272C550;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c550
	if (!ctx.cr6.lt) goto loc_8272C550;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c554
	goto loc_8272C554;
loc_8272C550:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C554:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c5a4
	if (ctx.cr0.lt) goto loc_8272C5A4;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c5a4
	if (!ctx.cr6.lt) goto loc_8272C5A4;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c5a8
	goto loc_8272C5A8;
loc_8272C5A4:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C5A8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c5f8
	if (ctx.cr0.lt) goto loc_8272C5F8;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c5f8
	if (!ctx.cr6.lt) goto loc_8272C5F8;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c5fc
	goto loc_8272C5FC;
loc_8272C5F8:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C5FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c64c
	if (ctx.cr0.lt) goto loc_8272C64C;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c64c
	if (!ctx.cr6.lt) goto loc_8272C64C;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c650
	goto loc_8272C650;
loc_8272C64C:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C650:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c6a0
	if (ctx.cr0.lt) goto loc_8272C6A0;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c6a0
	if (!ctx.cr6.lt) goto loc_8272C6A0;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c6a4
	goto loc_8272C6A4;
loc_8272C6A0:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C6A4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c6f4
	if (ctx.cr0.lt) goto loc_8272C6F4;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c6f4
	if (!ctx.cr6.lt) goto loc_8272C6F4;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c6f8
	goto loc_8272C6F8;
loc_8272C6F4:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C6F8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c748
	if (ctx.cr0.lt) goto loc_8272C748;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c748
	if (!ctx.cr6.lt) goto loc_8272C748;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// b 0x8272c74c
	goto loc_8272C74C;
loc_8272C748:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C74C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// srawi r10,r6,20
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c7a0
	if (ctx.cr0.lt) goto loc_8272C7A0;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c7a0
	if (!ctx.cr6.lt) goto loc_8272C7A0;
	// lwz r7,64(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r6,0(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r6,r10
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r9,r10,r4
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8272c950
	goto loc_8272C950;
loc_8272C7A0:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8272c950
	goto loc_8272C950;
loc_8272C7AC:
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8272C7BC:
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272c810
	if (ctx.cr6.eq) goto loc_8272C810;
	// lwz r9,68(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// add. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8272c810
	if (ctx.cr0.lt) goto loc_8272C810;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c810
	if (!ctx.cr6.lt) goto loc_8272C810;
	// lwz r27,64(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x8272c814
	goto loc_8272C814;
loc_8272C810:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C814:
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// and r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8272c874
	if (ctx.cr6.eq) goto loc_8272C874;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// srawi r11,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 20;
	// add. r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8272c874
	if (ctx.cr0.lt) goto loc_8272C874;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c874
	if (!ctx.cr6.lt) goto loc_8272C874;
	// lwz r27,64(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwzx r11,r27,r10
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + ctx.r10.u32);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stbx r8,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x8272c878
	goto loc_8272C878;
loc_8272C874:
	// stbx r31,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, r31.u8);
loc_8272C878:
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// and r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272c8d8
	if (ctx.cr6.eq) goto loc_8272C8D8;
	// lwz r9,68(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// add. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8272c8d8
	if (ctx.cr0.lt) goto loc_8272C8D8;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c8d8
	if (!ctx.cr6.lt) goto loc_8272C8D8;
	// lwz r27,64(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwzx r9,r27,r11
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stbx r8,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x8272c8dc
	goto loc_8272C8DC;
loc_8272C8D8:
	// stbx r31,r10,r3
	REX_STORE_U8(ctx.r10.u32 + ctx.r3.u32, r31.u8);
loc_8272C8DC:
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// and r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8272c93c
	if (ctx.cr6.eq) goto loc_8272C93C;
	// lwz r10,68(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// srawi r10,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 20;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8272c93c
	if (ctx.cr0.lt) goto loc_8272C93C;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c93c
	if (!ctx.cr6.lt) goto loc_8272C93C;
	// lwz r27,64(r5)
	r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// lwzx r10,r27,r11
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r8,r8,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// stbx r8,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x8272c940
	goto loc_8272C940;
loc_8272C93C:
	// stbx r31,r9,r3
	REX_STORE_U8(ctx.r9.u32 + ctx.r3.u32, r31.u8);
loc_8272C940:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// bdnz 0x8272c7bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8272C7BC;
loc_8272C950:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r29.s32, ctx.xer);
	// blt cr6,0x8272c4d4
	if (ctx.cr6.lt) goto loc_8272C4D4;
loc_8272C958:
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r7,r29
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r29.s32, ctx.xer);
	// beq cr6,0x8272c9f0
	if (ctx.cr6.eq) goto loc_8272C9F0;
	// lwz r10,60(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// bge cr6,0x8272c9f0
	if (!ctx.cr6.lt) goto loc_8272C9F0;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8272C980:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r9.u8 & 0x3F));
	// and r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8272c9d8
	if (ctx.cr6.eq) goto loc_8272C9D8;
	// lwz r9,68(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// lwz r8,12(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// mullw r9,r9,r30
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// add. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8272c9d8
	if (ctx.cr0.lt) goto loc_8272C9D8;
	// lwz r8,4(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8272c9d8
	if (!ctx.cr6.lt) goto loc_8272C9D8;
	// lwz r29,64(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// mullw r8,r7,r9
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// lwzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r4
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// b 0x8272c9dc
	goto loc_8272C9DC;
loc_8272C9D8:
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
loc_8272C9DC:
	// lwz r7,0(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8272c980
	if (ctx.cr6.lt) goto loc_8272C980;
loc_8272C9F0:
	// add r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 + ctx.r3.u64;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8274E800) {
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
	ctx.lr = 0x8274E808;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r27,r8,30
	r27.u64 = ctx.r8.u32 & 0x3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// clrlwi r25,r7,30
	r25.u64 = ctx.r7.u32 & 0x3;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x8274e878
	if (!ctx.cr6.eq) goto loc_8274E878;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x8274e878
	if (!ctx.cr6.eq) goto loc_8274E878;
	// li r31,16
	r31.s64 = 16;
loc_8274E850:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8274E860;
	sub_826A1E70(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r26,r26,r29
	r26.u64 = r26.u64 + r29.u64;
	// add r28,r28,r30
	r28.u64 = r28.u64 + r30.u64;
	// bne 0x8274e850
	if (!ctx.cr0.eq) goto loc_8274E850;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8274E878:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8274e8c4
	if (!ctx.cr6.eq) goto loc_8274E8C4;
	// lwz r3,3156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 3156);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,3928(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r10,456(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 456);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x8274E8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_8274E8C4:
	// lwz r11,3168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3168);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r9,3928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274E8EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3168);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r9,3928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// bctrl 
	ctx.lr = 0x8274E914;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,3928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r26,r10,r26
	r26.u64 = ctx.r10.u64 + r26.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,3168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274E94C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3168);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r9,3928(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3928);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r26,8
	ctx.r5.s64 = r26.s64 + 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274E974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8275B2D0) {
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
	ctx.lr = 0x8275B2D8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3740);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r18,128(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r17,132(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8275b300
	if (!ctx.cr6.eq) goto loc_8275B300;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_8275B300:
	// lwz r7,3740(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3740);
	// lwz r10,15660(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15660);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r24,r10,r4
	r24.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r8,220(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,15924(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15924);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r25,r8,r9
	r25.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r22,r7,r11
	r22.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq cr6,0x8275b3c0
	if (ctx.cr6.eq) goto loc_8275B3C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,156(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r29,160(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x826fb050
	ctx.lr = 0x8275B348;
	sub_826FB050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275b358
	if (ctx.cr6.eq) goto loc_8275B358;
	// lwz r28,15340(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// lwz r29,15344(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 15344);
loc_8275B358:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8275b544
	if (ctx.cr6.eq) goto loc_8275B544;
loc_8275B364:
	// lwz r11,15924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15924);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275B384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,108(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 108);
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r10,15652(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mullw r11,r8,r7
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// add r25,r9,r25
	r25.u64 = ctx.r9.u64 + r25.u64;
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// blt cr6,0x8275b364
	if (ctx.cr6.lt) goto loc_8275B364;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
loc_8275B3C0:
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// beq cr6,0x8275b544
	if (ctx.cr6.eq) goto loc_8275B544;
loc_8275B3CC:
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8275b51c
	if (ctx.cr6.eq) goto loc_8275B51C;
	// addi r20,r18,-1
	r20.s64 = r18.s64 + -1;
	// addi r19,r17,-1
	r19.s64 = r17.s64 + -1;
	// subf r23,r26,r22
	r23.u64 = r22.u64 - r26.u64;
loc_8275B3F0:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8275b430
	if (ctx.cr6.eq) goto loc_8275B430;
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8275b430
	if (ctx.cr6.eq) goto loc_8275B430;
	// lwz r11,15904(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15904);
	// add r7,r23,r30
	ctx.r7.u64 = r23.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r10,15652(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15652);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8275B42C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8275b500
	goto loc_8275B500;
loc_8275B430:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb050
	ctx.lr = 0x8275B438;
	sub_826FB050(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8275b47c
	if (ctx.cr6.eq) goto loc_8275B47C;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8275b450
	if (ctx.cr6.eq) goto loc_8275B450;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8275b460
	goto loc_8275B460;
loc_8275B450:
	// lwz r10,15348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15348);
	// lwz r11,15340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15340);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8275B460:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8275b470
	if (ctx.cr6.eq) goto loc_8275B470;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8275b4d4
	goto loc_8275B4D4;
loc_8275B470:
	// lwz r11,15352(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15352);
	// lwz r9,15344(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15344);
	// b 0x8275b4b4
	goto loc_8275B4B4;
loc_8275B47C:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(r27.u32, r20.u32, ctx.xer);
	// beq cr6,0x8275b48c
	if (ctx.cr6.eq) goto loc_8275B48C;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x8275b49c
	goto loc_8275B49C;
loc_8275B48C:
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
loc_8275B49C:
	// cmplw cr6,r21,r19
	ctx.cr6.compare<uint32_t>(r21.u32, r19.u32, ctx.xer);
	// beq cr6,0x8275b4ac
	if (ctx.cr6.eq) goto loc_8275B4AC;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8275b4d4
	goto loc_8275B4D4;
loc_8275B4AC:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lwz r9,160(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_8275B4B4:
	// srawi r8,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r8.u64;
	// subfic r11,r6,16
	ctx.xer.ca = ctx.r6.u32 <= 16;
	ctx.r11.u64 = static_cast<uint64_t>(16) - ctx.r6.u64;
	// srawi r5,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 31;
	// xor r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8275B4D4:
	// lwz r16,15908(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 15908);
	// add r7,r23,r30
	ctx.r7.u64 = r23.u64 + r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,108(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 108);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 96);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r16
	ctx.ctr.u64 = r16.u64;
	// bctrl 
	ctx.lr = 0x8275B500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8275B500:
	// lwz r11,15664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15664);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// cmplw cr6,r27,r18
	ctx.cr6.compare<uint32_t>(r27.u32, r18.u32, ctx.xer);
	// blt cr6,0x8275b3f0
	if (ctx.cr6.lt) goto loc_8275B3F0;
loc_8275B51C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r10,15676(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15676);
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r25,r25,r9
	r25.u64 = r25.u64 + ctx.r9.u64;
	// add r22,r11,r22
	r22.u64 = ctx.r11.u64 + r22.u64;
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// cmplw cr6,r21,r17
	ctx.cr6.compare<uint32_t>(r21.u32, r17.u32, ctx.xer);
	// blt cr6,0x8275b3cc
	if (ctx.cr6.lt) goto loc_8275B3CC;
loc_8275B544:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82768F28) {
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
	ctx.lr = 0x82768F30;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r4)
	r20.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r8,486
	ctx.r11.s64 = ctx.r8.s64 + 486;
	// li r25,0
	r25.s64 = 0;
	// lwz r24,312(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r23,316(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 8);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r14,0(r20)
	r14.u64 = REX_LOAD_U32(r20.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// lwz r19,28(r20)
	r19.u64 = REX_LOAD_U32(r20.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r18,32(r20)
	r18.u64 = REX_LOAD_U32(r20.u32 + 32);
	// addi r17,r11,1
	r17.s64 = ctx.r11.s64 + 1;
	// lwz r15,4(r20)
	r15.u64 = REX_LOAD_U32(r20.u32 + 4);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stwx r25,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r25.u32);
	// beq cr6,0x8276924c
	if (ctx.cr6.eq) goto loc_8276924C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r16,-1
	r16.s64 = -1;
	// ori r21,r11,32768
	r21.u64 = ctx.r11.u64 | 32768;
	// b 0x82768fa0
	goto loc_82768FA0;
loc_82768F9C:
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82768FA0:
	// lbz r4,8(r14)
	ctx.r4.u64 = REX_LOAD_U8(r14.u32 + 8);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r10,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r10.u64 = static_cast<uint64_t>(64) - ctx.r4.u64;
	// lwz r29,0(r14)
	r29.u64 = REX_LOAD_U32(r14.u32 + 0);
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
	// blt cr6,0x82769098
	if (ctx.cr6.lt) goto loc_82769098;
	// clrlwi r10,r30,28
	ctx.r10.u64 = r30.u32 & 0xF;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// sld r8,r11,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// sradi r6,r8,63
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s64 >> 63;
	// addic. r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicr r5,r8,1,62
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// extsw r29,r6
	r29.s64 = ctx.r6.s32;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// std r5,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r5.u64);
	// bge 0x82769090
	if (!ctx.cr0.lt) goto loc_82769090;
loc_82768FF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82769024
	if (ctx.cr6.lt) goto loc_82769024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82769014;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82768ff8
	if (ctx.cr6.eq) goto loc_82768FF8;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827690e8
	goto loc_827690E8;
loc_82769024:
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
loc_82769090:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827690e8
	goto loc_827690E8;
loc_82769098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827690A0;
	sub_82725F80(ctx, base);
loc_827690A0:
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
	ctx.lr = 0x827690B8;
	sub_82725F80(ctx, base);
	// add r10,r30,r21
	ctx.r10.u64 = r30.u64 + r21.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827690a0
	if (ctx.cr6.lt) goto loc_827690A0;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sradi r10,r11,63
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0x7FFFFFFFFFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s64 >> 63;
	// extsw r29,r10
	r29.s64 = ctx.r10.s32;
	// bl 0x82725f80
	ctx.lr = 0x827690E8;
	sub_82725F80(ctx, base);
loc_827690E8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lbzx r4,r11,r18
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r18.u32);
	// lbzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r19.u32);
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + r28.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// xor r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 ^ r29.u64;
	// lbzx r11,r8,r22
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + r22.u32);
	// subf r10,r29,r9
	ctx.r10.u64 = ctx.r9.u64 - r29.u64;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// or r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 | ctx.r11.u64;
	// or r25,r6,r25
	r25.u64 = ctx.r6.u64 | r25.u64;
	// bge cr6,0x82769134
	if (!ctx.cr6.lt) goto loc_82769134;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r9,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + r26.u32);
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// sthx r3,r9,r26
	REX_STORE_U16(ctx.r9.u32 + r26.u32, ctx.r3.u16);
	// b 0x82769188
	goto loc_82769188;
loc_82769134:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82769158
	if (!ctx.cr6.eq) goto loc_82769158;
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r9,r26
	ctx.r6.u64 = REX_LOAD_U16(ctx.r9.u32 + r26.u32);
	// add r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 + ctx.r10.u64;
	// sthx r3,r9,r26
	REX_STORE_U16(ctx.r9.u32 + r26.u32, ctx.r3.u16);
	// b 0x82769188
	goto loc_82769188;
loc_82769158:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x82769178
	if (!ctx.cr6.gt) goto loc_82769178;
	// lwz r6,1760(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// mullw r9,r10,r24
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// stwx r9,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x82769188
	goto loc_82769188;
loc_82769178:
	// lwz r9,1760(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// mullw r6,r10,r24
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// subf r6,r23,r6
	ctx.r6.u64 = ctx.r6.u64 - r23.u64;
	// stwx r6,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
loc_82769188:
	// subf r6,r7,r15
	ctx.r6.u64 = r15.u64 - ctx.r7.u64;
	// addi r28,r8,1
	r28.s64 = ctx.r8.s64 + 1;
	// cntlzw r3,r6
	ctx.r3.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subfc r9,r17,r7
	ctx.xer.ca = ctx.r7.u32 >= r17.u32;
	ctx.r9.u64 = ctx.r7.u64 - r17.u64;
	// li r8,64
	ctx.r8.s64 = 64;
	// subfze r6,r16
	temp.u8 = ~r16.u32 + ctx.xer.ca < ~r16.u32;
	ctx.r6.u64 = ~r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// subfc r9,r8,r28
	ctx.xer.ca = r28.u32 >= ctx.r8.u32;
	ctx.r9.u64 = r28.u64 - ctx.r8.u64;
	// or r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 | ctx.r3.u64;
	// subfze r6,r16
	temp.u8 = ~r16.u32 + ctx.xer.ca < ~r16.u32;
	ctx.r6.u64 = ~r16.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r3,r8,r6
	ctx.r3.u64 = ctx.r8.u64 | ctx.r6.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82768fa0
	if (ctx.cr6.eq) goto loc_82768FA0;
	// cmpw cr6,r7,r15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r15.s32, ctx.xer);
	// bne cr6,0x8276924c
	if (!ctx.cr6.eq) goto loc_8276924C;
	// subf r9,r4,r28
	ctx.r9.u64 = r28.u64 - ctx.r4.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bge cr6,0x827691ec
	if (!ctx.cr6.lt) goto loc_827691EC;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + r26.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r26
	REX_STORE_U16(ctx.r11.u32 + r26.u32, ctx.r7.u16);
	// b 0x82769220
	goto loc_82769220;
loc_827691EC:
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82769210
	if (!ctx.cr6.eq) goto loc_82769210;
	// addi r11,r5,8
	ctx.r11.s64 = ctx.r5.s64 + 8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r26
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + r26.u32);
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
	// sthx r7,r11,r26
	REX_STORE_U16(ctx.r11.u32 + r26.u32, ctx.r7.u16);
	// b 0x82769220
	goto loc_82769220;
loc_82769210:
	// lwz r10,1760(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82769220:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,300(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// neg r7,r29
	ctx.r7.s64 = static_cast<int64_t>(-r29.u64);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82768658
	ctx.lr = 0x82769240;
	sub_82768658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r17.u32, ctx.xer);
	// blt cr6,0x82768f9c
	if (ctx.cr6.lt) goto loc_82768F9C;
loc_8276924C:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82769254:
	// lhzx r10,r10,r26
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + r26.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r7,1760(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// mullw r8,r5,r24
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(r24.s32);
	// lhzx r3,r4,r26
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + r26.u32);
	// xor r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 ^ r23.u64;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.u64 = static_cast<uint64_t>(0) - ctx.r5.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subfe r9,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r5,r10,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r10.u64;
	// extsh r4,r3
	ctx.r4.s64 = ctx.r3.s16;
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// srawi r10,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 31;
	// stwx r3,r6,r7
	REX_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r3.u32);
	// mullw r6,r4,r24
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r24.s32);
	// xor r7,r10,r23
	ctx.r7.u64 = ctx.r10.u64 ^ r23.u64;
	// subfic r8,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subfe r8,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// and r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwz r3,1760(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 1760);
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// or r25,r4,r25
	r25.u64 = ctx.r4.u64 | r25.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r9,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r9.u32);
	// blt cr6,0x82769254
	if (ctx.cr6.lt) goto loc_82769254;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// or r8,r25,r9
	ctx.r8.u64 = r25.u64 | ctx.r9.u64;
	// stwx r8,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r8.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82787E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lis r7,12338
	ctx.r7.s64 = 808583168;
	// ori r8,r10,22857
	ctx.r8.u64 = ctx.r10.u64 | 22857;
	// lis r5,12849
	ctx.r5.s64 = 842072064;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// ori r6,r7,13385
	ctx.r6.u64 = ctx.r7.u64 | 13385;
	// ori r5,r5,22105
	ctx.r5.u64 = ctx.r5.u64 | 22105;
	// ori r10,r4,13392
	ctx.r10.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82787ee8
	if (ctx.cr6.eq) goto loc_82787EE8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82787ee8
	if (ctx.cr6.eq) goto loc_82787EE8;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82787ee8
	if (ctx.cr6.eq) goto loc_82787EE8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82787ee8
	if (ctx.cr6.eq) goto loc_82787EE8;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r7,r11,13392
	ctx.r7.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82787ee8
	if (ctx.cr6.eq) goto loc_82787EE8;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82787EE8:
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// lis r10,12889
	ctx.r10.s64 = 844693504;
	// ori r4,r10,21849
	ctx.r4.u64 = ctx.r10.u64 | 21849;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r4,r10,22869
	ctx.r4.u64 = ctx.r10.u64 | 22869;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// lis r10,21849
	ctx.r10.s64 = 1431896064;
	// ori r4,r10,22105
	ctx.r4.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r4,r10,22094
	ctx.r4.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787f78
	if (ctx.cr6.eq) goto loc_82787F78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82787f68
	if (ctx.cr6.eq) goto loc_82787F68;
loc_82787F60:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82787F68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82787f78
	if (ctx.cr6.eq) goto loc_82787F78;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82787f9c
	if (!ctx.cr6.eq) goto loc_82787F9C;
loc_82787F78:
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x82787f9c
	if (ctx.cr6.eq) goto loc_82787F9C;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x82787f9c
	if (ctx.cr6.eq) goto loc_82787F9C;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x82787f9c
	if (ctx.cr6.eq) goto loc_82787F9C;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x82787f60
	if (!ctx.cr6.eq) goto loc_82787F60;
loc_82787F9C:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82787fb4
	if (ctx.cr6.eq) goto loc_82787FB4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82787fb4
	if (ctx.cr6.eq) goto loc_82787FB4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82787fd0
	if (!ctx.cr6.eq) goto loc_82787FD0;
loc_82787FB4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82787fd0
	if (!ctx.cr6.eq) goto loc_82787FD0;
	// lhz r10,14(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82787fd0
	if (!ctx.cr6.eq) goto loc_82787FD0;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82787FD0:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82787fe8
	if (ctx.cr6.eq) goto loc_82787FE8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82787fe8
	if (ctx.cr6.eq) goto loc_82787FE8;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82788000
	if (!ctx.cr6.eq) goto loc_82788000;
loc_82787FE8:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82788018
	if (ctx.cr6.eq) goto loc_82788018;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82788018
	if (ctx.cr6.eq) goto loc_82788018;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82788018
	if (ctx.cr6.eq) goto loc_82788018;
loc_82788000:
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82788018:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8278B990) {
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
	ctx.lr = 0x8278B998;
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// clrlwi r3,r9,30
	ctx.r3.u64 = ctx.r9.u32 & 0x3;
	// addi r11,r11,-29640
	ctx.r11.s64 = ctx.r11.s64 + -29640;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8278bc44
	if (!ctx.cr6.eq) goto loc_8278BC44;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278b9f8
	if (!ctx.cr6.eq) goto loc_8278B9F8;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8278c170
	if (!ctx.cr6.gt) goto loc_8278C170;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r5,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r10,r7,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r7.u64;
loc_8278B9E4:
	// lwzux r9,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8278b9e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278B9E4;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278B9F8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r31,4
	r31.s64 = 4;
	// beq cr6,0x8278ba08
	if (ctx.cr6.eq) goto loc_8278BA08;
	// li r31,6
	r31.s64 = 6;
loc_8278BA08:
	// addi r8,r31,-1
	ctx.r8.s64 = r31.s64 + -1;
	// lwz r10,1316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,1324(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// ble cr6,0x8278c170
	if (!ctx.cr6.gt) goto loc_8278C170;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subfic r27,r5,-1
	ctx.xer.ca = ctx.r5.u32 <= 4294967295;
	r27.u64 = static_cast<uint64_t>(-1) - ctx.r5.u64;
	// subfic r26,r5,1
	ctx.xer.ca = ctx.r5.u32 <= 1;
	r26.u64 = static_cast<uint64_t>(1) - ctx.r5.u64;
	// add r8,r5,r10
	ctx.r8.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r28,r9,2
	r28.s64 = ctx.r9.s64 + 2;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// subfic r25,r5,-2
	ctx.xer.ca = ctx.r5.u32 <= 4294967294;
	r25.u64 = static_cast<uint64_t>(-2) - ctx.r5.u64;
loc_8278BA58:
	// add r9,r25,r10
	ctx.r9.u64 = r25.u64 + ctx.r10.u64;
	// lhz r29,6(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r24,2(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r23,r29
	r23.s64 = r29.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbzx r21,r3,r9
	r21.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mullw r29,r29,r24
	r29.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// lbzx r24,r25,r10
	r24.u64 = REX_LOAD_U8(r25.u32 + ctx.r10.u32);
	// mullw r9,r9,r23
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r23.s32);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// extsh r23,r22
	r23.s64 = r22.s16;
	// add r4,r9,r29
	ctx.r4.u64 = ctx.r9.u64 + r29.u64;
	// mullw r9,r23,r24
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278babc
	if (!ctx.cr0.lt) goto loc_8278BABC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bac8
	goto loc_8278BAC8;
loc_8278BABC:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bac8
	if (!ctx.cr6.gt) goto loc_8278BAC8;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BAC8:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// stb r4,-2(r6)
	REX_STORE_U8(ctx.r6.u32 + -2, ctx.r4.u8);
	// lhz r20,4(r11)
	r20.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lbz r24,-1(r10)
	r24.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbzx r23,r3,r9
	r23.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbzx r21,r27,r10
	r21.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// lhz r4,6(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r19,r4
	r19.s64 = ctx.r4.s16;
	// extsh r20,r20
	r20.s64 = r20.s16;
	// mullw r9,r9,r19
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r19.s32);
	// mullw r4,r23,r20
	ctx.r4.s64 = int64_t(r23.s32) * int64_t(r20.s32);
	// extsh r29,r29
	r29.s64 = r29.s16;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r9,r24,r29
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// extsh r29,r22
	r29.s64 = r22.s16;
	// add r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mullw r9,r29,r21
	ctx.r9.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bb34
	if (!ctx.cr0.lt) goto loc_8278BB34;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bb40
	goto loc_8278BB40;
loc_8278BB34:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bb40
	if (!ctx.cr6.gt) goto loc_8278BB40;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BB40:
	// stb r9,-1(r6)
	REX_STORE_U8(ctx.r6.u32 + -1, ctx.r9.u8);
	// lbzx r23,r28,r3
	r23.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r4,r28,r8
	ctx.r4.u64 = REX_LOAD_U8(r28.u32 + ctx.r8.u32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r29,0(r28)
	r29.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lbz r21,0(r10)
	r21.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lhz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r24,6(r11)
	r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r9,r23,r9
	ctx.r9.s64 = int64_t(r23.s32) * int64_t(ctx.r9.s32);
	// lhz r23,2(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r24,r24
	r24.s64 = r24.s16;
	// mullw r4,r4,r24
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r24.s32);
	// extsh r24,r22
	r24.s64 = r22.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r24,r29
	ctx.r4.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// extsh r29,r23
	r29.s64 = r23.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r29,r21
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r21.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r4,r9,r30
	ctx.r4.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bba4
	if (!ctx.cr0.lt) goto loc_8278BBA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bbb0
	goto loc_8278BBB0;
loc_8278BBA4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bbb0
	if (!ctx.cr6.gt) goto loc_8278BBB0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BBB0:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// add r9,r26,r10
	ctx.r9.u64 = r26.u64 + ctx.r10.u64;
	// stb r4,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r4.u8);
	// lbzx r22,r8,r9
	r22.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r23,6(r11)
	r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r24,r4
	r24.s64 = ctx.r4.s16;
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbzx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// extsh r21,r4
	r21.s64 = ctx.r4.s16;
	// lbzx r29,r26,r10
	r29.u64 = REX_LOAD_U8(r26.u32 + ctx.r10.u32);
	// extsh r4,r23
	ctx.r4.s64 = r23.s16;
	// lbz r23,1(r10)
	r23.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r9,r9,r21
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r21.s32);
	// mullw r4,r22,r4
	ctx.r4.s64 = int64_t(r22.s32) * int64_t(ctx.r4.s32);
	// lhz r22,0(r11)
	r22.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r23,r24
	ctx.r4.s64 = int64_t(r23.s32) * int64_t(r24.s32);
	// extsh r24,r22
	r24.s64 = r22.s16;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mullw r4,r29,r24
	ctx.r4.s64 = int64_t(r29.s32) * int64_t(r24.s32);
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// sraw. r9,r9,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bc1c
	if (!ctx.cr0.lt) goto loc_8278BC1C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bc28
	goto loc_8278BC28;
loc_8278BC1C:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bc28
	if (!ctx.cr6.gt) goto loc_8278BC28;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BC28:
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// add r28,r28,r5
	r28.u64 = r28.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x8278ba58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278BA58;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278BC44:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8278be5c
	if (!ctx.cr6.eq) goto loc_8278BE5C;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// li r8,4
	ctx.r8.s64 = 4;
	// beq cr6,0x8278bc5c
	if (ctx.cr6.eq) goto loc_8278BC5C;
	// li r8,6
	ctx.r8.s64 = 6;
loc_8278BC5C:
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// lwz r3,1316(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r31,1
	r31.s64 = 1;
	// lwz r11,1324(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r9.u8 & 0x3F));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r3,r3,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r3.u64;
	// ble cr6,0x8278c170
	if (!ctx.cr6.gt) goto loc_8278C170;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r31,r6,2
	r31.s64 = ctx.r6.s64 + 2;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_8278BC88:
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lbz r4,-1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r30,-2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + -2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhz r29,6(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lbz r4,1(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r28,4(r10)
	r28.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lbz r27,0(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r6,r30,r6
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r6.s32);
	// extsh r30,r29
	r30.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r4,r30
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// extsh r4,r28
	ctx.r4.s64 = r28.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r27,r4
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bce8
	if (!ctx.cr0.lt) goto loc_8278BCE8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bcf4
	goto loc_8278BCF4;
loc_8278BCE8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bcf4
	if (!ctx.cr6.gt) goto loc_8278BCF4;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BCF4:
	// stb r9,-2(r31)
	REX_STORE_U8(r31.u32 + -2, ctx.r9.u8);
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lbz r29,-1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r28,r6
	r28.s64 = ctx.r6.s16;
	// lhz r27,6(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r6,r29,r9
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(ctx.r9.s32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lhz r26,2(r10)
	r26.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r9,r30,r28
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(r28.s32);
	// extsh r30,r27
	r30.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r29,r30
	ctx.r6.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// extsh r30,r26
	r30.s64 = r26.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r4,r30
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r30.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r6,r9,r3
	ctx.r6.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bd58
	if (!ctx.cr0.lt) goto loc_8278BD58;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bd64
	goto loc_8278BD64;
loc_8278BD58:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bd64
	if (!ctx.cr6.gt) goto loc_8278BD64;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BD64:
	// stb r9,-1(r31)
	REX_STORE_U8(r31.u32 + -1, ctx.r9.u8);
	// lhz r27,0(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r30,1(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,6(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r26,0(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r6,r30,r4
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r28,r4
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r26,r4
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bdc8
	if (!ctx.cr0.lt) goto loc_8278BDC8;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bdd4
	goto loc_8278BDD4;
loc_8278BDC8:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bdd4
	if (!ctx.cr6.gt) goto loc_8278BDD4;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BDD4:
	// stb r9,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// lhz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r29,0(r10)
	r29.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r27,6(r10)
	r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mullw r6,r30,r4
	ctx.r6.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r29
	ctx.r4.s64 = r29.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r28,r4
	ctx.r6.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r27
	ctx.r4.s64 = r27.s16;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r6,r26,r4
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// sraw. r9,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278be38
	if (!ctx.cr0.lt) goto loc_8278BE38;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278be44
	goto loc_8278BE44;
loc_8278BE38:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278be44
	if (!ctx.cr6.gt) goto loc_8278BE44;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BE44:
	// stb r9,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r9.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r31,r31,r7
	r31.u64 = r31.u64 + ctx.r7.u64;
	// bdnz 0x8278bc88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278BC88;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
loc_8278BE5C:
	// addi r9,r1,47
	ctx.r9.s64 = ctx.r1.s64 + 47;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// rlwinm r22,r9,0,0,26
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r24,r22
	r24.u64 = r22.u64;
	// beq cr6,0x8278be78
	if (ctx.cr6.eq) goto loc_8278BE78;
	// li r8,6
	ctx.r8.s64 = 6;
loc_8278BE78:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x8278be88
	if (ctx.cr6.eq) goto loc_8278BE88;
	// li r9,6
	ctx.r9.s64 = 6;
loc_8278BE88:
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r8,1316(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 1316);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r23,1324(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 1324);
	// addi r31,r9,-7
	r31.s64 = ctx.r9.s64 + -7;
	// subfic r26,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	r26.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r28,r9,-1
	r28.s64 = ctx.r9.s64 + -1;
	// ble cr6,0x8278bf50
	if (!ctx.cr6.gt) goto loc_8278BF50;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// add r30,r5,r8
	r30.u64 = ctx.r5.u64 + ctx.r8.u64;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// mr r25,r23
	r25.u64 = r23.u64;
loc_8278BED0:
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r8,r24,-2
	ctx.r8.s64 = r24.s64 + -2;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8278BEE0:
	// lhz r4,2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// lbzx r21,r9,r5
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbzx r20,r9,r29
	r20.u64 = REX_LOAD_U8(ctx.r9.u32 + r29.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r19,6(r11)
	r19.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r4,r21,r4
	ctx.r4.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// lbzx r21,r9,r30
	r21.u64 = REX_LOAD_U8(ctx.r9.u32 + r30.u32);
	// lhz r18,0(r11)
	r18.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lbz r17,0(r9)
	r17.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// mullw r3,r20,r3
	ctx.r3.s64 = int64_t(r20.s32) * int64_t(ctx.r3.s32);
	// extsh r20,r19
	r20.s64 = r19.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r20
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(r20.s32);
	// extsh r21,r18
	r21.s64 = r18.s16;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mullw r3,r21,r17
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(r17.s32);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// sraw r3,r4,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r3.s64 = ctx.r4.s32 >> temp.u32;
	// sthu r3,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x8278bee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278BEE0;
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// add r27,r27,r5
	r27.u64 = r27.u64 + ctx.r5.u64;
	// addi r24,r24,64
	r24.s64 = r24.s64 + 64;
	// bne 0x8278bed0
	if (!ctx.cr0.eq) goto loc_8278BED0;
loc_8278BF50:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x8278c170
	if (!ctx.cr6.gt) goto loc_8278C170;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_8278BF64:
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// lhz r3,2(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lhz r31,4(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r4,r5
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lhz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r31
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r31.s32);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r9,r26
	ctx.r3.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278bfd4
	if (!ctx.cr0.lt) goto loc_8278BFD4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278bfe0
	goto loc_8278BFE0;
loc_8278BFD4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278bfe0
	if (!ctx.cr6.gt) goto loc_8278BFE0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278BFE0:
	// stb r9,-2(r6)
	REX_STORE_U8(ctx.r6.u32 + -2, ctx.r9.u8);
	// lhz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// lhz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,6(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,2(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r4
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r30
	ctx.r5.s64 = r30.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r5,r3
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c054
	if (!ctx.cr0.lt) goto loc_8278C054;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c060
	goto loc_8278C060;
loc_8278C054:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c060
	if (!ctx.cr6.gt) goto loc_8278C060;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C060:
	// stb r9,-1(r6)
	REX_STORE_U8(ctx.r6.u32 + -1, ctx.r9.u8);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,10(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lhz r4,6(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,8(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lhz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c0d4
	if (!ctx.cr0.lt) goto loc_8278C0D4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c0e0
	goto loc_8278C0E0;
loc_8278C0D4:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c0e0
	if (!ctx.cr6.gt) goto loc_8278C0E0;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C0E0:
	// stb r9,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r9.u8);
	// lhz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lhz r9,6(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r31,10(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r30,4(r10)
	r30.u64 = REX_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lhz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r3,6(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// extsh r4,r30
	ctx.r4.s64 = r30.s16;
	// extsh r31,r31
	r31.s64 = r31.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r4,r31
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r3,r5
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r9,r26
	ctx.r4.u64 = ctx.r9.u64 + r26.u64;
	// srawi. r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x8278c154
	if (!ctx.cr0.lt) goto loc_8278C154;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x8278c160
	goto loc_8278C160;
loc_8278C154:
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// ble cr6,0x8278c160
	if (!ctx.cr6.gt) goto loc_8278C160;
	// li r9,255
	ctx.r9.s64 = 255;
loc_8278C160:
	// stb r9,1(r6)
	REX_STORE_U8(ctx.r6.u32 + 1, ctx.r9.u8);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x8278bf64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278BF64;
loc_8278C170:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_827B98B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x826a1cbc
	ctx.lr = 0x827B98B8;
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// li r9,64
	ctx.r9.s64 = 64;
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r8,96
	ctx.r8.s64 = 96;
	// li r31,144
	r31.s64 = 144;
	// lvx128 v11,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,112
	r30.s64 = 112;
	// li r11,160
	ctx.r11.s64 = 160;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,-64
	r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v10,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v12,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v9,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v11,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// lvx128 v61,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,-48
	r31.s64 = ctx.r1.s64 + -48;
	// lvx128 v60,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vsldoi128 v6,v10,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v5,v9,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// vslh v3,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// vslh v2,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r11,r8,r5
	ctx.r11.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vslh v31,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v4,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v29,v3,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v2,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v8
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v29,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v28,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v27,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v58,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v59,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-56(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r30,-64(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stvx128 v58,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r31,-48(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r29,-40(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r30.u32);
	// stwx r6,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r6.u32);
	// stwx r31,r8,r5
	REX_STORE_U32(ctx.r8.u32 + ctx.r5.u32, r31.u32);
	// stwx r29,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r29.u32);
	// bne cr6,0x827b99cc
	if (!ctx.cr6.eq) goto loc_827B99CC;
	// lwz r6,-60(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r31,-52(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r30,-44(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r6,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r6.u32);
	// stw r31,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// stw r29,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r29.u32);
loc_827B99CC:
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x827b9ad8
	if (!ctx.cr6.eq) goto loc_827B9AD8;
	// li r10,192
	ctx.r10.s64 = 192;
	// li r9,240
	ctx.r9.s64 = 240;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r31,288
	r31.s64 = 288;
	// lvx128 v12,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,336
	r30.s64 = 336;
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,304
	ctx.r10.s64 = 304;
	// li r9,352
	ctx.r9.s64 = 352;
	// lvx128 v57,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// lvx128 v10,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v12,v57,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// lvx128 v9,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v11,v56,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// lvx128 v55,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lvx128 v54,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vsldoi128 v6,v10,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vslh v4,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v5,v9,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vslh v3,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v2,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v31,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v30,v4,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v3,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v28,v2,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v27,v31,v9
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v30,v8
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v25,v29,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v28,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v23,v27,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v22,v26,v1
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v21,v25,v1
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v20,v24,v1
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v19,v23,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v18,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v15,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v18,v17
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus128 v52,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// stvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-60(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r8,-56(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -56);
	// lwz r7,-52(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -52);
	// stvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r6,-48(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -48);
	// lwz r31,-44(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -44);
	// lwz r30,-40(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -40);
	// lwz r9,-64(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -64);
	// stwux r9,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r3,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r3.u32);
	// stwx r8,r4,r5
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r29,-36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -36);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// stwux r6,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stwx r30,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, r30.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
loc_827B9AD8:
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_827D3368) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r8,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r5,r31,16
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 16;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// add r31,r9,r8
	r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpwi cr6,r7,-59
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -59, ctx.xer);
	// bge cr6,0x827d33a8
	if (!ctx.cr6.lt) goto loc_827D33A8;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// b 0x827d33c0
	goto loc_827D33C0;
loc_827D33A8:
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x827d33c4
	if (!ctx.cr6.gt) goto loc_827D33C4;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_827D33C0:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_827D33C4:
	// cmpwi cr6,r31,-59
	ctx.cr6.compare<int32_t>(r31.s32, -59, ctx.xer);
	// bge cr6,0x827d3400
	if (!ctx.cr6.lt) goto loc_827D3400;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// beq cr6,0x827d33f0
	if (ctx.cr6.eq) goto loc_827D33F0;
	// addi r10,r11,-60
	ctx.r10.s64 = ctx.r11.s64 + -60;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827D33F0:
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_827D3400:
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x827d342c
	if (!ctx.cr6.gt) goto loc_827D342C;
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x827d3428
	if (!ctx.cr6.eq) goto loc_827D3428;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
loc_827D3428:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_827D342C:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

