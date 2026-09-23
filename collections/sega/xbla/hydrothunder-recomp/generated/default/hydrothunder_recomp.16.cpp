#include "hydrothunder_funcs.16.h"

DEFINE_REX_FUNC(sub_82120D70) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82120D98;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120b20
	ctx.lr = 0x82120DAC;
	sub_82120B20(ctx, base);
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

DEFINE_REX_FUNC(sub_82127708) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82128090) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82162af8
	ctx.lr = 0x821280B8;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82162af8
	ctx.lr = 0x821280C4;
	sub_82162AF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821280DC;
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

DEFINE_REX_FUNC(sub_8212C058) {
	REX_FUNC_PROLOGUE();
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r5,0(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130938) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130C58) {
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
	// addi r11,r11,-21652
	ctx.r11.s64 = ctx.r11.s64 + -21652;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82130c84
	if (ctx.cr0.eq) goto loc_82130C84;
	// bl 0x8269ce98
	ctx.lr = 0x82130C84;
	sub_8269CE98(ctx, base);
loc_82130C84:
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

DEFINE_REX_FUNC(sub_82132C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82132C98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82132ce0
	if (!ctx.cr0.eq) goto loc_82132CE0;
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
loc_82132CB8:
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82132ccc
	if (!ctx.cr6.lt) goto loc_82132CCC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82132cd4
	goto loc_82132CD4;
loc_82132CCC:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82132CD4:
	// lbz r9,21(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82132cb8
	if (ctx.cr0.eq) goto loc_82132CB8;
loc_82132CE0:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82132d00
	if (ctx.cr6.eq) goto loc_82132D00;
	// lhz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 12);
	// lhz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82132d5c
	if (!ctx.cr6.lt) goto loc_82132D5C;
loc_82132D00:
	// li r3,24
	ctx.r3.s64 = 24;
	// lhz r29,0(r4)
	r29.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// bl 0x822f6280
	ctx.lr = 0x82132D0C;
	sub_822F6280(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82132d68
	if (ctx.cr0.eq) goto loc_82132D68;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addic. r11,r6,12
	ctx.xer.ca = ctx.r6.u32 > 4294967283;
	ctx.r11.s64 = ctx.r6.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r9,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r9.u32);
	// stb r10,20(r6)
	REX_STORE_U8(ctx.r6.u32 + 20, ctx.r10.u8);
	// stb r10,21(r6)
	REX_STORE_U8(ctx.r6.u32 + 21, ctx.r10.u8);
	// beq 0x82132d48
	if (ctx.cr0.eq) goto loc_82132D48;
	// sth r29,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, r29.u16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82132D48:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821332d0
	ctx.lr = 0x82132D58;
	sub_821332D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82132D5C:
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_82132D68:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82132D80;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8213A7B8) {
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
	ctx.lr = 0x8213A7DC;
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
	ctx.lr = 0x8213A7F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6116(r10)
	REX_STORE_U32(ctx.r10.u32 + 6116, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213CD28) {
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
	ctx.lr = 0x8213CD30;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// ori r10,r10,37448
	ctx.r10.u64 = ctx.r10.u64 | 37448;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8213cd78
	if (ctx.cr6.lt) goto loc_8213CD78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x82120ac0
	ctx.lr = 0x8213CD64;
	sub_82120AC0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8213CD6C;
	sub_8269CE98(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26888
	ctx.r3.s64 = ctx.r11.s64 + -26888;
	// bl 0x822f6020
	ctx.lr = 0x8213CD78;
	sub_822F6020(ctx, base);
loc_8213CD78:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213cda4
	if (!ctx.cr6.eq) goto loc_8213CDA4;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// b 0x8213cddc
	goto loc_8213CDDC;
loc_8213CDA4:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213cdc8
	if (ctx.cr0.eq) goto loc_8213CDC8;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213cde0
	if (!ctx.cr6.eq) goto loc_8213CDE0;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x8213cde0
	goto loc_8213CDE0;
loc_8213CDC8:
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213cde0
	if (!ctx.cr6.eq) goto loc_8213CDE0;
loc_8213CDDC:
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
loc_8213CDE0:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// mr r31,r28
	r31.u64 = r28.u64;
	// li r29,1
	r29.s64 = 1;
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8213cee0
	if (!ctx.cr0.eq) goto loc_8213CEE0;
	// li r27,0
	r27.s64 = 0;
loc_8213CDFC:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8213ce60
	if (!ctx.cr6.eq) goto loc_8213CE60;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8213ce70
	if (ctx.cr0.eq) goto loc_8213CE70;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213ce38
	if (!ctx.cr6.eq) goto loc_8213CE38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8213cb78
	ctx.lr = 0x8213CE38;
	sub_8213CB78(ctx, base);
loc_8213CE38:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213cbe0
	ctx.lr = 0x8213CE5C;
	sub_8213CBE0(ctx, base);
	// b 0x8213ced0
	goto loc_8213CED0;
loc_8213CE60:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8213ce94
	if (!ctx.cr0.eq) goto loc_8213CE94;
loc_8213CE70:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stb r29,40(r10)
	REX_STORE_U8(ctx.r10.u32 + 40, r29.u8);
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8213ced0
	goto loc_8213CED0;
loc_8213CE94:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8213ceac
	if (!ctx.cr6.eq) goto loc_8213CEAC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8213cbe0
	ctx.lr = 0x8213CEAC;
	sub_8213CBE0(ctx, base);
loc_8213CEAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8213cb78
	ctx.lr = 0x8213CED0;
	sub_8213CB78(ctx, base);
loc_8213CED0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8213cdfc
	if (ctx.cr0.eq) goto loc_8213CDFC;
loc_8213CEE0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r28,0(r26)
	REX_STORE_U32(r26.u32 + 0, r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8214C410) {
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
	// addi r11,r11,-12524
	ctx.r11.s64 = ctx.r11.s64 + -12524;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8214c43c
	if (ctx.cr0.eq) goto loc_8214C43C;
	// bl 0x8269ce98
	ctx.lr = 0x8214C43C;
	sub_8269CE98(ctx, base);
loc_8214C43C:
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

DEFINE_REX_FUNC(sub_8214E5B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8214E5B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,-11704
	ctx.r11.s64 = ctx.r11.s64 + -11704;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// stw r31,28(r30)
	REX_STORE_U32(r30.u32 + 28, r31.u32);
	// bl 0x822f6280
	ctx.lr = 0x8214E5DC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e7d0
	if (ctx.cr0.eq) goto loc_8214E7D0;
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stb r11,44(r10)
	REX_STORE_U8(ctx.r10.u32 + 44, ctx.r11.u8);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stb r11,45(r10)
	REX_STORE_U8(ctx.r10.u32 + 45, ctx.r11.u8);
	// stb r31,36(r30)
	REX_STORE_U8(r30.u32 + 36, r31.u8);
	// bl 0x822f6280
	ctx.lr = 0x8214E61C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e62c
	if (ctx.cr0.eq) goto loc_8214E62C;
	// bl 0x8214e838
	ctx.lr = 0x8214E628;
	sub_8214E838(ctx, base);
	// b 0x8214e630
	goto loc_8214E630;
loc_8214E62C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8214E630:
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x8214E63C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e6d0
	if (ctx.cr0.eq) goto loc_8214E6D0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// li r4,16384
	ctx.r4.s64 = 16384;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// li r29,112
	r29.s64 = 112;
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r31,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r31.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r31.u32);
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stw r7,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r6,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r6.u32);
	// stw r5,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r29,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r29.u32);
	// stw r31,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r31.u32);
	// b 0x8214e6d4
	goto loc_8214E6D4;
loc_8214E6D0:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8214E6D4:
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x8214E6E0;
	sub_822F6280(ctx, base);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e75c
	if (ctx.cr0.eq) goto loc_8214E75C;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r31,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r31.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r31.u32);
	// stw r31,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r31.u32);
	// stw r31,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r31.u32);
	// stw r31,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, r31.u32);
	// stw r31,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, r31.u32);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stw r31,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, r31.u32);
	// stw r31,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, r31.u32);
	// stw r29,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, r29.u32);
	// stw r29,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, r29.u32);
	// stw r29,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, r29.u32);
	// b 0x8214e760
	goto loc_8214E760;
loc_8214E75C:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8214E760:
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822f6280
	ctx.lr = 0x8214E76C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e7c0
	if (ctx.cr0.eq) goto loc_8214E7C0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r31,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r31.u32);
	// stw r31,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, r31.u32);
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, r31.u32);
	// stw r31,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, r31.u32);
	// stw r31,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r31.u32);
	// stw r31,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r31.u32);
	// stw r31,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, r31.u32);
	// stw r31,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, r31.u32);
	// stw r31,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r31.u32);
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// stw r31,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, r31.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// stw r29,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r29.u32);
loc_8214E7C0:
	// stw r31,16(r30)
	REX_STORE_U32(r30.u32 + 16, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8214E7D0:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x8214E7E8;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8215CF60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215cfa8
	if (ctx.cr6.eq) goto loc_8215CFA8;
	// bl 0x8215cee0
	ctx.lr = 0x8215CF8C;
	sub_8215CEE0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215cfa8
	if (ctx.cr0.eq) goto loc_8215CFA8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215CFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215CFA8:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215cfb8
	if (ctx.cr0.eq) goto loc_8215CFB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215CFB8;
	sub_8269CE98(ctx, base);
loc_8215CFB8:
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

DEFINE_REX_FUNC(sub_8215FB00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8215fb1c
	if (!ctx.cr6.eq) goto loc_8215FB1C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_8215FB10:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_8215FB1C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8215fb38
	if (!ctx.cr6.eq) goto loc_8215FB38;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r4
	REX_STORE_U32(ctx.r4.u32, ctx.f0.u32);
	// blr 
	return;
loc_8215FB38:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215fb48
	if (!ctx.cr6.eq) goto loc_8215FB48;
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// b 0x8215fb10
	goto loc_8215FB10;
loc_8215FB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82163050) {
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
	ctx.lr = 0x82163058;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82163088
	if (!ctx.cr6.eq) goto loc_82163088;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216325c
	goto loc_8216325C;
loc_82163088:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120600
	ctx.lr = 0x82163090;
	sub_82120600(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-24460
	ctx.r4.s64 = ctx.r11.s64 + -24460;
	// bl 0x82121928
	ctx.lr = 0x8216309C;
	sub_82121928(ctx, base);
	// li r28,-1
	r28.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121dd0
	ctx.lr = 0x821630B0;
	sub_82121DD0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82121dd0
	ctx.lr = 0x821630C0;
	sub_82121DD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120670
	ctx.lr = 0x821630CC;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821630DC;
	sub_82120AC0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82163d68
	ctx.lr = 0x821630EC;
	sub_82163D68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82163118
	if (!ctx.cr6.eq) goto loc_82163118;
	// li r31,0
	r31.s64 = 0;
loc_82163100:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82163110;
	sub_82120AC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8216325c
	goto loc_8216325C;
loc_82163118:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,36
	r28.s64 = ctx.r11.s64 + 36;
	// bl 0x821501a8
	ctx.lr = 0x8216312C;
	sub_821501A8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82163200
	if (ctx.cr6.eq) goto loc_82163200;
	// lis r9,-32106
	ctx.r9.s64 = -2104098816;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r3,6044(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 6044);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216316C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,8(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82163200
	if (ctx.cr6.eq) goto loc_82163200;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x82125c20
	ctx.lr = 0x82163184;
	sub_82125C20(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,6104(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6104);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821631B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821631C0;
	sub_8269D1B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821631C8;
	sub_8269CE98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r10,r24,24
	ctx.r10.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
	// beq 0x82163200
	if (ctx.cr0.eq) goto loc_82163200;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82163200
	if (!ctx.cr6.eq) goto loc_82163200;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r31,1
	r31.s64 = 1;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x82163100
	goto loc_82163100;
loc_82163200:
	// lis r30,-32106
	r30.s64 = -2104098816;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,6100(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6100);
	// bl 0x821687a8
	ctx.lr = 0x82163210;
	sub_821687A8(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82163268
	ctx.lr = 0x82163228;
	sub_82163268(ctx, base);
	// lwz r11,6100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821687a8
	ctx.lr = 0x8216323C;
	sub_821687A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x8216324C;
	sub_82120AC0(ctx, base);
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8216325C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82172BD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82172BD8;
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x821a4270
	ctx.lr = 0x82172BF4;
	sub_821A4270(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821a4270
	ctx.lr = 0x82172C08;
	sub_821A4270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// bne 0x82172c18
	if (!ctx.cr0.eq) goto loc_82172C18;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82172C18:
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a48f8
	ctx.lr = 0x82172C24;
	sub_821A48F8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8216fc68
	ctx.lr = 0x82172C38;
	sub_8216FC68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,6060(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6060);
	// bl 0x8212e940
	ctx.lr = 0x82172C48;
	sub_8212E940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r3,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c74
	if (ctx.cr6.eq) goto loc_82172C74;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82172c74
	if (ctx.cr6.eq) goto loc_82172C74;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82172c78
	if (!ctx.cr6.eq) goto loc_82172C78;
loc_82172C74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82172C78:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,2000
	ctx.r1.s64 = ctx.r1.s64 + 2000;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82178CB0) {
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
	ctx.lr = 0x82178CB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8216bce8
	ctx.lr = 0x82178CD0;
	sub_8216BCE8(ctx, base);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82178d20
	if (!ctx.cr0.gt) goto loc_82178D20;
	// li r29,0
	r29.s64 = 0;
loc_82178CF0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82178cb0
	ctx.lr = 0x82178D00;
	sub_82178CB0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82178cf0
	if (ctx.cr6.lt) goto loc_82178CF0;
loc_82178D20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8217B760) {
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
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// li r30,0
	r30.s64 = 0;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r10,r10,-20
	ctx.r10.s64 = ctx.r10.s64 + -20;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r9,r9,-17496
	ctx.r9.s64 = ctx.r9.s64 + -17496;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r4,r9,-26856
	ctx.r4.s64 = ctx.r9.s64 + -26856;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// stw r8,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
	// stb r30,44(r31)
	REX_STORE_U8(r31.u32 + 44, r30.u8);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// bl 0x8217a390
	ctx.lr = 0x8217B7F0;
	sub_8217A390(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
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

DEFINE_REX_FUNC(sub_82180980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821812BC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821814A0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2c70
	ctx.lr = 0x821814B8;
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// ld r10,48(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 48);
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// ld r9,56(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 56);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f11,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// std r10,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r10.u64);
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// std r9,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r9.u64);
	// lfs f9,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f28,f10,f31
	f28.f64 = double(float(ctx.f10.f64 * f31.f64));
	// lfs f4,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f30,f9,f31
	f30.f64 = double(float(ctx.f9.f64 * f31.f64));
	// lfs f2,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f6,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f13,f31
	ctx.f7.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 * f31.f64));
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// fmuls f27,f4,f31
	f27.f64 = double(float(ctx.f4.f64 * f31.f64));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f26,f2,f31
	f26.f64 = double(float(ctx.f2.f64 * f31.f64));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// fmuls f29,f6,f31
	f29.f64 = double(float(ctx.f6.f64 * f31.f64));
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmadds f11,f11,f1,f5
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f5.f64)));
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fmadds f9,f9,f1,f28
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, f28.f64)));
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// fmadds f10,f10,f1,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f1.f64, f30.f64)));
	// fmadds f13,f13,f1,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f8.f64)));
	// fmadds f25,f0,f1,f7
	f25.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, ctx.f7.f64)));
	// fmadds f12,f12,f1,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmadds f7,f6,f1,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, ctx.f7.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f6,f4,f1,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmadds f4,f2,f1,f30
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, f30.f64)));
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f23,f11,f27
	f23.f64 = double(float(ctx.f11.f64 + f27.f64));
	// lfs f30,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f30.f64 = double(temp.f32);
	// fadds f22,f9,f26
	f22.f64 = double(float(ctx.f9.f64 + f26.f64));
	// fadds f26,f10,f26
	f26.f64 = double(float(ctx.f10.f64 + f26.f64));
	// fadds f24,f13,f29
	f24.f64 = double(float(ctx.f13.f64 + f29.f64));
	// fadds f25,f25,f29
	f25.f64 = double(float(f25.f64 + f29.f64));
	// lfs f29,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f29.f64 = double(temp.f32);
	// fadds f27,f12,f27
	f27.f64 = double(float(ctx.f12.f64 + f27.f64));
	// fadds f21,f7,f8
	f21.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f20,f6,f5
	f20.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fadds f28,f4,f28
	f28.f64 = double(float(ctx.f4.f64 + f28.f64));
	// fsubs f17,f29,f23
	f17.f64 = double(float(f29.f64 - f23.f64));
	// stfs f17,436(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fsubs f15,f0,f22
	f15.f64 = double(float(ctx.f0.f64 - f22.f64));
	// stfs f15,440(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// fadds f14,f0,f26
	f14.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f14,152(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f19,f30,f24
	f19.f64 = double(float(f30.f64 - f24.f64));
	// stfs f19,432(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f18,f30,f25
	f18.f64 = double(float(f30.f64 + f25.f64));
	// stfs f18,144(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f16,f29,f27
	f16.f64 = double(float(f29.f64 + f27.f64));
	// stfs f16,148(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bctrl 
	ctx.lr = 0x821815D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f24,f30,f24
	f24.f64 = double(float(f30.f64 + f24.f64));
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f18,176(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f23,f29,f23
	f23.f64 = double(float(f29.f64 + f23.f64));
	// stfs f16,180(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f22,f0,f22
	f22.f64 = double(float(ctx.f0.f64 + f22.f64));
	// stfs f14,184(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// stfs f24,400(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f23,404(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f22,408(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f26,f0,f26
	f26.f64 = double(float(ctx.f0.f64 - f26.f64));
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f25,f30,f25
	f25.f64 = double(float(f30.f64 - f25.f64));
	// stfs f24,336(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fsubs f27,f29,f27
	f27.f64 = double(float(f29.f64 - f27.f64));
	// stfs f23,340(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f22,344(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f25,208(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f27,212(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f26,216(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f19,464(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f17,468(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f15,472(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,476(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f25,240(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// stfs f27,244(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f26,248(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821816B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fadds f30,f21,f30
	f30.f64 = double(float(f21.f64 + f30.f64));
	// stfs f19,368(r1)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f29,f29,f20
	f29.f64 = double(float(f29.f64 + f20.f64));
	// stfs f17,372(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f15,376(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f30,272(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f29,276(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// stfs f24,112(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f23,116(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f22,120(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f30,304(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f29,308(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f13,312(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f21,f0,f21
	f21.f64 = double(float(ctx.f0.f64 - f21.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f20,f13,f20
	f20.f64 = double(float(ctx.f13.f64 - f20.f64));
	// fsubs f28,f0,f28
	f28.f64 = double(float(ctx.f0.f64 - f28.f64));
	// stfs f21,128(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f20,132(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f24,160(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f23,164(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f22,168(r1)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821817A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f19,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f19.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f17,196(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f15,200(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f21,224(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stfs f20,228(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stfs f28,232(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821817E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f24,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f24.f64 = double(temp.f32);
	// stfs f30,256(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f29,260(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f24,264(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,268(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// stfs f25,288(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfs f27,292(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f26,296(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218182C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f18,320(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f16,324(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f14,328(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f30,352(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stfs f29,356(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// stfs f24,360(r1)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8218186C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f21,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f20,388(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f28,392(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stfs f18,416(r1)
	temp.f32 = float(f18.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f16,420(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f14,424(r1)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821818AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f25,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f27,452(r1)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f26,456(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// stfs f21,480(r1)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stfs f20,484(r1)
	temp.f32 = float(f20.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f28,488(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821818EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x826a2cbc
	ctx.lr = 0x821818F8;
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

DEFINE_REX_FUNC(sub_821A8318) {
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
	ctx.lr = 0x821A8320;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x821613d8
	ctx.lr = 0x821A833C;
	sub_821613D8(ctx, base);
	// addi r30,r28,128
	r30.s64 = r28.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8216fb90
	ctx.lr = 0x821A8350;
	sub_8216FB90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a8c10
	ctx.lr = 0x821A835C;
	sub_821A8C10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x821613d8
	ctx.lr = 0x821A836C;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A837C;
	sub_821613D8(ctx, base);
	// lwz r11,148(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 148);
	// addi r30,r28,140
	r30.s64 = r28.s64 + 140;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a83e0
	if (!ctx.cr6.gt) goto loc_821A83E0;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bgt cr6,0x821a83a8
	if (ctx.cr6.gt) goto loc_821A83A8;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_821A83A8:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a83e0
	if (!ctx.cr6.gt) goto loc_821A83E0;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x821A83BC;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x821A83D0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821A83D8;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
loc_821A83E0:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822434c8
	ctx.lr = 0x821A83F0;
	sub_822434C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x821613d8
	ctx.lr = 0x821A8400;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A8410;
	sub_821613D8(ctx, base);
	// lwz r11,160(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 160);
	// addi r30,r28,152
	r30.s64 = r28.s64 + 152;
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a8474
	if (!ctx.cr6.gt) goto loc_821A8474;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// bgt cr6,0x821a843c
	if (ctx.cr6.gt) goto loc_821A843C;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_821A843C:
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821a8474
	if (!ctx.cr6.gt) goto loc_821A8474;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r27,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x8269d1d0
	ctx.lr = 0x821A8450;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r5,r11,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x826a1e70
	ctx.lr = 0x821A8464;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821A846C;
	sub_8269D1B8(ctx, base);
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r27,8(r30)
	REX_STORE_U32(r30.u32 + 8, r27.u32);
loc_821A8474:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a8cf0
	ctx.lr = 0x821A8484;
	sub_821A8CF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r29,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x821613d8
	ctx.lr = 0x821A8494;
	sub_821613D8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r28,96
	ctx.r4.s64 = r28.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A84A4;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,164
	ctx.r4.s64 = r28.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A84B4;
	sub_821613D8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r28,168
	ctx.r4.s64 = r28.s64 + 168;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821613d8
	ctx.lr = 0x821A84C4;
	sub_821613D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821B4D60) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4dc8
	if (ctx.cr0.eq) goto loc_821B4DC8;
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x821357c8
	ctx.lr = 0x821B4D88;
	sub_821357C8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b4db0
	if (ctx.cr6.eq) goto loc_821B4DB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-21888
	ctx.r4.s64 = ctx.r11.s64 + -21888;
	// addi r3,r10,-21832
	ctx.r3.s64 = ctx.r10.s64 + -21832;
	// li r5,170
	ctx.r5.s64 = 170;
	// bl 0x821231d0
	ctx.lr = 0x821B4DB0;
	sub_821231D0(ctx, base);
loc_821B4DB0:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B4DC0;
	sub_82149AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b4f00
	ctx.lr = 0x821B4DC8;
	sub_821B4F00(ctx, base);
loc_821B4DC8:
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

DEFINE_REX_FUNC(sub_821B7CB8) {
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
	// bl 0x821357c8
	ctx.lr = 0x821B7CD4;
	sub_821357C8(ctx, base);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b7cfc
	if (ctx.cr6.eq) goto loc_821B7CFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-20900
	ctx.r4.s64 = ctx.r11.s64 + -20900;
	// addi r3,r10,-20728
	ctx.r3.s64 = ctx.r10.s64 + -20728;
	// li r5,289
	ctx.r5.s64 = 289;
	// bl 0x821231d0
	ctx.lr = 0x821B7CFC;
	sub_821231D0(ctx, base);
loc_821B7CFC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B7D0C;
	sub_82149AF0(ctx, base);
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

DEFINE_REX_FUNC(sub_821BB758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821BB760;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82178268
	ctx.lr = 0x821BB770;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-19388
	ctx.r11.s64 = ctx.r11.s64 + -19388;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821BB784;
	sub_822F6280(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bb7a8
	if (ctx.cr0.eq) goto loc_821BB7A8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821dc550
	ctx.lr = 0x821BB7A0;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821bb7ac
	goto loc_821BB7AC;
loc_821BB7A8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_821BB7AC:
	// stw r4,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r4.u32);
	// addi r3,r30,96
	ctx.r3.s64 = r30.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821BB7B8;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821BB7C0;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bb834
	if (ctx.cr0.eq) goto loc_821BB834;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19476
	ctx.r4.s64 = ctx.r11.s64 + -19476;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821BB7E4;
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
	ctx.lr = 0x821BB7F8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bb824
	if (ctx.cr0.eq) goto loc_821BB824;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-18160
	ctx.r10.s64 = ctx.r10.s64 + -18160;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821bb828
	goto loc_821BB828;
loc_821BB824:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BB828:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// b 0x821bb838
	goto loc_821BB838;
loc_821BB834:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BB838:
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
	ctx.lr = 0x821BB850;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BB858;
	sub_822F6280(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r29,r11,-23824
	r29.s64 = ctx.r11.s64 + -23824;
	// beq 0x821bb890
	if (ctx.cr0.eq) goto loc_821BB890;
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
	ctx.lr = 0x821BB884;
	sub_821DBB48(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bb894
	goto loc_821BB894;
loc_821BB890:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_821BB894:
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
	ctx.lr = 0x821BB8AC;
	sub_82264568(ctx, base);
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x822f6280
	ctx.lr = 0x821BB8B4;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821bb8e4
	if (ctx.cr0.eq) goto loc_821BB8E4;
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
	ctx.lr = 0x821BB8D8;
	sub_821DBB48(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x821bb8e8
	goto loc_821BB8E8;
loc_821BB8E4:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_821BB8E8:
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
	ctx.lr = 0x821BB900;
	sub_82264568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821C56B8) {
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
	// blt cr6,0x821c56e8
	if (ctx.cr6.lt) goto loc_821C56E8;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821c5700
	if (ctx.cr6.lt) goto loc_821C5700;
loc_821C56E8:
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
	ctx.lr = 0x821C5700;
	sub_821231D0(ctx, base);
loc_821C5700:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821C9318) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823fc638
	ctx.lr = 0x821C9334;
	sub_823FC638(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9344:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c9344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9344;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823fbf60
	ctx.lr = 0x821C9360;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C9370:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821c9370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C9370;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r31,-8
	ctx.r9.s64 = r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C938C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c938c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C938C;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CE5D0) {
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
	ctx.lr = 0x821CE5F0;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r3,100
	ctx.r3.s64 = 100;
	// addi r11,r11,-14060
	ctx.r11.s64 = ctx.r11.s64 + -14060;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CE604;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce624
	if (ctx.cr0.eq) goto loc_821CE624;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,150
	ctx.r5.s64 = 150;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CE61C;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821ce628
	goto loc_821CE628;
loc_821CE624:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821CE628:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821d3988
	ctx.lr = 0x821CE634;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CE63C;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821ce6b4
	if (ctx.cr0.eq) goto loc_821CE6B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-22996
	ctx.r4.s64 = ctx.r10.s64 + -22996;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CE664;
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
	ctx.lr = 0x821CE678;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ce6a4
	if (ctx.cr0.eq) goto loc_821CE6A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-15424
	ctx.r11.s64 = ctx.r11.s64 + -15424;
	// addi r10,r10,-6416
	ctx.r10.s64 = ctx.r10.s64 + -6416;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821ce6a8
	goto loc_821CE6A8;
loc_821CE6A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821CE6A8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821ce6b8
	goto loc_821CE6B8;
loc_821CE6B4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821CE6B8:
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
	ctx.lr = 0x821CE6D0;
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

DEFINE_REX_FUNC(sub_821D69E8) {
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
	ctx.lr = 0x821D69F0;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f1,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// bl 0x821958a0
	ctx.lr = 0x821D6A1C;
	sub_821958A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d6e48
	if (ctx.cr0.eq) goto loc_821D6E48;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r22,48
	ctx.r4.s64 = r22.s64 + 48;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823fbf60
	ctx.lr = 0x821D6A34;
	sub_823FBF60(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821D6A44:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821d6a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821D6A44;
	// lwz r11,112(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d6e18
	if (ctx.cr6.eq) goto loc_821D6E18;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r28,r11,16592
	r28.s64 = ctx.r11.s64 + 16592;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,64
	ctx.r11.s64 = r31.s64 + 64;
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x823fbd18
	ctx.lr = 0x821D6ABC;
	sub_823FBD18(ctx, base);
	// ld r6,0(r3)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,16(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 16);
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// std r5,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lfs f8,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r24,0(r7)
	r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f6,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f9,444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 444);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,15048(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
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
	// cmplw cr6,r24,r7
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r7.u32, ctx.xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lfsx f13,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f31,f13,f12,f0
	f31.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// beq cr6,0x821d6e18
	if (ctx.cr6.eq) goto loc_821D6E18;
	// lfs f30,284(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 284);
	f30.f64 = double(temp.f32);
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_821D6B60:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,57(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 57);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821d6e08
	if (!ctx.cr0.eq) goto loc_821D6E08;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x821958a0
	ctx.lr = 0x821D6B88;
	sub_821958A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d6e08
	if (ctx.cr0.eq) goto loc_821D6E08;
	// lwz r28,8(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 8);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r27,68(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// lwz r25,72(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// beq cr6,0x821d6bcc
	if (ctx.cr6.eq) goto loc_821D6BCC;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D6BC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_821D6BCC:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lwz r26,64(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// bgt cr6,0x821d6c94
	if (ctx.cr6.gt) goto loc_821D6C94;
	// bl 0x8212dd28
	ctx.lr = 0x821D6BE8;
	sub_8212DD28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D6BF8;
	sub_826A1E70(ctx, base);
	// stw r28,64(r26)
	REX_STORE_U32(r26.u32 + 64, r28.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r7,r11,25784
	ctx.r7.s64 = ctx.r11.s64 + 25784;
	// fadds f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 + f30.f64));
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82139a08
	ctx.lr = 0x821D6C1C;
	sub_82139A08(ctx, base);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212dd28
	ctx.lr = 0x821D6C28;
	sub_8212DD28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D6C38;
	sub_826A1E70(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// addi r7,r11,25312
	ctx.r7.s64 = ctx.r11.s64 + 25312;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// li r4,7
	ctx.r4.s64 = 7;
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// stb r11,64(r26)
	REX_STORE_U8(r26.u32 + 64, ctx.r11.u8);
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// stb r11,65(r26)
	REX_STORE_U8(r26.u32 + 65, ctx.r11.u8);
	// lbz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 26);
	// stb r11,66(r26)
	REX_STORE_U8(r26.u32 + 66, ctx.r11.u8);
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 27);
	// stb r11,67(r26)
	REX_STORE_U8(r26.u32 + 67, ctx.r11.u8);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r26)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r26.u32 + 68, temp.u32);
	// stw r28,72(r26)
	REX_STORE_U32(r26.u32 + 72, r28.u32);
	// lbz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 28);
	// stb r11,76(r26)
	REX_STORE_U8(r26.u32 + 76, ctx.r11.u8);
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x82139a08
	ctx.lr = 0x821D6C90;
	sub_82139A08(ctx, base);
	// b 0x821d6e08
	goto loc_821D6E08;
loc_821D6C94:
	// bl 0x8212dd28
	ctx.lr = 0x821D6C98;
	sub_8212DD28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D6CA8;
	sub_826A1E70(ctx, base);
	// addi r11,r30,24
	ctx.r11.s64 = r30.s64 + 24;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 24);
	// stb r11,64(r21)
	REX_STORE_U8(r21.u32 + 64, ctx.r11.u8);
	// lbz r11,25(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 25);
	// stb r11,65(r21)
	REX_STORE_U8(r21.u32 + 65, ctx.r11.u8);
	// lbz r11,26(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 26);
	// stb r11,66(r21)
	REX_STORE_U8(r21.u32 + 66, ctx.r11.u8);
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 27);
	// stb r11,67(r21)
	REX_STORE_U8(r21.u32 + 67, ctx.r11.u8);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r21.u32 + 68, temp.u32);
	// stw r28,72(r21)
	REX_STORE_U32(r21.u32 + 72, r28.u32);
	// lbz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 28);
	// stb r11,76(r21)
	REX_STORE_U8(r21.u32 + 76, ctx.r11.u8);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 108);
	// lbz r11,61(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 61);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r7,r11,25032
	ctx.r7.s64 = ctx.r11.s64 + 25032;
	// beq 0x821d6d14
	if (ctx.cr0.eq) goto loc_821D6D14;
	// bl 0x82139a08
	ctx.lr = 0x821D6D10;
	sub_82139A08(ctx, base);
	// b 0x821d6d18
	goto loc_821D6D18;
loc_821D6D14:
	// bl 0x82139b18
	ctx.lr = 0x821D6D18;
	sub_82139B18(ctx, base);
loc_821D6D18:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x821d6e08
	if (!ctx.cr6.eq) goto loc_821D6E08;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r4,80
	ctx.r4.s64 = 80;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// rldicl r11,r11,15,49
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 15) & 0x7FFF;
	// clrlwi r27,r11,27
	r27.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8212dd28
	ctx.lr = 0x821D6D38;
	sub_8212DD28(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821D6D48;
	sub_826A1E70(ctx, base);
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r12,-26
	ctx.r12.s64 = -26;
	// stw r28,64(r26)
	REX_STORE_U32(r26.u32 + 64, r28.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// addi r7,r11,25640
	ctx.r7.s64 = ctx.r11.s64 + 25640;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,3
	ctx.r12.s64 = 3;
	// rldicr r12,r12,50,13
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFC000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x82139b18
	ctx.lr = 0x821D6D8C;
	sub_82139B18(ctx, base);
	// lbz r11,48(r23)
	ctx.r11.u64 = REX_LOAD_U8(r23.u32 + 48);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6de8
	if (ctx.cr0.eq) goto loc_821D6DE8;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// lbz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821d6de8
	if (ctx.cr0.eq) goto loc_821D6DE8;
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r12,-14
	ctx.r12.s64 = -14;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r7,r11,25640
	ctx.r7.s64 = ctx.r11.s64 + 25640;
	// rldicr r12,r12,50,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 50) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// ld r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 104);
	// li r4,2
	ctx.r4.s64 = 2;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// li r12,5
	ctx.r12.s64 = 5;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,104(r3)
	REX_STORE_U64(ctx.r3.u32 + 104, ctx.r11.u64);
	// lwz r6,108(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 108);
	// bl 0x82139b18
	ctx.lr = 0x821D6DE8;
	sub_82139B18(ctx, base);
loc_821D6DE8:
	// lwz r11,6060(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// li r12,-32
	ctx.r12.s64 = -32;
	// rldicr r10,r27,49,14
	ctx.r10.u64 = __builtin_rotateleft64(r27.u64, 49) & 0xFFFE000000000000;
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,104(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
loc_821D6E08:
	// lwz r24,0(r24)
	r24.u64 = REX_LOAD_U32(r24.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d6b60
	if (!ctx.cr6.eq) goto loc_821D6B60;
loc_821D6E18:
	// lwz r11,116(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 116);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821d6e40
	goto loc_821D6E40;
loc_821D6E24:
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d69e8
	ctx.lr = 0x821D6E38;
	sub_821D69E8(ctx, base);
	// lwz r11,116(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 116);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821D6E40:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821d6e24
	if (!ctx.cr6.eq) goto loc_821D6E24;
loc_821D6E48:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_821FC0D8) {
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
	ctx.lr = 0x821FC0E0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r26,r11,25300
	r26.s64 = ctx.r11.s64 + 25300;
	// addi r25,r10,25200
	r25.s64 = ctx.r10.s64 + 25200;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821fc120
	if (ctx.cr6.eq) goto loc_821FC120;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,637
	ctx.r5.s64 = 637;
	// bl 0x821231d0
	ctx.lr = 0x821FC120;
	sub_821231D0(ctx, base);
loc_821FC120:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fc13c
	if (ctx.cr6.eq) goto loc_821FC13C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,683
	ctx.r5.s64 = 683;
	// bl 0x821231d0
	ctx.lr = 0x821FC13C;
	sub_821231D0(ctx, base);
loc_821FC13C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,25536
	ctx.r4.s64 = ctx.r11.s64 + 25536;
	// bl 0x8215f338
	ctx.lr = 0x821FC14C;
	sub_8215F338(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_821FC158:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821fc17c
	if (!ctx.cr6.eq) goto loc_821FC17C;
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
	// b 0x821fc180
	goto loc_821FC180;
loc_821FC17C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821FC180:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fc1dc
	if (!ctx.cr6.lt) goto loc_821FC1DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821FC198;
	sub_82120AC0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x821FC1A4;
	sub_8215F1B0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8215fba8
	ctx.lr = 0x821FC1AC;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821fc1c4
	if (ctx.cr0.eq) goto loc_821FC1C4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821fc248
	ctx.lr = 0x821FC1C0;
	sub_821FC248(ctx, base);
	// or r30,r3,r30
	r30.u64 = ctx.r3.u64 | r30.u64;
loc_821FC1C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821FC1D4;
	sub_82120AC0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x821fc158
	goto loc_821FC158;
loc_821FC1DC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821fc1f8
	if (ctx.cr6.eq) goto loc_821FC1F8;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r5,705
	ctx.r5.s64 = 705;
	// bl 0x821231d0
	ctx.lr = 0x821FC1F8;
	sub_821231D0(ctx, base);
loc_821FC1F8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,25628
	ctx.r4.s64 = ctx.r11.s64 + 25628;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8215f338
	ctx.lr = 0x821FC210;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fb00
	ctx.lr = 0x821FC218;
	sub_8215FB00(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821fc22c
	if (ctx.cr6.eq) goto loc_821FC22C;
	// and r11,r30,r24
	ctx.r11.u64 = r30.u64 & r24.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x821fc23c
	if (!ctx.cr6.eq) goto loc_821FC23C;
loc_821FC22C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821fc240
	if (!ctx.cr6.lt) goto loc_821FC240;
loc_821FC23C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FC240:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82204D28) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,30000
	ctx.r11.s64 = ctx.r11.s64 + 30000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215f0f0
	ctx.lr = 0x82204D58;
	sub_8215F0F0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,29980
	ctx.r11.s64 = ctx.r11.s64 + 29980;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82204d74
	if (ctx.cr0.eq) goto loc_82204D74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82204D74;
	sub_8269CE98(ctx, base);
loc_82204D74:
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

DEFINE_REX_FUNC(sub_822077C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822077D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r30,r3,92
	r30.s64 = ctx.r3.s64 + 92;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82207814
	if (ctx.cr6.eq) goto loc_82207814;
	// lis r29,-32106
	r29.s64 = -2104098816;
loc_822077EC:
	// lwz r3,6040(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6040);
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822077ec
	if (!ctx.cr6.eq) goto loc_822077EC;
loc_82207814:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821a6af8
	ctx.lr = 0x8220781C;
	sub_821A6AF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822093E0) {
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
	ctx.lr = 0x822093E8;
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8214f4f0
	ctx.lr = 0x822093FC;
	sub_8214F4F0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r6,r11,-7264
	ctx.r6.s64 = ctx.r11.s64 + -7264;
	// addi r5,r10,16592
	ctx.r5.s64 = ctx.r10.s64 + 16592;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lfs f11,-7264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -7264);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r31,132
	ctx.r9.s64 = r31.s64 + 132;
	// addi r8,r31,136
	ctx.r8.s64 = r31.s64 + 136;
	// stfs f11,112(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// lfs f0,22312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 22312);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,140
	ctx.r7.s64 = r31.s64 + 140;
	// addi r6,r10,32088
	ctx.r6.s64 = ctx.r10.s64 + 32088;
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,255
	ctx.r11.s64 = 255;
	// lfs f12,580(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 580);
	ctx.f12.f64 = double(temp.f32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stfs f12,108(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r29,r31,72
	r29.s64 = r31.s64 + 72;
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// addi r27,r31,76
	r27.s64 = r31.s64 + 76;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// addi r24,r31,84
	r24.s64 = r31.s64 + 84;
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// addi r22,r31,88
	r22.s64 = r31.s64 + 88;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// addi r21,r31,92
	r21.s64 = r31.s64 + 92;
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// stb r11,119(r31)
	REX_STORE_U8(r31.u32 + 119, ctx.r11.u8);
	// stb r11,118(r31)
	REX_STORE_U8(r31.u32 + 118, ctx.r11.u8);
	// lfs f12,1460(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1460);
	ctx.f12.f64 = double(temp.f32);
	// stb r11,117(r31)
	REX_STORE_U8(r31.u32 + 117, ctx.r11.u8);
	// addi r20,r31,96
	r20.s64 = r31.s64 + 96;
	// stb r11,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r11.u8);
	// addi r19,r31,100
	r19.s64 = r31.s64 + 100;
	// stb r10,123(r31)
	REX_STORE_U8(r31.u32 + 123, ctx.r10.u8);
	// addi r18,r31,104
	r18.s64 = r31.s64 + 104;
	// stb r10,122(r31)
	REX_STORE_U8(r31.u32 + 122, ctx.r10.u8);
	// addi r17,r31,108
	r17.s64 = r31.s64 + 108;
	// stb r10,121(r31)
	REX_STORE_U8(r31.u32 + 121, ctx.r10.u8);
	// addi r16,r31,112
	r16.s64 = r31.s64 + 112;
	// stb r11,120(r31)
	REX_STORE_U8(r31.u32 + 120, ctx.r11.u8);
	// stfs f13,124(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f13,128(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// addi r25,r31,116
	r25.s64 = r31.s64 + 116;
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r23,r31,120
	r23.s64 = r31.s64 + 120;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r15,r31,124
	r15.s64 = r31.s64 + 124;
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r14,r31,128
	r14.s64 = r31.s64 + 128;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x822f6280
	ctx.lr = 0x822094F0;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82209524
	if (ctx.cr0.eq) goto loc_82209524;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-29348
	ctx.r4.s64 = ctx.r11.s64 + -29348;
	// bl 0x82120600
	ctx.lr = 0x82209508;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x82196ba8
	ctx.lr = 0x8220951C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8220952c
	goto loc_8220952C;
loc_82209524:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8220952C:
	// addi r28,r31,28
	r28.s64 = r31.s64 + 28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220953C;
	sub_82145710(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209558
	if (ctx.cr0.eq) goto loc_82209558;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82209558;
	sub_82120AC0(ctx, base);
loc_82209558:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209560;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209598
	if (ctx.cr0.eq) goto loc_82209598;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-29332
	ctx.r4.s64 = ctx.r11.s64 + -29332;
	// bl 0x82120600
	ctx.lr = 0x82209578;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82196ba8
	ctx.lr = 0x8220958C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// b 0x822095a0
	goto loc_822095A0;
loc_82209598:
	// li r27,0
	r27.s64 = 0;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_822095A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822095AC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822095c8
	if (ctx.cr0.eq) goto loc_822095C8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x822095C8;
	sub_82120AC0(ctx, base);
loc_822095C8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822095D0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209604
	if (ctx.cr0.eq) goto loc_82209604;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// addi r4,r11,-29292
	ctx.r4.s64 = ctx.r11.s64 + -29292;
	// bl 0x82120600
	ctx.lr = 0x822095E8;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x822095FC;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209608
	goto loc_82209608;
loc_82209604:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209608:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209614;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209630
	if (ctx.cr0.eq) goto loc_82209630;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x82209630;
	sub_82120AC0(ctx, base);
loc_82209630:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209638;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8220966c
	if (ctx.cr0.eq) goto loc_8220966C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-29280
	ctx.r4.s64 = ctx.r11.s64 + -29280;
	// bl 0x82120600
	ctx.lr = 0x82209650;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x82209664;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209670
	goto loc_82209670;
loc_8220966C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209670:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220967C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209698
	if (ctx.cr0.eq) goto loc_82209698;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r30,r30,0,29,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x82209698;
	sub_82120AC0(ctx, base);
loc_82209698:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822096A0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822096d4
	if (ctx.cr0.eq) goto loc_822096D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,-29172
	ctx.r4.s64 = ctx.r11.s64 + -29172;
	// bl 0x82120600
	ctx.lr = 0x822096B8;
	sub_82120600(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
	// bl 0x8219e1a0
	ctx.lr = 0x822096CC;
	sub_8219E1A0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822096d8
	goto loc_822096D8;
loc_822096D4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_822096D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822096E4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209700
	if (ctx.cr0.eq) goto loc_82209700;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// rlwinm r30,r30,0,28,26
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x82209700;
	sub_82120AC0(ctx, base);
loc_82209700:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209708;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8220973c
	if (ctx.cr0.eq) goto loc_8220973C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r4,r11,-29156
	ctx.r4.s64 = ctx.r11.s64 + -29156;
	// bl 0x82120600
	ctx.lr = 0x82209720;
	sub_82120600(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
	// bl 0x8219e1a0
	ctx.lr = 0x82209734;
	sub_8219E1A0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209740
	goto loc_82209740;
loc_8220973C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209740:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220974C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209768
	if (ctx.cr0.eq) goto loc_82209768;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r30,r30,0,27,25
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// bl 0x82120ac0
	ctx.lr = 0x82209768;
	sub_82120AC0(ctx, base);
loc_82209768:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209770;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822097a4
	if (ctx.cr0.eq) goto loc_822097A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29140
	ctx.r4.s64 = ctx.r11.s64 + -29140;
	// bl 0x82120600
	ctx.lr = 0x82209788;
	sub_82120600(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,64
	r30.u64 = r30.u64 | 64;
	// bl 0x8219e1a0
	ctx.lr = 0x8220979C;
	sub_8219E1A0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822097a8
	goto loc_822097A8;
loc_822097A4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_822097A8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822097B4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822097d0
	if (ctx.cr0.eq) goto loc_822097D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r30,r30,0,26,24
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// bl 0x82120ac0
	ctx.lr = 0x822097D0;
	sub_82120AC0(ctx, base);
loc_822097D0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822097D8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8220980c
	if (ctx.cr0.eq) goto loc_8220980C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r11,-29116
	ctx.r4.s64 = ctx.r11.s64 + -29116;
	// bl 0x82120600
	ctx.lr = 0x822097F0;
	sub_82120600(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,128
	r30.u64 = r30.u64 | 128;
	// bl 0x8219e1a0
	ctx.lr = 0x82209804;
	sub_8219E1A0(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209810
	goto loc_82209810;
loc_8220980C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209810:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x8220981C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209838
	if (ctx.cr0.eq) goto loc_82209838;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// rlwinm r30,r30,0,25,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// bl 0x82120ac0
	ctx.lr = 0x82209838;
	sub_82120AC0(ctx, base);
loc_82209838:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209840;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209874
	if (ctx.cr0.eq) goto loc_82209874;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,31928
	ctx.r4.s64 = ctx.r11.s64 + 31928;
	// bl 0x82120600
	ctx.lr = 0x82209858;
	sub_82120600(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
	// bl 0x82196ba8
	ctx.lr = 0x8220986C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209878
	goto loc_82209878;
loc_82209874:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209878:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209884;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822098a0
	if (ctx.cr0.eq) goto loc_822098A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// rlwinm r30,r30,0,24,22
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// bl 0x82120ac0
	ctx.lr = 0x822098A0;
	sub_82120AC0(ctx, base);
loc_822098A0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822098A8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822098dc
	if (ctx.cr0.eq) goto loc_822098DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,31952
	ctx.r4.s64 = ctx.r11.s64 + 31952;
	// bl 0x82120600
	ctx.lr = 0x822098C0;
	sub_82120600(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,512
	r30.u64 = r30.u64 | 512;
	// bl 0x82196ba8
	ctx.lr = 0x822098D4;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822098e0
	goto loc_822098E0;
loc_822098DC:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_822098E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822098EC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209908
	if (ctx.cr0.eq) goto loc_82209908;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r30,r30,0,23,21
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209908;
	sub_82120AC0(ctx, base);
loc_82209908:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209910;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209944
	if (ctx.cr0.eq) goto loc_82209944;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,31976
	ctx.r4.s64 = ctx.r11.s64 + 31976;
	// bl 0x82120600
	ctx.lr = 0x82209928;
	sub_82120600(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,1024
	r30.u64 = r30.u64 | 1024;
	// bl 0x82196ba8
	ctx.lr = 0x8220993C;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209948
	goto loc_82209948;
loc_82209944:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209948:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209954;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209970
	if (ctx.cr0.eq) goto loc_82209970;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r30,0,22,20
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209970;
	sub_82120AC0(ctx, base);
loc_82209970:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209978;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822099ac
	if (ctx.cr0.eq) goto loc_822099AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,32000
	ctx.r4.s64 = ctx.r11.s64 + 32000;
	// bl 0x82120600
	ctx.lr = 0x82209990;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// bl 0x8219d708
	ctx.lr = 0x822099A4;
	sub_8219D708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x822099b0
	goto loc_822099B0;
loc_822099AC:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_822099B0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822099BC;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822099d8
	if (ctx.cr0.eq) goto loc_822099D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r30,r30,0,21,19
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// bl 0x82120ac0
	ctx.lr = 0x822099D8;
	sub_82120AC0(ctx, base);
loc_822099D8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822099E0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209a14
	if (ctx.cr0.eq) goto loc_82209A14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r4,r11,32012
	ctx.r4.s64 = ctx.r11.s64 + 32012;
	// bl 0x82120600
	ctx.lr = 0x822099F8;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4096
	r30.u64 = r30.u64 | 4096;
	// bl 0x8219d708
	ctx.lr = 0x82209A0C;
	sub_8219D708(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209a18
	goto loc_82209A18;
loc_82209A14:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209A18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209A24;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209a40
	if (ctx.cr0.eq) goto loc_82209A40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// rlwinm r30,r30,0,20,18
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209A40;
	sub_82120AC0(ctx, base);
loc_82209A40:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209A48;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209a7c
	if (ctx.cr0.eq) goto loc_82209A7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,32028
	ctx.r4.s64 = ctx.r11.s64 + 32028;
	// bl 0x82120600
	ctx.lr = 0x82209A60;
	sub_82120600(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8192
	r30.u64 = r30.u64 | 8192;
	// bl 0x82196ba8
	ctx.lr = 0x82209A74;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209a80
	goto loc_82209A80;
loc_82209A7C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209A80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209A8C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209aa8
	if (ctx.cr0.eq) goto loc_82209AA8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// rlwinm r30,r30,0,19,17
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209AA8;
	sub_82120AC0(ctx, base);
loc_82209AA8:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209AB0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209ae4
	if (ctx.cr0.eq) goto loc_82209AE4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// addi r4,r11,32056
	ctx.r4.s64 = ctx.r11.s64 + 32056;
	// bl 0x82120600
	ctx.lr = 0x82209AC8;
	sub_82120600(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,16384
	r30.u64 = r30.u64 | 16384;
	// bl 0x82196ba8
	ctx.lr = 0x82209ADC;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209ae8
	goto loc_82209AE8;
loc_82209AE4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209AE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209AF4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209b10
	if (ctx.cr0.eq) goto loc_82209B10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// rlwinm r30,r30,0,18,16
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209B10;
	sub_82120AC0(ctx, base);
loc_82209B10:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209B18;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209b4c
	if (ctx.cr0.eq) goto loc_82209B4C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,-29052
	ctx.r4.s64 = ctx.r11.s64 + -29052;
	// bl 0x82120600
	ctx.lr = 0x82209B30;
	sub_82120600(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r30,r30,32768
	r30.u64 = r30.u64 | 32768;
	// bl 0x82196ba8
	ctx.lr = 0x82209B44;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209b50
	goto loc_82209B50;
loc_82209B4C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209B50:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209B5C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209b78
	if (ctx.cr0.eq) goto loc_82209B78;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// rlwinm r30,r30,0,17,15
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209B78;
	sub_82120AC0(ctx, base);
loc_82209B78:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209B80;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209bb4
	if (ctx.cr0.eq) goto loc_82209BB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,-29028
	ctx.r4.s64 = ctx.r11.s64 + -29028;
	// bl 0x82120600
	ctx.lr = 0x82209B98;
	sub_82120600(ctx, base);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// oris r30,r30,1
	r30.u64 = r30.u64 | 65536;
	// bl 0x82196ba8
	ctx.lr = 0x82209BAC;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209bb8
	goto loc_82209BB8;
loc_82209BB4:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209BB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209BC4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209be0
	if (ctx.cr0.eq) goto loc_82209BE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// rlwinm r30,r30,0,16,14
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// bl 0x82120ac0
	ctx.lr = 0x82209BE0;
	sub_82120AC0(ctx, base);
loc_82209BE0:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82209BE8;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82209c1c
	if (ctx.cr0.eq) goto loc_82209C1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,-29804
	ctx.r4.s64 = ctx.r11.s64 + -29804;
	// bl 0x82120600
	ctx.lr = 0x82209C00;
	sub_82120600(ctx, base);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// oris r30,r30,2
	r30.u64 = r30.u64 | 131072;
	// bl 0x82196ba8
	ctx.lr = 0x82209C14;
	sub_82196BA8(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x82209c20
	goto loc_82209C20;
loc_82209C1C:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
loc_82209C20:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82209C2C;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82209c44
	if (ctx.cr0.eq) goto loc_82209C44;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82120ac0
	ctx.lr = 0x82209C44;
	sub_82120AC0(ctx, base);
loc_82209C44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8224E240) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c3de8
	ctx.lr = 0x8224E25C;
	sub_821C3DE8(ctx, base);
	// lfs f0,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,468(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216d040
	ctx.lr = 0x8224E28C;
	sub_8216D040(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x821a1f88
	ctx.lr = 0x8224E29C;
	sub_821A1F88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82250A20) {
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
	ctx.lr = 0x82250A58;
	sub_82120AC0(ctx, base);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r9,-12040
	ctx.r9.s64 = ctx.r9.s64 + -12040;
	// stb r11,48(r31)
	REX_STORE_U8(r31.u32 + 48, ctx.r11.u8);
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stb r11,64(r31)
	REX_STORE_U8(r31.u32 + 64, ctx.r11.u8);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stb r11,65(r31)
	REX_STORE_U8(r31.u32 + 65, ctx.r11.u8);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// stb r11,84(r31)
	REX_STORE_U8(r31.u32 + 84, ctx.r11.u8);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stb r11,85(r31)
	REX_STORE_U8(r31.u32 + 85, ctx.r11.u8);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stb r10,112(r31)
	REX_STORE_U8(r31.u32 + 112, ctx.r10.u8);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
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

DEFINE_REX_FUNC(sub_82254CA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r11,30232
	ctx.r4.s64 = ctx.r11.s64 + 30232;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x82120c08
	sub_82120C08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EF0) {
	REX_FUNC_PROLOGUE();
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82254f0c
	if (ctx.cr6.lt) goto loc_82254F0C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82254F0C:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256408) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256438;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256538
	if (!ctx.cr0.eq) goto loc_82256538;
	// lwz r3,6192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82256454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8226f580
	ctx.lr = 0x82256458;
	sub_8226F580(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r11,-2544
	ctx.r9.s64 = ctx.r11.s64 + -2544;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82256470:
	// lwzu r10,272(r9)
	ea = 272 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82256470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82256470;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82256538
	if (ctx.cr6.eq) goto loc_82256538;
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
	ctx.lr = 0x8225649C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82256538
	if (!ctx.cr6.eq) goto loc_82256538;
	// bl 0x8226fd68
	ctx.lr = 0x822564A8;
	sub_8226FD68(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82256538
	if (ctx.cr0.eq) goto loc_82256538;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822564D4;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r11,-26252
	ctx.r5.s64 = ctx.r11.s64 + -26252;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822564EC;
	sub_8216B6A8(ctx, base);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x8225650c
	if (!ctx.cr6.eq) goto loc_8225650C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,33
	ctx.r6.s64 = 33;
	// addi r5,r11,-26236
	ctx.r5.s64 = ctx.r11.s64 + -26236;
	// b 0x82256518
	goto loc_82256518;
loc_8225650C:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r5,r11,-26200
	ctx.r5.s64 = ctx.r11.s64 + -26200;
loc_82256518:
	// bl 0x8216b6a8
	ctx.lr = 0x8225651C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x8225652C;
	sub_8216BC98(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// b 0x82256540
	goto loc_82256540;
loc_82256538:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82256558
	ctx.lr = 0x82256540;
	sub_82256558(ctx, base);
loc_82256540:
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

DEFINE_REX_FUNC(sub_82260F20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1573(r3)
	REX_STORE_U8(ctx.r3.u32 + 1573, ctx.r10.u8);
	// stb r10,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822618F8) {
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
	ctx.lr = 0x82261900;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r11,-608
	r30.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x82261934
	if (!ctx.cr6.eq) goto loc_82261934;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x82261934;
	sub_821231D0(ctx, base);
loc_82261934:
	// cmplwi cr6,r29,14
	ctx.cr6.compare<uint32_t>(r29.u32, 14, ctx.xer);
	// bge cr6,0x82261950
	if (!ctx.cr6.lt) goto loc_82261950;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x82261950;
	sub_821231D0(ctx, base);
loc_82261950:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32783
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32783, ctx.xer);
	// beq cr6,0x82261970
	if (ctx.cr6.eq) goto loc_82261970;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x82261970;
	sub_821231D0(ctx, base);
loc_82261970:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r30,10(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 10);
	// ldx r29,r31,r11
	r29.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(r29.u64, 0, ctx.xer);
	// std r29,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, r29.u64);
	// bne cr6,0x822619a0
	if (!ctx.cr6.eq) goto loc_822619A0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-540
	ctx.r4.s64 = ctx.r11.s64 + -540;
	// addi r3,r10,-364
	ctx.r3.s64 = ctx.r10.s64 + -364;
	// li r5,500
	ctx.r5.s64 = 500;
	// bl 0x821231d0
	ctx.lr = 0x822619A0;
	sub_821231D0(ctx, base);
loc_822619A0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r21,192
	ctx.r3.s64 = r21.s64 + 192;
	// bl 0x8228c390
	ctx.lr = 0x822619AC;
	sub_8228C390(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82261de4
	if (ctx.cr0.eq) goto loc_82261DE4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,184(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822619CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82261a20
	if (ctx.cr6.eq) goto loc_82261A20;
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// addi r11,r11,280
	ctx.r11.s64 = ctx.r11.s64 + 280;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bgt 0x822619fc
	if (ctx.cr0.gt) goto loc_822619FC;
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
loc_822619FC:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82261A08:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r10,r29
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, r29.u64, ctx.xer);
	// bne cr6,0x82261a18
	if (!ctx.cr6.eq) goto loc_82261A18;
	// std r26,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r26.u64);
loc_82261A18:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82261a08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82261A08;
loc_82261A20:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stw r30,116(r27)
	REX_STORE_U32(r27.u32 + 116, r30.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r23,r11,1624
	r23.s64 = ctx.r11.s64 + 1624;
	// addi r22,r10,-31468
	r22.s64 = ctx.r10.s64 + -31468;
	// blt cr6,0x82261bd4
	if (ctx.cr6.lt) goto loc_82261BD4;
	// mulli r11,r30,80
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// add r10,r11,r21
	ctx.r10.u64 = ctx.r11.u64 + r21.u64;
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// addi r31,r10,280
	r31.s64 = ctx.r10.s64 + 280;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// lwz r10,284(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 284);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82261A60:
	// ld r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82261a80
	if (ctx.cr6.eq) goto loc_82261A80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x82261a60
	if (ctx.cr6.lt) goto loc_82261A60;
	// b 0x82261a90
	goto loc_82261A90;
loc_82261A80:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r29,r11,r31
	REX_STORE_U64(ctx.r11.u32 + r31.u32, r29.u64);
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
loc_82261A90:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261A9C;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31460
	ctx.r4.s64 = ctx.r11.s64 + -31460;
	// bl 0x8215f670
	ctx.lr = 0x82261AA8;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f670
	ctx.lr = 0x82261AB4;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r25,r11,-26828
	r25.s64 = ctx.r11.s64 + -26828;
loc_82261AC4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82261ae8
	if (!ctx.cr6.eq) goto loc_82261AE8;
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
	// b 0x82261aec
	goto loc_82261AEC;
loc_82261AE8:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_82261AEC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// addi r28,r10,24544
	r28.s64 = ctx.r10.s64 + 24544;
	// bge cr6,0x82261b70
	if (!ctx.cr6.lt) goto loc_82261B70;
	// lwz r3,128(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x82261B20;
	sub_8215F200(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261B28;
	sub_8215F670(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82261B2C;
	sub_8215FA30(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82125d00
	ctx.lr = 0x82261B34;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82261b44
	if (ctx.cr0.eq) goto loc_82261B44;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82261ac4
	goto loc_82261AC4;
loc_82261B44:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r30,12(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x82261B54;
	sub_8215F200(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261B5C;
	sub_8215F670(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82261B64;
	sub_8215F0F0(ctx, base);
	// stw r30,8(r20)
	REX_STORE_U32(r20.u32 + 8, r30.u32);
	// mr r26,r24
	r26.u64 = r24.u64;
	// stw r24,0(r20)
	REX_STORE_U32(r20.u32 + 0, r24.u32);
loc_82261B70:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82261bd4
	if (!ctx.cr0.eq) goto loc_82261BD4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f270
	ctx.lr = 0x82261B80;
	sub_8215F270(ctx, base);
	// lwz r11,128(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 128);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261B9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261BAC;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215fbf8
	ctx.lr = 0x82261BB4;
	sub_8215FBF8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8215f670
	ctx.lr = 0x82261BC4;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82261BCC;
	sub_8215F0F0(ctx, base);
	// stw r31,8(r30)
	REX_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r24,0(r30)
	REX_STORE_U32(r30.u32 + 0, r24.u32);
loc_82261BD4:
	// lwz r3,128(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261BE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261BF8;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16408
	r31.s64 = ctx.r11.s64 + 16408;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261C08;
	sub_8215F670(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261C10;
	sub_8215F670(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lwz r29,116(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 116);
	// addi r30,r11,-17264
	r30.s64 = ctx.r11.s64 + -17264;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261C24;
	sub_8215F670(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25716
	ctx.r4.s64 = ctx.r11.s64 + -25716;
	// bl 0x8215f670
	ctx.lr = 0x82261C30;
	sub_8215F670(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x8215f0f0
	ctx.lr = 0x82261C38;
	sub_8215F0F0(ctx, base);
	// stw r29,8(r28)
	REX_STORE_U32(r28.u32 + 8, r29.u32);
	// stw r24,0(r28)
	REX_STORE_U32(r28.u32 + 0, r24.u32);
	// lwz r3,128(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261C54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261de4
	if (ctx.cr0.eq) goto loc_82261DE4;
	// lwz r3,128(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261C70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261C80;
	sub_8215F670(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16420
	ctx.r4.s64 = ctx.r11.s64 + 16420;
	// bl 0x8215f670
	ctx.lr = 0x82261C8C;
	sub_8215F670(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x82261C94;
	sub_8215F200(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261C9C;
	sub_8215F670(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82261CB0;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82261CC0;
	sub_82120AC0(ctx, base);
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82261ce0
	if (!ctx.cr6.eq) goto loc_82261CE0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,-24148
	ctx.r4.s64 = ctx.r11.s64 + -24148;
	// b 0x82261cec
	goto loc_82261CEC;
loc_82261CE0:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-24140
	ctx.r4.s64 = ctx.r11.s64 + -24140;
loc_82261CEC:
	// bl 0x82120c08
	ctx.lr = 0x82261CF0;
	sub_82120C08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-24168
	ctx.r4.s64 = ctx.r11.s64 + -24168;
	// bl 0x8215f670
	ctx.lr = 0x82261D00;
	sub_8215F670(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82261d14
	if (!ctx.cr6.lt) goto loc_82261D14;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82261D14:
	// bl 0x8215fbf8
	ctx.lr = 0x82261D18;
	sub_8215FBF8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r27,12
	ctx.r4.s64 = r27.s64 + 12;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82264298
	ctx.lr = 0x82261D2C;
	sub_82264298(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261dc4
	if (ctx.cr0.eq) goto loc_82261DC4;
	// lwz r3,128(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-24116
	ctx.r4.s64 = ctx.r11.s64 + -24116;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261D5C;
	sub_8215F670(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x82261D64;
	sub_8215F200(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r31,r11,16192
	r31.s64 = ctx.r11.s64 + 16192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261D74;
	sub_8215F670(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82261d88
	if (!ctx.cr6.lt) goto loc_82261D88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82261D88:
	// bl 0x8215fbf8
	ctx.lr = 0x82261D8C;
	sub_8215FBF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8215f670
	ctx.lr = 0x82261D98;
	sub_8215F670(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82261dac
	if (!ctx.cr6.lt) goto loc_82261DAC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82261DAC:
	// bl 0x8215fbf8
	ctx.lr = 0x82261DB0;
	sub_8215FBF8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r27,40
	ctx.r3.s64 = r27.s64 + 40;
	// bl 0x82120b20
	ctx.lr = 0x82261DC4;
	sub_82120B20(ctx, base);
loc_82261DC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82261DD4;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x82261DE4;
	sub_82120AC0(ctx, base);
loc_82261DE4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_822837B0) {
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
	ctx.lr = 0x822837B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,60
	r28.s64 = ctx.r3.s64 + 60;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// lfs f13,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// li r29,2
	r29.s64 = 2;
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r30,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stb r30,56(r3)
	REX_STORE_U8(ctx.r3.u32 + 56, r30.u8);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
loc_82283820:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x82283830;
	sub_82120AC0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// bge 0x82283820
	if (!ctx.cr0.lt) goto loc_82283820;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r31,140
	ctx.r11.s64 = r31.s64 + 140;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82283848:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82283848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82283848;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82287E48) {
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
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82287E90;
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

DEFINE_REX_FUNC(sub_82289FA0) {
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
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82289fd8
	if (ctx.cr6.eq) goto loc_82289FD8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,3060
	ctx.r4.s64 = ctx.r11.s64 + 3060;
	// addi r3,r10,3168
	ctx.r3.s64 = ctx.r10.s64 + 3168;
	// li r5,338
	ctx.r5.s64 = 338;
	// bl 0x821231d0
	ctx.lr = 0x82289FD8;
	sub_821231D0(ctx, base);
loc_82289FD8:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,52(r11)
	REX_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
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

DEFINE_REX_FUNC(sub_8228AF60) {
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
	// lis r31,-32106
	r31.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,30276
	ctx.r4.s64 = ctx.r11.s64 + 30276;
	// lwz r3,6076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AF98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6076(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6076);
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r9,-816
	ctx.r4.s64 = ctx.r9.s64 + -816;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8228AFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228afd8
	if (!ctx.cr6.eq) goto loc_8228AFD8;
	// lbz r31,8(r3)
	r31.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
loc_8228AFD8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228aff8
	if (ctx.cr0.eq) goto loc_8228AFF8;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6212(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6212);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228AFF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8228AFF8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
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

DEFINE_REX_FUNC(sub_8228F400) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8228F408;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228F434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228f470
	if (ctx.cr6.eq) goto loc_8228F470;
	// bne 0x8228f468
	if (!ctx.cr0.eq) goto loc_8228F468;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8228F44C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822aad90
	ctx.lr = 0x8228F464;
	sub_822AAD90(ctx, base);
	// b 0x8228f474
	goto loc_8228F474;
loc_8228F468:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x8228f44c
	goto loc_8228F44C;
loc_8228F470:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228F474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82292588) {
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
	ctx.lr = 0x82292590;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// ld r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ld r8,16(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// li r3,256
	ctx.r3.s64 = 256;
	// ld r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// std r8,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r8.u64);
	// std r7,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// bl 0x822c1a70
	ctx.lr = 0x822925C8;
	sub_822C1A70(ctx, base);
	// li r24,1
	r24.s64 = 1;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r27,64
	r27.s64 = 64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// beq 0x822925ec
	if (ctx.cr0.eq) goto loc_822925EC;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_822925EC:
	// mr r29,r24
	r29.u64 = r24.u64;
	// lis r23,-32126
	r23.s64 = -2105409536;
	// lis r25,-32106
	r25.s64 = -2104098816;
loc_822925F8:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r26,-4(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8229266c
	if (ctx.cr6.gt) goto loc_8229266C;
	// lfs f0,16(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8229266c
	if (ctx.cr6.lt) goto loc_8229266C;
	// lfs f0,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8229266c
	if (ctx.cr6.gt) goto loc_8229266C;
	// lfs f0,20(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8229266c
	if (ctx.cr6.lt) goto loc_8229266C;
	// lfs f0,8(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8229266c
	if (ctx.cr6.gt) goto loc_8229266C;
	// lfs f0,24(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lfs f13,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82292670
	if (!ctx.cr6.lt) goto loc_82292670;
loc_8229266C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82292670:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82292808
	if (ctx.cr0.eq) goto loc_82292808;
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822927f0
	if (ctx.cr6.eq) goto loc_822927F0;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bne cr6,0x82292720
	if (!ctx.cr6.eq) goto loc_82292720;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x8229269c
	if (!ctx.cr6.eq) goto loc_8229269C;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8229269C:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// bge cr6,0x82292720
	if (!ctx.cr6.lt) goto loc_82292720;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x822926bc
	if (ctx.cr6.eq) goto loc_822926BC;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x822926B4;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822926c0
	goto loc_822926C0;
loc_822926BC:
	// li r31,0
	r31.s64 = 0;
loc_822926C0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822926ec
	if (!ctx.cr6.gt) goto loc_822926EC;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
loc_822926D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822926e4
	if (ctx.cr6.eq) goto loc_822926E4;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822926E4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822926d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822926D4;
loc_822926EC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82292710
	if (ctx.cr6.eq) goto loc_82292710;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r10,-19400(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82292710;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82292710:
	// mr r27,r30
	r27.u64 = r30.u64;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_82292720:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82292734
	if (ctx.cr0.eq) goto loc_82292734;
	// lwz r10,36(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 36);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82292734:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// bne cr6,0x822927d4
	if (!ctx.cr6.eq) goto loc_822927D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82292750
	if (!ctx.cr6.eq) goto loc_82292750;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82292750:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(r27.s32, r30.s32, ctx.xer);
	// bge cr6,0x822927d4
	if (!ctx.cr6.lt) goto loc_822927D4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82292770
	if (ctx.cr6.eq) goto loc_82292770;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822c1a70
	ctx.lr = 0x82292768;
	sub_822C1A70(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82292774
	goto loc_82292774;
loc_82292770:
	// li r31,0
	r31.s64 = 0;
loc_82292774:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822927a0
	if (!ctx.cr6.gt) goto loc_822927A0;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
loc_82292788:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292798
	if (ctx.cr6.eq) goto loc_82292798;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82292798:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82292788
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82292788;
loc_822927A0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822927c4
	if (ctx.cr6.eq) goto loc_822927C4;
	// lwz r11,112(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 112);
	// lwz r10,-19400(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + -19400);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r3,-4(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -4);
	// stw r11,112(r25)
	REX_STORE_U32(r25.u32 + 112, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822927C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822927C4:
	// mr r27,r30
	r27.u64 = r30.u64;
	// stb r24,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r30,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_822927D4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822927e8
	if (ctx.cr0.eq) goto loc_822927E8;
	// lwz r10,40(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822927E8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x82292808
	goto loc_82292808;
loc_822927F0:
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lwz r4,36(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 36);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82292808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82292808:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bgt cr6,0x822925f8
	if (ctx.cr6.gt) goto loc_822925F8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bl 0x821eced8
	ctx.lr = 0x82292820;
	sub_821ECED8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822AAEA0) {
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
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6776
	ctx.r11.s64 = ctx.r11.s64 + 6776;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822aaeec
	if (ctx.cr0.eq) goto loc_822AAEEC;
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822aaeec
	if (ctx.cr6.eq) goto loc_822AAEEC;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AAEEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AAEEC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r11,r11,4552
	ctx.r11.s64 = ctx.r11.s64 + 4552;
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

DEFINE_REX_FUNC(sub_822AF4D8) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2c8c
	ctx.lr = 0x822AF4EC;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f10,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f31,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	f31.f64 = double(temp.f32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f26,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	f26.f64 = double(temp.f32);
	// fsubs f0,f31,f11
	ctx.f0.f64 = double(float(f31.f64 - ctx.f11.f64));
	// fsubs f1,f26,f10
	ctx.f1.f64 = double(float(f26.f64 - ctx.f10.f64));
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f30,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	f30.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f25,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	f25.f64 = double(temp.f32);
	// fsubs f29,f30,f9
	f29.f64 = double(float(f30.f64 - ctx.f9.f64));
	// lfs f4,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f25,f11
	ctx.f12.f64 = double(float(f25.f64 - ctx.f11.f64));
	// lfs f24,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	f24.f64 = double(temp.f32);
	// fsubs f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fsubs f28,f24,f9
	f28.f64 = double(float(f24.f64 - ctx.f9.f64));
	// lfs f8,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f7,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,16(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f27,f1,f0
	f27.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f2,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f23,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f23.f64 = double(temp.f32);
	// stfs f23,92(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f22,f29,f12
	f22.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmuls f21,f28,f13
	f21.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmsubs f13,f13,f12,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, -f27.f64)));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmsubs f12,f28,f0,f22
	ctx.f12.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, -f22.f64)));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f0,f1,f29,f21
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, -f21.f64)));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// fmuls f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// fmuls f29,f8,f13
	f29.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f28,f6,f13
	f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f1,f10,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f1.f64)));
	// fmadds f29,f7,f12,f29
	f29.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, f29.f64)));
	// fmadds f28,f5,f12,f28
	f28.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, f28.f64)));
	// fmadds f1,f11,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f1.f64)));
	// fmadds f29,f3,f0,f29
	f29.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, f29.f64)));
	// fmadds f28,f2,f0,f28
	f28.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, f28.f64)));
	// fsubs f22,f29,f1
	f22.f64 = double(float(f29.f64 - ctx.f1.f64));
	// fsubs f1,f28,f1
	ctx.f1.f64 = double(float(f28.f64 - ctx.f1.f64));
	// fmuls f29,f1,f22
	f29.f64 = double(float(ctx.f1.f64 * f22.f64));
	// fcmpu cr6,f29,f23
	ctx.cr6.compare(f29.f64, f23.f64);
	// bge cr6,0x822af754
	if (!ctx.cr6.lt) goto loc_822AF754;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822af5e0
	if (ctx.cr0.eq) goto loc_822AF5E0;
	// fcmpu cr6,f22,f23
	ctx.cr6.compare(f22.f64, f23.f64);
	// bgt cr6,0x822af754
	if (ctx.cr6.gt) goto loc_822AF754;
loc_822AF5E0:
	// fsubs f1,f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f22.f64 - ctx.f1.f64));
	// lfs f29,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f29.f64 = double(temp.f32);
	// fdivs f1,f22,f1
	ctx.f1.f64 = double(float(f22.f64 / ctx.f1.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x822af754
	if (!ctx.cr6.lt) goto loc_822AF754;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fmuls f27,f13,f13
	f27.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f28,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	f28.f64 = double(temp.f32);
	// fsubs f21,f28,f1
	f21.f64 = double(float(f28.f64 - ctx.f1.f64));
	// lfs f29,1232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1232);
	f29.f64 = double(temp.f32);
	// fmadds f27,f12,f12,f27
	f27.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, f27.f64)));
	// fmuls f3,f3,f21
	ctx.f3.f64 = double(float(ctx.f3.f64 * f21.f64));
	// fmuls f7,f7,f21
	ctx.f7.f64 = double(float(ctx.f7.f64 * f21.f64));
	// fmuls f21,f8,f21
	f21.f64 = double(float(ctx.f8.f64 * f21.f64));
	// fmadds f27,f0,f0,f27
	f27.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, f27.f64)));
	// fmadds f8,f2,f1,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmadds f7,f5,f1,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, ctx.f7.f64)));
	// fmadds f6,f6,f1,f21
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, f21.f64)));
	// fmuls f2,f27,f29
	ctx.f2.f64 = double(float(f27.f64 * f29.f64));
	// fsubs f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fsubs f11,f4,f7
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fsubs f10,f31,f8
	ctx.f10.f64 = double(float(f31.f64 - ctx.f8.f64));
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f9,f30,f6
	ctx.f9.f64 = double(float(f30.f64 - ctx.f6.f64));
	// fmuls f31,f11,f5
	f31.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f30,f4,f10
	f30.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f29,f9,f3
	f29.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmsubs f31,f3,f10,f31
	f31.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, -f31.f64)));
	// fmsubs f30,f9,f5,f30
	f30.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, -f30.f64)));
	// fmsubs f29,f11,f4,f29
	f29.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, -f29.f64)));
	// fmuls f31,f31,f13
	f31.f64 = double(float(f31.f64 * ctx.f13.f64));
	// fmadds f31,f30,f12,f31
	f31.f64 = double(float(std::fma(f30.f64, ctx.f12.f64, f31.f64)));
	// fmadds f31,f29,f0,f31
	f31.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, f31.f64)));
	// fcmpu cr6,f31,f2
	ctx.cr6.compare(f31.f64, ctx.f2.f64);
	// blt cr6,0x822af754
	if (ctx.cr6.lt) goto loc_822AF754;
	// fsubs f7,f26,f7
	ctx.f7.f64 = double(float(f26.f64 - ctx.f7.f64));
	// fsubs f6,f24,f6
	ctx.f6.f64 = double(float(f24.f64 - ctx.f6.f64));
	// fsubs f8,f25,f8
	ctx.f8.f64 = double(float(f25.f64 - ctx.f8.f64));
	// fmuls f31,f7,f10
	f31.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f29,f6,f11
	f29.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f30,f9,f8
	f30.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmsubs f11,f11,f8,f31
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, -f31.f64)));
	// fmsubs f9,f7,f9,f29
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -f29.f64)));
	// fmsubs f10,f6,f10,f30
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f10.f64, -f30.f64)));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f11,f10,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f11,f9,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64)));
	// fcmpu cr6,f11,f2
	ctx.cr6.compare(ctx.f11.f64, ctx.f2.f64);
	// blt cr6,0x822af754
	if (ctx.cr6.lt) goto loc_822AF754;
	// fmuls f11,f3,f8
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f10,f6,f5
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f9,f7,f4
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmsubs f11,f7,f5,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, -ctx.f11.f64)));
	// fmsubs f10,f4,f8,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, -ctx.f10.f64)));
	// fmsubs f9,f6,f3,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f3.f64, -ctx.f9.f64)));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f13,f10,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f13,f2
	ctx.cr6.compare(ctx.f13.f64, ctx.f2.f64);
	// blt cr6,0x822af754
	if (ctx.cr6.lt) goto loc_822AF754;
	// fsqrts f13,f27
	ctx.f13.f64 = double(float(sqrt(f27.f64)));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdivs f10,f28,f13
	ctx.f10.f64 = double(float(f28.f64 / ctx.f13.f64));
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f12,f11,f10
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne 0x822af718
	if (!ctx.cr0.eq) goto loc_822AF718;
	// fcmpu cr6,f22,f23
	ctx.cr6.compare(f22.f64, f23.f64);
	// ble cr6,0x822af718
	if (!ctx.cr6.gt) goto loc_822AF718;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x822af738
	goto loc_822AF738;
loc_822AF718:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f23,108(r1)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_822AF738:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AF750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
loc_822AF754:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x826a2cd8
	ctx.lr = 0x822AF760;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3488) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C38E0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3A38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0x20) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10560(r3)
	REX_STORE_U32(ctx.r3.u32 + 10560, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4660) {
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
	ctx.lr = 0x822C4668;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822c46d0
	if (ctx.cr6.eq) goto loc_822C46D0;
	// lwz r10,24(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// subfic r11,r4,17
	ctx.xer.ca = ctx.r4.u32 <= 17;
	ctx.r11.u64 = static_cast<uint64_t>(17) - ctx.r4.u64;
	// lwz r5,28(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = ctx.r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	ctx.r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.u64 = ctx.r5.u64 - ctx.r6.u64;
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stw r6,1780(r9)
	REX_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
loc_822C46D0:
	// addi r11,r29,3159
	ctx.r11.s64 = r29.s64 + 3159;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	r28.u64 = REX_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822c4748
	if (ctx.cr6.eq) goto loc_822C4748;
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c46f8
	if (ctx.cr6.eq) goto loc_822C46F8;
	// stw r11,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r11.u32);
	// b 0x822c4748
	goto loc_822C4748;
loc_822C46F8:
	// lwz r11,10912(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10912);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c4748
	if (ctx.cr0.eq) goto loc_822C4748;
	// lwz r11,13740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13740);
	// lwz r3,13736(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 13736);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c4720
	if (ctx.cr6.lt) goto loc_822C4720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d8da0
	ctx.lr = 0x822C4720;
	sub_822D8DA0(ctx, base);
loc_822C4720:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13736(r31)
	REX_STORE_U32(r31.u32 + 13736, ctx.r9.u32);
loc_822C4748:
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// stwx r30,r27,r31
	REX_STORE_U32(r27.u32 + r31.u32, r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r9,12704(r11)
	REX_STORE_U8(ctx.r11.u32 + 12704, ctx.r9.u8);
	// beq 0x822c4778
	if (ctx.cr0.eq) goto loc_822C4778;
	// lbz r11,12008(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 12008);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c4778
	if (ctx.cr6.eq) goto loc_822C4778;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
loc_822C4778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822CDF00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// b 0x822cb8e0
	sub_822CB8E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CE510) {
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
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,19968
	ctx.r3.s64 = 19968;
	// bl 0x823f02b8
	ctx.lr = 0x822CE52C;
	sub_823F02B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x822ce53c
	if (!ctx.cr0.eq) goto loc_822CE53C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822ce548
	goto loc_822CE548;
loc_822CE53C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ce150
	ctx.lr = 0x822CE544;
	sub_822CE150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822CE548:
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

DEFINE_REX_FUNC(sub_822D1B30) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// rlwinm. r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822d1b68
	if (!ctx.cr0.eq) goto loc_822D1B68;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_822D1B68:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x822d1ba0
	if (!ctx.cr6.eq) goto loc_822D1BA0;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822d1bc8
	goto loc_822D1BC8;
loc_822D1BA0:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,6,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822D1BC8:
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D61A8) {
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
	ctx.lr = 0x822D61B0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10908);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d61f4
	if (ctx.cr6.eq) goto loc_822D61F4;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d61f4
	if (ctx.cr6.eq) goto loc_822D61F4;
	// bl 0x822d5fd8
	ctx.lr = 0x822D61D8;
	sub_822D5FD8(ctx, base);
	// b 0x822d61e4
	goto loc_822D61E4;
loc_822D61DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823ecca8
	ctx.lr = 0x822D61E4;
	sub_823ECCA8(ctx, base);
loc_822D61E4:
	// lwz r10,10988(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10988);
	// lwz r11,10992(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10992);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822d61dc
	if (!ctx.cr6.eq) goto loc_822D61DC;
loc_822D61F4:
	// lwz r11,15116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d623c
	if (ctx.cr6.eq) goto loc_822D623C;
	// lwz r8,15120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15120);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r8,3
	ctx.r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r4,r7,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r3,r7,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r7.u64;
	// bl 0x822daf40
	ctx.lr = 0x822D623C;
	sub_822DAF40(ctx, base);
loc_822D623C:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15048(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15048);
	// bl 0x823f0350
	ctx.lr = 0x822D6248;
	sub_823F0350(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15052(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 15052);
	// bl 0x823f0350
	ctx.lr = 0x822D6254;
	sub_823F0350(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,15048(r31)
	REX_STORE_U32(r31.u32 + 15048, r29.u32);
	// stw r29,15052(r31)
	REX_STORE_U32(r31.u32 + 15052, r29.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// bl 0x82793cd4
	ctx.lr = 0x822D6270;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,10900(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// bl 0x823f0350
	ctx.lr = 0x822D627C;
	sub_823F0350(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,10896(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// bl 0x823f0350
	ctx.lr = 0x822D6288;
	sub_823F0350(ctx, base);
	// stw r29,10900(r31)
	REX_STORE_U32(r31.u32 + 10900, r29.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r29,10896(r31)
	REX_STORE_U32(r31.u32 + 10896, r29.u32);
	// bne cr6,0x822d62a0
	if (!ctx.cr6.eq) goto loc_822D62A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d6608
	goto loc_822D6608;
loc_822D62A0:
	// lwz r25,4(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r27,8(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lwz r28,12(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// lwz r30,16(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 20);
	// bne cr6,0x822d62c4
	if (!ctx.cr6.eq) goto loc_822D62C4;
	// lis r25,0
	r25.s64 = 0;
	// ori r25,r25,32768
	r25.u64 = r25.u64 | 32768;
loc_822D62C4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x822d62d0
	if (!ctx.cr6.eq) goto loc_822D62D0;
	// lis r28,32
	r28.s64 = 2097152;
loc_822D62D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d62dc
	if (!ctx.cr6.eq) goto loc_822D62DC;
	// li r11,32
	ctx.r11.s64 = 32;
loc_822D62DC:
	// divwu r26,r28,r11
	r26.u64 = uint32_t(ctx.r11.u32 ? r28.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822d6300
	if (!ctx.cr6.eq) goto loc_822D6300;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f02b8
	ctx.lr = 0x822D62F8;
	sub_823F02B8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r3,15048(r31)
	REX_STORE_U32(r31.u32 + 15048, ctx.r3.u32);
loc_822D6300:
	// li r24,3
	r24.s64 = 3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822d6334
	if (!ctx.cr6.eq) goto loc_822D6334;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	ctx.xer.ca = r28.u32 >= ctx.r11.u32;
	ctx.r11.u64 = r28.u64 - ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & r24.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x823f02b8
	ctx.lr = 0x822D632C;
	sub_823F02B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,15052(r31)
	REX_STORE_U32(r31.u32 + 15052, ctx.r3.u32);
loc_822D6334:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822d6600
	if (ctx.cr6.eq) goto loc_822D6600;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d6600
	if (ctx.cr6.eq) goto loc_822D6600;
	// lis r4,-23168
	ctx.r4.s64 = -1518338048;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x823f02b8
	ctx.lr = 0x822D6350;
	sub_823F02B8(ctx, base);
	// stw r3,10896(r31)
	REX_STORE_U32(r31.u32 + 10896, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d6600
	if (ctx.cr0.eq) goto loc_822D6600;
	// lis r4,-27264
	ctx.r4.s64 = -1786773504;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823f02b8
	ctx.lr = 0x822D6368;
	sub_823F02B8(ctx, base);
	// stw r3,10900(r31)
	REX_STORE_U32(r31.u32 + 10900, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d6600
	if (ctx.cr0.eq) goto loc_822D6600;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,10896(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x822D6384;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,10900(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// bl 0x826a2e60
	ctx.lr = 0x822D6394;
	sub_826A2E60(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subfic r23,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	r23.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// bl 0x82793cf4
	ctx.lr = 0x822D63A4;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82793d24
	ctx.lr = 0x822D63AC;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x822d63c4
	if (!ctx.cr6.gt) goto loc_822D63C4;
	// li r4,19
	ctx.r4.s64 = 19;
loc_822D63C4:
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82793d14
	ctx.lr = 0x822D63E4;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r26,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,15120(r31)
	REX_STORE_U32(r31.u32 + 15120, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,15148(r31)
	REX_STORE_U32(r31.u32 + 15148, ctx.r11.u32);
	// stw r27,15108(r31)
	REX_STORE_U32(r31.u32 + 15108, r27.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = r30.s64 + -4;
	// stw r30,15116(r31)
	REX_STORE_U32(r31.u32 + 15116, r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,15136(r31)
	REX_STORE_U32(r31.u32 + 15136, r30.u32);
	// stw r30,15140(r31)
	REX_STORE_U32(r31.u32 + 15140, r30.u32);
	// stw r26,15124(r31)
	REX_STORE_U32(r31.u32 + 15124, r26.u32);
	// stw r8,15112(r31)
	REX_STORE_U32(r31.u32 + 15112, ctx.r8.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r29.u32);
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,10956(r31)
	REX_STORE_U32(r31.u32 + 10956, r29.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r7.u32);
	// stw r29,15128(r31)
	REX_STORE_U32(r31.u32 + 15128, r29.u32);
	// bne cr6,0x822d6464
	if (!ctx.cr6.eq) goto loc_822D6464;
	// stw r24,10908(r31)
	REX_STORE_U32(r31.u32 + 10908, r24.u32);
loc_822D6464:
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10908);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r9,15132(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15132);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82793cd4
	ctx.lr = 0x822D6498;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-16367
	ctx.r9.s64 = -1072627712;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// ori r8,r9,18432
	ctx.r8.u64 = ctx.r9.u64 | 18432;
	// addi r10,r10,8240
	ctx.r10.s64 = ctx.r10.s64 + 8240;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_822D64CC:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x822d64cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D64CC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,10924(r31)
	REX_STORE_U16(r31.u32 + 10924, ctx.r10.u16);
	// sth r11,10926(r31)
	REX_STORE_U16(r31.u32 + 10926, ctx.r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r29,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r29,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// bl 0x82793ce4
	ctx.lr = 0x822D6518;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d52b8
	ctx.lr = 0x822D6528;
	sub_822D52B8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d6540
	if (!ctx.cr6.gt) goto loc_822D6540;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D6540;
	sub_822D5B28(ctx, base);
loc_822D6540:
	// li r11,3330
	ctx.r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	ctx.r11.u64 = ctx.r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r5,476
	ctx.r5.s64 = 476;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// ori r4,r4,55
	ctx.r4.u64 = ctx.r4.u64 | 55;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// lwz r10,10900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10900);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d65d8
	if (!ctx.cr6.gt) goto loc_822D65D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5b28
	ctx.lr = 0x822D65D4;
	sub_822D5B28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822D65D8:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,3332
	ctx.r10.s64 = 3332;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// b 0x822d6608
	goto loc_822D6608;
loc_822D6600:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_822D6608:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822F5EE0) {
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
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,2544
	ctx.r11.s64 = ctx.r11.s64 + 2544;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822f5f14
	if (ctx.cr0.eq) goto loc_822F5F14;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8269d770
	ctx.lr = 0x822F5F14;
	sub_8269D770(ctx, base);
loc_822F5F14:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_822F68F0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f66b0
	ctx.lr = 0x822F690C;
	sub_822F66B0(ctx, base);
	// lis r31,-32126
	r31.s64 = -2105409536;
	// addi r3,r31,-10936
	ctx.r3.s64 = r31.s64 + -10936;
	// bl 0x822f68a8
	ctx.lr = 0x822F6918;
	sub_822F68A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-10936(r31)
	REX_STORE_U32(r31.u32 + -10936, ctx.r11.u32);
	// bl 0x822f6700
	ctx.lr = 0x822F6928;
	sub_822F6700(ctx, base);
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

DEFINE_REX_FUNC(sub_822F7880) {
	REX_FUNC_PROLOGUE();
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f7894
	if (ctx.cr6.eq) goto loc_822F7894;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_822F7894:
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x822f78c8
	if (!ctx.cr6.gt) goto loc_822F78C8;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_822F78AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822f78ac
	if (ctx.cr6.lt) goto loc_822F78AC;
loc_822F78C8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FA988) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fa9c8
	if (!ctx.cr0.eq) goto loc_822FA9C8;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa9a8
	if (ctx.cr6.eq) goto loc_822FA9A8;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fa9ac
	goto loc_822FA9AC;
loc_822FA9A8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_822FA9AC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822fa9c8
	if (ctx.cr6.eq) goto loc_822FA9C8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fa9c4
	if (ctx.cr6.eq) goto loc_822FA9C4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822fa9c8
	goto loc_822FA9C8;
loc_822FA9C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FA9C8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822fa9d8
	if (!ctx.cr6.eq) goto loc_822FA9D8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_822FA9D8:
	// lwz r3,312(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822FBF60) {
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
	// bl 0x822fbbf8
	ctx.lr = 0x822FBF84;
	sub_822FBBF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fbfa8
	if (!ctx.cr0.eq) goto loc_822FBFA8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FBFA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FBFA8:
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

DEFINE_REX_FUNC(sub_822FDEB8) {
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
	ctx.lr = 0x822FDEC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fe2a4
	if (!ctx.cr0.eq) goto loc_822FE2A4;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FDEF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f77d8
	ctx.lr = 0x822FDF00;
	sub_822F77D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822fdf18
	if (ctx.cr0.eq) goto loc_822FDF18;
loc_822FDF08:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// b 0x822fe2a8
	goto loc_822FE2A8;
loc_822FDF18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fc610
	ctx.lr = 0x822FDF24;
	sub_822FC610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fe2a8
	if (!ctx.cr0.eq) goto loc_822FE2A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r27,0
	r27.s64 = 0;
	// addi r29,r11,3748
	r29.s64 = ctx.r11.s64 + 3748;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lis r28,-32129
	r28.s64 = -2105606144;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdfcc
	if (ctx.cr6.eq) goto loc_822FDFCC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x822fdfcc
	if (ctx.cr6.eq) goto loc_822FDFCC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fdfac
	if (!ctx.cr6.gt) goto loc_822FDFAC;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822FDF68:
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822fdf94
	if (ctx.cr6.eq) goto loc_822FDF94;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,172(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// stw r27,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r27.u32);
loc_822FDF94:
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x822fdf68
	if (ctx.cr6.lt) goto loc_822FDF68;
loc_822FDFAC:
	// lwz r10,168(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,875
	ctx.r6.s64 = 875;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FDFCC;
	sub_82330D00(ctx, base);
loc_822FDFCC:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FDFE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fdf08
	if (!ctx.cr0.eq) goto loc_822FDF08;
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r27,36(r31)
	REX_STORE_U32(r31.u32 + 36, r27.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe104
	if (ctx.cr6.eq) goto loc_822FE104;
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822fe040
	if (ctx.cr6.eq) goto loc_822FE040;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,899
	ctx.r6.s64 = 899;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE040;
	sub_82330D00(ctx, base);
loc_822FE040:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822fe068
	if (ctx.cr6.eq) goto loc_822FE068;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,904
	ctx.r6.s64 = 904;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE068;
	sub_82330D00(ctx, base);
loc_822FE068:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7130
	ctx.lr = 0x822FE070;
	sub_822F7130(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822fe0bc
	if (ctx.cr0.eq) goto loc_822FE0BC;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe08c
	if (ctx.cr6.eq) goto loc_822FE08C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822fe090
	goto loc_822FE090;
loc_822FE08C:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822FE090:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fe0bc
	if (!ctx.cr6.eq) goto loc_822FE0BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f7130
	ctx.lr = 0x822FE0A0;
	sub_822F7130(ctx, base);
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,913
	ctx.r6.s64 = 913;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE0BC;
	sub_82330D00(ctx, base);
loc_822FE0BC:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822fe104
	if (ctx.cr6.eq) goto loc_822FE104;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe0e0
	if (ctx.cr6.eq) goto loc_822FE0E0;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822fe0e4
	goto loc_822FE0E4;
loc_822FE0E0:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822FE0E4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fe104
	if (!ctx.cr6.eq) goto loc_822FE104;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,925
	ctx.r6.s64 = 925;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE104;
	sub_82330D00(ctx, base);
loc_822FE104:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe118
	if (ctx.cr6.eq) goto loc_822FE118;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe11c
	goto loc_822FE11C;
loc_822FE118:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_822FE11C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fe140
	if (ctx.cr6.eq) goto loc_822FE140;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe134
	if (ctx.cr6.eq) goto loc_822FE134;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe138
	goto loc_822FE138;
loc_822FE134:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822FE138:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822f7778
	ctx.lr = 0x822FE140;
	sub_822F7778(ctx, base);
loc_822FE140:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x822fe164
	if (ctx.cr6.eq) goto loc_822FE164;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,937
	ctx.r6.s64 = 937;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE164;
	sub_82330D00(ctx, base);
loc_822FE164:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe178
	if (ctx.cr6.eq) goto loc_822FE178;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fe17c
	goto loc_822FE17C;
loc_822FE178:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822FE17C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fe1b8
	if (!ctx.cr6.eq) goto loc_822FE1B8;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,-10820(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -10820);
	// lwz r25,0(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x822f70d8
	ctx.lr = 0x822FE198;
	sub_822F70D8(ctx, base);
	// lwz r11,224(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 224);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,60(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 60);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,68(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822FE1B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fe1f4
	if (ctx.cr6.eq) goto loc_822FE1F4;
	// lwz r30,32(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x822fe1f8
	goto loc_822FE1F8;
loc_822FE1F4:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_822FE1F8:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FE20C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fdf08
	if (!ctx.cr0.eq) goto loc_822FDF08;
	// lwz r4,168(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fe240
	if (ctx.cr6.eq) goto loc_822FE240;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822fe240
	if (!ctx.cr6.eq) goto loc_822FE240;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,974
	ctx.r6.s64 = 974;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE240;
	sub_82330D00(ctx, base);
loc_822FE240:
	// lwz r4,172(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fe26c
	if (ctx.cr6.eq) goto loc_822FE26C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x822fe26c
	if (!ctx.cr6.eq) goto loc_822FE26C;
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,984
	ctx.r6.s64 = 984;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE26C;
	sub_82330D00(ctx, base);
loc_822FE26C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fe2a4
	if (ctx.cr0.eq) goto loc_822FE2A4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fe288
	if (ctx.cr6.eq) goto loc_822FE288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8230ecc8
	ctx.lr = 0x822FE284;
	sub_8230ECC8(ctx, base);
	// b 0x822fe2a4
	goto loc_822FE2A4;
loc_822FE288:
	// lwz r11,1012(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1012);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,997
	ctx.r6.s64 = 997;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x822FE2A4;
	sub_82330D00(ctx, base);
loc_822FE2A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FE2A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82317838) {
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
	// beq cr6,0x82317880
	if (ctx.cr6.eq) goto loc_82317880;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823178a8
	if (!ctx.cr0.eq) goto loc_823178A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823178ac
	if (!ctx.cr0.eq) goto loc_823178AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823178a4
	goto loc_823178A4;
loc_82317880:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823178ac
	if (!ctx.cr0.eq) goto loc_823178AC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823178A4:
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
loc_823178A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823178AC:
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

DEFINE_REX_FUNC(sub_8231BD58) {
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
	ctx.lr = 0x8231BD60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231bdac
	if (!ctx.cr6.gt) goto loc_8231BDAC;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231BD80:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8231BD98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231bd80
	if (ctx.cr6.lt) goto loc_8231BD80;
loc_8231BDAC:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r27,-32129
	r27.s64 = -2105606144;
	// addi r28,r11,6576
	r28.s64 = ctx.r11.s64 + 6576;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231bddc
	if (ctx.cr6.eq) goto loc_8231BDDC;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1831
	ctx.r6.s64 = 1831;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231BDDC;
	sub_82330D00(ctx, base);
loc_8231BDDC:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231be00
	if (ctx.cr6.eq) goto loc_8231BE00;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1835
	ctx.r6.s64 = 1835;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231BE00;
	sub_82330D00(ctx, base);
loc_8231BE00:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231be18
	if (ctx.cr6.eq) goto loc_8231BE18;
	// bl 0x823151e8
	ctx.lr = 0x8231BE10;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231be88
	if (!ctx.cr0.eq) goto loc_8231BE88;
loc_8231BE18:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231be4c
	if (!ctx.cr6.gt) goto loc_8231BE4C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231BE2C:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8231bcf0
	ctx.lr = 0x8231BE38;
	sub_8231BCF0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231be2c
	if (ctx.cr6.lt) goto loc_8231BE2C;
loc_8231BE4C:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8231be70
	if (ctx.cr6.eq) goto loc_8231BE70;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1848
	ctx.r6.s64 = 1848;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231BE70;
	sub_82330D00(ctx, base);
loc_8231BE70:
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
loc_8231BE88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82326558) {
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
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// b 0x82326598
	goto loc_82326598;
loc_82326578:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x82326588
	if (!ctx.cr6.eq) goto loc_82326588;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82326588:
	// bl 0x8232b6e0
	ctx.lr = 0x8232658C;
	sub_8232B6E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823265a4
	if (!ctx.cr0.eq) goto loc_823265A4;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82326598:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x82326578
	if (!ctx.cr6.eq) goto loc_82326578;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823265A4:
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

DEFINE_REX_FUNC(sub_82329A20) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// b 0x82329a54
	goto loc_82329A54;
loc_82329A44:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x82329a5c
	if (ctx.cr6.eq) goto loc_82329A5C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82329A54:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82329a44
	if (!ctx.cr6.eq) goto loc_82329A44;
loc_82329A5C:
	// subf r10,r11,r31
	ctx.r10.u64 = r31.u64 - ctx.r11.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329af0
	if (!ctx.cr6.eq) goto loc_82329AF0;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,7904
	ctx.r5.s64 = ctx.r10.s64 + 7904;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r6,107
	ctx.r6.s64 = 107;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x82329A9C;
	sub_82330A38(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82329ac0
	if (ctx.cr0.eq) goto loc_82329AC0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// b 0x82329ac4
	goto loc_82329AC4;
loc_82329AC0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82329AC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82329ad4
	if (!ctx.cr6.eq) goto loc_82329AD4;
	// li r3,44
	ctx.r3.s64 = 44;
	// b 0x82329b00
	goto loc_82329B00;
loc_82329AD4:
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_82329AF0:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_82329B00:
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

DEFINE_REX_FUNC(sub_8232FC08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8232FC10;
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
	// bl 0x82332760
	ctx.lr = 0x8232FC2C;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fc4c
	if (!ctx.cr6.eq) goto loc_8232FC4C;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823347f0
	ctx.lr = 0x8232FC4C;
	sub_823347F0(ctx, base);
loc_8232FC4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82331620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r8,r4,-1
	ctx.r8.s64 = ctx.r4.s64 + -1;
loc_8233162C:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82331658
	if (ctx.cr6.eq) goto loc_82331658;
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82331658
	if (!ctx.cr6.eq) goto loc_82331658;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8233162c
	if (ctx.cr6.lt) goto loc_8233162C;
loc_82331658:
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82335138) {
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
	ctx.lr = 0x82335140;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r6,26296
	ctx.r6.s64 = 26296;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335160;
	sub_82331A00(ctx, base);
	// addi r30,r27,40
	r30.s64 = r27.s64 + 40;
	// addi r29,r27,32
	r29.s64 = r27.s64 + 32;
	// li r23,0
	r23.s64 = 0;
	// lwz r31,40(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 40);
loc_82335170:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & r30.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823351b8
	if (ctx.cr6.eq) goto loc_823351B8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-8
	ctx.r3.s64 = r31.s64 + -8;
	// bne cr6,0x82335194
	if (!ctx.cr6.eq) goto loc_82335194;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_82335194:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823351A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82335170
	goto loc_82335170;
loc_823351B8:
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lis r26,-32129
	r26.s64 = -2105606144;
	// lwz r11,15880(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 15880);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823351e0
	if (ctx.cr6.eq) goto loc_823351E0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823351E0;
	sub_82331A00(ctx, base);
loc_823351E0:
	// lwz r11,308(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335238
	if (ctx.cr6.eq) goto loc_82335238;
	// lwz r11,304(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 304);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82335238
	if (!ctx.cr6.gt) goto loc_82335238;
	// mr r31,r23
	r31.u64 = r23.u64;
loc_82335200:
	// lwz r11,308(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 308);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233521C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r11,304(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 304);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,424
	r31.s64 = r31.s64 + 424;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82335200
	if (ctx.cr6.lt) goto loc_82335200;
loc_82335238:
	// lwz r11,1176(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335268
	if (ctx.cr6.eq) goto loc_82335268;
	// lwz r10,356(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 356);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335268
	if (ctx.cr6.eq) goto loc_82335268;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bctrl 
	ctx.lr = 0x82335260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
loc_82335268:
	// lwz r31,1208(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 1208);
	// li r24,1
	r24.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823352c0
	if (ctx.cr6.eq) goto loc_823352C0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823352a8
	if (ctx.cr6.eq) goto loc_823352A8;
	// lbz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823352c0
	if (!ctx.cr6.eq) goto loc_823352C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355c90
	ctx.lr = 0x82335298;
	sub_82355C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,360(r31)
	REX_STORE_U8(r31.u32 + 360, r24.u8);
	// b 0x823352c0
	goto loc_823352C0;
loc_823352A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355c90
	ctx.lr = 0x823352B4;
	sub_82355C90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,360(r31)
	REX_STORE_U8(r31.u32 + 360, r23.u8);
loc_823352C0:
	// lwz r11,1224(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335300
	if (ctx.cr6.eq) goto loc_82335300;
	// lwz r11,1200(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1200);
	// lwz r10,1196(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1196);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823352e0
	if (!ctx.cr6.lt) goto loc_823352E0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823352E0:
	// lwz r10,1212(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1212);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331a00
	ctx.lr = 0x82335300;
	sub_82331A00(ctx, base);
loc_82335300:
	// addi r30,r27,1228
	r30.s64 = r27.s64 + 1228;
	// li r31,128
	r31.s64 = 128;
loc_82335308:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335348
	if (ctx.cr6.eq) goto loc_82335348;
	// lwz r11,1200(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1200);
	// lwz r10,1196(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1196);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82335328
	if (!ctx.cr6.lt) goto loc_82335328;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82335328:
	// lwz r10,1212(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 1212);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82331a00
	ctx.lr = 0x82335348;
	sub_82331A00(ctx, base);
loc_82335348:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82335308
	if (!ctx.cr0.eq) goto loc_82335308;
	// lwz r11,1740(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1740);
	// addi r3,r27,1740
	ctx.r3.s64 = r27.s64 + 1740;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8233536C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r11,4348(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335394
	if (ctx.cr6.eq) goto loc_82335394;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335394;
	sub_82331A00(ctx, base);
loc_82335394:
	// lwz r11,4352(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823353b4
	if (ctx.cr6.eq) goto loc_823353B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823353B4;
	sub_82331A00(ctx, base);
loc_823353B4:
	// lwz r11,4356(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823353d4
	if (ctx.cr6.eq) goto loc_823353D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823353D4;
	sub_82331A00(ctx, base);
loc_823353D4:
	// lwz r11,4360(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823353f4
	if (ctx.cr6.eq) goto loc_823353F4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823353F4;
	sub_82331A00(ctx, base);
loc_823353F4:
	// lis r25,-32129
	r25.s64 = -2105606144;
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82335460
	if (ctx.cr6.eq) goto loc_82335460;
	// lis r30,-32126
	r30.s64 = -2105409536;
loc_82335410:
	// li r6,344
	ctx.r6.s64 = 344;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335424;
	sub_82331A00(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,15912(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 15912);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335438;
	sub_82331A00(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x8233544C;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82335410
	if (!ctx.cr6.eq) goto loc_82335410;
loc_82335460:
	// lwz r31,4368(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4368);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823354b4
	if (ctx.cr6.eq) goto loc_823354B4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233549c
	if (ctx.cr6.eq) goto loc_8233549C;
	// lbz r11,292(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 292);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823354b4
	if (!ctx.cr6.eq) goto loc_823354B4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354920
	ctx.lr = 0x8233548C;
	sub_82354920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,292(r31)
	REX_STORE_U8(r31.u32 + 292, r24.u8);
	// b 0x823354b4
	goto loc_823354B4;
loc_8233549C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82354920
	ctx.lr = 0x823354A8;
	sub_82354920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,292(r31)
	REX_STORE_U8(r31.u32 + 292, r23.u8);
loc_823354B4:
	// lwz r31,4372(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 4372);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82335508
	if (ctx.cr6.eq) goto loc_82335508;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823354f0
	if (ctx.cr6.eq) goto loc_823354F0;
	// lbz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335508
	if (!ctx.cr6.eq) goto loc_82335508;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823498d8
	ctx.lr = 0x823354E0;
	sub_823498D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,40(r31)
	REX_STORE_U8(r31.u32 + 40, r24.u8);
	// b 0x82335508
	goto loc_82335508;
loc_823354F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823498d8
	ctx.lr = 0x823354FC;
	sub_823498D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,40(r31)
	REX_STORE_U8(r31.u32 + 40, r23.u8);
loc_82335508:
	// lwz r31,20884(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 20884);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8233555c
	if (ctx.cr6.eq) goto loc_8233555C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82335544
	if (ctx.cr6.eq) goto loc_82335544;
	// lbz r11,360(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233555c
	if (!ctx.cr6.eq) goto loc_8233555C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355f60
	ctx.lr = 0x82335534;
	sub_82355F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,360(r31)
	REX_STORE_U8(r31.u32 + 360, r24.u8);
	// b 0x8233555c
	goto loc_8233555C;
loc_82335544:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355f60
	ctx.lr = 0x82335550;
	sub_82355F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,360(r31)
	REX_STORE_U8(r31.u32 + 360, r23.u8);
loc_8233555C:
	// lwz r31,21364(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 21364);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823355b0
	if (ctx.cr6.eq) goto loc_823355B0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82335598
	if (ctx.cr6.eq) goto loc_82335598;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823355b0
	if (!ctx.cr6.eq) goto loc_823355B0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82356b10
	ctx.lr = 0x82335588;
	sub_82356B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x823355b0
	goto loc_823355B0;
loc_82335598:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82356b10
	ctx.lr = 0x823355A4;
	sub_82356B10(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,0(r31)
	REX_STORE_U8(r31.u32 + 0, r23.u8);
loc_823355B0:
	// lwz r31,21824(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 21824);
	// addi r30,r27,21824
	r30.s64 = r27.s64 + 21824;
	// addi r29,r27,21820
	r29.s64 = r27.s64 + 21820;
loc_823355BC:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & r30.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82335604
	if (ctx.cr6.eq) goto loc_82335604;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823355e0
	if (!ctx.cr6.eq) goto loc_823355E0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823355E0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823355F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x823355bc
	goto loc_823355BC;
loc_82335604:
	// lwz r31,21920(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 21920);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82335658
	if (ctx.cr6.eq) goto loc_82335658;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82335640
	if (ctx.cr6.eq) goto loc_82335640;
	// lbz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335658
	if (!ctx.cr6.eq) goto loc_82335658;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f50
	ctx.lr = 0x82335630;
	sub_82357F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,12(r31)
	REX_STORE_U8(r31.u32 + 12, r24.u8);
	// b 0x82335658
	goto loc_82335658;
loc_82335640:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82357f50
	ctx.lr = 0x8233564C;
	sub_82357F50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,12(r31)
	REX_STORE_U8(r31.u32 + 12, r23.u8);
loc_82335658:
	// lwz r11,21960(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 21960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82335678
	if (ctx.cr6.eq) goto loc_82335678;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335678;
	sub_82331A00(ctx, base);
loc_82335678:
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823356a0
	if (ctx.cr6.eq) goto loc_823356A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x8233569C;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
loc_823356A0:
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823356c0
	if (ctx.cr6.eq) goto loc_823356C0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823356C0;
	sub_82331A00(ctx, base);
loc_823356C0:
	// lwz r11,22008(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22008);
	// addi r3,r27,22008
	ctx.r3.s64 = r27.s64 + 22008;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823356D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r11,22024(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22024);
	// addi r3,r27,22024
	ctx.r3.s64 = r27.s64 + 22024;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823356F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// addi r31,r27,23072
	r31.s64 = r27.s64 + 23072;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82335734
	if (ctx.cr6.eq) goto loc_82335734;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233574c
	if (!ctx.cr6.eq) goto loc_8233574C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353808
	ctx.lr = 0x82335724;
	sub_82353808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,4(r31)
	REX_STORE_U8(r31.u32 + 4, r24.u8);
	// b 0x8233574c
	goto loc_8233574C;
loc_82335734:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82353808
	ctx.lr = 0x82335740;
	sub_82353808(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,4(r31)
	REX_STORE_U8(r31.u32 + 4, r23.u8);
loc_8233574C:
	// lwz r11,23372(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 23372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233576c
	if (ctx.cr6.eq) goto loc_8233576C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x8233576C;
	sub_82331A00(ctx, base);
loc_8233576C:
	// lwz r11,23376(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 23376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233578c
	if (ctx.cr6.eq) goto loc_8233578C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x8233578C;
	sub_82331A00(ctx, base);
loc_8233578C:
	// lwz r11,23380(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 23380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823357ac
	if (ctx.cr6.eq) goto loc_823357AC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r6,1144(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 1144);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x823357AC;
	sub_82331A00(ctx, base);
loc_823357AC:
	// addi r31,r27,23440
	r31.s64 = r27.s64 + 23440;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x823357e0
	if (ctx.cr6.eq) goto loc_823357E0;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823357f8
	if (!ctx.cr6.eq) goto loc_823357F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355038
	ctx.lr = 0x823357D0;
	sub_82355038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x823357f8
	goto loc_823357F8;
loc_823357E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355038
	ctx.lr = 0x823357EC;
	sub_82355038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,0(r31)
	REX_STORE_U8(r31.u32 + 0, r23.u8);
loc_823357F8:
	// addi r31,r27,23720
	r31.s64 = r27.s64 + 23720;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8233582c
	if (ctx.cr6.eq) goto loc_8233582C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335844
	if (!ctx.cr6.eq) goto loc_82335844;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355038
	ctx.lr = 0x8233581C;
	sub_82355038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r24,0(r31)
	REX_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x82335844
	goto loc_82335844;
loc_8233582C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82355038
	ctx.lr = 0x82335838;
	sub_82355038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// stb r23,0(r31)
	REX_STORE_U8(r31.u32 + 0, r23.u8);
loc_82335844:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,24000
	ctx.r3.s64 = r27.s64 + 24000;
	// bl 0x82332610
	ctx.lr = 0x82335850;
	sub_82332610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,24280
	ctx.r3.s64 = r27.s64 + 24280;
	// bl 0x82332610
	ctx.lr = 0x82335864;
	sub_82332610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r11,22444(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 22444);
	// addi r3,r27,22444
	ctx.r3.s64 = r27.s64 + 22444;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r11,24980(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24980);
	// addi r3,r27,24980
	ctx.r3.s64 = r27.s64 + 24980;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823358A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r31,25576(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 25576);
	// addi r30,r27,25576
	r30.s64 = r27.s64 + 25576;
	// addi r29,r27,25572
	r29.s64 = r27.s64 + 25572;
loc_823358B8:
	// subfic r11,r29,0
	ctx.xer.ca = r29.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r29.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 & r30.u64;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82335900
	if (ctx.cr6.eq) goto loc_82335900;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r3,r31,-4
	ctx.r3.s64 = r31.s64 + -4;
	// bne cr6,0x823358dc
	if (!ctx.cr6.eq) goto loc_823358DC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_823358DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823358F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x823358b8
	goto loc_823358B8;
loc_82335900:
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335930
	if (ctx.cr6.eq) goto loc_82335930;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335928;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
loc_82335930:
	// bl 0x823d1958
	ctx.lr = 0x82335934;
	sub_823D1958(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82331a00
	ctx.lr = 0x82335948;
	sub_82331A00(ctx, base);
	// lwz r11,1012(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1012);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82335978
	if (ctx.cr6.eq) goto loc_82335978;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82335970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233597c
	if (!ctx.cr6.eq) goto loc_8233597C;
loc_82335978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233597C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82375D28) {
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
	ctx.lr = 0x82375D30;
	// stwu r1,-1776(r1)
	ea = -1776 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,512
	r15.s64 = 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,256(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// bl 0x82340e38
	ctx.lr = 0x82375D50;
	sub_82340E38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375fc4
	if (!ctx.cr6.eq) goto loc_82375FC4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823754c0
	ctx.lr = 0x82375D70;
	sub_823754C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375fc4
	if (!ctx.cr6.eq) goto loc_82375FC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r11,17848
	ctx.r3.s64 = ctx.r11.s64 + 17848;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375D8C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82375da0
	if (ctx.cr6.eq) goto loc_82375DA0;
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x826a1cd4
	return;
loc_82375DA0:
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823754c0
	ctx.lr = 0x82375DC0;
	sub_823754C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375fc0
	if (!ctx.cr6.eq) goto loc_82375FC0;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r26,r30,17840
	r26.s64 = r30.s64 + 17840;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,1120
	r27.s64 = ctx.r1.s64 + 1120;
	// li r21,0
	r21.s64 = 0;
	// addi r20,r31,17828
	r20.s64 = r31.s64 + 17828;
	// addi r25,r3,17820
	r25.s64 = ctx.r3.s64 + 17820;
	// addi r19,r4,17808
	r19.s64 = ctx.r4.s64 + 17808;
	// addi r24,r5,17796
	r24.s64 = ctx.r5.s64 + 17796;
	// addi r18,r6,17780
	r18.s64 = ctx.r6.s64 + 17780;
	// addi r23,r7,17768
	r23.s64 = ctx.r7.s64 + 17768;
	// addi r17,r8,17752
	r17.s64 = ctx.r8.s64 + 17752;
	// addi r22,r9,17716
	r22.s64 = ctx.r9.s64 + 17716;
	// addi r16,r10,17740
	r16.s64 = ctx.r10.s64 + 17740;
	// addi r30,r11,17732
	r30.s64 = ctx.r11.s64 + 17732;
loc_82375E2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stbx r21,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, r21.u8);
	// stbx r21,r31,r27
	REX_STORE_U8(r31.u32 + r27.u32, r21.u8);
	// bl 0x823316d8
	ctx.lr = 0x82375E4C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375e64
	if (!ctx.cr6.eq) goto loc_82375E64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375E64:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x82375f68
	if (!ctx.cr6.eq) goto loc_82375F68;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82375340
	ctx.lr = 0x82375E84;
	sub_82375340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375fc4
	if (!ctx.cr6.eq) goto loc_82375FC4;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375E9C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375eb8
	if (!ctx.cr6.eq) goto loc_82375EB8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375EB8:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375EC8;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375ee4
	if (!ctx.cr6.eq) goto loc_82375EE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375EE4:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375EF4;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375f10
	if (!ctx.cr6.eq) goto loc_82375F10;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375F10:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375F20;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375f3c
	if (!ctx.cr6.eq) goto loc_82375F3C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375F3C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823316d8
	ctx.lr = 0x82375F4C;
	sub_823316D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82375f90
	if (!ctx.cr6.eq) goto loc_82375F90;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// b 0x82375f7c
	goto loc_82375F7C;
loc_82375F68:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331568
	ctx.lr = 0x82375F70;
	sub_82331568(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// addi r7,r31,1
	ctx.r7.s64 = r31.s64 + 1;
loc_82375F7C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239e6b0
	ctx.lr = 0x82375F90;
	sub_8239E6B0(ctx, base);
loc_82375F90:
	// stw r15,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// addi r6,r1,1120
	ctx.r6.s64 = ctx.r1.s64 + 1120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823754c0
	ctx.lr = 0x82375FB0;
	sub_823754C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,1120
	r27.s64 = ctx.r1.s64 + 1120;
	// beq cr6,0x82375e2c
	if (ctx.cr6.eq) goto loc_82375E2C;
loc_82375FC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82375FC4:
	// addi r1,r1,1776
	ctx.r1.s64 = ctx.r1.s64 + 1776;
	// b 0x826a1cd4
	return;
}

DEFINE_REX_FUNC(sub_82392500) {
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
	// lwz r3,256(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 256);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239252C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82392550
	if (!ctx.cr6.eq) goto loc_82392550;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
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
loc_82392550:
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

DEFINE_REX_FUNC(sub_82394010) {
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
	// beq cr6,0x82394054
	if (ctx.cr6.eq) goto loc_82394054;
	// lbz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82394070
	if (!ctx.cr6.eq) goto loc_82394070;
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,1272(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1272);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x8239404C;
	sub_82331A00(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8239406c
	goto loc_8239406C;
loc_82394054:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r6,1272(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1272);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82331a00
	ctx.lr = 0x82394068;
	sub_82331A00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8239406C:
	// stb r11,264(r31)
	REX_STORE_U8(r31.u32 + 264, ctx.r11.u8);
loc_82394070:
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

DEFINE_REX_FUNC(sub_82398368) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82398378
	if (!ctx.cr6.eq) goto loc_82398378;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82398378:
	// b 0x82398128
	sub_82398128(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8239B450) {
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
	// addi r30,r31,16312
	r30.s64 = r31.s64 + 16312;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x8239B47C;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,20468
	ctx.r11.s64 = ctx.r11.s64 + 20468;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,16312(r31)
	REX_STORE_U32(r31.u32 + 16312, ctx.r11.u32);
	// lis r5,-32198
	ctx.r5.s64 = -2110128128;
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lis r6,-32195
	ctx.r6.s64 = -2109931520;
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// lis r7,-32195
	ctx.r7.s64 = -2109931520;
	// addi r11,r5,-19400
	ctx.r11.s64 = ctx.r5.s64 + -19400;
	// addi r10,r6,6488
	ctx.r10.s64 = ctx.r6.s64 + 6488;
	// addi r9,r7,6488
	ctx.r9.s64 = ctx.r7.s64 + 6488;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r8,-32195
	ctx.r8.s64 = -2109931520;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r11,r8,6488
	ctx.r11.s64 = ctx.r8.s64 + 6488;
	// li r9,264
	ctx.r9.s64 = 264;
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

DEFINE_REX_FUNC(sub_8239DF38) {
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
	// lwz r6,140(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x8239DF68;
	sub_82331A00(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239df94
	if (ctx.cr6.eq) goto loc_8239DF94;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8239DF8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239dfbc
	if (!ctx.cr6.eq) goto loc_8239DFBC;
loc_8239DF94:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239dfb8
	if (ctx.cr6.eq) goto loc_8239DFB8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bctrl 
	ctx.lr = 0x8239DFB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8239dfbc
	if (!ctx.cr6.eq) goto loc_8239DFBC;
loc_8239DFB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239DFBC:
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

DEFINE_REX_FUNC(sub_823A0880) {
	REX_FUNC_PROLOGUE();
	// lwz r3,128(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_823A19B0) {
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
	ctx.lr = 0x823A19B8;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r4,23440
	ctx.r4.s64 = ctx.r4.s64 + 23440;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823a1858
	ctx.lr = 0x823A19CC;
	sub_823A1858(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,23448(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 23448);
	// addi r4,r31,23720
	ctx.r4.s64 = r31.s64 + 23720;
	// bl 0x823a1858
	ctx.lr = 0x823A19E0;
	sub_823A1858(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r4,r31,24000
	ctx.r4.s64 = r31.s64 + 24000;
	// lwz r26,23728(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 23728);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a1858
	ctx.lr = 0x823A19F4;
	sub_823A1858(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,24008(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24008);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rlwimi r10,r29,16,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwimi r9,r29,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// rlwimi r30,r3,16,16,31
	r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF) | (r30.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r8,r28,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r25,r3,16,0,15
	r25.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (r25.u64 & 0xFFFFFFFF0000FFFF);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// rlwimi r7,r28,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r10,24,16,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwimi r6,r27,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r10,r9,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// mr r31,r26
	r31.u64 = r26.u64;
	// rlwimi r5,r27,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r9,r8,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwimi r4,r26,16,16,31
	ctx.r4.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// rlwinm r7,r6,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwimi r31,r26,16,0,15
	r31.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r5,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r5,r4,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFF;
	// rlwimi r24,r11,16,16,31
	r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF) | (r24.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r23,r11,16,0,15
	r23.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (r23.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r31,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r31,r30,24,16,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xFFFF;
	// or r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 | ctx.r10.u64;
	// rlwinm r30,r25,8,0,15
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r29,r24,24,16,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFFFF;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// rlwinm r28,r23,8,0,15
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r9,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// or r7,r31,r30
	ctx.r7.u64 = r31.u64 | r30.u64;
	// stb r11,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// or r6,r29,r28
	ctx.r6.u64 = r29.u64 | r28.u64;
	// stb r11,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r11.u8);
	// li r27,44
	r27.s64 = 44;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r26,5
	r26.s64 = 5;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lis r5,-32129
	ctx.r5.s64 = -2105606144;
	// stb r26,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r26.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lwz r11,1012(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 1012);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8235f178
	ctx.lr = 0x823A1AF0;
	sub_8235F178(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_823ACC70) {
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
	ctx.lr = 0x823ACC78;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823acc98
	if (!ctx.cr6.eq) goto loc_823ACC98;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cfc
	return;
loc_823ACC98:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 72);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823acdc4
	if (ctx.cr6.eq) goto loc_823ACDC4;
	// lwz r10,776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823acdc4
	if (ctx.cr6.eq) goto loc_823ACDC4;
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823ACCBC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + ctx.r11.u64;
	// lwz r9,22464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 22464);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823acd10
	if (ctx.cr6.eq) goto loc_823ACD10;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ACCF0;
	sub_8235ADB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + ctx.r11.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// lwz r3,22464(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 22464);
	// bl 0x82348e28
	ctx.lr = 0x823ACD08;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACD10:
	// addi r30,r30,132
	r30.s64 = r30.s64 + 132;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,528
	ctx.cr6.compare<int32_t>(r30.s32, 528, ctx.xer);
	// blt cr6,0x823accbc
	if (ctx.cr6.lt) goto loc_823ACCBC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,25000(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acd44
	if (ctx.cr6.eq) goto loc_823ACD44;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x82348e28
	ctx.lr = 0x823ACD3C;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACD44:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823acd5c
	if (!ctx.cr6.eq) goto loc_823ACD5C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823ACD5C:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823acdac
	if (ctx.cr6.eq) goto loc_823ACDAC;
loc_823ACD68:
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823acd88
	if (ctx.cr6.eq) goto loc_823ACD88;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x82348e28
	ctx.lr = 0x823ACD80;
	sub_82348E28(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACD88:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823acd9c
	if (!ctx.cr6.eq) goto loc_823ACD9C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823ACD9C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823acd68
	if (!ctx.cr6.eq) goto loc_823ACD68;
loc_823ACDAC:
	// lwz r4,72(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r4.u32);
	// bl 0x823ac2f0
	ctx.lr = 0x823ACDBC;
	sub_823AC2F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACDC4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,11188(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 11188);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfd f1,10608(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 10608);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8269f778
	ctx.lr = 0x823ACDF4;
	sub_8269F778(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f11,288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// beq cr6,0x823ace1c
	if (ctx.cr6.eq) goto loc_823ACE1C;
	// stfs f0,288(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 288, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lfs f1,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823aabd8
	ctx.lr = 0x823ACE1C;
	sub_823AABD8(ctx, base);
loc_823ACE1C:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// mr r29,r25
	r29.u64 = r25.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ace34
	if (ctx.cr6.eq) goto loc_823ACE34;
	// li r29,1
	r29.s64 = 1;
loc_823ACE34:
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ace44
	if (ctx.cr6.eq) goto loc_823ACE44;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823ACE44:
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ace54
	if (ctx.cr6.eq) goto loc_823ACE54;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823ACE54:
	// rlwinm r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ace64
	if (ctx.cr6.eq) goto loc_823ACE64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823ACE64:
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// li r27,16
	r27.s64 = 16;
loc_823ACE70:
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823acee0
	if (!ctx.cr6.eq) goto loc_823ACEE0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x823ace94
	if (!ctx.cr6.eq) goto loc_823ACE94;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x823acee0
	if (ctx.cr6.eq) goto loc_823ACEE0;
loc_823ACE94:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ACEB4;
	sub_8235ADB0(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r5,56(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823ACEDC;
	sub_8235AE80(ctx, base);
	// b 0x823acfa4
	goto loc_823ACFA4;
loc_823ACEE0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823ACF00;
	sub_8235AE80(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bgt cr6,0x823acf10
	if (ctx.cr6.gt) goto loc_823ACF10;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACF10:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// lwz r9,22464(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 22464);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823acfa4
	if (ctx.cr6.eq) goto loc_823ACFA4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,22444
	ctx.r3.s64 = ctx.r11.s64 + 22444;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823ACF40;
	sub_8235ADB0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823acf84
	if (!ctx.cr6.eq) goto loc_823ACF84;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823acf78
	if (!ctx.cr6.eq) goto loc_823ACF78;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823acf74
	if (!ctx.cr6.eq) goto loc_823ACF74;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823acf74
	if (!ctx.cr6.eq) goto loc_823ACF74;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
loc_823ACF74:
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
loc_823ACF78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x823ac2f0
	ctx.lr = 0x823ACF84;
	sub_823AC2F0(ctx, base);
loc_823ACF84:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,22444
	ctx.r4.s64 = ctx.r11.s64 + 22444;
	// lfs f1,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823aade0
	ctx.lr = 0x823ACF9C;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACFA4:
	// addi r28,r28,132
	r28.s64 = r28.s64 + 132;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r28,528
	ctx.cr6.compare<int32_t>(r28.s32, 528, ctx.xer);
	// blt cr6,0x823ace70
	if (ctx.cr6.lt) goto loc_823ACE70;
	// lwz r11,68(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 68);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823acfec
	if (ctx.cr6.eq) goto loc_823ACFEC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823ACFE4;
	sub_8235AE80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823ACFEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,25000(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 25000);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ad07c
	if (ctx.cr6.eq) goto loc_823AD07C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,24980
	ctx.r3.s64 = ctx.r11.s64 + 24980;
	// lwz r5,56(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AD018;
	sub_8235ADB0(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823ad05c
	if (!ctx.cr6.eq) goto loc_823AD05C;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad050
	if (!ctx.cr6.eq) goto loc_823AD050;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad04c
	if (!ctx.cr6.eq) goto loc_823AD04C;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad04c
	if (!ctx.cr6.eq) goto loc_823AD04C;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
loc_823AD04C:
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
loc_823AD050:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x823ac2f0
	ctx.lr = 0x823AD05C;
	sub_823AC2F0(ctx, base);
loc_823AD05C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,24980
	ctx.r4.s64 = ctx.r11.s64 + 24980;
	// lfs f1,176(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823aade0
	ctx.lr = 0x823AD074;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823AD07C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,25576(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ad094
	if (!ctx.cr6.eq) goto loc_823AD094;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823AD094:
	// addi r11,r10,25572
	ctx.r11.s64 = ctx.r10.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ad174
	if (ctx.cr6.eq) goto loc_823AD174;
loc_823AD0A0:
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 564);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823ad150
	if (!ctx.cr6.eq) goto loc_823AD150;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235ae80
	ctx.lr = 0x823AD0C8;
	sub_8235AE80(ctx, base);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ad150
	if (ctx.cr6.eq) goto loc_823AD150;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8235adb0
	ctx.lr = 0x823AD0F0;
	sub_8235ADB0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823ad134
	if (!ctx.cr6.eq) goto loc_823AD134;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 776);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad128
	if (!ctx.cr6.eq) goto loc_823AD128;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad124
	if (!ctx.cr6.eq) goto loc_823AD124;
	// lwz r11,768(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823ad124
	if (!ctx.cr6.eq) goto loc_823AD124;
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
loc_823AD124:
	// stw r11,776(r31)
	REX_STORE_U32(r31.u32 + 776, ctx.r11.u32);
loc_823AD128:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 776);
	// bl 0x823ac2f0
	ctx.lr = 0x823AD134;
	sub_823AC2F0(ctx, base);
loc_823AD134:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823aade0
	ctx.lr = 0x823AD148;
	sub_823AADE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ad178
	if (!ctx.cr6.eq) goto loc_823AD178;
loc_823AD150:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x823ad164
	if (!ctx.cr6.eq) goto loc_823AD164;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_823AD164:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,25572
	ctx.r11.s64 = ctx.r11.s64 + 25572;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823ad0a0
	if (!ctx.cr6.eq) goto loc_823AD0A0;
loc_823AD174:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AD178:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_823D3730) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// b 0x823d1878
	sub_823D1878(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823D5F10) {
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
	ctx.lr = 0x823D5F18;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2ca8
	ctx.lr = 0x823D5F20;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x823d5f4c
	if (ctx.cr6.eq) goto loc_823D5F4C;
	// li r3,-104
	ctx.r3.s64 = -104;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf4
	ctx.lr = 0x823D5F48;
	// b 0x826a1cec
	return;
loc_823D5F4C:
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r26,r3,20
	r26.s64 = ctx.r3.s64 + 20;
	// addi r25,r7,4
	r25.s64 = ctx.r7.s64 + 4;
	// subf r30,r7,r3
	r30.u64 = ctx.r3.u64 - ctx.r7.u64;
	// subf r29,r7,r4
	r29.u64 = ctx.r4.u64 - ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r28,r7,r6
	r28.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r27,r4,r3
	r27.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r5,r26,-24
	ctx.r5.s64 = r26.s64 + -24;
	// addi r8,r6,12
	ctx.r8.s64 = ctx.r6.s64 + 12;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// addi r11,r31,2060
	ctx.r11.s64 = r31.s64 + 2060;
	// subf r7,r4,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r4.u64;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
loc_823D5F88:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,-8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfsx f7,r30,r10
	temp.u32 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsx f4,r28,r10
	temp.u32 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfsx f0,r27,r9
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfsx f11,r7,r9
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,24(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfsx f7,r3,r8
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,28(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f4,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,32(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f0,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f11,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,40(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f7,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// stfs f5,44(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,48(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f0,28(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,52(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// lfs f11,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,56(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f7,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lfsu f0,32(r5)
	ea = 32 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f6,60(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f5,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfs f4,16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfsu f2,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bdnz 0x823d5f88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D5F88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,2052(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 2052);
	// lwz r21,2056(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 2056);
	// li r24,51
	r24.s64 = 51;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// addi r5,r26,-20
	ctx.r5.s64 = r26.s64 + -20;
	// addi r7,r4,12
	ctx.r7.s64 = ctx.r4.s64 + 12;
	// lfs f0,3716(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stfs f0,1024(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 1024, temp.u32);
	// addi r8,r31,6164
	ctx.r8.s64 = r31.s64 + 6164;
	// stfs f0,1024(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r21.u32 + 1024, temp.u32);
	// addi r9,r31,6160
	ctx.r9.s64 = r31.s64 + 6160;
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_823D60F4:
	// lfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,-8(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfsx f10,r11,r29
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f11,r11,r28
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,-8(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// lfsx f7,r10,r3
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,-16(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + -16, temp.u32);
	// lfs f4,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,-16(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + -16, temp.u32);
	// lfsx f0,r7,r27
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,-24(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + -24, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,-24(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -24, temp.u32);
	// lfs f7,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,-32(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + -32, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,-32(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + -32, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lfsu f0,20(r5)
	ea = 20 + ctx.r5.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f12,-40(r9)
	ea = -40 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// lfs f11,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfsu f8,-40(r8)
	ea = -40 + ctx.r8.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// addi r7,r7,20
	ctx.r7.s64 = ctx.r7.s64 + 20;
	// bdnz 0x823d60f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D60F4;
	// addi r30,r31,6160
	r30.s64 = r31.s64 + 6160;
	// lwz r3,2060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2060);
	// addi r4,r31,2064
	ctx.r4.s64 = r31.s64 + 2064;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823e5e08
	ctx.lr = 0x823D61CC;
	sub_823E5E08(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r30,-8
	ctx.r11.s64 = r30.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-15424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -15424);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-15428(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -15428);
	ctx.f13.f64 = double(temp.f32);
loc_823D61E8:
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f3,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f1,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f5,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f7,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f11,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f3,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f7,f3,f13
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f11,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f31,60(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 60);
	f31.f64 = double(temp.f32);
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f30,56(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 56);
	f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
	// lfs f29,68(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 68);
	f29.f64 = double(temp.f32);
	// fmuls f30,f30,f13
	f30.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f28,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	f28.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f10,f28,f13
	ctx.f10.f64 = double(float(f28.f64 * ctx.f13.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,20(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f5,32(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f1,44(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stfs f11,52(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f31,60(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f30,56(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f29,68(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfsu f10,64(r11)
	ea = 64 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d61e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D61E8;
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// addi r8,r22,12
	ctx.r8.s64 = r22.s64 + 12;
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - r31.u64;
	// subf r30,r23,r6
	r30.u64 = ctx.r6.u64 - r23.u64;
	// addi r9,r23,8
	ctx.r9.s64 = r23.s64 + 8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// addi r10,r31,6156
	ctx.r10.s64 = r31.s64 + 6156;
	// subf r5,r31,r23
	ctx.r5.u64 = r23.u64 - r31.u64;
	// subf r3,r31,r22
	ctx.r3.u64 = r22.u64 - r31.u64;
	// subf r29,r23,r22
	r29.u64 = r22.u64 - r23.u64;
	// subf r6,r22,r6
	ctx.r6.u64 = ctx.r6.u64 - r22.u64;
loc_823D62E4:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f11,-8(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1020);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f8,-12(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + -12, temp.u32);
	// lfsx f7,r4,r11
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f5,f7,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f5.f64, ctx.f7.f64, ctx.f6.f64)));
	// stfsx f4,r5,r11
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, temp.u32);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1024);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f7,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f7.f64, ctx.f2.f64)));
	// stfsx f1,r3,r11
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// lfsx f0,r9,r30
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f10,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1028);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfsx f8,r9,r29
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r9.u32 + r29.u32, temp.u32);
	// lfs f7,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r6,r8
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f5,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f6.f64)));
	// stfs f4,4(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f2,1032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1032);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f3,f5,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f1,0(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f9,1036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1036);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f10,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f8,4(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f5,24(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f4,f7,f5,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, ctx.f6.f64)));
	// stfs f4,12(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f3,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,1040(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f3,f5,f2
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f1,8(r8)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,28(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f10,56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1044);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f8,12(r8)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// lfsu f0,32(r7)
	ea = 32 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// lfs f7,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f6.f64)));
	// stfs f5,20(r9)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfs f4,1048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfsu f13,64(r10)
	ea = 64 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fmadds f3,f13,f0,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f3,16(r8)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r8.u32 + 16, temp.u32);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bdnz 0x823d62e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D62E4;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r8,r31,10260
	ctx.r8.s64 = r31.s64 + 10260;
	// addi r10,r31,10256
	ctx.r10.s64 = r31.s64 + 10256;
	// addi r11,r31,2048
	ctx.r11.s64 = r31.s64 + 2048;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823D642C:
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// addi r7,r9,-12
	ctx.r7.s64 = ctx.r9.s64 + -12;
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,-1028(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + -1028, temp.u32);
	// lfs f11,-8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,-4(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lfs f8,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// lwz r6,2048(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lfs f9,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f7,-1032(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + -1032, temp.u32);
	// lfs f6,-16(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// lfs f4,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lwz r7,2048(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f3,-4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,-1036(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + -1036, temp.u32);
	// lfs f1,-24(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// lwz r3,2048(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// lfs f13,-32(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r3
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,-1040(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -1040, temp.u32);
	// lfs f10,-32(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f9,-16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -16, temp.u32);
	// lfs f7,-40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -40);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,2048(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f8,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// stfs f6,-1044(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -1044, temp.u32);
	// lfs f5,-40(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -40);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f4,-20(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// lfs f3,-48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -48);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,2048(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// add r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f2,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,-1048(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -1048, temp.u32);
	// lfs f0,-48(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f13,-24(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -24, temp.u32);
	// lwz r7,2048(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// lfs f12,-56(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lfs f11,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,-1052(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + -1052, temp.u32);
	// lfs f9,-56(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,-28(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// lwz r7,2048(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 2048);
	// lfsu f0,-64(r10)
	ea = -64 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfs f7,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f6,-1056(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + -1056, temp.u32);
	// lfsu f0,-64(r8)
	ea = -64 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// fmuls f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfsu f5,-32(r11)
	ea = -32 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823d642c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D642C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x826a2cf4
	ctx.lr = 0x823D6560;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82400938) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82401130) {
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
	ctx.lr = 0x82401138;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-864(r1)
	ea = -864 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 10, ctx.xer);
	// ble cr6,0x82401b1c
	if (!ctx.cr6.gt) goto loc_82401B1C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,17760
	ctx.r10.s64 = ctx.r10.s64 + 17760;
	// addi r8,r4,10
	ctx.r8.s64 = ctx.r4.s64 + 10;
loc_8240116C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240118c
	if (!ctx.cr0.eq) goto loc_8240118C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8240116c
	if (!ctx.cr6.eq) goto loc_8240116C;
loc_8240118C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401b1c
	if (!ctx.cr0.eq) goto loc_82401B1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r26,r29
	r26.u64 = r29.u64;
	// lfs f29,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f29.f64 = double(temp.f32);
	// fmr f31,f29
	f31.f64 = f29.f64;
	// ble cr6,0x82401b1c
	if (!ctx.cr6.gt) goto loc_82401B1C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r18,1
	r18.s64 = 1;
	// addi r22,r11,17680
	r22.s64 = ctx.r11.s64 + 17680;
	// addi r21,r10,17744
	r21.s64 = ctx.r10.s64 + 17744;
	// addi r20,r9,17728
	r20.s64 = ctx.r9.s64 + 17728;
	// addi r25,r8,17716
	r25.s64 = ctx.r8.s64 + 17716;
	// addi r23,r7,17708
	r23.s64 = ctx.r7.s64 + 17708;
loc_824011DC:
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8240142c
	if (ctx.cr6.eq) goto loc_8240142C;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(r24.s32, 7, ctx.xer);
	// ble cr6,0x824012f4
	if (!ctx.cr6.gt) goto loc_824012F4;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r8,r27,7
	ctx.r8.s64 = r27.s64 + 7;
loc_824011FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8240121c
	if (!ctx.cr0.eq) goto loc_8240121C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824011fc
	if (!ctx.cr6.eq) goto loc_824011FC;
loc_8240121C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824012f4
	if (!ctx.cr0.eq) goto loc_824012F4;
	// addi r31,r27,7
	r31.s64 = r27.s64 + 7;
	// addi r30,r24,-7
	r30.s64 = r24.s64 + -7;
loc_8240122C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82401244
	if (ctx.cr6.eq) goto loc_82401244;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82401254
	if (!ctx.cr6.eq) goto loc_82401254;
loc_82401244:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82401b1c
	if (ctx.cr0.eq) goto loc_82401B1C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8240122c
	goto loc_8240122C;
loc_82401254:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x82401264;
	sub_826A1E70(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x82401274;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x82401b1c
	if (ctx.cr6.lt) goto loc_82401B1C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
loc_82401288:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824012a8
	if (!ctx.cr0.eq) goto loc_824012A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82401288
	if (!ctx.cr6.eq) goto loc_82401288;
loc_824012A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824012e4
	if (ctx.cr0.eq) goto loc_824012E4;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,15
	ctx.r8.s64 = r31.s64 + 15;
loc_824012BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824012dc
	if (!ctx.cr0.eq) goto loc_824012DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x824012bc
	if (!ctx.cr6.eq) goto loc_824012BC;
loc_824012DC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401b1c
	if (!ctx.cr0.eq) goto loc_82401B1C;
loc_824012E4:
	// addi r27,r31,16
	r27.s64 = r31.s64 + 16;
	// addi r24,r30,-16
	r24.s64 = r30.s64 + -16;
	// mr r26,r18
	r26.u64 = r18.u64;
	// b 0x82401420
	goto loc_82401420;
loc_824012F4:
	// cmpwi cr6,r24,9
	ctx.cr6.compare<int32_t>(r24.s32, 9, ctx.xer);
	// ble cr6,0x824013e8
	if (!ctx.cr6.gt) goto loc_824013E8;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r8,r27,9
	ctx.r8.s64 = r27.s64 + 9;
loc_82401308:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401328
	if (!ctx.cr0.eq) goto loc_82401328;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82401308
	if (!ctx.cr6.eq) goto loc_82401308;
loc_82401328:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x824013e8
	if (!ctx.cr0.eq) goto loc_824013E8;
	// addi r30,r27,9
	r30.s64 = r27.s64 + 9;
	// addi r28,r24,-9
	r28.s64 = r24.s64 + -9;
loc_82401338:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82401350
	if (ctx.cr6.eq) goto loc_82401350;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82401360
	if (!ctx.cr6.eq) goto loc_82401360;
loc_82401350:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82401b1c
	if (ctx.cr0.eq) goto loc_82401B1C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82401338
	goto loc_82401338;
loc_82401360:
	// cmpwi cr6,r28,256
	ctx.cr6.compare<int32_t>(r28.s32, 256, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// blt cr6,0x82401370
	if (ctx.cr6.lt) goto loc_82401370;
	// li r11,256
	ctx.r11.s64 = 256;
loc_82401370:
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82401394
	if (ctx.cr6.eq) goto loc_82401394;
loc_8240137C:
	// lbzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82401398
	if (ctx.cr6.eq) goto loc_82401398;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240137c
	if (ctx.cr6.lt) goto loc_8240137C;
loc_82401394:
	// mr r31,r29
	r31.u64 = r29.u64;
loc_82401398:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82401b1c
	if (ctx.cr6.eq) goto loc_82401B1C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82400818
	ctx.lr = 0x824013B0;
	sub_82400818(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8269d898
	ctx.lr = 0x824013C4;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r31,r28
	ctx.r10.u64 = r28.u64 - r31.u64;
	// fmuls f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 * f31.f64));
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// b 0x82401420
	goto loc_82401420;
loc_824013E8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8240140c
	if (ctx.cr6.eq) goto loc_8240140C;
loc_824013F4:
	// lbzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x82401410
	if (ctx.cr6.eq) goto loc_82401410;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// blt cr6,0x824013f4
	if (ctx.cr6.lt) goto loc_824013F4;
loc_8240140C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_82401410:
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// subf r11,r11,r24
	ctx.r11.u64 = r24.u64 - ctx.r11.u64;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// addi r24,r11,-1
	r24.s64 = ctx.r11.s64 + -1;
loc_82401420:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bgt cr6,0x824011dc
	if (ctx.cr6.gt) goto loc_824011DC;
	// b 0x82401434
	goto loc_82401434;
loc_8240142C:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_82401434:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82401b1c
	if (ctx.cr6.eq) goto loc_82401B1C;
	// cmpwi cr6,r24,256
	ctx.cr6.compare<int32_t>(r24.s32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x8240144c
	if (ctx.cr6.gt) goto loc_8240144C;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8240144C:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82401470
	if (ctx.cr6.eq) goto loc_82401470;
loc_82401458:
	// lbzx r9,r11,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x824014c0
	if (ctx.cr6.eq) goto loc_824014C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82401458
	if (ctx.cr6.lt) goto loc_82401458;
loc_82401470:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82401474:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(r28.u32, 2, ctx.xer);
	// ble cr6,0x82401b1c
	if (!ctx.cr6.gt) goto loc_82401B1C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r28,1
	ctx.r4.s64 = r28.s64 + 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82400818
	ctx.lr = 0x8240148C;
	sub_82400818(ctx, base);
	// lbz r11,209(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 209);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// bne cr6,0x824014dc
	if (!ctx.cr6.eq) goto loc_824014DC;
	// lbz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r18
	r30.u64 = r18.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x824014c8
	if (!ctx.cr6.eq) goto loc_824014C8;
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r29
	r25.u64 = r29.u64;
	// b 0x82401514
	goto loc_82401514;
loc_824014C0:
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// b 0x82401474
	goto loc_82401474;
loc_824014C8:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// lbz r26,80(r1)
	r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r25,r18
	r25.u64 = r18.u64;
	// b 0x82401514
	goto loc_82401514;
loc_824014DC:
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// lbz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 208);
	// mr r30,r29
	r30.u64 = r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// bne cr6,0x82401504
	if (!ctx.cr6.eq) goto loc_82401504;
	// mr r26,r29
	r26.u64 = r29.u64;
	// b 0x82401510
	goto loc_82401510;
loc_82401504:
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// mr r26,r18
	r26.u64 = r18.u64;
loc_82401510:
	// lbz r25,80(r1)
	r25.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_82401514:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// addi r31,r11,17704
	r31.s64 = ctx.r11.s64 + 17704;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8269d898
	ctx.lr = 0x82401528;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// lbz r11,210(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 210);
	// addi r10,r1,210
	ctx.r10.s64 = ctx.r1.s64 + 210;
	// b 0x82401550
	goto loc_82401550;
loc_8240153C:
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82401558
	if (ctx.cr6.eq) goto loc_82401558;
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82401558
	if (ctx.cr6.eq) goto loc_82401558;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82401550:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8240153c
	if (!ctx.cr0.eq) goto loc_8240153C;
loc_82401558:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401b1c
	if (ctx.cr0.eq) goto loc_82401B1C;
	// addi r11,r11,-43
	ctx.r11.s64 = ctx.r11.s64 + -43;
	// clrlwi. r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// beq 0x82401580
	if (ctx.cr0.eq) goto loc_82401580;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82401588
	goto loc_82401588;
loc_82401580:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82401588:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82401b1c
	if (ctx.cr0.eq) goto loc_82401B1C;
	// cmpwi cr6,r11,89
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 89, ctx.xer);
	// beq cr6,0x824015a4
	if (ctx.cr6.eq) goto loc_824015A4;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
loc_824015A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// bl 0x8269d898
	ctx.lr = 0x824015B0;
	sub_8269D898(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82401b1c
	if (!ctx.cr6.eq) goto loc_82401B1C;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r28,r27
	ctx.r8.u64 = r28.u64 + r27.u64;
	// ori r6,r9,43686
	ctx.r6.u64 = ctx.r9.u64 | 43686;
	// stw r29,52(r19)
	REX_STORE_U32(r19.u32 + 52, r29.u32);
	// subf r7,r28,r24
	ctx.r7.u64 = r24.u64 - r28.u64;
	// stw r18,20(r19)
	REX_STORE_U32(r19.u32 + 20, r18.u32);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,0(r19)
	REX_STORE_U32(r19.u32 + 0, ctx.r6.u32);
	// mullw. r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r11,12(r19)
	REX_STORE_U32(r19.u32 + 12, ctx.r11.u32);
	// stw r10,16(r19)
	REX_STORE_U32(r19.u32 + 16, ctx.r10.u32);
	// addi r31,r8,1
	r31.s64 = ctx.r8.s64 + 1;
	// stw r9,48(r19)
	REX_STORE_U32(r19.u32 + 48, ctx.r9.u32);
	// addi r24,r7,-1
	r24.s64 = ctx.r7.s64 + -1;
	// beq 0x82401b1c
	if (ctx.cr0.eq) goto loc_82401B1C;
	// stw r18,56(r19)
	REX_STORE_U32(r19.u32 + 56, r18.u32);
	// mullw r3,r9,r10
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f02b8
	ctx.lr = 0x8240160C;
	sub_823F02B8(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4(r19)
	REX_STORE_U32(r19.u32 + 4, ctx.r11.u32);
	// bne 0x82401624
	if (!ctx.cr0.eq) goto loc_82401624;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82401b24
	goto loc_82401B24;
loc_82401624:
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// bne cr6,0x82401640
	if (!ctx.cr6.eq) goto loc_82401640;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// beq cr6,0x82401648
	if (ctx.cr6.eq) goto loc_82401648;
loc_82401640:
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// b 0x8240164c
	goto loc_8240164C;
loc_82401648:
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
loc_8240164C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824016e4
	if (ctx.cr6.eq) goto loc_824016E4;
	// beq 0x82401670
	if (ctx.cr0.eq) goto loc_82401670;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401670
	if (!ctx.cr0.eq) goto loc_82401670;
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x824016bc
	goto loc_824016BC;
loc_82401670:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824016c4
	if (!ctx.cr6.eq) goto loc_824016C4;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82401694
	if (!ctx.cr0.eq) goto loc_82401694;
	// lwz r10,48(r19)
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x8240175c
	goto loc_8240175C;
loc_82401694:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x824016c4
	if (!ctx.cr6.eq) goto loc_824016C4;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824016c4
	if (ctx.cr0.eq) goto loc_824016C4;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r4,-4
	ctx.r4.s64 = -4;
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r10,r9
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
loc_824016BC:
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82401770
	goto loc_82401770;
loc_824016C4:
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// neg r9,r9
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82401770
	goto loc_82401770;
loc_824016E4:
	// beq 0x8240170c
	if (ctx.cr0.eq) goto loc_8240170C;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8240170c
	if (ctx.cr0.eq) goto loc_8240170C;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// neg r5,r9
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r4,r5,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x8240176c
	goto loc_8240176C;
loc_8240170C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82401764
	if (!ctx.cr6.eq) goto loc_82401764;
	// clrlwi. r9,r25,24
	ctx.r9.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8240173c
	if (ctx.cr0.eq) goto loc_8240173C;
	// lwz r6,48(r19)
	ctx.r6.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// neg r9,r6
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r6.u64);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82401770
	goto loc_82401770;
loc_8240173C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82401764
	if (!ctx.cr6.eq) goto loc_82401764;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82401764
	if (!ctx.cr0.eq) goto loc_82401764;
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// li r10,-4
	ctx.r10.s64 = -4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_8240175C:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x82401770
	goto loc_82401770;
loc_82401764:
	// lwz r9,48(r19)
	ctx.r9.u64 = REX_LOAD_U32(r19.u32 + 48);
	// rlwinm r4,r9,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
loc_8240176C:
	// li r10,4
	ctx.r10.s64 = 4;
loc_82401770:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82401a64
	if (!ctx.cr6.gt) goto loc_82401A64;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82401788:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// blt cr6,0x82401b0c
	if (ctx.cr6.lt) goto loc_82401B0C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// beq cr6,0x82401934
	if (ctx.cr6.eq) goto loc_82401934;
	// lbz r9,85(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x824017c8
	if (!ctx.cr6.eq) goto loc_824017C8;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x82401934
	if (ctx.cr6.lt) goto loc_82401934;
loc_824017C8:
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// std r9,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r8,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// lfd f12,200(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 200);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// ble cr6,0x82401a4c
	if (!ctx.cr6.gt) goto loc_82401A4C;
loc_82401830:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(r24.s32, 4, ctx.xer);
	// blt cr6,0x82401b0c
	if (ctx.cr6.lt) goto loc_82401B0C;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r7,86(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// lbz r6,85(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824018b8
	if (!ctx.cr6.eq) goto loc_824018B8;
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824018b8
	if (!ctx.cr6.eq) goto loc_824018B8;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824018b8
	if (!ctx.cr6.eq) goto loc_824018B8;
	// lbz r9,87(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82401b0c
	if (ctx.cr6.gt) goto loc_82401B0C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824018b0
	if (!ctx.cr6.gt) goto loc_824018B0;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82401898:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bdnz 0x82401898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82401898;
loc_824018B0:
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// b 0x82401928
	goto loc_82401928;
loc_824018B8:
	// lbz r8,87(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r7,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// std r8,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r8.u64);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f13,176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82401928:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x82401830
	if (ctx.cr6.lt) goto loc_82401830;
	// b 0x82401a4c
	goto loc_82401A4C;
loc_82401934:
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r27.s32, ctx.xer);
	// bne cr6,0x82401b0c
	if (!ctx.cr6.eq) goto loc_82401B0C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82401950:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82401a3c
	if (!ctx.cr6.gt) goto loc_82401A3C;
loc_82401960:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(r24.s32, 2, ctx.xer);
	// blt cr6,0x82401b0c
	if (ctx.cr6.lt) goto loc_82401B0C;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// ble cr6,0x824019cc
	if (!ctx.cr6.gt) goto loc_824019CC;
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82401b0c
	if (ctx.cr6.gt) goto loc_82401B0C;
	// lbz r9,1(r5)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r9,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// lfd f0,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq cr6,0x824019c0
	if (ctx.cr6.eq) goto loc_824019C0;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_824019A8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824019a8
	if (ctx.cr6.lt) goto loc_824019A8;
loc_824019C0:
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r24,r24,-2
	r24.s64 = r24.s64 + -2;
	// b 0x82401a34
	goto loc_82401A34;
loc_824019CC:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r24,r9
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82401b0c
	if (ctx.cr6.lt) goto loc_82401B0C;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// bgt cr6,0x82401b0c
	if (ctx.cr6.gt) goto loc_82401B0C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82401a24
	if (ctx.cr6.eq) goto loc_82401A24;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_824019F4:
	// add r26,r9,r5
	r26.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbz r26,1(r26)
	r26.u64 = REX_LOAD_U8(r26.u32 + 1);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// std r26,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r26.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// blt cr6,0x824019f4
	if (ctx.cr6.lt) goto loc_824019F4;
loc_82401A24:
	// subf r9,r11,r24
	ctx.r9.u64 = r24.u64 - ctx.r11.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_82401A34:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r27.s32, ctx.xer);
	// blt cr6,0x82401960
	if (ctx.cr6.lt) goto loc_82401960;
loc_82401A3C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x82401950
	if (ctx.cr6.lt) goto loc_82401950;
loc_82401A4C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(r30.s32, r23.s32, ctx.xer);
	// blt cr6,0x82401788
	if (ctx.cr6.lt) goto loc_82401788;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_82401A64:
	// lwz r11,4(r19)
	ctx.r11.u64 = REX_LOAD_U32(r19.u32 + 4);
	// mullw. r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82401b04
	if (ctx.cr0.eq) goto loc_82401B04;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// fdivs f31,f29,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 / f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,3720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
loc_82401A80:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r30,r11,-136
	r30.s64 = ctx.r11.s64 + -136;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + f30.f64));
	// bl 0x826a3068
	ctx.lr = 0x82401AA4;
	sub_826A3068(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x826a3068
	ctx.lr = 0x82401AC0;
	sub_826A3068(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// bl 0x826a3068
	ctx.lr = 0x82401ADC;
	sub_826A3068(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfsu f29,16(r31)
	ea = 16 + r31.u32;
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82401a80
	if (ctx.cr6.lt) goto loc_82401A80;
loc_82401B04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82401b24
	goto loc_82401B24;
loc_82401B0C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,4(r19)
	ctx.r3.u64 = REX_LOAD_U32(r19.u32 + 4);
	// bl 0x823f0350
	ctx.lr = 0x82401B18;
	sub_823F0350(ctx, base);
	// stw r29,4(r19)
	REX_STORE_U32(r19.u32 + 4, r29.u32);
loc_82401B1C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82401B24:
	// addi r1,r1,864
	ctx.r1.s64 = ctx.r1.s64 + 864;
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

DEFINE_REX_FUNC(sub_8244B528) {
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
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// stw r30,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// stw r30,304(r31)
	REX_STORE_U32(r31.u32 + 304, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8244B56C;
	sub_826A2E60(ctx, base);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8244B58C;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,212(r31)
	REX_STORE_U16(r31.u32 + 212, r30.u16);
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x826a2e60
	ctx.lr = 0x8244B5A0;
	sub_826A2E60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x826a2e60
	ctx.lr = 0x8244B5B4;
	sub_826A2E60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824548C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,376(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 376);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82454930) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82454938;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x824681b8
	ctx.lr = 0x8245494C;
	sub_824681B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82454980
	if (ctx.cr0.lt) goto loc_82454980;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8245496C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// bne cr6,0x8245497c
	if (!ctx.cr6.eq) goto loc_8245497C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8245497C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82454980:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82455B90) {
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
	ctx.lr = 0x82455B98;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82455d00
	if (ctx.cr6.eq) goto loc_82455D00;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82455d00
	if (!ctx.cr6.gt) goto loc_82455D00;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r7,14096
	r27.s64 = ctx.r7.s64 + 14096;
	// addi r29,r8,14172
	r29.s64 = ctx.r8.s64 + 14172;
	// addi r26,r9,14136
	r26.s64 = ctx.r9.s64 + 14136;
	// addi r25,r10,14160
	r25.s64 = ctx.r10.s64 + 14160;
	// addi r28,r11,14148
	r28.s64 = ctx.r11.s64 + 14148;
loc_82455BF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82455688
	ctx.lr = 0x82455BFC;
	sub_82455688(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455d04
	if (ctx.cr0.lt) goto loc_82455D04;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82404168
	ctx.lr = 0x82455C18;
	sub_82404168(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82404168
	ctx.lr = 0x82455C30;
	sub_82404168(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bne cr6,0x82455c4c
	if (!ctx.cr6.eq) goto loc_82455C4C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_82455C4C:
	// bl 0x82404168
	ctx.lr = 0x82455C50;
	sub_82404168(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x82455c68
	if (!ctx.cr6.eq) goto loc_82455C68;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_82455C68:
	// bl 0x824555b8
	ctx.lr = 0x82455C6C;
	sub_824555B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82455d04
	if (ctx.cr6.lt) goto loc_82455D04;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x82455c84
	if (!ctx.cr6.eq) goto loc_82455C84;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x82455ca0
	goto loc_82455CA0;
loc_82455C84:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82404168
	ctx.lr = 0x82455C9C;
	sub_82404168(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_82455CA0:
	// andis. r11,r23,3328
	ctx.r11.u64 = r23.u64 & 218103808;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82455cc8
	if (ctx.cr0.eq) goto loc_82455CC8;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// b 0x82455cd0
	goto loc_82455CD0;
loc_82455CC8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_82455CD0:
	// bctrl 
	ctx.lr = 0x82455CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455d04
	if (ctx.cr0.lt) goto loc_82455D04;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824555b8
	ctx.lr = 0x82455CE8;
	sub_824555B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82455d04
	if (ctx.cr0.lt) goto loc_82455D04;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82455bf4
	if (ctx.cr6.lt) goto loc_82455BF4;
loc_82455D00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82455D04:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8245EA78) {
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
	// addi r5,r11,18736
	ctx.r5.s64 = ctx.r11.s64 + 18736;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8245dfc0
	ctx.lr = 0x8245EAA4;
	sub_8245DFC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82474760
	ctx.lr = 0x8245EAAC;
	sub_82474760(ctx, base);
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

DEFINE_REX_FUNC(sub_82460690) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c8c
	ctx.lr = 0x82460698;
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r19,r11,12
	r19.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq 0x82460b48
	if (ctx.cr0.eq) goto loc_82460B48;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82460b48
	if (ctx.cr6.eq) goto loc_82460B48;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82460b48
	if (ctx.cr6.eq) goto loc_82460B48;
	// divwu. r17,r11,r19
	r17.u64 = uint32_t(r19.u32 ? ctx.r11.u32 / r19.u32 : 0);
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// twllei r19,0
	if (r19.s32 == 0 || r19.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82460b48
	if (ctx.cr0.eq) goto loc_82460B48;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r18,r19,2,0,29
	r18.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
loc_824606F8:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8246077c
	if (ctx.cr6.eq) goto loc_8246077C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8246077c
	if (!ctx.cr0.eq) goto loc_8246077C;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82460768
	if (ctx.cr6.eq) goto loc_82460768;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8246074C:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82460768
	if (ctx.cr6.eq) goto loc_82460768;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8246074c
	if (ctx.cr6.lt) goto loc_8246074C;
loc_82460768:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82460774
	if (!ctx.cr6.eq) goto loc_82460774;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82460774:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_8246077C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r18,r7
	ctx.r7.u64 = r18.u64 + ctx.r7.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r17.u32, ctx.xer);
	// blt cr6,0x824606f8
	if (ctx.cr6.lt) goto loc_824606F8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82460b48
	if (ctx.cr6.eq) goto loc_82460B48;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lfd f31,-3744(r11)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// beq cr6,0x82460890
	if (ctx.cr6.eq) goto loc_82460890;
	// li r30,0
	r30.s64 = 0;
loc_824607B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82460804
	if (ctx.cr6.eq) goto loc_82460804;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + ctx.r9.u32);
loc_824607C8:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x824607e8
	if (ctx.cr6.eq) goto loc_824607E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x824607c8
	if (ctx.cr6.lt) goto loc_824607C8;
	// b 0x824607fc
	goto loc_824607FC;
loc_824607E8:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r30,r8
	REX_STORE_U32(r30.u32 + ctx.r8.u32, ctx.r10.u32);
loc_824607FC:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82460880
	if (ctx.cr6.lt) goto loc_82460880;
loc_82460804:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x82460814
	if (ctx.cr6.eq) goto loc_82460814;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82460814:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 140);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82478758
	ctx.lr = 0x82460828;
	sub_82478758(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x82460a10
	if (ctx.cr6.eq) goto loc_82460A10;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_82460880:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x824607b0
	if (ctx.cr6.lt) goto loc_824607B0;
loc_82460890:
	// li r20,0
	r20.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r1,96
	r24.s64 = ctx.r1.s64 + 96;
	// li r23,0
	r23.s64 = 0;
loc_824608A4:
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r23.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x824609e0
	if (ctx.cr6.eq) goto loc_824609E0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824609e0
	if (!ctx.cr0.eq) goto loc_824609E0;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x824609d8
	if (ctx.cr6.eq) goto loc_824609D8;
loc_824608F8:
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// add r10,r25,r30
	ctx.r10.u64 = r25.u64 + r30.u64;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r26,r10,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r9
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82478758
	ctx.lr = 0x82460930;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82460a10
	if (ctx.cr6.eq) goto loc_82460A10;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824780d8
	ctx.lr = 0x82460954;
	sub_824780D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82460b4c
	if (ctx.cr0.lt) goto loc_82460B4C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x824609b8
	if (ctx.cr6.eq) goto loc_824609B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82478758
	ctx.lr = 0x82460980;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82460a10
	if (ctx.cr6.eq) goto loc_82460A10;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x824780d8
	ctx.lr = 0x824609AC;
	sub_824780D8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// stw r28,56(r31)
	REX_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r11,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r11.u32);
loc_824609B8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(r30.u32, r19.u32, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r11,r26
	REX_STORE_U32(ctx.r11.u32 + r26.u32, r29.u32);
	// blt cr6,0x824608f8
	if (ctx.cr6.lt) goto loc_824608F8;
loc_824609D8:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_824609E0:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// add r25,r25,r19
	r25.u64 = r25.u64 + r19.u64;
	// add r23,r23,r18
	r23.u64 = r23.u64 + r18.u64;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(r22.u32, r17.u32, ctx.xer);
	// blt cr6,0x824608a4
	if (ctx.cr6.lt) goto loc_824608A4;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82477ac8
	ctx.lr = 0x824609FC;
	sub_82477AC8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82460a1c
	if (ctx.cr0.eq) goto loc_82460A1C;
	// bl 0x824773d0
	ctx.lr = 0x82460A08;
	sub_824773D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82460a20
	goto loc_82460A20;
loc_82460A10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82460b4c
	goto loc_82460B4C;
loc_82460A1C:
	// li r30,0
	r30.s64 = 0;
loc_82460A20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82460a10
	if (ctx.cr6.eq) goto loc_82460A10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(r20.u32, 0, ctx.xer);
	// beq cr6,0x82460ab4
	if (ctx.cr6.eq) goto loc_82460AB4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82460A40:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82460a74
	if (ctx.cr6.eq) goto loc_82460A74;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_82460A58:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82460a74
	if (ctx.cr6.eq) goto loc_82460A74;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82460a58
	if (ctx.cr6.lt) goto loc_82460A58;
loc_82460A74:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82460aa4
	if (!ctx.cr6.eq) goto loc_82460AA4;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r11,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_82460AA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r20.u32, ctx.xer);
	// blt cr6,0x82460a40
	if (ctx.cr6.lt) goto loc_82460A40;
loc_82460AB4:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b60
	ctx.lr = 0x82460AD0;
	sub_82477B60(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bge 0x82460af0
	if (!ctx.cr0.lt) goto loc_82460AF0;
loc_82460ADC:
	// bl 0x82130e88
	ctx.lr = 0x82460AE0;
	sub_82130E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82477b20
	ctx.lr = 0x82460AE8;
	sub_82477B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82460b4c
	goto loc_82460B4C;
loc_82460AF0:
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 260);
	// bl 0x82477420
	ctx.lr = 0x82460AF8;
	sub_82477420(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82460b08
	if (!ctx.cr0.lt) goto loc_82460B08;
loc_82460B00:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82460adc
	goto loc_82460ADC;
loc_82460B08:
	// rlwinm r31,r20,2,0,29
	r31.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82460B1C;
	sub_826A1E70(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x826a1e70
	ctx.lr = 0x82460B2C;
	sub_826A1E70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x824785e8
	ctx.lr = 0x82460B38;
	sub_824785E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82460b00
	if (ctx.cr0.lt) goto loc_82460B00;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82460b4c
	goto loc_82460B4C;
loc_82460B48:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82460B4C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_82481B08) {
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
	// bl 0x8247cfc0
	ctx.lr = 0x82481B28;
	sub_8247CFC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82481b3c
	if (ctx.cr0.eq) goto loc_82481B3C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f0350
	ctx.lr = 0x82481B3C;
	sub_823F0350(ctx, base);
loc_82481B3C:
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

DEFINE_REX_FUNC(sub_82488A78) {
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
	ctx.lr = 0x82488A80;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r26
	r23.u64 = r26.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r24,r26
	r24.u64 = r26.u64;
	// bl 0x8247d160
	ctx.lr = 0x82488A9C;
	sub_8247D160(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481560
	ctx.lr = 0x82488AAC;
	sub_82481560(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82488ac8
	if (!ctx.cr0.eq) goto loc_82488AC8;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82488ba8
	if (ctx.cr0.eq) goto loc_82488BA8;
loc_82488AC8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82488afc
	if (ctx.cr6.eq) goto loc_82488AFC;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82488ADC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82488adc
	if (ctx.cr6.lt) goto loc_82488ADC;
loc_82488AFC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82488ba8
	if (ctx.cr0.eq) goto loc_82488BA8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82488B0C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82488ba0
	if (ctx.cr0.eq) goto loc_82488BA0;
	// rlwinm r10,r10,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,24576
	ctx.r7.s64 = 1610612736;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82488b48
	if (ctx.cr6.eq) goto loc_82488B48;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82488b54
	if (!ctx.cr6.eq) goto loc_82488B54;
loc_82488B48:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82488B54:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82488ba0
	if (!ctx.cr6.gt) goto loc_82488BA0;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82488B68:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r4,44(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82488b8c
	if (!ctx.cr6.lt) goto loc_82488B8C;
	// stw r8,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
loc_82488B8C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82488b68
	if (ctx.cr6.lt) goto loc_82488B68;
loc_82488BA0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82488b0c
	if (!ctx.cr6.eq) goto loc_82488B0C;
loc_82488BA8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82488c6c
	if (ctx.cr6.eq) goto loc_82488C6C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82488BC0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r10,0,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82488c58
	if (ctx.cr0.eq) goto loc_82488C58;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r30,4(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r3.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82488c44
	if (!ctx.cr0.eq) goto loc_82488C44;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82488c30
	if (ctx.cr6.eq) goto loc_82488C30;
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82488c30
	if (ctx.cr6.eq) goto loc_82488C30;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82488c30
	if (ctx.cr6.eq) goto loc_82488C30;
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// b 0x82488c44
	goto loc_82488C44;
loc_82488C30:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82488C44:
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82488c58
	if (ctx.cr6.eq) goto loc_82488C58;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82488C58:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82488bc0
	if (ctx.cr6.lt) goto loc_82488BC0;
loc_82488C6C:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82488c80
	if (ctx.cr0.eq) goto loc_82488C80;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82488f20
	goto loc_82488F20;
loc_82488C80:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// beq cr6,0x82488db8
	if (ctx.cr6.eq) goto loc_82488DB8;
	// bl 0x823f02b8
	ctx.lr = 0x82488C94;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82488ef0
	if (ctx.cr0.eq) goto loc_82488EF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82488CAC;
	sub_823F02B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82488ef0
	if (ctx.cr0.eq) goto loc_82488EF0;
loc_82488CB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82481098
	ctx.lr = 0x82488CC0;
	sub_82481098(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82488cf0
	if (ctx.cr6.eq) goto loc_82488CF0;
	// addi r10,r25,-4
	ctx.r10.s64 = r25.s64 + -4;
loc_82488CDC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82488cdc
	if (ctx.cr6.lt) goto loc_82488CDC;
loc_82488CF0:
	// lis r11,-32184
	ctx.r11.s64 = -2109210624;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,-28784
	ctx.r3.s64 = ctx.r11.s64 + -28784;
	// bl 0x824793b0
	ctx.lr = 0x82488D04;
	sub_824793B0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82488d54
	if (ctx.cr6.eq) goto loc_82488D54;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r8,r25,r24
	ctx.r8.u64 = r24.u64 - r25.u64;
loc_82488D1C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r29
	r29.u64 = ctx.r10.u64 & r29.u64;
	// stwx r7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82488d1c
	if (ctx.cr6.lt) goto loc_82488D1C;
loc_82488D54:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82488D64;
	sub_826A1E70(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82488cb4
	if (ctx.cr6.eq) goto loc_82488CB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82481560
	ctx.lr = 0x82488D74;
	sub_82481560(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,30532
	ctx.r11.s64 = ctx.r11.s64 + 30532;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82488DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r11,r11,30524
	ctx.r11.s64 = ctx.r11.s64 + 30524;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// b 0x82488ee8
	goto loc_82488EE8;
loc_82488DB8:
	// mr r27,r26
	r27.u64 = r26.u64;
	// bl 0x823f02b8
	ctx.lr = 0x82488DC0;
	sub_823F02B8(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// beq 0x82488ef0
	if (ctx.cr0.eq) goto loc_82488EF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82488DD8;
	sub_823F02B8(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82488ef0
	if (ctx.cr0.eq) goto loc_82488EF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x82488DF0;
	sub_823F02B8(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x82488ef0
	if (ctx.cr0.eq) goto loc_82488EF0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82488e58
	if (!ctx.cr6.gt) goto loc_82488E58;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// addi r8,r23,-4
	ctx.r8.s64 = r23.s64 + -4;
loc_82488E10:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r26.u32);
	// rlwinm. r6,r6,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// beq 0x82488e44
	if (ctx.cr0.eq) goto loc_82488E44;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82488e44
	if (!ctx.cr6.eq) goto loc_82488E44;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_82488E44:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82488e10
	if (ctx.cr6.lt) goto loc_82488E10;
loc_82488E58:
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82488e98
	if (ctx.cr6.eq) goto loc_82488E98;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82488E6C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247b428
	ctx.lr = 0x82488E80;
	sub_8247B428(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82488ef8
	if (ctx.cr0.lt) goto loc_82488EF8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x82488e6c
	if (ctx.cr6.lt) goto loc_82488E6C;
loc_82488E98:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82488ed8
	if (ctx.cr6.eq) goto loc_82488ED8;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// subf r8,r24,r25
	ctx.r8.u64 = r25.u64 - r24.u64;
loc_82488EB0:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82488eb0
	if (ctx.cr6.lt) goto loc_82488EB0;
loc_82488ED8:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82488EE8;
	sub_826A1E70(ctx, base);
loc_82488EE8:
	// mr r30,r26
	r30.u64 = r26.u64;
	// b 0x82488ef8
	goto loc_82488EF8;
loc_82488EF0:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_82488EF8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823f0350
	ctx.lr = 0x82488F04;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823f0350
	ctx.lr = 0x82488F10;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823f0350
	ctx.lr = 0x82488F1C;
	sub_823F0350(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82488F20:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_824B3AE0) {
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
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca0
	ctx.lr = 0x824B3AE8;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824b3c10
	if (ctx.cr6.eq) goto loc_824B3C10;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
loc_824B3AF8:
	// lwz r26,0(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824b3c00
	if (ctx.cr6.eq) goto loc_824B3C00;
	// lwz r30,12(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 12);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x824b3c00
	if (ctx.cr6.lt) goto loc_824B3C00;
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824b3c18
	if (ctx.cr6.eq) goto loc_824B3C18;
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_824B3B28:
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r28
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// beq cr6,0x824b3b88
	if (ctx.cr6.eq) goto loc_824B3B88;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824b3b78
	if (ctx.cr6.eq) goto loc_824B3B78;
	// li r11,0
	ctx.r11.s64 = 0;
loc_824B3B4C:
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// beq cr6,0x824b3b78
	if (ctx.cr6.eq) goto loc_824B3B78;
	// lwz r22,56(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r22.u32, ctx.xer);
	// beq cr6,0x824b3b78
	if (ctx.cr6.eq) goto loc_824B3B78;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x824b3b4c
	if (ctx.cr6.lt) goto loc_824B3B4C;
loc_824B3B78:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x824b3bf0
	if (!ctx.cr6.eq) goto loc_824B3BF0;
	// li r25,0
	r25.s64 = 0;
	// b 0x824b3bf0
	goto loc_824B3BF0;
loc_824B3B88:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824b3be0
	if (ctx.cr6.eq) goto loc_824B3BE0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_824B3B94:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x824b3bb0
	if (!ctx.cr6.eq) goto loc_824B3BB0;
	// lwz r22,60(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 60);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x824b3be0
	if (ctx.cr6.eq) goto loc_824B3BE0;
loc_824B3BB0:
	// lwz r22,56(r29)
	r22.u64 = REX_LOAD_U32(r29.u32 + 56);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r22.u32, ctx.xer);
	// bne cr6,0x824b3bd0
	if (!ctx.cr6.eq) goto loc_824B3BD0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824b3be0
	if (ctx.cr6.eq) goto loc_824B3BE0;
loc_824B3BD0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x824b3b94
	if (ctx.cr6.lt) goto loc_824B3B94;
loc_824B3BE0:
	// subf r11,r9,r30
	ctx.r11.u64 = r30.u64 - ctx.r9.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r25,r11,r25
	r25.u64 = ctx.r11.u64 & r25.u64;
loc_824B3BF0:
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bdnz 0x824b3b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B3B28;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824b3c18
	if (!ctx.cr6.eq) goto loc_824B3C18;
loc_824B3C00:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// cmplw cr6,r24,r5
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x824b3af8
	if (ctx.cr6.lt) goto loc_824B3AF8;
loc_824B3C10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824B3C14:
	// b 0x826a1cf0
	return;
loc_824B3C18:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// b 0x824b3c14
	goto loc_824B3C14;
}

DEFINE_REX_FUNC(sub_824BDF58) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bdf8c
	if (ctx.cr0.eq) goto loc_824BDF8C;
	// li r4,1
	ctx.r4.s64 = 1;
loc_824BDF84:
	// bl 0x8246e840
	ctx.lr = 0x824BDF88;
	sub_8246E840(ctx, base);
	// b 0x824be06c
	goto loc_824BE06C;
loc_824BDF8C:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bdfa4
	if (ctx.cr0.eq) goto loc_824BDFA4;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x824bdfa4
	if (ctx.cr0.eq) goto loc_824BDFA4;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BDFA4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824bdfb4
	if (ctx.cr6.eq) goto loc_824BDFB4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BDFB4:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824bdfc4
	if (ctx.cr0.eq) goto loc_824BDFC4;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BDFC4:
	// andi. r10,r11,8224
	ctx.r10.u64 = ctx.r11.u64 & 8224;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,8224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8224, ctx.xer);
	// bne cr6,0x824bdfd8
	if (!ctx.cr6.eq) goto loc_824BDFD8;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BDFD8:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r9,r11,0,13,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFE0;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// rlwinm r9,r9,0,26,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFC003F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824bdff8
	if (!ctx.cr6.eq) goto loc_824BDFF8;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BDFF8:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824be008
	if (ctx.cr0.eq) goto loc_824BE008;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BE008:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824be020
	if (ctx.cr0.eq) goto loc_824BE020;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824be020
	if (ctx.cr0.eq) goto loc_824BE020;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BE020:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824be038
	if (ctx.cr0.eq) goto loc_824BE038;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x824be038
	if (ctx.cr0.eq) goto loc_824BE038;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x824bdf84
	goto loc_824BDF84;
loc_824BE038:
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824be064
	if (ctx.cr0.eq) goto loc_824BE064;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,4500
	ctx.r5.s64 = 4500;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,4184
	ctx.r6.s64 = ctx.r10.s64 + 4184;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x82489c30
	ctx.lr = 0x824BE064;
	sub_82489C30(ctx, base);
loc_824BE064:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824BE06C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824C3B08) {
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
	ctx.lr = 0x824C3B10;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x824c3d20
	if (ctx.cr6.lt) goto loc_824C3D20;
	// beq cr6,0x824c3cdc
	if (ctx.cr6.eq) goto loc_824C3CDC;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x824c3ca8
	if (ctx.cr6.lt) goto loc_824C3CA8;
	// beq cr6,0x824c3c24
	if (ctx.cr6.eq) goto loc_824C3C24;
	// cmplwi cr6,r7,5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 5, ctx.xer);
	// blt cr6,0x824c3b54
	if (ctx.cr6.lt) goto loc_824C3B54;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,6264
	ctx.r4.s64 = ctx.r11.s64 + 6264;
	// bl 0x8243c448
	ctx.lr = 0x824C3B48;
	sub_8243C448(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// b 0x824c3d20
	goto loc_824C3D20;
loc_824C3B54:
	// lbz r10,11(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// srawi. r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// beq 0x824c3b94
	if (ctx.cr0.eq) goto loc_824C3B94;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824C3B78:
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824c3b78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3B78;
loc_824C3B94:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x824c3d20
	if (ctx.cr6.eq) goto loc_824C3D20;
	// subf r4,r9,r31
	ctx.r4.u64 = r31.u64 - ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r31,r11,-1
	r31.s64 = ctx.r11.s64 + -1;
loc_824C3BAC:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbzx r6,r3,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// lbzx r7,r4,r9
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r11,r8,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r8.u64;
	// subf r10,r8,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r8.u64;
	// srawi r5,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 31;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r29,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	r29.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r5.u64;
	// srawi r28,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	r28.s64 = r30.s32 >> 31;
	// xor r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 ^ r29.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// xor r5,r30,r28
	ctx.r5.u64 = r30.u64 ^ r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// subf r5,r28,r5
	ctx.r5.u64 = ctx.r5.u64 - r28.u64;
	// bgt cr6,0x824c3c04
	if (ctx.cr6.gt) goto loc_824C3C04;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x824c3c04
	if (ctx.cr6.gt) goto loc_824C3C04;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// b 0x824c3c10
	goto loc_824C3C10;
loc_824C3C04:
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x824c3c10
	if (ctx.cr6.gt) goto loc_824C3C10;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_824C3C10:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stbu r11,1(r31)
	ea = 1 + r31.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r31.u32 = ea;
	// bdnz 0x824c3bac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3BAC;
	// b 0x824c3d20
	goto loc_824C3D20;
loc_824C3C24:
	// lbz r10,11(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// srawi. r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// beq 0x824c3c64
	if (ctx.cr0.eq) goto loc_824C3C64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824C3C44:
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824c3c44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3C44;
loc_824C3C64:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x824c3d20
	if (ctx.cr6.eq) goto loc_824C3D20;
	// subf r6,r11,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824C3C78:
	// lbzx r9,r10,r31
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbzx r7,r6,r11
	ctx.r7.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x824c3c78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3C78;
	// b 0x824c3d20
	goto loc_824C3D20;
loc_824C3CA8:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824c3d20
	if (ctx.cr6.eq) goto loc_824C3D20;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
loc_824C3CC0:
	// lbzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824c3cc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3CC0;
	// b 0x824c3d20
	goto loc_824C3D20;
loc_824C3CDC:
	// lbz r11,11(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 11);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x824c3d20
	if (!ctx.cr6.lt) goto loc_824C3D20;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_824C3D0C:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x824c3d0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824C3D0C;
loc_824C3D20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824CE450) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x824ce47c
	if (ctx.cr6.eq) goto loc_824CE47C;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_824CE47C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x824ce490
	if (ctx.cr6.eq) goto loc_824CE490;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x824ce4a4
	if (!ctx.cr6.eq) goto loc_824CE4A4;
loc_824CE490:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824CE4A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824CE4A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x824ce4bc
	if (!ctx.cr6.eq) goto loc_824CE4BC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x824d0c38
	ctx.lr = 0x824CE4BC;
	sub_824D0C38(ctx, base);
loc_824CE4BC:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r9,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r9.u32);
	// stw r9,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r9.u32);
	// beq cr6,0x824ce500
	if (ctx.cr6.eq) goto loc_824CE500;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x824CE4F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_824CE500:
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

DEFINE_REX_FUNC(sub_824D41D8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x824d3aa8
	ctx.lr = 0x824D41FC;
	sub_824D3AA8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d3d98
	ctx.lr = 0x824D4208;
	sub_824D3D98(ctx, base);
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

DEFINE_REX_FUNC(sub_824D4CC0) {
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
	PPCVRegister v122{};
	PPCVRegister v123{};
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1c9c
	ctx.lr = 0x824D4CC8;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a3f54
	ctx.lr = 0x824D4CD8;
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// vor128 v127,v63,v63
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// vor128 v126,v63,v63
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// vor128 v125,v63,v63
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// vor128 v124,v63,v63
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// vor128 v122,v63,v63
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r28,0
	r28.s64 = 0;
	// bne cr6,0x824d4d78
	if (!ctx.cr6.eq) goto loc_824D4D78;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v125,v63,0
	vTemp.u32[0] = ctx.v63.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v63.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v63.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v63.u8[2] | 0x3F800000;
	v125 = vTemp;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// lvx128 v123,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lvx128 v126,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lvx128 v127,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4fdc
	goto loc_824D4FDC;
loc_824D4D78:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lvx128 v123,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f31,3704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3704);
	f31.f64 = double(temp.f32);
	// lfs f30,3788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	f30.f64 = double(temp.f32);
loc_824D4DB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 16);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824d4fd0
	if (ctx.cr6.eq) goto loc_824D4FD0;
	// lwzx r9,r31,r26
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + r26.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x824d4de8
	if (!ctx.cr6.eq) goto loc_824D4DE8;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x824d4dec
	goto loc_824D4DEC;
loc_824D4DE8:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_824D4DEC:
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stvx128 v122,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwx r10,r31,r7
	REX_STORE_U32(r31.u32 + ctx.r7.u32, ctx.r10.u32);
	// lvx128 v122,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824d4efc
	if (!ctx.cr6.eq) goto loc_824D4EFC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x824d4eb4
	if (ctx.cr6.eq) goto loc_824D4EB4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x824d4eb4
	if (ctx.cr6.eq) goto loc_824D4EB4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stvx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// stfsx f31,r31,r10
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// stvx128 v124,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v127,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f30,r31,r6
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// lvx128 v126,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v124,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4fd0
	goto loc_824D4FD0;
loc_824D4EB4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v125,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x826a2d40
	ctx.lr = 0x824D4ECC;
	sub_826A2D40(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stvx128 v127,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f31,r31,r9
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// lvx128 v127,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v125,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4fd0
	goto loc_824D4FD0;
loc_824D4EFC:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stvx128 v125,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfsx f31,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// lvx128 v125,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x824d4fa4
	if (ctx.cr6.eq) goto loc_824D4FA4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// beq cr6,0x824d4fa4
	if (ctx.cr6.eq) goto loc_824D4FA4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r11.u8 & 0x3F));
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stvx128 v126,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stvx128 v124,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// stfsx f13,r31,r7
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lvx128 v124,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v126,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824d4fcc
	goto loc_824D4FCC;
loc_824D4FA4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (r30.u64 << (ctx.r11.u8 & 0x7F));
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x826a2d40
	ctx.lr = 0x824D4FBC;
	sub_826A2D40(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + ctx.r11.u32, temp.u32);
loc_824D4FCC:
	// lvx128 v127,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824D4FD0:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bdnz 0x824d4db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824D4DB4;
loc_824D4FDC:
	// lwz r11,612(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 612);
	// stvx128 v123,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v125,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v126,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v127,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v122,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x826a41ec
	ctx.lr = 0x824D5004;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_824EFA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x824EFA50;
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-26736
	r29.s64 = ctx.r10.s64 + -26736;
	// bne cr6,0x824efa90
	if (!ctx.cr6.eq) goto loc_824EFA90;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26132
	ctx.r5.s64 = ctx.r11.s64 + -26132;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFA90;
	sub_824EA978(ctx, base);
loc_824EFA90:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x824efab4
	if (!ctx.cr6.eq) goto loc_824EFAB4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFAB4;
	sub_824EA978(ctx, base);
loc_824EFAB4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x824efadc
	if (!ctx.cr6.eq) goto loc_824EFADC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-26120
	ctx.r5.s64 = ctx.r11.s64 + -26120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824EFADC;
	sub_824EA978(ctx, base);
loc_824EFADC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824ee070
	ctx.lr = 0x824EFAE4;
	sub_824EE070(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_824F3148) {
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
	ctx.lr = 0x824F3150;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,22852
	r30.s64 = ctx.r11.s64 + 22852;
	// addi r29,r10,-23288
	r29.s64 = ctx.r10.s64 + -23288;
	// bne cr6,0x824f318c
	if (!ctx.cr6.eq) goto loc_824F318C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-23308
	ctx.r5.s64 = ctx.r11.s64 + -23308;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F318C;
	sub_824EA978(ctx, base);
loc_824F318C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x825a1088
	ctx.lr = 0x824F3198;
	sub_825A1088(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x824f15e8
	ctx.lr = 0x824F31A4;
	sub_824F15E8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x824f15e8
	ctx.lr = 0x824F31AC;
	sub_824F15E8(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r28,r11,-23328
	r28.s64 = ctx.r11.s64 + -23328;
	// bne cr6,0x824f31e8
	if (!ctx.cr6.eq) goto loc_824F31E8;
	// lwz r27,32(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r26,1436(r27)
	r26.u64 = REX_LOAD_U32(r27.u32 + 1436);
	// lwz r25,1444(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 1444);
	// bl 0x825b3ba8
	ctx.lr = 0x824F31D4;
	sub_825B3BA8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x824F31E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x824f3218
	goto loc_824F3218;
loc_824F31E8:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x824f3218
	if (ctx.cr6.eq) goto loc_824F3218;
	// bl 0x825af558
	ctx.lr = 0x824F31F8;
	sub_825AF558(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x824f3218
	if (ctx.cr0.eq) goto loc_824F3218;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,293
	ctx.r7.s64 = 293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F3218;
	sub_824EA978(ctx, base);
loc_824F3218:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824F322C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x824f324c
	if (ctx.cr0.eq) goto loc_824F324C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x824F324C;
	sub_824EA978(ctx, base);
loc_824F324C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_824FDC00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// std r3,16(r1)
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r6,20(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r31,-12(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r3,r3,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwimi r31,r8,0,21,23
	r31.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x700) | (r31.u64 & 0xFFFFFFFFFFFFF8FF);
	// or r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 | ctx.r7.u64;
	// rlwimi r31,r6,0,16,19
	r31.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF000) | (r31.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r31,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, r31.u32);
loc_824FDC50:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824fdc70
	if (!ctx.cr0.eq) goto loc_824FDC70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x824fdc50
	if (!ctx.cr6.eq) goto loc_824FDC50;
loc_824FDC70:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x824fdcac
	if (!ctx.cr0.eq) goto loc_824FDCAC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r6,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blt cr6,0x824fdcac
	if (ctx.cr6.lt) goto loc_824FDCAC;
	// beq cr6,0x824fdcd4
	if (ctx.cr6.eq) goto loc_824FDCD4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x824fdcbc
	if (ctx.cr6.lt) goto loc_824FDCBC;
	// bne cr6,0x824fdcf8
	if (!ctx.cr6.eq) goto loc_824FDCF8;
loc_824FDCAC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_824FDCB4:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824FDCBC:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824fdcac
	if (!ctx.cr6.eq) goto loc_824FDCAC;
	// rlwinm. r10,r9,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fdcac
	if (!ctx.cr0.eq) goto loc_824FDCAC;
	// ori r10,r9,1024
	ctx.r10.u64 = ctx.r9.u64 | 1024;
	// b 0x824fdcf4
	goto loc_824FDCF4;
loc_824FDCD4:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x824fdcac
	if (!ctx.cr6.eq) goto loc_824FDCAC;
	// lbz r10,40(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x824fdcac
	if (!ctx.cr0.eq) goto loc_824FDCAC;
	// rlwinm. r10,r9,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x824fdcac
	if (!ctx.cr0.eq) goto loc_824FDCAC;
	// ori r10,r9,6144
	ctx.r10.u64 = ctx.r9.u64 | 6144;
loc_824FDCF4:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824FDCF8:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r9,r6,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bne 0x824fdd14
	if (!ctx.cr0.eq) goto loc_824FDD14;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_824FDD14:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824fdcb4
	goto loc_824FDCB4;
}

DEFINE_REX_FUNC(sub_825069A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825069B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r7,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825069e4
	if (ctx.cr0.eq) goto loc_825069E4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x825069f0
	goto loc_825069F0;
loc_825069E4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_825069F0:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stb r30,72(r31)
	REX_STORE_U8(r31.u32 + 72, r30.u8);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,73(r31)
	REX_STORE_U8(r31.u32 + 73, r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,74(r31)
	REX_STORE_U8(r31.u32 + 74, r30.u8);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// bl 0x826a2e60
	ctx.lr = 0x82506A18;
	sub_826A2E60(ctx, base);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// b 0x82506a70
	goto loc_82506A70;
loc_82506A28:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x82506a48
	if (ctx.cr6.lt) goto loc_82506A48;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82506a4c
	if (!ctx.cr6.gt) goto loc_82506A4C;
loc_82506A48:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82506A4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82506a60
	if (!ctx.cr0.eq) goto loc_82506A60;
	// bl 0x824f6e38
	ctx.lr = 0x82506A58;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82506a7c
	if (ctx.cr0.eq) goto loc_82506A7C;
loc_82506A60:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82506788
	ctx.lr = 0x82506A68;
	sub_82506788(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82506a88
	if (!ctx.cr0.eq) goto loc_82506A88;
loc_82506A70:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82506a28
	if (!ctx.cr6.eq) goto loc_82506A28;
loc_82506A7C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82506A88:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824e4368
	ctx.lr = 0x82506A94;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825163B8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825163f4
	if (ctx.cr0.eq) goto loc_825163F4;
	// b 0x825163d8
	goto loc_825163D8;
loc_825163CC:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825163e4
	if (ctx.cr0.eq) goto loc_825163E4;
loc_825163D8:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825163cc
	if (!ctx.cr6.eq) goto loc_825163CC;
loc_825163E4:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825163d8
	if (!ctx.cr0.eq) goto loc_825163D8;
	// stw r11,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
loc_825163F4:
	// lwz r3,108(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82517340) {
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
	ctx.lr = 0x82517348;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825173c8
	if (!ctx.cr6.eq) goto loc_825173C8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,192(r4)
	REX_STORE_U32(ctx.r4.u32 + 192, ctx.r10.u32);
	// bne 0x825173ac
	if (!ctx.cr0.eq) goto loc_825173AC;
	// lwz r10,680(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825173ac
	if (ctx.cr6.eq) goto loc_825173AC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r11,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r11.u32);
	// b 0x825173c8
	goto loc_825173C8;
loc_825173AC:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x824f7dc0
	ctx.lr = 0x825173C0;
	sub_824F7DC0(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r3.u32);
loc_825173C8:
	// clrlwi. r6,r26,24
	ctx.r6.u64 = r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne 0x82517440
	if (!ctx.cr0.eq) goto loc_82517440;
	// lwz r9,680(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 680);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82517440
	if (ctx.cr6.eq) goto loc_82517440;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 672);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82517464
	if (!ctx.cr6.lt) goto loc_82517464;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82517428:
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82517428
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82517428;
	// b 0x82517464
	goto loc_82517464;
loc_82517440:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 29) & 0x1FFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + r31.u64;
	// clrldi r8,r27,58
	ctx.r8.u64 = r27.u64 & 0x3F;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// sld r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stdx r8,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u64);
loc_82517464:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r29,58
	ctx.r9.u64 = r29.u64 & 0x3F;
	// addi r8,r28,4
	ctx.r8.s64 = r28.s64 + 4;
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r8,684(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 684);
	// lwz r10,672(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 672);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825174e0
	if (!ctx.cr6.lt) goto loc_825174E0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825174CC:
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x825174cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825174CC;
loc_825174E0:
	// lwz r9,676(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r29,5
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(5));
loc_825174EC:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x825175b4
	if (!ctx.cr6.eq) goto loc_825175B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x825174ec
	if (ctx.cr6.lt) goto loc_825174EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82517514:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82517560
	if (ctx.cr0.eq) goto loc_82517560;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(40));
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// mulli r9,r9,40
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(40));
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// lwz r8,676(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 676);
	// li r11,4
	ctx.r11.s64 = 4;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_8251754C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8251754c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8251754C;
loc_82517560:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x825175ac
	if (!ctx.cr6.eq) goto loc_825175AC;
	// rlwinm r8,r29,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r10,692(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 692);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,30,3,28
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r7,r28,62
	ctx.r7.u64 = r28.u64 & 0x3;
	// ldx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 688);
	// stwx r31,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, r31.u32);
loc_825175AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_825175B4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82517514
	goto loc_82517514;
}

DEFINE_REX_FUNC(sub_82534F50) {
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
	ctx.lr = 0x82534F58;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r17,r6
	r17.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82534fb8
	if (ctx.cr6.eq) goto loc_82534FB8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82534fb8
	if (ctx.cr6.eq) goto loc_82534FB8;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82534fb0
	if (ctx.cr6.eq) goto loc_82534FB0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x825c4a48
	ctx.lr = 0x82534FAC;
	sub_825C4A48(ctx, base);
	// b 0x82534fb8
	goto loc_82534FB8;
loc_82534FB0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x825355f0
	if (!ctx.cr6.eq) goto loc_825355F0;
loc_82534FB8:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252e180
	ctx.lr = 0x82534FD0;
	sub_8252E180(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r14)
	ctx.r4.u64 = REX_LOAD_U32(r14.u32 + 28);
	// bl 0x825bb9c8
	ctx.lr = 0x82534FE8;
	sub_825BB9C8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// bne cr6,0x82534ffc
	if (!ctx.cr6.eq) goto loc_82534FFC;
	// mr r15,r26
	r15.u64 = r26.u64;
	// b 0x82535004
	goto loc_82535004;
loc_82534FFC:
	// mr r15,r22
	r15.u64 = r22.u64;
	// mr r21,r14
	r21.u64 = r14.u64;
loc_82535004:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r23,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFE;
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
	// li r16,0
	r16.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
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
	// beq cr6,0x82535218
	if (ctx.cr6.eq) goto loc_82535218;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82535218
	if (ctx.cr6.eq) goto loc_82535218;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// beq cr6,0x82535098
	if (ctx.cr6.eq) goto loc_82535098;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r23,44
	r31.s64 = r23.s64 + 44;
	// subf r29,r23,r26
	r29.u64 = r26.u64 - r23.u64;
loc_82535068:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82535094
	if (!ctx.cr6.lt) goto loc_82535094;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// bl 0x8250ad28
	ctx.lr = 0x82535084;
	sub_8250AD28(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x82535068
	goto loc_82535068;
loc_82535094:
	// mr r24,r11
	r24.u64 = ctx.r11.u64;
loc_82535098:
	// addi r11,r24,10
	ctx.r11.s64 = r24.s64 + 10;
	// li r21,0
	r21.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// add r27,r11,r23
	r27.u64 = ctx.r11.u64 + r23.u64;
	// addi r25,r22,44
	r25.s64 = r22.s64 + 44;
	// li r20,3
	r20.s64 = 3;
loc_825350B4:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82535160
	if (!ctx.cr6.lt) goto loc_82535160;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r14.u32, ctx.xer);
	// bne cr6,0x8253512c
	if (!ctx.cr6.eq) goto loc_8253512C;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x8253511c
	if (ctx.cr6.eq) goto loc_8253511C;
	// addi r29,r23,44
	r29.s64 = r23.s64 + 44;
loc_825350E4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824f7010
	ctx.lr = 0x825350F0;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8253510c
	if (!ctx.cr0.eq) goto loc_8253510C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x825350e4
	if (ctx.cr6.lt) goto loc_825350E4;
	// b 0x8253511c
	goto loc_8253511C;
loc_8253510C:
	// slw r11,r20,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// slw r10,r30,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// andc r11,r16,r11
	ctx.r11.u64 = r16.u64 & ~ctx.r11.u64;
	// or r16,r11,r10
	r16.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_8253511C:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// bne cr6,0x82535150
	if (!ctx.cr6.eq) goto loc_82535150;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(r30.u32, r24.u32, ctx.xer);
	// blt cr6,0x82535150
	if (ctx.cr6.lt) goto loc_82535150;
loc_8253512C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82535138;
	sub_8250AD28(ctx, base);
	// slw r11,r20,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// slw r10,r24,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r24.u32 << (r31.u8 & 0x3F));
	// stwu r3,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r27.u32 = ea;
	// andc r11,r16,r11
	ctx.r11.u64 = r16.u64 & ~ctx.r11.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// or r16,r11,r10
	r16.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82535150:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// b 0x825350b4
	goto loc_825350B4;
loc_82535160:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(r26.u32, r22.u32, ctx.xer);
	// beq cr6,0x8253537c
	if (ctx.cr6.eq) goto loc_8253537C;
	// addi r8,r26,4
	ctx.r8.s64 = r26.s64 + 4;
loc_8253516C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825351d0
	if (ctx.cr6.eq) goto loc_825351D0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825351bc
	if (ctx.cr6.eq) goto loc_825351BC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8253519c
	goto loc_8253519C;
loc_82535194:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8253519C:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82535194
	if (!ctx.cr6.eq) goto loc_82535194;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r11.u32);
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
loc_825351BC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253516c
	if (!ctx.cr6.eq) goto loc_8253516C;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x8253516c
	goto loc_8253516C;
loc_825351D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,260(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82535200
	if (!ctx.cr6.lt) goto loc_82535200;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8252fec8
	ctx.lr = 0x825351FC;
	sub_8252FEC8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_82535200:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 652);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c2288
	ctx.lr = 0x82535214;
	sub_825C2288(ctx, base);
	// b 0x8253537c
	goto loc_8253537C;
loc_82535218:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825352b0
	if (ctx.cr0.eq) goto loc_825352B0;
	// addi r25,r23,44
	r25.s64 = r23.s64 + 44;
	// li r30,0
	r30.s64 = 0;
	// addi r22,r25,-4
	r22.s64 = r25.s64 + -4;
	// addi r31,r15,44
	r31.s64 = r15.s64 + 44;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// li r20,3
	r20.s64 = 3;
loc_8253523C:
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82535274
	if (ctx.cr6.eq) goto loc_82535274;
	// lwz r26,0(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82535250:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824f7010
	ctx.lr = 0x8253525C;
	sub_824F7010(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82535274
	if (!ctx.cr0.eq) goto loc_82535274;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// blt cr6,0x82535250
	if (ctx.cr6.lt) goto loc_82535250;
loc_82535274:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(r28.u32, r24.u32, ctx.xer);
	// bne cr6,0x82535290
	if (!ctx.cr6.eq) goto loc_82535290;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8250ad28
	ctx.lr = 0x82535288;
	sub_8250AD28(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stwu r3,4(r22)
	ea = 4 + r22.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r22.u32 = ea;
loc_82535290:
	// slw r11,r20,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (r20.u32 << (r30.u8 & 0x3F));
	// slw r10,r28,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r28.u32 << (r30.u8 & 0x3F));
	// andc r11,r16,r11
	ctx.r11.u64 = r16.u64 & ~ctx.r11.u64;
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// or r16,r11,r10
	r16.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bne 0x8253523c
	if (!ctx.cr0.eq) goto loc_8253523C;
loc_825352B0:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r29,r11,18,29,31
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8253537c
	if (ctx.cr0.eq) goto loc_8253537C;
	// addi r11,r24,10
	ctx.r11.s64 = r24.s64 + 10;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
loc_825352CC:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253531c
	if (!ctx.cr6.eq) goto loc_8253531C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82535350
	if (ctx.cr6.eq) goto loc_82535350;
	// add r9,r31,r17
	ctx.r9.u64 = r31.u64 + r17.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825352F0:
	// srw r8,r18,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82535314
	if (ctx.cr6.eq) goto loc_82535314;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// blt cr6,0x825352f0
	if (ctx.cr6.lt) goto loc_825352F0;
	// b 0x82535350
	goto loc_82535350;
loc_82535314:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// b 0x82535350
	goto loc_82535350;
loc_8253531C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82535350
	if (ctx.cr6.eq) goto loc_82535350;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82535328:
	// srw r9,r18,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r18.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, ctx.xer);
	// beq cr6,0x82535348
	if (ctx.cr6.eq) goto loc_82535348;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// blt cr6,0x82535328
	if (ctx.cr6.lt) goto loc_82535328;
loc_82535348:
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r19.u32, ctx.xer);
	// blt cr6,0x82535370
	if (ctx.cr6.lt) goto loc_82535370;
loc_82535350:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// bl 0x8250ac70
	ctx.lr = 0x8253535C;
	sub_8250AC70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82535368;
	sub_8250AD28(ctx, base);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
loc_82535370:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x825352cc
	if (ctx.cr6.lt) goto loc_825352CC;
loc_8253537C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825353a4
	if (!ctx.cr6.lt) goto loc_825353A4;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// lwz r8,300(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r3,260(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8252fec8
	ctx.lr = 0x825353A4;
	sub_8252FEC8(ctx, base);
loc_825353A4:
	// addi r8,r15,4
	ctx.r8.s64 = r15.s64 + 4;
loc_825353A8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535450
	if (ctx.cr6.eq) goto loc_82535450;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253543c
	if (ctx.cr6.eq) goto loc_8253543C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x825353d8
	goto loc_825353D8;
loc_825353D0:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_825353D8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825353d0
	if (!ctx.cr6.eq) goto loc_825353D0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r7,r10,24,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r23.u32);
	// srw r9,r16,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r16.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r16,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r16.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r9,r16,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r16.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r6,r10,28,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r7,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r7,r16,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (r16.u32 >> (ctx.r6.u8 & 0x3F));
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
loc_8253543C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825353a8
	if (!ctx.cr6.eq) goto loc_825353A8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x825353a8
	goto loc_825353A8;
loc_82535450:
	// lwz r28,260(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,652(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 652);
	// bl 0x825c2288
	ctx.lr = 0x82535468;
	sub_825C2288(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82548eb8
	ctx.lr = 0x82535474;
	sub_82548EB8(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82535494
	if (ctx.cr0.eq) goto loc_82535494;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// b 0x825354c0
	goto loc_825354C0;
loc_82535494:
	// lwz r10,8(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825354a8
	if (ctx.cr0.eq) goto loc_825354A8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// b 0x825354c0
	goto loc_825354C0;
loc_825354A8:
	// lwz r3,300(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535528
	if (ctx.cr6.eq) goto loc_82535528;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82535528
	if (ctx.cr0.eq) goto loc_82535528;
loc_825354C0:
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x825354CC;
	sub_82516448(ctx, base);
	// sth r3,18(r23)
	REX_STORE_U16(r23.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82535504
	if (!ctx.cr0.eq) goto loc_82535504;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82535504
	if (ctx.cr0.eq) goto loc_82535504;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82535510
	if (!ctx.cr6.gt) goto loc_82535510;
loc_82535504:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x8253550C;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82535510:
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
	// stwx r23,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r23.u32);
loc_82535528:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825355e4
	if (ctx.cr0.eq) goto loc_825355E4;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r23,44
	r30.s64 = r23.s64 + 44;
loc_8253553C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825355e4
	if (!ctx.cr6.lt) goto loc_825355E4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r31,12(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825355d8
	if (!ctx.cr0.eq) goto loc_825355D8;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x82516448
	ctx.lr = 0x82535570;
	sub_82516448(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r3.u16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825355b4
	if (!ctx.cr0.eq) goto loc_825355B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825355b4
	if (ctx.cr0.eq) goto loc_825355B4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x825355c0
	if (!ctx.cr6.gt) goto loc_825355C0;
loc_825355B4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8251fe00
	ctx.lr = 0x825355BC;
	sub_8251FE00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_825355C0:
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
loc_825355D8:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x8253553c
	goto loc_8253553C;
loc_825355E4:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825335b8
	ctx.lr = 0x825355F0;
	sub_825335B8(ctx, base);
loc_825355F0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82580AB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82580AB8:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82580ad8
	if (ctx.cr6.lt) goto loc_82580AD8;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82580AD8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82580b10
	if (!ctx.cr6.eq) goto loc_82580B10;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
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
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82580B10:
	// subf. r4,r8,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82580ab8
	if (!ctx.cr0.eq) goto loc_82580AB8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825823B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825823B8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,102
	ctx.r6.s64 = 102;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x825823DC;
	sub_825BB860(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82582400
	if (ctx.cr6.eq) goto loc_82582400;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x825823FC;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82582400:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82582408;
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

DEFINE_REX_FUNC(sub_825847B0) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bgt cr6,0x825847d8
	if (ctx.cr6.gt) goto loc_825847D8;
	// li r30,10
	r30.s64 = 10;
loc_825847D8:
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x824f7d10
	ctx.lr = 0x825847E8;
	sub_824F7D10(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82586C50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82586C58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825bb860
	ctx.lr = 0x82586C80;
	sub_825BB860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586C90;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586C9C;
	sub_8250AD28(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584ed0
	ctx.lr = 0x82586CAC;
	sub_82584ED0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82586CB8;
	sub_8250AD28(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8258C288) {
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
	ctx.lr = 0x8258C290;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x824f7678
	ctx.lr = 0x8258C2B8;
	sub_824F7678(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825898c0
	ctx.lr = 0x8258C2E0;
	sub_825898C0(ctx, base);
	// b 0x8258c308
	goto loc_8258C308;
loc_8258C2E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8258c3b4
	if (ctx.cr6.eq) goto loc_8258C3B4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// bne cr6,0x8258c3b4
	if (!ctx.cr6.eq) goto loc_8258C3B4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82588f10
	ctx.lr = 0x8258C308;
	sub_82588F10(ctx, base);
loc_8258C308:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82589980
	ctx.lr = 0x8258C310;
	sub_82589980(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8258c2e4
	if (!ctx.cr0.eq) goto loc_8258C2E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8258c350
	if (!ctx.cr6.eq) goto loc_8258C350;
	// rlwinm. r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c334
	if (ctx.cr0.eq) goto loc_8258C334;
	// rlwinm. r10,r29,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258c338
	if (ctx.cr0.eq) goto loc_8258C338;
loc_8258C334:
	// li r5,4096
	ctx.r5.s64 = 4096;
loc_8258C338:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8258c350
	if (ctx.cr6.eq) goto loc_8258C350;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8258c350
	if (!ctx.cr0.eq) goto loc_8258C350;
	// li r5,4
	ctx.r5.s64 = 4;
loc_8258C350:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// bne cr6,0x8258c35c
	if (!ctx.cr6.eq) goto loc_8258C35C;
	// rlwinm r5,r5,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
loc_8258C35C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8258bc50
	ctx.lr = 0x8258C37C;
	sub_8258BC50(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8258c394
	if (ctx.cr0.eq) goto loc_8258C394;
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// oris r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 536870912;
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
loc_8258C394:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c3e0
	if (ctx.cr0.eq) goto loc_8258C3E0;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// bne cr6,0x8258c3c0
	if (!ctx.cr6.eq) goto loc_8258C3C0;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x8258c3d4
	goto loc_8258C3D4;
loc_8258C3B4:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4368
	ctx.lr = 0x8258C3C0;
	sub_824E4368(ctx, base);
loc_8258C3C0:
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8258c3d4
	if (ctx.cr0.eq) goto loc_8258C3D4;
	// li r4,3577
	ctx.r4.s64 = 3577;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824e4270
	ctx.lr = 0x8258C3D4;
	sub_824E4270(ctx, base);
loc_8258C3D4:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
loc_8258C3E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589188
	ctx.lr = 0x8258C3EC;
	sub_82589188(ctx, base);
	// addi r10,r30,972
	ctx.r10.s64 = r30.s64 + 972;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,972
	ctx.r9.s64 = ctx.r11.s64 + 972;
	// lwz r10,976(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 976);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r30)
	REX_STORE_U32(r30.u32 + 976, r31.u32);
	// lwz r10,976(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 976);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r8,976(r11)
	REX_STORE_U32(ctx.r11.u32 + 976, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_825A3BA8) {
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
	ctx.lr = 0x825A3BB0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,-11144
	r28.s64 = ctx.r10.s64 + -11144;
	// bne cr6,0x825a3c00
	if (!ctx.cr6.eq) goto loc_825A3C00;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-11152
	ctx.r5.s64 = ctx.r11.s64 + -11152;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,811
	ctx.r7.s64 = 811;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3C00;
	sub_824EA978(ctx, base);
loc_825A3C00:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// bne cr6,0x825a3c24
	if (!ctx.cr6.eq) goto loc_825A3C24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-26828
	ctx.r5.s64 = ctx.r11.s64 + -26828;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,812
	ctx.r7.s64 = 812;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3C24;
	sub_824EA978(ctx, base);
loc_825A3C24:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a3c48
	if (!ctx.cr6.eq) goto loc_825A3C48;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-10844
	ctx.r5.s64 = ctx.r11.s64 + -10844;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,813
	ctx.r7.s64 = 813;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3C48;
	sub_824EA978(ctx, base);
loc_825A3C48:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a3c6c
	if (!ctx.cr6.eq) goto loc_825A3C6C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-10856
	ctx.r5.s64 = ctx.r11.s64 + -10856;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3C6C;
	sub_824EA978(ctx, base);
loc_825A3C6C:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x825a3cc4
	if (ctx.cr6.eq) goto loc_825A3CC4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// beq cr6,0x825a3cc4
	if (ctx.cr6.eq) goto loc_825A3CC4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x825a3ca8
	if (ctx.cr6.eq) goto loc_825A3CA8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x825a3ca8
	if (ctx.cr6.eq) goto loc_825A3CA8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-10752
	ctx.r5.s64 = ctx.r11.s64 + -10752;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,833
	ctx.r7.s64 = 833;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A3CA8;
	sub_824EA978(ctx, base);
loc_825A3CA8:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a38f8
	ctx.lr = 0x825A3CC0;
	sub_825A38F8(ctx, base);
	// b 0x825a3d04
	goto loc_825A3D04;
loc_825A3CC4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825a3cf0
	if (ctx.cr6.eq) goto loc_825A3CF0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x825a3a08
	ctx.lr = 0x825A3CEC;
	sub_825A3A08(ctx, base);
	// b 0x825a3d04
	goto loc_825A3D04;
loc_825A3CF0:
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825a37c8
	ctx.lr = 0x825A3D04;
	sub_825A37C8(ctx, base);
loc_825A3D04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825AB808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825AB810;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x825a60d8
	ctx.lr = 0x825AB824;
	sub_825A60D8(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x825ab900
	if (ctx.cr6.lt) goto loc_825AB900;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x825ab9a0
	if (!ctx.cr6.lt) goto loc_825AB9A0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x825ab860
	if (!ctx.cr6.eq) goto loc_825AB860;
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r10,17,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// b 0x825ab878
	goto loc_825AB878;
loc_825AB860:
	// li r11,86
	ctx.r11.s64 = 86;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r8,r9,16,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
loc_825AB878:
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825ab8b0
	if (ctx.cr0.eq) goto loc_825AB8B0;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB8B0:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ab8c8
	if (ctx.cr0.eq) goto loc_825AB8C8;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB8C8:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ab8ec
	if (ctx.cr0.eq) goto loc_825AB8EC;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825AB8EC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ab9a0
	if (ctx.cr0.eq) goto loc_825AB9A0;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// b 0x825ab998
	goto loc_825AB998;
loc_825AB900:
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r9,r11,16,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// sth r3,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r3.u16);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x825ab94c
	if (ctx.cr0.eq) goto loc_825AB94C;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB94C:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x825ab964
	if (ctx.cr0.eq) goto loc_825AB964;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AB964:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ab988
	if (ctx.cr0.eq) goto loc_825AB988;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825AB988:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ab9a0
	if (ctx.cr0.eq) goto loc_825AB9A0;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
loc_825AB998:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_825AB9A0:
	// li r9,108
	ctx.r9.s64 = 108;
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// sth r9,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r9.u16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,23360(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r8,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// lwz r8,23360(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 23360);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825B7AB0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,3728(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fcmpu cr6,f31,f1
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// beq cr6,0x825b7b2c
	if (ctx.cr6.eq) goto loc_825B7B2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x825b7af4
	if (!ctx.cr6.lt) goto loc_825B7AF4;
loc_825B7AE4:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_825B7AE8:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x825b7b2c
	goto loc_825B7B2C;
loc_825B7AF4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826a1930
	ctx.lr = 0x825B7AFC;
	sub_826A1930(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x825b7b24
	if (!ctx.cr0.gt) goto loc_825B7B24;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x825b7ae4
	if (!ctx.cr6.gt) goto loc_825B7AE4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825b7ae4
	if (ctx.cr6.eq) goto loc_825B7AE4;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x825b7b24
	if (!ctx.cr6.eq) goto loc_825B7B24;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x825b7ae8
	goto loc_825B7AE8;
loc_825B7B24:
	// fsqrt f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = sqrt(f31.f64);
	// bl 0x8254f960
	ctx.lr = 0x825B7B2C;
	sub_8254F960(ctx, base);
loc_825B7B2C:
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

DEFINE_REX_FUNC(sub_825B91B8) {
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
	ctx.lr = 0x825B91C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x825b9220
	if (ctx.cr6.eq) goto loc_825B9220;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
loc_825B91F4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x826a58b0
	ctx.lr = 0x825B9208;
	sub_826A58B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825b922c
	if (ctx.cr0.eq) goto loc_825B922C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// blt cr6,0x825b91f4
	if (ctx.cr6.lt) goto loc_825B91F4;
loc_825B9220:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825B9224:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
loc_825B922C:
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// add r31,r11,r28
	r31.u64 = ctx.r11.u64 + r28.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + r26.u64;
	// bl 0x826a5840
	ctx.lr = 0x825B924C;
	sub_826A5840(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r3,r30
	r29.u64 = ctx.r3.u64 + r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825b92c4
	if (ctx.cr0.eq) goto loc_825B92C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825b9220
	if (!ctx.cr0.eq) goto loc_825B9220;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,25920
	ctx.r4.s64 = ctx.r10.s64 + 25920;
	// bl 0x826a4a90
	ctx.lr = 0x825B927C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b928c
	if (!ctx.cr0.eq) goto loc_825B928C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x825b92a8
	goto loc_825B92A8;
loc_825B928C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-18396
	ctx.r4.s64 = ctx.r11.s64 + -18396;
	// bl 0x826a4a90
	ctx.lr = 0x825B929C;
	sub_826A4A90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x825b9220
	if (!ctx.cr0.eq) goto loc_825B9220;
	// li r5,0
	ctx.r5.s64 = 0;
loc_825B92A8:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825b7f28
	ctx.lr = 0x825B92C0;
	sub_825B7F28(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
loc_825B92C4:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r8,260(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825b7d50
	ctx.lr = 0x825B92E0;
	sub_825B7D50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825b9220
	if (ctx.cr0.eq) goto loc_825B9220;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825b92f8
	if (ctx.cr6.eq) goto loc_825B92F8;
	// stb r25,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r25.u8);
loc_825B92F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825b9224
	goto loc_825B9224;
}

DEFINE_REX_FUNC(sub_825C1E18) {
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
	ctx.lr = 0x825C1E20;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r10,r5,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825c1e74
	if (ctx.cr6.eq) goto loc_825C1E74;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825c21c8
	if (ctx.cr6.eq) goto loc_825C21C8;
loc_825C1E74:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b7fb8
	ctx.lr = 0x825C1E98;
	sub_825B7FB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 24);
	// rlwinm r11,r11,29,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x3FFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825c1ec0
	if (!ctx.cr6.eq) goto loc_825C1EC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f360
	ctx.lr = 0x825C1EBC;
	sub_8251F360(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_825C1EC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c1ff4
	if (!ctx.cr0.eq) goto loc_825C1FF4;
	// lwz r25,104(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x824f71b8
	ctx.lr = 0x825C1EE4;
	sub_824F71B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,35
	ctx.r5.s64 = 35;
	// bl 0x824ff930
	ctx.lr = 0x825C1EF4;
	sub_824FF930(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 28);
	// rlwinm r28,r29,3,0,28
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r24,108(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r23,100(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lwzx r6,r8,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// rlwinm r5,r6,14,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x3;
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x825bb770
	ctx.lr = 0x825C1F48;
	sub_825BB770(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,-36
	ctx.r8.s64 = ctx.r8.s64 + -36;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825c1fac
	if (!ctx.cr0.eq) goto loc_825C1FAC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x825c1fbc
	goto loc_825C1FBC;
loc_825C1FAC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x825c1fc0
	if (!ctx.cr6.eq) goto loc_825C1FC0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_825C1FBC:
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_825C1FC0:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b80f8
	ctx.lr = 0x825C1FDC;
	sub_825B80F8(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x825c21c4
	goto loc_825C21C4;
loc_825C1FF4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x825c2018
	if (!ctx.cr6.eq) goto loc_825C2018;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,3619
	ctx.r4.s64 = 3619;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x824e4368
	ctx.lr = 0x825C2018;
	sub_824E4368(ctx, base);
loc_825C2018:
	// li r5,18
	ctx.r5.s64 = 18;
	// bl 0x8257e8c8
	ctx.lr = 0x825C2020;
	sub_8257E8C8(ctx, base);
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x825c203c
	if (ctx.cr6.eq) goto loc_825C203C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x824e4368
	ctx.lr = 0x825C203C;
	sub_824E4368(ctx, base);
loc_825C203C:
	// li r25,0
	r25.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stb r25,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8251e140
	ctx.lr = 0x825C205C;
	sub_8251E140(ctx, base);
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825c2078
	if (ctx.cr0.eq) goto loc_825C2078;
	// li r4,4509
	ctx.r4.s64 = 4509;
	// lwz r5,24(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 24);
	// bl 0x824e4368
	ctx.lr = 0x825C2078;
	sub_824E4368(ctx, base);
loc_825C2078:
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// li r6,120
	ctx.r6.s64 = 120;
	// bl 0x825bb860
	ctx.lr = 0x825C2090;
	sub_825BB860(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r28,1,27,30
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1E) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x8250ab60
	ctx.lr = 0x825C20B0;
	sub_8250AB60(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// rlwinm r23,r29,3,0,28
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// oris r11,r9,16384
	ctx.r11.u64 = ctx.r9.u64 | 1073741824;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// rlwimi r10,r11,17,7,14
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1FE0000) | (ctx.r10.u64 & 0xFFFFFFFFFE01FFFF);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// rlwimi r10,r28,13,15,18
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 13) & 0x1E000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE1FFF);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x825bdf00
	ctx.lr = 0x825C2128;
	sub_825BDF00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ac70
	ctx.lr = 0x825C2138;
	sub_8250AC70(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bd2e0
	ctx.lr = 0x825C2150;
	sub_825BD2E0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x825C216C;
	sub_824F71B8(ctx, base);
	// addi r11,r29,-24
	ctx.r11.s64 = r29.s64 + -24;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r9,r28,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r8,r10,15,3,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1FFF8000) | (ctx.r8.u64 & 0xFFFFFFFFE0007FFF);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 4);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// oris r9,r7,2
	ctx.r9.u64 = ctx.r7.u64 | 131072;
	// rlwimi r8,r26,0,17,31
	ctx.r8.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x7FFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF8000);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + ctx.r11.u32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwimi r10,r11,2,16,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0003);
	// rlwimi r10,r28,0,30,14
	ctx.r10.u64 = (__builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFE0003) | (ctx.r10.u64 & 0x1FFFC);
loc_825C21C4:
	// stw r10,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r10.u32);
loc_825C21C8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_825D4420) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D4430) {
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
	ctx.lr = 0x825D4438;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4478
	if (!ctx.cr6.eq) goto loc_825D4478;
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
	// li r7,2877
	ctx.r7.s64 = 2877;
	// bl 0x824ea978
	ctx.lr = 0x825D4478;
	sub_824EA978(ctx, base);
loc_825D4478:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(r29.u32, 16, ctx.xer);
	// bge cr6,0x825d44a0
	if (!ctx.cr6.lt) goto loc_825D44A0;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(r29.s32, -1, ctx.xer);
	// beq cr6,0x825d44a0
	if (ctx.cr6.eq) goto loc_825D44A0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D4498;
	sub_824F05F0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x825d44a4
	goto loc_825D44A4;
loc_825D44A0:
	// li r8,0
	ctx.r8.s64 = 0;
loc_825D44A4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r7,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r7.u32);
	// beq cr6,0x825d4514
	if (ctx.cr6.eq) goto loc_825D4514;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d4514
	if (ctx.cr6.eq) goto loc_825D4514;
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
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,31
	ctx.r6.s64 = 31;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,124(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// bctrl 
	ctx.lr = 0x825D4514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4514:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D7F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825D7F90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,152(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825d7fb8
	if (ctx.cr6.eq) goto loc_825D7FB8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b3528
	ctx.lr = 0x825D7FB8;
	sub_825B3528(ctx, base);
loc_825D7FB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825b33a0
	ctx.lr = 0x825D7FCC;
	sub_825B33A0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// stw r3,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_825D7FDC:
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lwz r9,152(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 152);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x825d7fdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825D7FDC;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825DE4F0) {
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
	// bl 0x825ddc68
	ctx.lr = 0x825DE508;
	sub_825DDC68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dadf0
	ctx.lr = 0x825DE510;
	sub_825DADF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825da6c8
	ctx.lr = 0x825DE518;
	sub_825DA6C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825da810
	ctx.lr = 0x825DE520;
	sub_825DA810(ctx, base);
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

DEFINE_REX_FUNC(sub_825DED80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x825dedc0
	if (ctx.cr6.eq) goto loc_825DEDC0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x825dedc4
	if (!ctx.cr6.eq) goto loc_825DEDC4;
loc_825DEDC0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825DEDC4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825E2C28) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,952(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x825fa4d0
	ctx.lr = 0x825E2C48;
	sub_825FA4D0(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825e2c8c
	if (ctx.cr6.eq) goto loc_825E2C8C;
	// ble cr6,0x825e2c84
	if (!ctx.cr6.gt) goto loc_825E2C84;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// ble cr6,0x825e2c7c
	if (!ctx.cr6.gt) goto loc_825E2C7C;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bgt cr6,0x825e2c84
	if (ctx.cr6.gt) goto loc_825E2C84;
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 112);
	// lwz r11,2096(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2096);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x825e2c94
	goto loc_825E2C94;
loc_825E2C7C:
	// lwz r11,2088(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2088);
	// b 0x825e2c90
	goto loc_825E2C90;
loc_825E2C84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825e2c94
	goto loc_825E2C94;
loc_825E2C8C:
	// lwz r11,2084(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2084);
loc_825E2C90:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_825E2C94:
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

DEFINE_REX_FUNC(sub_825E6C50) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825f7d78
	ctx.lr = 0x825E6C74;
	sub_825F7D78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f7a90
	ctx.lr = 0x825E6C84;
	sub_825F7A90(ctx, base);
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

DEFINE_REX_FUNC(sub_825EA448) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x825ea494
	if (!ctx.cr6.gt) goto loc_825EA494;
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_825EA464:
	// li r8,4
	ctx.r8.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_825EA470:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// bdnz 0x825ea470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825EA470;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x825ea464
	if (!ctx.cr0.eq) goto loc_825EA464;
loc_825EA494:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,101
	ctx.r10.s64 = 101;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,101
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(101));
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825EE020) {
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
	ctx.lr = 0x825EE028;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r24,1
	r24.s64 = 1;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r11,1360(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1360);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq cr6,0x825ee184
	if (ctx.cr6.eq) goto loc_825EE184;
loc_825EE054:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x825EE064;
	sub_825D8668(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x825d8668
	ctx.lr = 0x825EE078;
	sub_825D8668(ctx, base);
	// lwz r29,28(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// b 0x825ee168
	goto loc_825EE168;
loc_825EE084:
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee164
	if (ctx.cr0.eq) goto loc_825EE164;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x825ee164
	if (ctx.cr6.lt) goto loc_825EE164;
	// li r28,0
	r28.s64 = 0;
	// addi r26,r29,236
	r26.s64 = r29.s64 + 236;
loc_825EE0A8:
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee14c
	if (ctx.cr0.eq) goto loc_825EE14C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825ee124
	if (ctx.cr0.eq) goto loc_825EE124;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x825ee0f4
	if (!ctx.cr6.lt) goto loc_825EE0F4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// b 0x825ee0f8
	goto loc_825EE0F8;
loc_825EE0F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825EE0F8:
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// slw r7,r24,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r11,100(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// b 0x825ee148
	goto loc_825EE148;
loc_825EE124:
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r24,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_825EE148:
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_825EE14C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x825ee0a8
	if (!ctx.cr6.gt) goto loc_825EE0A8;
loc_825EE164:
	// lwz r29,8(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 8);
loc_825EE168:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ee084
	if (!ctx.cr6.eq) goto loc_825EE084;
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825ee054
	if (!ctx.cr6.eq) goto loc_825EE054;
loc_825EE184:
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 4);
	// bl 0x825db6e8
	ctx.lr = 0x825EE18C;
	sub_825DB6E8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_825EE190:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x825f74b8
	ctx.lr = 0x825EE1A4;
	sub_825F74B8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x825ee378
	if (ctx.cr6.lt) goto loc_825EE378;
	// addi r28,r27,4
	r28.s64 = r27.s64 + 4;
loc_825EE1B0:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825EE1C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee35c
	if (!ctx.cr0.eq) goto loc_825EE35C;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x825ee200
	if (!ctx.cr6.gt) goto loc_825EE200;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_825EE1E8:
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
	// blt cr6,0x825ee1e8
	if (ctx.cr6.lt) goto loc_825EE1E8;
loc_825EE200:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_825EE210:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x825ee228
	if (!ctx.cr6.gt) goto loc_825EE228;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825ee234
	goto loc_825EE234;
loc_825EE228:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// lwzx r7,r10,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_825EE234:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x825ee2d0
	if (ctx.cr0.eq) goto loc_825EE2D0;
	// lwz r8,100(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 100);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825ee288
	if (ctx.cr0.eq) goto loc_825EE288;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x825ee280
	if (!ctx.cr6.gt) goto loc_825EE280;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_825EE264:
	// lwzx r6,r8,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x825ee264
	if (ctx.cr6.lt) goto loc_825EE264;
loc_825EE280:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825ee2c4
	goto loc_825EE2C4;
loc_825EE288:
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ee2c4
	if (!ctx.cr6.gt) goto loc_825EE2C4;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_825EE2A0:
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r26,0(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 | r26.u64;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x825ee2a0
	if (ctx.cr6.lt) goto loc_825EE2A0;
loc_825EE2C4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// b 0x825ee210
	goto loc_825EE210;
loc_825EE2D0:
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x825ee30c
	if (ctx.cr6.eq) goto loc_825EE30C;
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r11,8
	ctx.r11.s64 = 8;
loc_825EE2E8:
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// or r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 | ctx.r6.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825ee388
	if (!ctx.cr6.eq) goto loc_825EE388;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x825ee2e8
	if (ctx.cr6.lt) goto loc_825EE2E8;
loc_825EE30C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_825EE310:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee35c
	if (!ctx.cr0.eq) goto loc_825EE35C;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825ee35c
	if (!ctx.cr6.gt) goto loc_825EE35C;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_825EE338:
	// lwzx r7,r8,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x825ee338
	if (ctx.cr6.lt) goto loc_825EE338;
loc_825EE35C:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// bl 0x825f74b8
	ctx.lr = 0x825EE370;
	sub_825F74B8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x825ee1b0
	if (!ctx.cr6.gt) goto loc_825EE1B0;
loc_825EE378:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825ee190
	if (!ctx.cr0.eq) goto loc_825EE190;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
loc_825EE388:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825ee310
	goto loc_825EE310;
}

DEFINE_REX_FUNC(sub_826076C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826076C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1452(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1452);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x825b33a0
	ctx.lr = 0x826076E8;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x8260770c
	if (ctx.cr0.eq) goto loc_8260770C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8910
	ctx.lr = 0x82607708;
	sub_825F8910(ctx, base);
	// b 0x82607710
	goto loc_82607710;
loc_8260770C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82609040) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82609070
	if (!ctx.cr6.eq) goto loc_82609070;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826090f0
	goto loc_826090F0;
loc_82609070:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r30.s32, ctx.xer);
	// ble cr6,0x82609088
	if (!ctx.cr6.gt) goto loc_82609088;
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
loc_82609088:
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x82608fd0
	ctx.lr = 0x82609090;
	sub_82608FD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x826090f0
	if (ctx.cr0.eq) goto loc_826090F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r31,12
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(12));
	// subf r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_826090C0:
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82609108
	if (!ctx.cr6.eq) goto loc_82609108;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x826090c0
	if (ctx.cr6.lt) goto loc_826090C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_826090E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_826090F0:
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
loc_82609108:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x826090e4
	goto loc_826090E4;
}

DEFINE_REX_FUNC(sub_8260D708) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
loc_8260D70C:
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
	// bne 0x8260d70c
	if (!ctx.cr0.eq) goto loc_8260D70C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8260E870) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8260E878;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8260e894
	if (ctx.cr6.eq) goto loc_8260E894;
	// lwz r31,4(r6)
	r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x8260e898
	goto loc_8260E898;
loc_8260E894:
	// lwz r31,204(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
loc_8260E898:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8260e8e4
	if (ctx.cr6.eq) goto loc_8260E8E4;
	// b 0x8260e8c0
	goto loc_8260E8C0;
loc_8260E8A4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x8260E8B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8260e8cc
	if (ctx.cr0.eq) goto loc_8260E8CC;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8260E8C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260e8a4
	if (!ctx.cr6.eq) goto loc_8260E8A4;
	// b 0x8260e8ec
	goto loc_8260E8EC;
loc_8260E8CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8260e8f0
	goto loc_8260E8F0;
loc_8260E8D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x8260e8cc
	if (ctx.cr6.eq) goto loc_8260E8CC;
	// lwz r31,4(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_8260E8E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8260e8d4
	if (!ctx.cr6.eq) goto loc_8260E8D4;
loc_8260E8EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260E8F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82611750) {
	REX_FUNC_PROLOGUE();
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// beq cr6,0x82611790
	if (ctx.cr6.eq) goto loc_82611790;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,3728(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
loc_82611790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f13,32424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// fadd f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82613BF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82613C00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
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
	ctx.lr = 0x82613C24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f988
	ctx.lr = 0x82613C2C;
	sub_8260F988(ctx, base);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8260b5b8
	ctx.lr = 0x82613C48;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82613c64
	if (ctx.cr0.eq) goto loc_82613C64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82613C60;
	sub_826A1E70(ctx, base);
	// b 0x82613c68
	goto loc_82613C68;
loc_82613C64:
	// li r31,0
	r31.s64 = 0;
loc_82613C68:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82613cdc
	if (ctx.cr6.eq) goto loc_82613CDC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613ca8
	if (ctx.cr6.eq) goto loc_82613CA8;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82613ca8
	if (!ctx.cr6.eq) goto loc_82613CA8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82613ca8
	if (ctx.cr6.eq) goto loc_82613CA8;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_82613CA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,492(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 492);
	// bl 0x822f5a50
	ctx.lr = 0x82613CB4;
	sub_822F5A50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82613cc8
	if (!ctx.cr0.lt) goto loc_82613CC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82613CC4;
	sub_8264C3D0(ctx, base);
	// b 0x82613d04
	goto loc_82613D04;
loc_82613CC8:
	// addi r3,r29,148
	ctx.r3.s64 = r29.s64 + 148;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x8260f878
	ctx.lr = 0x82613CD4;
	sub_8260F878(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82613ce8
	if (!ctx.cr0.eq) goto loc_82613CE8;
loc_82613CDC:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82613d04
	goto loc_82613D04;
loc_82613CE8:
	// lwz r3,144(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 144);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82613D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82613D04:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82613D1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8261A458) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,-13768
	ctx.r11.s64 = ctx.r11.s64 + -13768;
	// addi r10,r10,-13788
	ctx.r10.s64 = ctx.r10.s64 + -13788;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// bl 0x8261a2e0
	ctx.lr = 0x8261A488;
	sub_8261A2E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629cd8
	ctx.lr = 0x8261A490;
	sub_82629CD8(ctx, base);
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

DEFINE_REX_FUNC(sub_8261C150) {
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
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C180;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x823eea88
	ctx.lr = 0x8261C188;
	sub_823EEA88(ctx, base);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8261c1a0
	if (ctx.cr6.eq) goto loc_8261C1A0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8261c1bc
	if (ctx.cr6.eq) goto loc_8261C1BC;
loc_8261C1A0:
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
	ctx.lr = 0x8261C1B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8261c270
	goto loc_8261C270;
loc_8261C1BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C1D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8261c1e4
	if (!ctx.cr6.eq) goto loc_8261C1E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260bc68
	ctx.lr = 0x8261C1E4;
	sub_8260BC68(ctx, base);
loc_8261C1E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260ce60
	ctx.lr = 0x8261C1F0;
	sub_8260CE60(ctx, base);
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
	ctx.lr = 0x8261C208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x8260b9b8
	ctx.lr = 0x8261C23C;
	sub_8260B9B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C254;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8261C26C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x8261C270;
	sub_8264C3D0(ctx, base);
loc_8261C270:
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

DEFINE_REX_FUNC(sub_82627818) {
	REX_FUNC_PROLOGUE();
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82627EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82627F00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8260b5b8
	ctx.lr = 0x82627F3C;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82627f50
	if (!ctx.cr0.eq) goto loc_82627F50;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x82627f8c
	goto loc_82627F8C;
loc_82627F50:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(r31.u32 + 16, r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 20);
	// bl 0x82628898
	ctx.lr = 0x82627F7C;
	sub_82628898(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x82627f8c
	if (!ctx.cr0.lt) goto loc_82627F8C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x82627F8C;
	sub_8264C3D0(ctx, base);
loc_82627F8C:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82627FA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8262BA48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// bne cr6,0x8262bb38
	if (!ctx.cr6.eq) goto loc_8262BB38;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8262BA94:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262baf8
	if (ctx.cr6.eq) goto loc_8262BAF8;
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f7.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f5.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f4,f0,f12,f5
	ctx.f4.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f5.f64)));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f2,f0,f11,f3
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfs f2,0(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f7,f0,f10,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f6.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f5,f0,f9,f6
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f6.f64)));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f4.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f3,f0,f8,f4
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f4.f64)));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262bb28
	goto loc_8262BB28;
loc_8262BAF8:
	// fmuls f7,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f6,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f5,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f4,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f3,f0,f9
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262BB28:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// bdnz 0x8262ba94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262BA94;
	// blr 
	return;
loc_8262BB38:
	// lfs f7,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f6,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// li r8,48
	ctx.r8.s64 = 48;
loc_8262BB64:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// dcbt r10,r8
	// dcbt r0,r9
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8262bbc8
	if (ctx.cr6.eq) goto loc_8262BBC8;
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f11,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f10,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f1,f0,f9,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f1.f64)));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmadds f0,f0,f8,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f1.f64)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x8262bbf8
	goto loc_8262BBF8;
loc_8262BBC8:
	// fmuls f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f1,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfsu f0,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8262BBF8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fadds f13,f7,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// addi r9,r11,216
	ctx.r9.s64 = ctx.r11.s64 + 216;
	// fadds f11,f5,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f9,f3,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f9.f64));
	// fadds f8,f2,f8
	ctx.f8.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// bdnz 0x8262bb64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8262BB64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8263FB10) {
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
	ctx.lr = 0x8263FB18;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,224
	r29.s64 = ctx.r3.s64 + 224;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r28,r4,1776
	r28.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r25,r11,r28
	r25.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x826f1f78
	ctx.lr = 0x8263FB54;
	sub_826F1F78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263fc64
	if (ctx.cr6.lt) goto loc_8263FC64;
	// lhz r11,114(r25)
	ctx.r11.u64 = REX_LOAD_U16(r25.u32 + 114);
	// li r23,1
	r23.s64 = 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x8263fb90
	if (ctx.cr6.gt) goto loc_8263FB90;
	// lwz r11,132(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 132);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8263fb90
	if (ctx.cr6.eq) goto loc_8263FB90;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r23,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r23.u8);
	// b 0x8263fbc0
	goto loc_8263FBC0;
loc_8263FB90:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263FBA4;
	sub_82638D80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263fc64
	if (ctx.cr6.lt) goto loc_8263FC64;
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stb r10,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
loc_8263FBC0:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8263fc14
	if (!ctx.cr6.eq) goto loc_8263FC14;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8263fc14
	if (!ctx.cr6.eq) goto loc_8263FC14;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82638d80
	ctx.lr = 0x8263FBF4;
	sub_82638D80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8263fc64
	if (ctx.cr6.lt) goto loc_8263FC64;
	// lwz r11,320(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 320);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + r28.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,436(r9)
	REX_STORE_U32(ctx.r9.u32 + 436, ctx.r8.u32);
loc_8263FC14:
	// lwz r11,424(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 424);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8263fc60
	if (!ctx.cr6.eq) goto loc_8263FC60;
	// lwz r11,444(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 444);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8263fc60
	if (!ctx.cr6.eq) goto loc_8263FC60;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r26,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, r26.u16);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r26,124(r31)
	REX_STORE_U32(r31.u32 + 124, r26.u32);
	// lwz r9,304(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 304);
	// lwz r11,320(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a1e70
	ctx.lr = 0x8263FC60;
	sub_826A1E70(ctx, base);
loc_8263FC60:
	// stw r23,4(r24)
	REX_STORE_U32(r24.u32 + 4, r23.u32);
loc_8263FC64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82643E70) {
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
	ctx.lr = 0x82643E78;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,20576
	ctx.r3.s64 = ctx.r11.s64 + 20576;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x8260b5b8
	ctx.lr = 0x82643EB4;
	sub_8260B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82643ed0
	if (ctx.cr0.eq) goto loc_82643ED0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826437e0
	ctx.lr = 0x82643EC8;
	sub_826437E0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82643ed4
	goto loc_82643ED4;
loc_82643ED0:
	// li r31,0
	r31.s64 = 0;
loc_82643ED4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82643ee8
	if (!ctx.cr6.eq) goto loc_82643EE8;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x82643f2c
	goto loc_82643F2C;
loc_82643EE8:
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
	// bl 0x82643948
	ctx.lr = 0x82643F00;
	sub_82643948(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82643f10
	if (ctx.cr0.lt) goto loc_82643F10;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x82643f2c
	goto loc_82643F2C;
loc_82643F10:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82643F28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8264c3d0
	ctx.lr = 0x82643F2C;
	sub_8264C3D0(ctx, base);
loc_82643F2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8264C0E0) {
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
	ctx.lr = 0x8264C0E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8264c2e8
	if (!ctx.cr6.gt) goto loc_8264C2E8;
	// extsh r25,r9
	r25.s64 = ctx.r9.s16;
loc_8264C108:
	// li r26,0
	r26.s64 = 0;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(r28.s32, r25.s32, ctx.xer);
	// bge cr6,0x8264c208
	if (!ctx.cr6.lt) goto loc_8264C208;
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8264c184
	if (!ctx.cr6.eq) goto loc_8264C184;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8264c134
	if (!ctx.cr6.eq) goto loc_8264C134;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// b 0x8264c2dc
	goto loc_8264C2DC;
loc_8264C134:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8264c150
	if (!ctx.cr6.eq) goto loc_8264C150;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// b 0x8264c2dc
	goto loc_8264C2DC;
loc_8264C150:
	// ble cr6,0x8264c2dc
	if (!ctx.cr6.gt) goto loc_8264C2DC;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r4,-4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// lwzx r9,r8,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r8,r11,r27
	REX_STORE_U32(ctx.r11.u32 + r27.u32, ctx.r8.u32);
	// b 0x8264c2dc
	goto loc_8264C2DC;
loc_8264C184:
	// lhz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 168);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8264c1e8
	if (!ctx.cr6.gt) goto loc_8264C1E8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + r27.u64;
	// subf r9,r10,r24
	ctx.r9.u64 = r24.u64 - ctx.r10.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_8264C1B4:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8264c1c8
	if (!ctx.cr6.gt) goto loc_8264C1C8;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8264c1cc
	goto loc_8264C1CC;
loc_8264C1C8:
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_8264C1CC:
	// mullw r5,r5,r31
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r31.s32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8264c1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264C1B4;
loc_8264C1E8:
	// lhz r11,170(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 170);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r8,r8,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// lwzx r5,r10,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// subf r4,r8,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r8.u64;
	// stwx r4,r10,r27
	REX_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r4.u32);
	// b 0x8264c2dc
	goto loc_8264C2DC;
loc_8264C208:
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(r25.s32, 2, ctx.xer);
	// blt cr6,0x8264c284
	if (ctx.cr6.lt) goto loc_8264C284;
	// addi r11,r28,-2
	ctx.r11.s64 = r28.s64 + -2;
	// addi r31,r25,-1
	r31.s64 = r25.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// add r8,r9,r27
	ctx.r8.u64 = ctx.r9.u64 + r27.u64;
loc_8264C230:
	// addic. r9,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r9.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x8264c240
	if (ctx.cr0.lt) goto loc_8264C240;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8264c244
	goto loc_8264C244;
loc_8264C240:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8264C244:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r9,r5,r9
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// add r29,r9,r29
	r29.u64 = ctx.r9.u64 + r29.u64;
	// blt cr6,0x8264c260
	if (ctx.cr6.lt) goto loc_8264C260;
	// lwz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x8264c264
	goto loc_8264C264;
loc_8264C260:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8264C264:
	// lwzu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r31.s32, ctx.xer);
	// blt cr6,0x8264c230
	if (ctx.cr6.lt) goto loc_8264C230;
loc_8264C284:
	// cmpw cr6,r4,r25
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r25.s32, ctx.xer);
	// bge cr6,0x8264c2b8
	if (!ctx.cr6.lt) goto loc_8264C2B8;
	// subf r11,r4,r28
	ctx.r11.u64 = r28.u64 - ctx.r4.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8264c2a8
	if (ctx.cr0.lt) goto loc_8264C2A8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x8264c2ac
	goto loc_8264C2AC;
loc_8264C2A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8264C2AC:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// mullw r26,r9,r11
	r26.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
loc_8264C2B8:
	// lhz r10,170(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 170);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + r26.u64;
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// sraw r11,r5,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r11.s64 = ctx.r5.s32 >> temp.u32;
	// subf r10,r11,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stwx r10,r9,r27
	REX_STORE_U32(ctx.r9.u32 + r27.u32, ctx.r10.u32);
loc_8264C2DC:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(r28.s32, r23.s32, ctx.xer);
	// blt cr6,0x8264c108
	if (ctx.cr6.lt) goto loc_8264C108;
loc_8264C2E8:
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826a2e60
	ctx.lr = 0x8264C2F8;
	sub_826A2E60(ctx, base);
	// addi r11,r23,-1
	ctx.r11.s64 = r23.s64 + -1;
	// addi r10,r23,-40
	ctx.r10.s64 = r23.s64 + -40;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8264c330
	if (ctx.cr6.lt) goto loc_8264C330;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r24,-4
	ctx.r10.s64 = r24.s64 + -4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8264C324:
	// lwzu r9,-4(r11)
	ea = -4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8264c324
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264C324;
loc_8264C330:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_826582F0) {
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
	// lwz r11,740(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 740);
	// lis r4,-32761
	ctx.r4.s64 = -2147024896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// ori r4,r4,1235
	ctx.r4.u64 = ctx.r4.u64 | 1235;
	// stw r11,740(r3)
	REX_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// bl 0x82654f40
	ctx.lr = 0x8265831C;
	sub_82654F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82656be8
	ctx.lr = 0x82658324;
	sub_82656BE8(ctx, base);
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

DEFINE_REX_FUNC(sub_8265A690) {
	REX_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8265a150
	sub_8265A150(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265B4F0) {
	REX_FUNC_PROLOGUE();
	// b 0x8265a6a0
	sub_8265A6A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8265B6E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8265B6F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,95
	ctx.r11.s64 = ctx.r4.s64 + 95;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r4,r29,r3
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265b71c
	if (ctx.cr6.eq) goto loc_8265B71C;
	// lwz r8,396(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r8,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b728
	if (!ctx.cr0.eq) goto loc_8265B728;
loc_8265B71C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,1245
	r30.u64 = r30.u64 | 1245;
	// b 0x8265b884
	goto loc_8265B884;
loc_8265B728:
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r31,380
	ctx.r10.s64 = r31.s64 + 380;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8265B738:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b754
	if (ctx.cr6.eq) goto loc_8265B754;
	// lwz r11,396(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b754
	if (ctx.cr0.eq) goto loc_8265B754;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8265B754:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8265b738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8265B738;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8265b770
	if (ctx.cr6.gt) goto loc_8265B770;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
	// b 0x8265b884
	goto loc_8265B884;
loc_8265B770:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8265b7bc
	if (ctx.cr6.eq) goto loc_8265B7BC;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x8265b7bc
	if (ctx.cr6.lt) goto loc_8265B7BC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8265b7bc
	if (!ctx.cr6.lt) goto loc_8265B7BC;
	// rlwinm. r11,r8,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8265b7bc
	if (ctx.cr0.eq) goto loc_8265B7BC;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B7AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
loc_8265B7BC:
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// lwz r11,396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8265b810
	if (!ctx.cr6.eq) goto loc_8265B810;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265b4f8
	ctx.lr = 0x8265B7E8;
	sub_8265B4F8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265b884
	if (ctx.cr0.lt) goto loc_8265B884;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8265b808
	if (ctx.cr6.eq) goto loc_8265B808;
	// lwz r11,396(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 396);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8265b810
	if (!ctx.cr0.eq) goto loc_8265B810;
loc_8265B808:
	// li r30,0
	r30.s64 = 0;
	// b 0x8265b884
	goto loc_8265B884;
loc_8265B810:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265B824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,396(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r11)
	REX_STORE_U32(ctx.r11.u32 + 396, ctx.r10.u32);
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// bl 0x82654388
	ctx.lr = 0x8265B848;
	sub_82654388(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265b884
	if (ctx.cr0.lt) goto loc_8265B884;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82654b58
	ctx.lr = 0x8265B85C;
	sub_82654B58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8265b884
	if (ctx.cr0.lt) goto loc_8265B884;
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 400);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8265b884
	if (!ctx.cr6.eq) goto loc_8265B884;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r11,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r28.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826537e0
	ctx.lr = 0x8265B884;
	sub_826537E0(ctx, base);
loc_8265B884:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82662F78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82662F80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r30,4
	r30.s64 = 4;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,192(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// bl 0x82675c50
	ctx.lr = 0x82662FB0;
	sub_82675C50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8266301c
	if (ctx.cr6.eq) goto loc_8266301C;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,7
	ctx.r5.s64 = 7;
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82675c50
	ctx.lr = 0x82662FDC;
	sub_82675C50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8266301c
	if (ctx.cr6.lt) goto loc_8266301C;
	// li r10,-15001
	ctx.r10.s64 = -15001;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8266301c
	if (ctx.cr6.gt) goto loc_8266301C;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// cmplwi cr6,r3,15000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 15000, ctx.xer);
	// bge cr6,0x82663014
	if (!ctx.cr6.lt) goto loc_82663014;
	// li r3,15000
	ctx.r3.s64 = 15000;
	// b 0x82663024
	goto loc_82663024;
loc_82663014:
	// cmplwi cr6,r3,35000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 35000, ctx.xer);
	// ble cr6,0x82663024
	if (!ctx.cr6.gt) goto loc_82663024;
loc_8266301C:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,35000
	ctx.r3.u64 = ctx.r3.u64 | 35000;
loc_82663024:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82668598) {
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
	ctx.lr = 0x826685A0;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82661458
	ctx.lr = 0x826685AC;
	sub_82661458(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826686dc
	if (!ctx.cr6.eq) goto loc_826686DC;
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 24);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// stw r9,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lwz r9,428(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 428);
	// oris r9,r9,16384
	ctx.r9.u64 = ctx.r9.u64 | 1073741824;
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,428(r31)
	REX_STORE_U32(r31.u32 + 428, ctx.r9.u32);
	// bne cr6,0x826686c8
	if (!ctx.cr6.eq) goto loc_826686C8;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// addi r27,r31,240
	r27.s64 = r31.s64 + 240;
	// b 0x826686a8
	goto loc_826686A8;
loc_826685FC:
	// lwz r11,288(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 288);
	// addi r30,r28,-4
	r30.s64 = r28.s64 + -4;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826686a4
	if (!ctx.cr0.eq) goto loc_826686A4;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,292(r30)
	REX_STORE_U32(r30.u32 + 292, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// lwz r29,152(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x826686a4
	if (ctx.cr6.eq) goto loc_826686A4;
	// stw r26,152(r30)
	REX_STORE_U32(r30.u32 + 152, r26.u32);
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826683b0
	ctx.lr = 0x82668650;
	sub_826683B0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
	// beq 0x82668674
	if (ctx.cr0.eq) goto loc_82668674;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8266bfc8
	ctx.lr = 0x82668674;
	sub_8266BFC8(ctx, base);
loc_82668674:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r29
	ea = r29.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ea = r29.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82668674
	if (!ctx.cr0.eq) goto loc_82668674;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826686a4
	if (!ctx.cr6.eq) goto loc_826686A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8265d850
	ctx.lr = 0x826686A4;
	sub_8265D850(ctx, base);
loc_826686A4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
loc_826686A8:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r27.u32, ctx.xer);
	// beq cr6,0x826686bc
	if (ctx.cr6.eq) goto loc_826686BC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// bne 0x826685fc
	if (!ctx.cr0.eq) goto loc_826685FC;
loc_826686BC:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826688a4
	if (!ctx.cr6.eq) goto loc_826688A4;
loc_826686C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82666318
	ctx.lr = 0x826686D0;
	sub_82666318(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x826688a8
	if (!ctx.cr0.eq) goto loc_826688A8;
	// b 0x826688a4
	goto loc_826688A4;
loc_826686DC:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// lwz r10,60(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 60);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
	// bne cr6,0x826688a4
	if (!ctx.cr6.eq) goto loc_826688A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82672ad8
	ctx.lr = 0x8266871C;
	sub_82672AD8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r10,r11,9
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r11,13
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(13));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// beq cr6,0x82668770
	if (ctx.cr6.eq) goto loc_82668770;
	// lhz r10,68(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 68);
	// rlwinm r11,r10,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82668764
	if (ctx.cr6.lt) goto loc_82668764;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82668770
	if (!ctx.cr6.eq) goto loc_82668770;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82668770
	if (!ctx.cr0.eq) goto loc_82668770;
loc_82668764:
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4106
	r31.u64 = r31.u64 | 4106;
	// b 0x826688a8
	goto loc_826688A8;
loc_82668770:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82675ee0
	ctx.lr = 0x82668778;
	sub_82675EE0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8266878c
	if (!ctx.cr0.eq) goto loc_8266878C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x826688a8
	goto loc_826688A8;
loc_8266878C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r11,r30,68
	ctx.r11.s64 = r30.s64 + 68;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,69(r30)
	REX_STORE_U32(r30.u32 + 69, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,73(r30)
	REX_STORE_U32(r30.u32 + 73, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,77(r30)
	REX_STORE_U32(r30.u32 + 77, ctx.r11.u32);
	// bl 0x82672ad8
	ctx.lr = 0x826687C0;
	sub_82672AD8(ctx, base);
	// li r7,1155
	ctx.r7.s64 = 1155;
	// addi r5,r30,36
	ctx.r5.s64 = r30.s64 + 36;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826711d8
	ctx.lr = 0x826687D8;
	sub_826711D8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826715f0
	ctx.lr = 0x826687F4;
	sub_826715F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82668820
	if (!ctx.cr0.eq) goto loc_82668820;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82668864
	if (ctx.cr6.eq) goto loc_82668864;
	// lis r4,32767
	ctx.r4.s64 = 2147418112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,65534
	ctx.r4.u64 = ctx.r4.u64 | 65534;
	// bl 0x82671270
	ctx.lr = 0x82668818;
	sub_82671270(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x82668864
	if (!ctx.cr0.lt) goto loc_82668864;
loc_82668820:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
loc_82668824:
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
	// bne 0x82668824
	if (!ctx.cr0.eq) goto loc_82668824;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826688a8
	if (!ctx.cr6.eq) goto loc_826688A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82668860;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826688a8
	goto loc_826688A8;
loc_82668864:
	// addi r11,r30,4
	ctx.r11.s64 = r30.s64 + 4;
loc_82668868:
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
	// bne 0x82668868
	if (!ctx.cr0.eq) goto loc_82668868;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826688a4
	if (!ctx.cr6.eq) goto loc_826688A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826688A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826688A4:
	// mr r31,r26
	r31.u64 = r26.u64;
loc_826688A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826798A0) {
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
	ctx.lr = 0x826798A8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r3,40
	r25.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x827938a4
	ctx.lr = 0x826798CC;
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
	ctx.lr = 0x826798E8;
	sub_826825C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679910
	if (!ctx.cr0.eq) goto loc_82679910;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82682570
	ctx.lr = 0x826798FC;
	sub_82682570(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82679910
	if (!ctx.cr0.eq) goto loc_82679910;
	// lis r31,-32646
	r31.s64 = -2139488256;
	// ori r31,r31,4111
	r31.u64 = r31.u64 | 4111;
	// b 0x82679924
	goto loc_82679924;
loc_82679910:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82684958
	ctx.lr = 0x82679920;
	sub_82684958(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82679924:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x827938b4
	ctx.lr = 0x8267992C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8267C760) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8267C768;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-10428
	ctx.r11.s64 = ctx.r11.s64 + -10428;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r4,540(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 540);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267c798
	if (ctx.cr6.eq) goto loc_8267C798;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x8265d850
	ctx.lr = 0x8267C794;
	sub_8265D850(ctx, base);
	// stw r30,540(r31)
	REX_STORE_U32(r31.u32 + 540, r30.u32);
loc_8267C798:
	// addi r3,r31,476
	ctx.r3.s64 = r31.s64 + 476;
	// bl 0x826822b0
	ctx.lr = 0x8267C7A0;
	sub_826822B0(ctx, base);
	// lwz r4,612(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 612);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8267c7b8
	if (ctx.cr6.eq) goto loc_8267C7B8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8265d850
	ctx.lr = 0x8267C7B4;
	sub_8265D850(ctx, base);
	// stw r30,612(r31)
	REX_STORE_U32(r31.u32 + 612, r30.u32);
loc_8267C7B8:
	// addi r3,r31,592
	ctx.r3.s64 = r31.s64 + 592;
	// bl 0x826826a8
	ctx.lr = 0x8267C7C0;
	sub_826826A8(ctx, base);
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826829e8
	ctx.lr = 0x8267C7CC;
	sub_826829E8(ctx, base);
	// addi r29,r31,244
	r29.s64 = r31.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826829e8
	ctx.lr = 0x8267C7D8;
	sub_826829E8(ctx, base);
	// addi r28,r31,304
	r28.s64 = r31.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826829e8
	ctx.lr = 0x8267C7E4;
	sub_826829E8(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x82676d18
	ctx.lr = 0x8267C7EC;
	sub_82676D18(ctx, base);
	// addi r11,r31,364
	ctx.r11.s64 = r31.s64 + 364;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82130e88
	ctx.lr = 0x8267C7F8;
	sub_82130E88(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// addi r28,r11,31396
	r28.s64 = ctx.r11.s64 + 31396;
	// stw r28,364(r31)
	REX_STORE_U32(r31.u32 + 364, r28.u32);
	// bl 0x82130e88
	ctx.lr = 0x8267C80C;
	sub_82130E88(ctx, base);
	// stw r28,304(r31)
	REX_STORE_U32(r31.u32 + 304, r28.u32);
	// addi r3,r29,8
	ctx.r3.s64 = r29.s64 + 8;
	// bl 0x82130e88
	ctx.lr = 0x8267C818;
	sub_82130E88(ctx, base);
	// stw r28,244(r31)
	REX_STORE_U32(r31.u32 + 244, r28.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82130e88
	ctx.lr = 0x8267C824;
	sub_82130E88(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r28,184(r31)
	REX_STORE_U32(r31.u32 + 184, r28.u32);
	// addi r11,r11,5148
	ctx.r11.s64 = ctx.r11.s64 + 5148;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82681958) {
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
	ctx.lr = 0x82681960;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r27,2
	r27.s64 = 2;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// stw r28,44(r31)
	REX_STORE_U32(r31.u32 + 44, r28.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r27,40(r31)
	REX_STORE_U16(r31.u32 + 40, r27.u16);
	// bl 0x82681170
	ctx.lr = 0x826819B4;
	sub_82681170(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x826819d8
	if (ctx.cr6.eq) goto loc_826819D8;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x826a1e70
	ctx.lr = 0x826819D4;
	sub_826A1E70(ctx, base);
	// b 0x826819e0
	goto loc_826819E0;
loc_826819D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_826819E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82683D88) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82683dbc
	if (ctx.cr6.gt) goto loc_82683DBC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82683dc0
	if (!ctx.cr6.lt) goto loc_82683DC0;
loc_82683DBC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82683DC0:
	// clrldi r4,r31,32
	ctx.r4.u64 = r31.u64 & 0xFFFFFFFF;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x82682d50
	ctx.lr = 0x82683DCC;
	sub_82682D50(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82683de4
	if (!ctx.cr6.lt) goto loc_82683DE4;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
loc_82683DE4:
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

DEFINE_REX_FUNC(sub_826868E8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x826a2e60
	sub_826A2E60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82687190) {
	REX_FUNC_PROLOGUE();
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826871a0
	if (ctx.cr6.eq) goto loc_826871A0;
	// li r11,9
	ctx.r11.s64 = 9;
loc_826871A0:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826876C0) {
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
	ctx.lr = 0x826876C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8268779c
	if (ctx.cr6.eq) goto loc_8268779C;
loc_82687700:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82687528
	ctx.lr = 0x82687718;
	sub_82687528(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82687744
	if (ctx.cr6.eq) goto loc_82687744;
	// lwz r8,4(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82687738
	if (ctx.cr6.eq) goto loc_82687738;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x8268773c
	goto loc_8268773C;
loc_82687738:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_8268773C:
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82687744:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82687770
	if (ctx.cr6.eq) goto loc_82687770;
	// lwz r8,4(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82687764
	if (ctx.cr6.eq) goto loc_82687764;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// b 0x82687768
	goto loc_82687768;
loc_82687764:
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_82687768:
	// stw r11,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r11.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
loc_82687770:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82687784
	if (!ctx.cr6.eq) goto loc_82687784;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// b 0x82687790
	goto loc_82687790;
loc_82687784:
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
loc_82687790:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82687700
	if (!ctx.cr6.eq) goto loc_82687700;
loc_8268779C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826877ac
	if (!ctx.cr6.eq) goto loc_826877AC;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_826877AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8268DFB8) {
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
	ctx.lr = 0x8268DFC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r28,0
	r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x8268e11c
	if (ctx.cr6.eq) goto loc_8268E11C;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e020
	if (!ctx.cr6.gt) goto loc_8268E020;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_8268E004:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8268ec70
	ctx.lr = 0x8268E00C;
	sub_8268EC70(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e004
	if (ctx.cr6.lt) goto loc_8268E004;
loc_8268E020:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8268e05c
	if (!ctx.cr6.gt) goto loc_8268E05C;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
loc_8268E034:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8268e034
	if (ctx.cr6.lt) goto loc_8268E034;
loc_8268E05C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8268e0cc
	if (ctx.cr6.eq) goto loc_8268E0CC;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e0c8
	if (ctx.cr6.eq) goto loc_8268E0C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8268E0C8:
	// stw r28,76(r31)
	REX_STORE_U32(r31.u32 + 76, r28.u32);
loc_8268E0CC:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e0ec
	if (ctx.cr6.eq) goto loc_8268E0EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E0E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
loc_8268E0EC:
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8268e10c
	if (ctx.cr6.eq) goto loc_8268E10C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268E108;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
loc_8268E10C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x823f0350
	ctx.lr = 0x8268E11C;
	sub_823F0350(ctx, base);
loc_8268E11C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82699A50) {
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
	// rlwinm r11,r3,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF000000;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82699a84
	if (ctx.cr6.eq) goto loc_82699A84;
loc_82699A7C:
	// li r3,87
	ctx.r3.s64 = 87;
	// b 0x82699adc
	goto loc_82699ADC;
loc_82699A84:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x82699a7c
	if (!ctx.cr6.lt) goto loc_82699A7C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82794194
	ctx.lr = 0x82699A9C;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82699aac
	if (!ctx.cr0.lt) goto loc_82699AAC;
loc_82699AA4:
	// li r3,1167
	ctx.r3.s64 = 1167;
	// b 0x82699adc
	goto loc_82699ADC;
loc_82699AAC:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,20480
	ctx.r9.s64 = 1342177280;
	// rlwinm r11,r10,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82699ad0
	if (ctx.cr6.eq) goto loc_82699AD0;
	// lis r9,24576
	ctx.r9.s64 = 1610612736;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82699aa4
	if (!ctx.cr6.eq) goto loc_82699AA4;
loc_82699AD0:
	// sth r10,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r10.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82699ADC:
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

DEFINE_REX_FUNC(sub_8269C348) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82794274
	ctx.lr = 0x8269C370;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8269c388
	if (ctx.cr0.lt) goto loc_8269C388;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82793bf4
	ctx.lr = 0x8269C388;
	__imp__XexGetProcedureAddress(ctx, base);
loc_8269C388:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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

DEFINE_REX_FUNC(sub_8269D1D0) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8269d208
	if (ctx.cr0.eq) goto loc_8269D208;
	// bl 0x826a33d0
	ctx.lr = 0x8269D1F4;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x8269D200;
	sub_8269CB20(ctx, base);
loc_8269D200:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8269d258
	goto loc_8269D258;
loc_8269D208:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x8269d214
	if (ctx.cr6.gt) goto loc_8269D214;
	// li r4,4
	ctx.r4.s64 = 4;
loc_8269D214:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8269d23c
	if (!ctx.cr6.gt) goto loc_8269D23C;
	// bl 0x826a33d0
	ctx.lr = 0x8269D22C;
	sub_826A33D0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x8269d258
	goto loc_8269D258;
loc_8269D23C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x8269D244;
	sub_8269D6A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8269d200
	if (ctx.cr0.eq) goto loc_8269D200;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + r30.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~r31.u64;
	// stw r3,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
loc_8269D258:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_826A0880) {
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
	// andi. r3,r11,263
	ctx.r3.u64 = ctx.r11.u64 & 263;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A1830) {
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
	// bl 0x826a16a0
	ctx.lr = 0x826A1840;
	sub_826A16A0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfd f0,16736(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16736);
	// fmul f1,f1,f0
	ctx.f1.f64 = ctx.f1.f64 * ctx.f0.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_16) {
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
	// ld r16,-136(r1)
	r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
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

DEFINE_REX_FUNC(__restfpr_30) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	// lfd f30,-16(r12)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A32D0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826a3300
	if (!ctx.cr6.eq) goto loc_826A3300;
	// bl 0x826a33d0
	ctx.lr = 0x826A32EC;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826A32F8;
	sub_8269CB20(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x826a3310
	goto loc_826A3310;
loc_826A3300:
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,9468(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 9468);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_826A3310:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_91) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_826A94C0) {
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
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// lwz r11,8932(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8932);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8932(r10)
	REX_STORE_U32(ctx.r10.u32 + 8932, ctx.r11.u32);
	// bl 0x8269d6a8
	ctx.lr = 0x826A94EC;
	sub_8269D6A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x826a950c
	if (ctx.cr0.eq) goto loc_826A950C;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x826a9520
	goto loc_826A9520;
loc_826A950C:
	// addi r10,r31,20
	ctx.r10.s64 = r31.s64 + 20;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
loc_826A9520:
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_826AB008) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826ab058
	if (ctx.cr6.eq) goto loc_826AB058;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ab058
	if (ctx.cr0.eq) goto loc_826AB058;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8269ea68
	ctx.lr = 0x826AB038;
	sub_8269EA68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_826AB058:
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

DEFINE_REX_FUNC(sub_826AEA28) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF274) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826AF4D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfd f0,-3744(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -3744);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B02F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826B02F8;
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	r29.s64 = 1;
	// mulli r9,r9,72
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// stw r29,80(r31)
	REX_STORE_U32(r31.u32 + 80, r29.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826b0384
	if (!ctx.cr6.eq) goto loc_826B0384;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x826a9928
	ctx.lr = 0x826B0340;
	sub_826A9928(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826b0378
	if (!ctx.cr6.eq) goto loc_826B0378;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x826a96c8
	ctx.lr = 0x826B035C;
	sub_826A96C8(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & r29.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_826B0378:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = r31.s64 + 128;
	// bl 0x826b03b8
	ctx.lr = 0x826B0384;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_826B03B8(ctx, base);
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
loc_826B0384:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x826b03ac
	if (ctx.cr6.eq) goto loc_826B03AC;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x827938a4
	ctx.lr = 0x826B03AC;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_826B03AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_826B70E8) {
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
	// bl 0x826b58c0
	ctx.lr = 0x826B7100;
	sub_826B58C0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,27520
	ctx.r10.s64 = ctx.r11.s64 + 27520;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x826b6f88
	ctx.lr = 0x826B7114;
	sub_826B6F88(ctx, base);
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

DEFINE_REX_FUNC(sub_826B94A4) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826B9968) {
	REX_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32817
	ctx.r4.u64 = ctx.r4.u64 | 32817;
	// b 0x823f02b8
	sub_823F02B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826BA008) {
	REX_FUNC_PROLOGUE();
	// ld r11,288(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 288);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BA508) {
	REX_FUNC_PROLOGUE();
	// lwz r11,320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,320(r10)
	REX_STORE_U32(ctx.r10.u32 + 320, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BA820) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r11.u64);
	// stw r11,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826BAAA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826BAAA8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826BAACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x826baae0
	if (ctx.cr6.eq) goto loc_826BAAE0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_826BAAD8:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x826baaf8
	goto loc_826BAAF8;
loc_826BAAE0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x826baad8
	if (ctx.cr6.gt) goto loc_826BAAD8;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_826BAAF8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x826BAB10;
	sub_826A1E70(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826BFA00) {
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
	ctx.lr = 0x826BFA08;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,392(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 392);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x826bfba4
	if (ctx.cr6.gt) goto loc_826BFBA4;
	// li r27,4
	r27.s64 = 4;
	// li r30,0
	r30.s64 = 0;
	// li r24,3
	r24.s64 = 3;
	// li r28,7
	r28.s64 = 7;
	// li r25,5
	r25.s64 = 5;
	// li r26,8
	r26.s64 = 8;
	// li r29,1
	r29.s64 = 1;
loc_826BFA3C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x826bfab4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BFAB4;
	// bdzf 4*cr6+eq,0x826bfb18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BFB18;
	// bdzf 4*cr6+eq,0x826bfba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BFBA4;
	// bdzf 4*cr6+eq,0x826bfb6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_826BFB6C;
	// bne cr6,0x826bfb80
	if (!ctx.cr6.eq) goto loc_826BFB80;
	// ld r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 48);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x826bfbb0
	if (ctx.cr6.gt) goto loc_826BFBB0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// bl 0x826cbba0
	ctx.lr = 0x826BFA80;
	sub_826CBBA0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x826bfbbc
	if (ctx.cr6.eq) goto loc_826BFBBC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826bfbd0
	if (!ctx.cr6.eq) goto loc_826BFBD0;
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826bfaa8
	if (ctx.cr6.eq) goto loc_826BFAA8;
	// lwz r11,424(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826bfb94
	if (!ctx.cr6.eq) goto loc_826BFB94;
loc_826BFAA8:
	// stw r27,392(r31)
	REX_STORE_U32(r31.u32 + 392, r27.u32);
	// stw r30,540(r31)
	REX_STORE_U32(r31.u32 + 540, r30.u32);
	// b 0x826bfb94
	goto loc_826BFB94;
loc_826BFAB4:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// lwz r10,492(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x826bfacc
	if (ctx.cr6.lt) goto loc_826BFACC;
	// stw r24,392(r31)
	REX_STORE_U32(r31.u32 + 392, r24.u32);
	// b 0x826bfb94
	goto loc_826BFB94;
loc_826BFACC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc1c8
	ctx.lr = 0x826BFAD4;
	sub_826CC1C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x826bfb90
	if (!ctx.cr6.eq) goto loc_826BFB90;
	// lhz r11,518(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lhz r9,498(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 498);
	// lhz r10,496(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 496);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lbz r8,516(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 516);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// sth r7,544(r31)
	REX_STORE_U16(r31.u32 + 544, ctx.r7.u16);
	// beq cr6,0x826bfb0c
	if (ctx.cr6.eq) goto loc_826BFB0C;
	// stw r25,392(r31)
	REX_STORE_U32(r31.u32 + 392, r25.u32);
	// stb r30,525(r31)
	REX_STORE_U8(r31.u32 + 525, r30.u8);
	// b 0x826bfb94
	goto loc_826BFB94;
loc_826BFB0C:
	// stw r26,392(r31)
	REX_STORE_U32(r31.u32 + 392, r26.u32);
	// stb r29,525(r31)
	REX_STORE_U8(r31.u32 + 525, r29.u8);
	// b 0x826bfb94
	goto loc_826BFB94;
loc_826BFB18:
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x826bfb90
	if (!ctx.cr6.eq) goto loc_826BFB90;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lhz r8,518(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 518);
	// lhz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 544);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r6,548(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 548);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r5,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r5.u64);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// std r4,408(r31)
	REX_STORE_U64(r31.u32 + 408, ctx.r4.u64);
loc_826BFB54:
	// stw r9,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// stw r29,416(r31)
	REX_STORE_U32(r31.u32 + 416, r29.u32);
	// beq cr6,0x826bfbdc
	if (ctx.cr6.eq) goto loc_826BFBDC;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFB6C:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// stw r27,392(r31)
	REX_STORE_U32(r31.u32 + 392, r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,540(r31)
	REX_STORE_U32(r31.u32 + 540, ctx.r11.u32);
	// b 0x826bfb94
	goto loc_826BFB94;
loc_826BFB80:
	// lbz r11,500(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x826bfbf0
	if (ctx.cr6.eq) goto loc_826BFBF0;
loc_826BFB90:
	// stw r28,392(r31)
	REX_STORE_U32(r31.u32 + 392, r28.u32);
loc_826BFB94:
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 392);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x826bfa3c
	if (!ctx.cr6.gt) goto loc_826BFA3C;
loc_826BFBA4:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFBB0:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFBBC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,8(r31)
	REX_STORE_U64(r31.u32 + 8, ctx.r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFBD0:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFBDC:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	REX_STORE_U32(r31.u32 + 392, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
loc_826BFBF0:
	// lhz r11,544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 544);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r8,548(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 548);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r30,520(r31)
	REX_STORE_U16(r31.u32 + 520, r30.u16);
	// std r7,400(r31)
	REX_STORE_U64(r31.u32 + 400, ctx.r7.u64);
	// stb r29,524(r31)
	REX_STORE_U8(r31.u32 + 524, r29.u8);
	// b 0x826bfb54
	goto loc_826BFB54;
}

DEFINE_REX_FUNC(sub_826D3D18) {
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
	ctx.lr = 0x826D3D20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,28(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x826d3d6c
	if (ctx.cr6.eq) goto loc_826D3D6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x826d3d6c
	if (ctx.cr6.eq) goto loc_826D3D6C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x826d3d6c
	if (ctx.cr6.eq) goto loc_826D3D6C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x826d3d6c
	if (ctx.cr6.eq) goto loc_826D3D6C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x826d3d7c
	if (!ctx.cr6.eq) goto loc_826D3D7C;
loc_826D3D6C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D3D7C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// blt cr6,0x826d3de0
	if (ctx.cr6.lt) goto loc_826D3DE0;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r7,3(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// lbz r11,2(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r9,1(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r4,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r4.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
loc_826D3DE0:
	// li r29,0
	r29.s64 = 0;
loc_826D3DE4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826d3e40
	if (!ctx.cr6.eq) goto loc_826D3E40;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x826D3E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826d3ea4
	if (ctx.cr6.lt) goto loc_826D3EA4;
	// ld r9,8(r27)
	ctx.r9.u64 = REX_LOAD_U64(r27.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r27)
	REX_STORE_U64(r27.u32 + 8, ctx.r10.u64);
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 0);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r7,r8,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r8.u64;
	// stw r7,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r7.u32);
loc_826D3E40:
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r25
	ctx.r10.s64 = r25.s8;
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// addi r5,r29,1
	ctx.r5.s64 = r29.s64 + 1;
	// lbzx r4,r8,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb r29,r5
	r29.s64 = ctx.r5.s8;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi r8,r29,24
	ctx.r8.u64 = r29.u32 & 0xFF;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// extsb r25,r6
	r25.s64 = ctx.r6.s8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// blt cr6,0x826d3de4
	if (ctx.cr6.lt) goto loc_826D3DE4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_826D3EA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826DE248) {
	REX_FUNC_PROLOGUE();
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826de26c
	if (!ctx.cr6.eq) goto loc_826DE26C;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// b 0x826de2f4
	goto loc_826DE2F4;
loc_826DE26C:
	// ld r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// bge cr6,0x826de2c8
	if (!ctx.cr6.lt) goto loc_826DE2C8;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x826de2a8
	if (!ctx.cr6.eq) goto loc_826DE2A8;
	// stw r11,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r9,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r9.u32);
	// stw r4,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r4.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x826de2a4
	if (!ctx.cr6.eq) goto loc_826DE2A4;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826DE2A4:
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
loc_826DE2A8:
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826de26c
	if (!ctx.cr6.eq) goto loc_826DE26C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_826DE2C8:
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x826de2e4
	if (ctx.cr6.eq) goto loc_826DE2E4;
	// stw r4,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r4.u32);
loc_826DE2E4:
	// stw r4,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x826de2f8
	if (!ctx.cr6.eq) goto loc_826DE2F8;
loc_826DE2F4:
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_826DE2F8:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826E0750) {
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
	ctx.lr = 0x826E0758;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// ori r26,r9,3
	r26.u64 = ctx.r9.u64 | 3;
	// addi r27,r10,31276
	r27.s64 = ctx.r10.s64 + 31276;
loc_826E0784:
	// extsb r31,r11
	r31.s64 = ctx.r11.s8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826e07c4
	if (ctx.cr6.eq) goto loc_826E07C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826E07B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x826e07d8
	if (!ctx.cr6.lt) goto loc_826E07D8;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r26.u32, ctx.xer);
	// bne cr6,0x826e07d8
	if (!ctx.cr6.eq) goto loc_826E07D8;
loc_826E07C4:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x826e0784
	if (ctx.cr6.lt) goto loc_826E0784;
loc_826E07D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_826E4200) {
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
	ctx.lr = 0x826E4208;
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
	ctx.lr = 0x826E422C;
	sub_826E07E0(ctx, base);
	// stw r3,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826e4248
	if (!ctx.cr6.eq) goto loc_826E4248;
loc_826E4238:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_826E4248:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826E4254;
	sub_826A2E60(ctx, base);
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x826e42ec
	if (!ctx.cr6.gt) goto loc_826E42EC;
	// rlwinm r26,r31,2,0,29
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_826E4264:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r30,r11,r29
	r30.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826E4274;
	sub_826E07E0(ctx, base);
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e4238
	if (ctx.cr6.eq) goto loc_826E4238;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// ble cr6,0x826e42bc
	if (!ctx.cr6.gt) goto loc_826E42BC;
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
	ctx.lr = 0x826E429C;
	sub_826E07E0(ctx, base);
	// stw r3,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e4238
	if (ctx.cr6.eq) goto loc_826E4238;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x826a2e60
	ctx.lr = 0x826E42BC;
	sub_826A2E60(ctx, base);
loc_826E42BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e07e0
	ctx.lr = 0x826E42C4;
	sub_826E07E0(ctx, base);
	// stw r3,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x826e4238
	if (ctx.cr6.eq) goto loc_826E4238;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x826E42DC;
	sub_826A2E60(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,152
	r29.s64 = r29.s64 + 152;
	// cmpw cr6,r28,r31
	ctx.cr6.compare<int32_t>(r28.s32, r31.s32, ctx.xer);
	// blt cr6,0x826e4264
	if (ctx.cr6.lt) goto loc_826E4264;
loc_826E42EC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_826EFB90) {
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
	ctx.lr = 0x826EFB98;
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
	// bne cr6,0x826efc00
	if (!ctx.cr6.eq) goto loc_826EFC00;
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
loc_826EFC00:
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
	// bne cr6,0x826efce8
	if (!ctx.cr6.eq) goto loc_826EFCE8;
	// bl 0x826e58b8
	ctx.lr = 0x826EFC20;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826efef4
	if (ctx.cr6.lt) goto loc_826EFEF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826efc78
	if (!ctx.cr6.eq) goto loc_826EFC78;
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
loc_826EFC78:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EFC8C;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826efef4
	if (ctx.cr6.lt) goto loc_826EFEF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826efef4
	if (!ctx.cr6.eq) goto loc_826EFEF4;
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
loc_826EFCE8:
	// bl 0x826e58b8
	ctx.lr = 0x826EFCEC;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826efef4
	if (ctx.cr6.lt) goto loc_826EFEF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826efdb0
	if (!ctx.cr6.eq) goto loc_826EFDB0;
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
	// blt cr6,0x826efd7c
	if (ctx.cr6.lt) goto loc_826EFD7C;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// addi r7,r28,-3
	ctx.r7.s64 = r28.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
loc_826EFD34:
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
	// blt cr6,0x826efd34
	if (ctx.cr6.lt) goto loc_826EFD34;
loc_826EFD7C:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x826efef4
	if (!ctx.cr6.lt) goto loc_826EFEF4;
	// subf r9,r11,r28
	ctx.r9.u64 = r28.u64 - ctx.r11.u64;
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_826EFD94:
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
	// bdnz 0x826efd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EFD94;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_826EFDB0:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e58b8
	ctx.lr = 0x826EFDC4;
	sub_826E58B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x826efef4
	if (ctx.cr6.lt) goto loc_826EFEF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826efeec
	if (!ctx.cr6.eq) goto loc_826EFEEC;
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
	// ble cr6,0x826efef4
	if (!ctx.cr6.gt) goto loc_826EFEF4;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// mr r24,r28
	r24.u64 = r28.u64;
loc_826EFDFC:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// blt cr6,0x826efe90
	if (ctx.cr6.lt) goto loc_826EFE90;
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
loc_826EFE24:
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
	// blt cr6,0x826efe24
	if (ctx.cr6.lt) goto loc_826EFE24;
loc_826EFE90:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r28.s32, ctx.xer);
	// bge cr6,0x826efed4
	if (!ctx.cr6.lt) goto loc_826EFED4;
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
loc_826EFEB4:
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
	// bdnz 0x826efeb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_826EFEB4;
loc_826EFED4:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// bne 0x826efdfc
	if (!ctx.cr0.eq) goto loc_826EFDFC;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
loc_826EFEEC:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
loc_826EFEF4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_82717DF8) {
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
	ctx.lr = 0x82717E00;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r25,0
	r25.s64 = 0;
	// mr r21,r25
	r21.u64 = r25.u64;
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// lwz r10,140(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r24,r11,31,1,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r23,268(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 268);
	// rlwinm r20,r10,31,1,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r30,22568(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 22568);
	// rldicr r7,r9,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r11.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r22,r20,r24
	r22.s64 = int64_t(r20.s32) * int64_t(r24.s32);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// rldicl r19,r9,1,63
	r19.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0x1;
	// bge 0x82717e5c
	if (!ctx.cr0.lt) goto loc_82717E5C;
	// bl 0x82725e38
	ctx.lr = 0x82717E5C;
	sub_82725E38(ctx, base);
loc_82717E5C:
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// li r29,2
	r29.s64 = 2;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82717ed0
	if (!ctx.cr6.lt) goto loc_82717ED0;
loc_82717E78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82717ed0
	if (ctx.cr6.eq) goto loc_82717ED0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r29.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// bge 0x82717ec0
	if (!ctx.cr0.lt) goto loc_82717EC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82717EC0;
	sub_82725E38(ctx, base);
loc_82717EC0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82717e78
	if (ctx.cr6.gt) goto loc_82717E78;
loc_82717ED0:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r29,32
	ctx.r8.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r29,r10
	ctx.r6.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82717f08
	if (!ctx.cr0.lt) goto loc_82717F08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82717F08;
	sub_82725E38(ctx, base);
loc_82717F08:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(r29.u32, 1, ctx.xer);
	// beq cr6,0x827181f4
	if (ctx.cr6.eq) goto loc_827181F4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(r29.u32, 2, ctx.xer);
	// beq cr6,0x827180d4
	if (ctx.cr6.eq) goto loc_827180D4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(r29.u32, 3, ctx.xer);
	// beq cr6,0x827180b8
	if (ctx.cr6.eq) goto loc_827180B8;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82717f48
	if (!ctx.cr0.lt) goto loc_82717F48;
	// bl 0x82725e38
	ctx.lr = 0x82717F48;
	sub_82725E38(ctx, base);
loc_82717F48:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82718074
	if (ctx.cr6.eq) goto loc_82718074;
	// clrlwi r31,r22,31
	r31.u64 = r22.u32 & 0x1;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// mr r21,r28
	r21.u64 = r28.u64;
	// beq cr6,0x82717f94
	if (ctx.cr6.eq) goto loc_82717F94;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82717f8c
	if (!ctx.cr0.lt) goto loc_82717F8C;
	// bl 0x82725e38
	ctx.lr = 0x82717F8C;
	sub_82725E38(ctx, base);
loc_82717F8C:
	// stb r29,0(r30)
	REX_STORE_U8(r30.u32 + 0, r29.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82717F94:
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(r31.s32, r22.s32, ctx.xer);
	// bge cr6,0x8271837c
	if (!ctx.cr6.lt) goto loc_8271837C;
	// subf r11,r31,r22
	ctx.r11.u64 = r22.u64 - r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_82717FAC:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82717fd4
	if (!ctx.cr0.lt) goto loc_82717FD4;
	// bl 0x82725e38
	ctx.lr = 0x82717FD4;
	sub_82725E38(ctx, base);
loc_82717FD4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8271805c
	if (ctx.cr6.eq) goto loc_8271805C;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718004
	if (!ctx.cr0.lt) goto loc_82718004;
	// bl 0x82725e38
	ctx.lr = 0x82718004;
	sub_82725E38(ctx, base);
loc_82718004:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82718018
	if (ctx.cr6.eq) goto loc_82718018;
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x82718064
	goto loc_82718064;
loc_82718018:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718040
	if (!ctx.cr0.lt) goto loc_82718040;
	// bl 0x82725e38
	ctx.lr = 0x82718040;
	sub_82725E38(ctx, base);
loc_82718040:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82718054
	if (ctx.cr6.eq) goto loc_82718054;
	// stb r25,0(r30)
	REX_STORE_U8(r30.u32 + 0, r25.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x82718064
	goto loc_82718064;
loc_82718054:
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x82718060
	goto loc_82718060;
loc_8271805C:
	// stb r25,0(r30)
	REX_STORE_U8(r30.u32 + 0, r25.u8);
loc_82718060:
	// stbu r25,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r25.u8);
	r30.u32 = ea;
loc_82718064:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82717fac
	if (!ctx.cr0.eq) goto loc_82717FAC;
	// b 0x8271837c
	goto loc_8271837C;
loc_82718074:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8271809c
	if (!ctx.cr0.lt) goto loc_8271809C;
	// bl 0x82725e38
	ctx.lr = 0x8271809C;
	sub_82725E38(ctx, base);
loc_8271809C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8271837c
	if (ctx.cr6.eq) goto loc_8271837C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r21,1
	r21.s64 = 1;
	// bl 0x82716db0
	ctx.lr = 0x827180B4;
	sub_82716DB0(ctx, base);
	// b 0x8271837c
	goto loc_8271837C;
loc_827180B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82716db0
	ctx.lr = 0x827180C4;
	sub_82716DB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8271837c
	if (ctx.cr6.eq) goto loc_8271837C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_827180D4:
	// clrlwi r29,r22,31
	r29.u64 = r22.u32 & 0x1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82718110
	if (ctx.cr6.eq) goto loc_82718110;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718108
	if (!ctx.cr0.lt) goto loc_82718108;
	// bl 0x82725e38
	ctx.lr = 0x82718108;
	sub_82725E38(ctx, base);
loc_82718108:
	// stb r31,0(r30)
	REX_STORE_U8(r30.u32 + 0, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82718110:
	// cmpw cr6,r29,r22
	ctx.cr6.compare<int32_t>(r29.s32, r22.s32, ctx.xer);
	// bge cr6,0x8271837c
	if (!ctx.cr6.lt) goto loc_8271837C;
	// subf r11,r29,r22
	ctx.r11.u64 = r22.u64 - r29.u64;
	// li r28,1
	r28.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_8271812C:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718154
	if (!ctx.cr0.lt) goto loc_82718154;
	// bl 0x82725e38
	ctx.lr = 0x82718154;
	sub_82725E38(ctx, base);
loc_82718154:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827181dc
	if (ctx.cr6.eq) goto loc_827181DC;
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718184
	if (!ctx.cr0.lt) goto loc_82718184;
	// bl 0x82725e38
	ctx.lr = 0x82718184;
	sub_82725E38(ctx, base);
loc_82718184:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82718198
	if (ctx.cr6.eq) goto loc_82718198;
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x827181e4
	goto loc_827181E4;
loc_82718198:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x827181c0
	if (!ctx.cr0.lt) goto loc_827181C0;
	// bl 0x82725e38
	ctx.lr = 0x827181C0;
	sub_82725E38(ctx, base);
loc_827181C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827181d4
	if (ctx.cr6.eq) goto loc_827181D4;
	// stb r25,0(r30)
	REX_STORE_U8(r30.u32 + 0, r25.u8);
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// b 0x827181e4
	goto loc_827181E4;
loc_827181D4:
	// stb r28,0(r30)
	REX_STORE_U8(r30.u32 + 0, r28.u8);
	// b 0x827181e0
	goto loc_827181E0;
loc_827181DC:
	// stb r25,0(r30)
	REX_STORE_U8(r30.u32 + 0, r25.u8);
loc_827181E0:
	// stbu r25,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r25.u8);
	r30.u32 = ea;
loc_827181E4:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8271812c
	if (!ctx.cr0.eq) goto loc_8271812C;
	// b 0x8271837c
	goto loc_8271837C;
loc_827181F4:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x8271821c
	if (!ctx.cr0.lt) goto loc_8271821C;
	// bl 0x82725e38
	ctx.lr = 0x8271821C;
	sub_82725E38(ctx, base);
loc_8271821C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827182d0
	if (ctx.cr6.eq) goto loc_827182D0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x8271837c
	if (!ctx.cr6.gt) goto loc_8271837C;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_82718230:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718258
	if (!ctx.cr0.lt) goto loc_82718258;
	// bl 0x82725e38
	ctx.lr = 0x82718258;
	sub_82725E38(ctx, base);
loc_82718258:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x827182a8
	if (ctx.cr6.eq) goto loc_827182A8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x827182c0
	if (!ctx.cr6.gt) goto loc_827182C0;
	// subf r28,r24,r30
	r28.u64 = r30.u64 - r24.u64;
	// mr r31,r20
	r31.u64 = r20.u64;
loc_82718270:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82718298
	if (!ctx.cr0.lt) goto loc_82718298;
	// bl 0x82725e38
	ctx.lr = 0x82718298;
	sub_82725E38(ctx, base);
loc_82718298:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stbux r29,r28,r24
	ea = r28.u32 + r24.u32;
	REX_STORE_U8(ea, r29.u8);
	r28.u32 = ea;
	// bne 0x82718270
	if (!ctx.cr0.eq) goto loc_82718270;
	// b 0x827182c0
	goto loc_827182C0;
loc_827182A8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x827182c0
	if (!ctx.cr6.gt) goto loc_827182C0;
	// subf r11,r24,r30
	ctx.r11.u64 = r30.u64 - r24.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
loc_827182B8:
	// stbux r25,r11,r24
	ea = ctx.r11.u32 + r24.u32;
	REX_STORE_U8(ea, r25.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x827182b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827182B8;
loc_827182C0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x82718230
	if (!ctx.cr0.eq) goto loc_82718230;
	// b 0x8271837c
	goto loc_8271837C;
loc_827182D0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8271837c
	if (!ctx.cr6.gt) goto loc_8271837C;
	// mr r28,r20
	r28.u64 = r20.u64;
loc_827182DC:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// bge 0x82718304
	if (!ctx.cr0.lt) goto loc_82718304;
	// bl 0x82725e38
	ctx.lr = 0x82718304;
	sub_82725E38(ctx, base);
loc_82718304:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82718354
	if (ctx.cr6.eq) goto loc_82718354;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82718370
	if (!ctx.cr6.gt) goto loc_82718370;
loc_82718318:
	// lwz r3,84(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 84);
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
	// rldicl r29,r10,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82718340
	if (!ctx.cr0.lt) goto loc_82718340;
	// bl 0x82725e38
	ctx.lr = 0x82718340;
	sub_82725E38(ctx, base);
loc_82718340:
	// stbx r29,r30,r31
	REX_STORE_U8(r30.u32 + r31.u32, r29.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(r31.s32, r24.s32, ctx.xer);
	// blt cr6,0x82718318
	if (ctx.cr6.lt) goto loc_82718318;
	// b 0x82718370
	goto loc_82718370;
loc_82718354:
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82718370
	if (!ctx.cr6.gt) goto loc_82718370;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82718364:
	// stbx r25,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r25.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82718364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82718364;
loc_82718370:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// bne 0x827182dc
	if (!ctx.cr0.eq) goto loc_827182DC;
loc_8271837C:
	// lwz r10,22568(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 22568);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// beq cr6,0x82718424
	if (ctx.cr6.eq) goto loc_82718424;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82718450
	if (!ctx.cr6.gt) goto loc_82718450;
loc_82718394:
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// ble cr6,0x82718414
	if (!ctx.cr6.gt) goto loc_82718414;
	// subfic r8,r24,1
	ctx.xer.ca = r24.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - r24.u64;
loc_827183A4:
	// add. r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827183f4
	if (ctx.cr0.eq) goto loc_827183F4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x827183c0
	if (!ctx.cr6.eq) goto loc_827183C0;
	// lbz r11,-1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x827183f8
	goto loc_827183F8;
loc_827183C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x827183d8
	if (!ctx.cr6.eq) goto loc_827183D8;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r6,-1(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// b 0x827183f8
	goto loc_827183F8;
loc_827183D8:
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsb r11,r5
	ctx.r11.s64 = ctx.r5.s8;
	// lbz r4,-1(r6)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r6.u32 + -1);
	// extsb r3,r4
	ctx.r3.s64 = ctx.r4.s8;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x827183f8
	if (ctx.cr6.eq) goto loc_827183F8;
loc_827183F4:
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_827183F8:
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// cmpw cr6,r9,r24
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r24.s32, ctx.xer);
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// blt cr6,0x827183a4
	if (ctx.cr6.lt) goto loc_827183A4;
loc_82718414:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r20.s32, ctx.xer);
	// blt cr6,0x82718394
	if (ctx.cr6.lt) goto loc_82718394;
	// b 0x82718450
	goto loc_82718450;
loc_82718424:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82718450
	if (ctx.cr6.eq) goto loc_82718450;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82718450
	if (!ctx.cr6.gt) goto loc_82718450;
	// mtctr r22
	ctx.ctr.u64 = r22.u64;
loc_8271843C:
	// lbzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stbx r7,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8271843c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8271843C;
loc_82718450:
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 140);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,136(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 136);
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// lwz r20,22568(r26)
	r20.u64 = REX_LOAD_U32(r26.u32 + 22568);
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r24,r10,32768
	r24.u64 = ctx.r10.u64 | 32768;
	// subf r21,r7,r9
	r21.u64 = ctx.r9.u64 - ctx.r7.u64;
	// ble 0x82718880
	if (!ctx.cr0.gt) goto loc_82718880;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r22,r11,1
	r22.s64 = ctx.r11.s64 + 1;
loc_82718484:
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x827186a4
	if (!ctx.cr6.gt) goto loc_827186A4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_82718494:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82718638
	if (!ctx.cr6.eq) goto loc_82718638;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbz r4,22580(r26)
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + 22580);
	// lwz r28,22572(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 22572);
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
	// lhzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + r28.u32);
	// extsh r30,r6
	r30.s64 = ctx.r6.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82718594
	if (ctx.cr6.lt) goto loc_82718594;
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
	// bge cr6,0x8271858c
	if (!ctx.cr6.lt) goto loc_8271858C;
loc_827184F4:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82718520
	if (ctx.cr6.lt) goto loc_82718520;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82718510;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x827184f4
	if (ctx.cr6.eq) goto loc_827184F4;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827185cc
	goto loc_827185CC;
loc_82718520:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
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
loc_8271858C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827185cc
	goto loc_827185CC;
loc_82718594:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x8271859C;
	sub_82725F80(ctx, base);
loc_8271859C:
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
	ctx.lr = 0x827185B4;
	sub_82725F80(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r28.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x8271859c
	if (ctx.cr6.lt) goto loc_8271859C;
loc_827185CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 24);
	// srawi r8,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r8.s64 = r30.s32 >> 2;
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// srawi r7,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r7.s64 = r30.s32 >> 3;
	// stw r9,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r9.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwimi r5,r8,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r5,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r5.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r23
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwimi r3,r7,31,0,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r3,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r3.u32);
	// b 0x82718694
	goto loc_82718694;
loc_82718638:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r8,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r8.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// oris r5,r6,32768
	ctx.r5.u64 = ctx.r6.u64 | 2147483648;
	// stwx r5,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r5.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r23
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// oris r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 2147483648;
	// stwx r10,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r10.u32);
loc_82718694:
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r27,r21
	ctx.cr6.compare<int32_t>(r27.s32, r21.s32, ctx.xer);
	// blt cr6,0x82718494
	if (ctx.cr6.lt) goto loc_82718494;
loc_827186A4:
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82718864
	if (ctx.cr6.eq) goto loc_82718864;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8271882c
	if (!ctx.cr6.eq) goto loc_8271882C;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbz r4,22580(r26)
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + 22580);
	// lwz r29,22572(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 22572);
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
	// blt cr6,0x827187b4
	if (ctx.cr6.lt) goto loc_827187B4;
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
	// bge cr6,0x827187ac
	if (!ctx.cr6.lt) goto loc_827187AC;
loc_82718714:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82718740
	if (ctx.cr6.lt) goto loc_82718740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82718730;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82718714
	if (ctx.cr6.eq) goto loc_82718714;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827187ec
	goto loc_827187EC;
loc_82718740:
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
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
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
loc_827187AC:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827187ec
	goto loc_827187EC;
loc_827187B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827187BC;
	sub_82725F80(ctx, base);
loc_827187BC:
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
	ctx.lr = 0x827187D4;
	sub_82725F80(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827187bc
	if (ctx.cr6.lt) goto loc_827187BC;
loc_827187EC:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r9.s64 = r30.s32 >> 2;
	// add r8,r27,r11
	ctx.r8.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwimi r7,r30,31,0,0
	ctx.r7.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r7.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r7,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r7.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r11,r23
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwimi r5,r9,31,0,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x80000000) | (ctx.r5.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r5,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r5.u32);
	// b 0x82718864
	goto loc_82718864;
loc_8271882C:
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r9.u32);
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r11,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// oris r6,r7,32768
	ctx.r6.u64 = ctx.r7.u64 | 2147483648;
	// stwx r6,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r6.u32);
loc_82718864:
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// bne 0x82718484
	if (!ctx.cr0.eq) goto loc_82718484;
loc_82718880:
	// lwz r11,140(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 140);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82718ba8
	if (ctx.cr6.eq) goto loc_82718BA8;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x82718a28
	if (!ctx.cr6.gt) goto loc_82718A28;
	// addi r11,r21,-1
	ctx.r11.s64 = r21.s64 + -1;
	// mr r28,r23
	r28.u64 = r23.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r27,r11,1
	r27.s64 = ctx.r11.s64 + 1;
	// rlwinm r25,r27,1,0,30
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_827188AC:
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82718a04
	if (!ctx.cr6.eq) goto loc_82718A04;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbz r4,22580(r26)
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + 22580);
	// lwz r29,22572(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 22572);
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
	// blt cr6,0x827189ac
	if (ctx.cr6.lt) goto loc_827189AC;
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
	// bge cr6,0x827189a4
	if (!ctx.cr6.lt) goto loc_827189A4;
loc_8271890C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82718938
	if (ctx.cr6.lt) goto loc_82718938;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82718928;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8271890c
	if (ctx.cr6.eq) goto loc_8271890C;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827189e4
	goto loc_827189E4;
loc_82718938:
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
loc_827189A4:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x827189e4
	goto loc_827189E4;
loc_827189AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x827189B4;
	sub_82725F80(ctx, base);
loc_827189B4:
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
	ctx.lr = 0x827189CC;
	sub_82725F80(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x827189b4
	if (ctx.cr6.lt) goto loc_827189B4;
loc_827189E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r9,r10,31,0,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x80000000) | (ctx.r9.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// stw r9,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r9.u32);
	// b 0x82718a1c
	goto loc_82718A1C;
loc_82718A04:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 24);
	// oris r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 2147483648;
	// oris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 | 2147483648;
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r8,24(r28)
	REX_STORE_U32(r28.u32 + 24, ctx.r8.u32);
loc_82718A1C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,48
	r28.s64 = r28.s64 + 48;
	// bne 0x827188ac
	if (!ctx.cr0.eq) goto loc_827188AC;
loc_82718A28:
	// lwz r11,136(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 136);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82718ba8
	if (ctx.cr6.eq) goto loc_82718BA8;
	// lbz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U8(r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82718b90
	if (!ctx.cr6.eq) goto loc_82718B90;
	// lwz r31,84(r26)
	r31.u64 = REX_LOAD_U32(r26.u32 + 84);
	// lbz r4,22580(r26)
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + 22580);
	// lwz r29,22572(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 22572);
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
	// blt cr6,0x82718b34
	if (ctx.cr6.lt) goto loc_82718B34;
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
	// bge cr6,0x82718b2c
	if (!ctx.cr6.lt) goto loc_82718B2C;
loc_82718A94:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82718ac0
	if (ctx.cr6.lt) goto loc_82718AC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725d78
	ctx.lr = 0x82718AB0;
	sub_82725D78(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82718a94
	if (ctx.cr6.eq) goto loc_82718A94;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82718b6c
	goto loc_82718B6C;
loc_82718AC0:
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
loc_82718B2C:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82718b6c
	goto loc_82718B6C;
loc_82718B34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725f80
	ctx.lr = 0x82718B3C;
	sub_82725F80(ctx, base);
loc_82718B3C:
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
	ctx.lr = 0x82718B54;
	sub_82725F80(ctx, base);
	// add r10,r30,r24
	ctx.r10.u64 = r30.u64 + r24.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + r29.u32);
	// extsh r30,r8
	r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82718b3c
	if (ctx.cr6.lt) goto loc_82718B3C;
loc_82718B6C:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// rlwimi r10,r30,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// stwx r10,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
loc_82718B90:
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r23.u32);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// stwx r9,r11,r23
	REX_STORE_U32(ctx.r11.u32 + r23.u32, ctx.r9.u32);
loc_82718BA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce4
	return;
}

DEFINE_REX_FUNC(sub_82778710) {
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
	ctx.lr = 0x82778718;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r30,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r30.u32);
	// ble cr6,0x827794cc
	if (!ctx.cr6.gt) goto loc_827794CC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fsub f8,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f2.f64 - ctx.f1.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lfd f12,-15880(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -15880);
	// lfd f7,-3744(r9)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r9.u32 + -3744);
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// lfd f9,32424(r8)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r8.u32 + 32424);
	// lfd f10,3728(r7)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r7.u32 + 3728);
loc_82778764:
	// extsw r10,r29
	ctx.r10.s64 = r29.s32;
	// lwz r9,96(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f8.f64;
	// std r10,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r10.u64);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f11,f11,f3,f4
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x82778794
	if (ctx.cr6.eq) goto loc_82778794;
	// fsub f13,f3,f10
	ctx.f13.f64 = ctx.f3.f64 - ctx.f10.f64;
	// fmul f13,f13,f9
	ctx.f13.f64 = ctx.f13.f64 * ctx.f9.f64;
	// b 0x82778798
	goto loc_82778798;
loc_82778794:
	// fmr f13,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f7.f64;
loc_82778798:
	// fadd f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f11.f64;
	// lis r7,-32119
	ctx.r7.s64 = -2104950784;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r8,100(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, ctx.f11.u64);
	// lwz r10,-244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// stw r9,32580(r7)
	REX_STORE_U32(ctx.r7.u32 + 32580, ctx.r9.u32);
	// mullw r4,r6,r10
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r5,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r5.u64);
	// lfd f6,-232(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fmsub f2,f13,f12,f5
	ctx.f2.f64 = std::fma(ctx.f13.f64, ctx.f12.f64, -ctx.f5.f64);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r7,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r7.u32);
	// fctiwz f13,f2
	ctx.f13.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f13,-256(r1)
	REX_STORE_U64(ctx.r1.u32 + -256, ctx.f13.u64);
	// lwz r25,-252(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// mullw r9,r25,r25
	ctx.r9.s64 = int64_t(r25.s32) * int64_t(r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// stw r9,-240(r1)
	REX_STORE_U32(ctx.r1.u32 + -240, ctx.r9.u32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stw r6,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, ctx.r6.u32);
	// ble cr6,0x82779028
	if (!ctx.cr6.gt) goto loc_82779028;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82779024
	if (!ctx.cr6.lt) goto loc_82779024;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r30,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827794b8
	if (!ctx.cr6.gt) goto loc_827794B8;
loc_82778830:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f13.u64);
	// lwz r10,-276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82778d60
	if (!ctx.cr6.gt) goto loc_82778D60;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82778d5c
	if (!ctx.cr6.lt) goto loc_82778D5C;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r8,-32119
	ctx.r8.s64 = -2104950784;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// li r9,4
	ctx.r9.s64 = 4;
	// std r6,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r6.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r11,32580(r8)
	REX_STORE_U32(ctx.r8.u32 + 32580, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r31,r11,r7
	r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f5.u64);
	// lwz r21,-276(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// mullw r5,r21,r21
	ctx.r5.s64 = int64_t(r21.s32) * int64_t(r21.s32);
	// srawi r20,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	r20.s64 = ctx.r5.s32 >> 8;
	// mullw r4,r20,r21
	ctx.r4.s64 = int64_t(r20.s32) * int64_t(r21.s32);
	// stw r20,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r20.u32);
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// stw r11,-236(r1)
	REX_STORE_U32(ctx.r1.u32 + -236, ctx.r11.u32);
loc_827788AC:
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-4(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + -4);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 8);
	// subf r26,r8,r31
	r26.u64 = r31.u64 - ctx.r8.u64;
	// lbz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 4);
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// std r31,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, r31.u64);
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// std r25,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r25.u64);
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// add r24,r6,r31
	r24.u64 = ctx.r6.u64 + r31.u64;
	// lbz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U8(r26.u32 + 0);
	// rlwinm r22,r7,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r28,4(r26)
	r28.u64 = REX_LOAD_U8(r26.u32 + 4);
	// rotlwi r27,r11,1
	r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r29,-4(r3)
	r29.u64 = REX_LOAD_U8(ctx.r3.u32 + -4);
	// add r17,r9,r10
	r17.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r7,r28,r10
	ctx.r7.u64 = ctx.r10.u64 - r28.u64;
	// lbz r30,4(r3)
	r30.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r4,0(r24)
	ctx.r4.u64 = REX_LOAD_U8(r24.u32 + 0);
	// subf r15,r11,r8
	r15.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r23,r7,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// add r3,r27,r29
	ctx.r3.u64 = r27.u64 + r29.u64;
	// lbz r6,-4(r26)
	ctx.r6.u64 = REX_LOAD_U8(r26.u32 + -4);
	// subf r19,r4,r23
	r19.u64 = r23.u64 - ctx.r4.u64;
	// lbz r23,4(r24)
	r23.u64 = REX_LOAD_U8(r24.u32 + 4);
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// lbzx r22,r22,r31
	r22.u64 = REX_LOAD_U8(r22.u32 + r31.u32);
	// subf r19,r6,r19
	r19.u64 = r19.u64 - ctx.r6.u64;
	// lbz r27,8(r26)
	r27.u64 = REX_LOAD_U8(r26.u32 + 8);
	// rlwinm r18,r3,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r26,-4(r24)
	r26.u64 = REX_LOAD_U8(r24.u32 + -4);
	// add r3,r19,r23
	ctx.r3.u64 = r19.u64 + r23.u64;
	// lbz r24,8(r24)
	r24.u64 = REX_LOAD_U8(r24.u32 + 8);
	// subf r19,r23,r18
	r19.u64 = r18.u64 - r23.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// subf r18,r22,r19
	r18.u64 = r19.u64 - r22.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r18,2,0,29
	r19.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// stw r3,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r3.u32);
	// stw r19,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r19.u32);
	// add r19,r30,r6
	r19.u64 = r30.u64 + ctx.r6.u64;
	// rlwinm r3,r17,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r19,1,0,30
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r3,r4
	r19.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r17,r26,r17
	r17.u64 = r17.u64 - r26.u64;
	// add r3,r19,r5
	ctx.r3.u64 = r19.u64 + ctx.r5.u64;
	// subf r19,r27,r17
	r19.u64 = r17.u64 - r27.u64;
	// subf r16,r30,r7
	r16.u64 = ctx.r7.u64 - r30.u64;
	// rlwinm r17,r19,1,0,30
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r3,3,0,28
	r14.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r17,r24
	r19.u64 = r17.u64 + r24.u64;
	// subf r17,r3,r14
	r17.u64 = r14.u64 - ctx.r3.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// subf r19,r5,r16
	r19.u64 = r16.u64 - ctx.r5.u64;
	// lwz r16,-296(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r3,r16,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// lwz r31,-304(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r17,r17,r3
	r17.u64 = r17.u64 + ctx.r3.u64;
	// rlwinm r16,r19,3,0,28
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r3,r29,r22
	ctx.r3.u64 = r22.u64 - r29.u64;
	// subf r19,r19,r16
	r19.u64 = r16.u64 - r19.u64;
	// lwz r16,-300(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r31,r31,r26
	r31.u64 = r31.u64 + r26.u64;
	// add r14,r7,r8
	r14.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r14,r14,13
	r14.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(13));
	// stw r16,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r16.u32);
	// lwz r25,-300(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// add r18,r18,r25
	r18.u64 = r18.u64 + r25.u64;
	// rlwinm r16,r3,2,0,29
	r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r18,r17,r18
	r18.u64 = r17.u64 + r18.u64;
	// add r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 + r16.u64;
	// rotlwi r17,r31,0
	r17.u64 = __builtin_rotateleft32(r31.u32, 0);
	// add r19,r17,r19
	r19.u64 = r17.u64 + r19.u64;
	// subf r17,r29,r9
	r17.u64 = ctx.r9.u64 - r29.u64;
	// add r19,r19,r3
	r19.u64 = r19.u64 + ctx.r3.u64;
	// subf r18,r14,r18
	r18.u64 = r18.u64 - r14.u64;
	// mulli r3,r15,11
	ctx.r3.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(11));
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r11,r10
	r15.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r14,r23,r4
	r14.u64 = ctx.r4.u64 - r23.u64;
	// add r3,r19,r3
	ctx.r3.u64 = r19.u64 + ctx.r3.u64;
	// srawi r16,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r16.s64 = r18.s32 >> 1;
	// subf r17,r5,r17
	r17.u64 = r17.u64 - ctx.r5.u64;
	// stw r3,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r3.u32);
	// subf r15,r6,r15
	r15.u64 = r15.u64 - ctx.r6.u64;
	// rotlwi r18,r11,2
	r18.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// subf r14,r22,r14
	r14.u64 = r14.u64 - r22.u64;
	// subf r3,r6,r17
	ctx.r3.u64 = r17.u64 - ctx.r6.u64;
	// add r18,r11,r18
	r18.u64 = ctx.r11.u64 + r18.u64;
	// rlwinm r19,r15,1,0,30
	r19.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r9,r14
	r15.u64 = r14.u64 - ctx.r9.u64;
	// stw r18,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r18.u32);
	// add r3,r3,r26
	ctx.r3.u64 = ctx.r3.u64 + r26.u64;
	// subf r18,r10,r15
	r18.u64 = r15.u64 - ctx.r10.u64;
	// add r15,r3,r22
	r15.u64 = ctx.r3.u64 + r22.u64;
	// add r22,r18,r29
	r22.u64 = r18.u64 + r29.u64;
	// subf r19,r4,r19
	r19.u64 = r19.u64 - ctx.r4.u64;
	// add r22,r22,r5
	r22.u64 = r22.u64 + ctx.r5.u64;
	// subf r17,r7,r30
	r17.u64 = r30.u64 - ctx.r7.u64;
	// add r22,r22,r28
	r22.u64 = r22.u64 + r28.u64;
	// add r19,r19,r26
	r19.u64 = r19.u64 + r26.u64;
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r14,r4,r8
	r14.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r22,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r22.u32);
	// subf r3,r8,r17
	ctx.r3.u64 = r17.u64 - ctx.r8.u64;
	// lwz r31,-300(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r17,r19,r7
	r17.u64 = r19.u64 + ctx.r7.u64;
	// subf r19,r30,r14
	r19.u64 = r14.u64 - r30.u64;
	// mullw r20,r16,r20
	r20.s64 = int64_t(r16.s32) * int64_t(r20.s32);
	// stw r20,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r20.u32);
	// add r19,r19,r10
	r19.u64 = r19.u64 + ctx.r10.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// subf r20,r8,r30
	r20.u64 = r30.u64 - ctx.r8.u64;
	// rlwinm r18,r3,1,0,30
	r18.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r15,1,0,30
	r22.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r18,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r18.u32);
	// rlwinm r18,r20,1,0,30
	r18.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r24,r22
	r16.u64 = r22.u64 - r24.u64;
	// rlwinm r19,r17,1,0,30
	r19.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r20,r18
	r20.u64 = r20.u64 + r18.u64;
	// rotlwi r18,r29,2
	r18.u64 = __builtin_rotateleft32(r29.u32, 2);
	// add r20,r19,r20
	r20.u64 = r19.u64 + r20.u64;
	// add r25,r16,r27
	r25.u64 = r16.u64 + r27.u64;
	// lwz r16,-264(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r19,r29,r18
	r19.u64 = r29.u64 + r18.u64;
	// std r8,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r8.u64);
	// rotlwi r17,r7,1
	r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r18,-304(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// rotlwi r14,r9,3
	r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r8,-292(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
	// add r3,r3,r18
	ctx.r3.u64 = ctx.r3.u64 + r18.u64;
	// lwz r22,-296(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// rlwinm r18,r25,1,0,30
	r18.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-288(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// mr r15,r22
	r15.u64 = r22.u64;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,-292(r1)
	REX_STORE_U32(ctx.r1.u32 + -292, r22.u32);
	// subf r22,r9,r14
	r22.u64 = r14.u64 - ctx.r9.u64;
	// lwz r19,-292(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// subf r19,r15,r19
	r19.u64 = r19.u64 - r15.u64;
	// add r15,r31,r3
	r15.u64 = r31.u64 + ctx.r3.u64;
	// lwz r3,-236(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// subf r23,r28,r23
	r23.u64 = r23.u64 - r28.u64;
	// add r31,r20,r22
	r31.u64 = r20.u64 + r22.u64;
	// add r20,r18,r19
	r20.u64 = r18.u64 + r19.u64;
	// subf r14,r11,r7
	r14.u64 = ctx.r7.u64 - ctx.r11.u64;
	// srawi r25,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r25.s64 = r25.s32 >> 1;
	// subf r17,r16,r17
	r17.u64 = r17.u64 - r16.u64;
	// rlwinm r19,r23,2,0,29
	r19.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r22,r14,11
	r22.s64 = static_cast<int64_t>(r14.u64 * static_cast<uint64_t>(11));
	// subf r15,r26,r15
	r15.u64 = r15.u64 - r26.u64;
	// add r22,r20,r22
	r22.u64 = r20.u64 + r22.u64;
	// srawi r14,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	r14.s64 = r31.s32 >> 1;
	// subf r17,r4,r17
	r17.u64 = r17.u64 - ctx.r4.u64;
	// mullw r18,r25,r3
	r18.s64 = int64_t(r25.s32) * int64_t(ctx.r3.s32);
	// add r23,r23,r19
	r23.u64 = r23.u64 + r19.u64;
	// subf r20,r27,r15
	r20.u64 = r15.u64 - r27.u64;
	// lwz r15,-240(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// add r18,r8,r18
	r18.u64 = ctx.r8.u64 + r18.u64;
	// mullw r19,r14,r21
	r19.s64 = int64_t(r14.s32) * int64_t(r21.s32);
	// srawi r17,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	r17.s64 = r17.s32 >> 1;
	// add r24,r20,r24
	r24.u64 = r20.u64 + r24.u64;
	// lwz r20,-280(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r22,r22,r23
	r22.u64 = r22.u64 + r23.u64;
	// subf r14,r9,r29
	r14.u64 = r29.u64 - ctx.r9.u64;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r23,r18,r19
	r23.u64 = r18.u64 + r19.u64;
	// rlwinm r29,r17,8,0,23
	r29.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 8) & 0xFFFFFF00;
	// add r24,r24,r6
	r24.u64 = r24.u64 + ctx.r6.u64;
	// srawi r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	// subf r19,r6,r8
	r19.u64 = ctx.r8.u64 - ctx.r6.u64;
	// add r8,r23,r29
	ctx.r8.u64 = r23.u64 + r29.u64;
	// mullw r29,r24,r3
	r29.s64 = int64_t(r24.s32) * int64_t(ctx.r3.s32);
	// stw r8,-288(r1)
	REX_STORE_U32(ctx.r1.u32 + -288, ctx.r8.u32);
	// ld r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// mullw r23,r22,r20
	r23.s64 = int64_t(r22.s32) * int64_t(r20.s32);
	// rlwinm r24,r19,1,0,30
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// rlwinm r22,r14,1,0,30
	r22.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r5,r24
	r29.u64 = r24.u64 - ctx.r5.u64;
	// subf r24,r10,r28
	r24.u64 = r28.u64 - ctx.r10.u64;
	// subf r18,r26,r22
	r18.u64 = r22.u64 - r26.u64;
	// subf r26,r7,r30
	r26.u64 = r30.u64 - ctx.r7.u64;
	// add r29,r29,r8
	r29.u64 = r29.u64 + ctx.r8.u64;
	// rlwinm r24,r24,1,0,30
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r14,r29,r27
	r14.u64 = r29.u64 + r27.u64;
	// rlwinm r22,r26,1,0,30
	r22.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r30,r24
	r24.u64 = r24.u64 - r30.u64;
	// subf r30,r30,r18
	r30.u64 = r18.u64 - r30.u64;
	// subf r29,r8,r11
	r29.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r19,r8,1,0,30
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r26,r22
	r22.u64 = r26.u64 + r22.u64;
	// rotlwi r17,r28,2
	r17.u64 = __builtin_rotateleft32(r28.u32, 2);
	// rlwinm r18,r14,1,0,30
	r18.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r8,r24
	r24.u64 = r24.u64 - ctx.r8.u64;
	// rlwinm r26,r29,1,0,30
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// subf r14,r7,r30
	r14.u64 = r30.u64 - ctx.r7.u64;
	// add r28,r28,r17
	r28.u64 = r28.u64 + r17.u64;
	// add r18,r18,r22
	r18.u64 = r18.u64 + r22.u64;
	// subf r24,r9,r24
	r24.u64 = r24.u64 - ctx.r9.u64;
	// subf r30,r7,r11
	r30.u64 = ctx.r11.u64 - ctx.r7.u64;
	// rotlwi r17,r10,3
	r17.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// rlwinm r31,r19,1,0,30
	r31.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r28,r18
	r28.u64 = r18.u64 - r28.u64;
	// subf r19,r10,r14
	r19.u64 = r14.u64 - ctx.r10.u64;
	// subf r18,r27,r24
	r18.u64 = r24.u64 - r27.u64;
	// rlwinm r22,r30,1,0,30
	r22.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r10,r17
	r26.u64 = r17.u64 - ctx.r10.u64;
	// subf r29,r9,r29
	r29.u64 = r29.u64 - ctx.r9.u64;
	// subf r24,r16,r31
	r24.u64 = r31.u64 - r16.u64;
	// add r27,r19,r4
	r27.u64 = r19.u64 + ctx.r4.u64;
	// add r26,r28,r26
	r26.u64 = r28.u64 + r26.u64;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// add r22,r29,r5
	r22.u64 = r29.u64 + ctx.r5.u64;
	// subf r24,r5,r24
	r24.u64 = r24.u64 - ctx.r5.u64;
	// add r28,r18,r7
	r28.u64 = r18.u64 + ctx.r7.u64;
	// add r29,r27,r8
	r29.u64 = r27.u64 + ctx.r8.u64;
	// srawi r27,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r27.s64 = r26.s32 >> 1;
	// add r5,r28,r5
	ctx.r5.u64 = r28.u64 + ctx.r5.u64;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// srawi r26,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r26.s64 = r24.s32 >> 1;
	// srawi r28,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r28.s64 = r22.s32 >> 1;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r24,r30,r4
	r24.u64 = r30.u64 + ctx.r4.u64;
	// mullw r4,r28,r3
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(ctx.r3.s32);
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r28,r29,r6
	r28.u64 = r29.u64 + ctx.r6.u64;
	// mullw r5,r26,r20
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(r20.s32);
	// lwz r29,-256(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// ld r25,-208(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// ld r31,-312(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// srawi r26,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r26.s64 = r24.s32 >> 1;
	// lwz r24,-288(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// subf r22,r9,r11
	r22.u64 = ctx.r11.u64 - ctx.r9.u64;
	// srawi r19,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	r19.s64 = ctx.r8.s32 >> 1;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r8,r26,r29
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r18,r30,r6
	r18.u64 = r30.u64 + ctx.r6.u64;
	// subf r30,r10,r22
	r30.u64 = r22.u64 - ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r4,r28,r21
	ctx.r4.s64 = int64_t(r28.s32) * int64_t(r21.s32);
	// srawi r28,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	r28.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r19,r21
	ctx.r9.s64 = int64_t(r19.s32) * int64_t(r21.s32);
	// mullw r5,r18,r3
	ctx.r5.s64 = int64_t(r18.s32) * int64_t(ctx.r3.s32);
	// mullw r7,r27,r20
	ctx.r7.s64 = int64_t(r27.s32) * int64_t(r20.s32);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r23,r4
	ctx.r4.u64 = r23.u64 + ctx.r4.u64;
	// mullw r9,r28,r25
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// mullw r6,r6,r21
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r21.s32);
	// mullw r8,r4,r29
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r29.s32);
	// mullw r24,r24,r15
	r24.s64 = int64_t(r24.s32) * int64_t(r15.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r24,r8
	ctx.r9.u64 = r24.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r8,r3,r25
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(r25.s32);
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x82778d1c
	if (!ctx.cr6.gt) goto loc_82778D1C;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x82778d28
	goto loc_82778D28;
loc_82778D1C:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82778D28:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
	// bdnz 0x827788ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827788AC;
	// lwz r31,-272(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// li r30,0
	r30.s64 = 0;
	// lwz r7,-248(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r29,-268(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// b 0x8277900c
	goto loc_8277900C;
loc_82778D5C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82778D60:
	// blt cr6,0x82778f04
	if (ctx.cr6.lt) goto loc_82778F04;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82778f04
	if (!ctx.cr6.lt) goto loc_82778F04;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// std r5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfd f13,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,32580(r10)
	REX_STORE_U32(ctx.r10.u32 + 32580, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r5,r9,r28
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// subfic r9,r28,256
	ctx.xer.ca = r28.u32 <= 256;
	ctx.r9.u64 = static_cast<uint64_t>(256) - r28.u64;
	// mullw r27,r5,r25
	r27.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// subf r26,r25,r9
	r26.u64 = ctx.r9.u64 - r25.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// srawi r9,r27,8
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xFF) != 0);
	ctx.r9.s64 = r27.s32 >> 8;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,5(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r5,6(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r9,2(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r4,r5,r28
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// mullw r5,r26,r8
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,3(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r5,7(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r6,r26,r9
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r9.s32);
	// lbz r4,3(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r10,7(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// subf r8,r4,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r4.u64;
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// mullw r8,r4,r25
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// mullw r9,r10,r28
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(r28.s32);
	// mullw r4,r9,r25
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// stb r9,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r9.u8);
	// b 0x82779004
	goto loc_82779004;
loc_82778F04:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82779000
	if (!ctx.cr6.gt) goto loc_82779000;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82779000
	if (!ctx.cr6.lt) goto loc_82779000;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// std r5,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r5.u64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,32580(r10)
	REX_STORE_U32(ctx.r10.u32 + 32580, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// lfd f13,-216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r5,r8
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// lbz r5,2(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r5,3(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r8,r25
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r5.u8);
	// b 0x82779004
	goto loc_82779004;
loc_82779000:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_82779004:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_8277900C:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// stw r31,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82778830
	if (ctx.cr6.lt) goto loc_82778830;
	// b 0x827794b8
	goto loc_827794B8;
loc_82779024:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_82779028:
	// blt cr6,0x8277931c
	if (ctx.cr6.lt) goto loc_8277931C;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8277931c
	if (!ctx.cr6.lt) goto loc_8277931C;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827794b8
	if (!ctx.cr6.gt) goto loc_827794B8;
loc_8277904C:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82779300
	if (ctx.cr6.lt) goto loc_82779300;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82779204
	if (!ctx.cr6.lt) goto loc_82779204;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// std r5,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r5.u64);
	// lfd f13,-200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// stw r9,32580(r10)
	REX_STORE_U32(ctx.r10.u32 + 32580, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// mullw r6,r5,r25
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r28,-308(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subfic r27,r28,256
	ctx.xer.ca = r28.u32 <= 256;
	r27.u64 = static_cast<uint64_t>(256) - r28.u64;
	// subf r9,r4,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r4.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r27,r25,r27
	r27.u64 = r27.u64 - r25.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// mullw r8,r27,r8
	ctx.r8.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r26,5(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r4,5(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// lbz r9,1(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r6,r9,r25
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// subf r9,r9,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// subf r9,r26,r9
	ctx.r9.u64 = ctx.r9.u64 - r26.u64;
	// mullw r4,r26,r28
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(r28.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbz r6,6(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r4,r6,r28
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r28.s32);
	// lbz r5,6(r9)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// lbz r26,2(r9)
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// subf r9,r26,r5
	ctx.r9.u64 = ctx.r5.u64 - r26.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// mullw r5,r27,r8
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r6,r26,r25
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(r25.s32);
	// mullw r9,r8,r28
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r28.s32);
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// srawi r9,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 8;
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r5,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r9,3(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r6,r27,r9
	ctx.r6.s64 = int64_t(r27.s32) * int64_t(ctx.r9.s32);
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,7(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r5,r4,r28
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(r28.s32);
	// lbz r27,7(r10)
	r27.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r8,r10,r25
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r4,r9,r28
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x82779304
	goto loc_82779304;
loc_82779204:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82779300
	if (!ctx.cr6.gt) goto loc_82779300;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82779300
	if (!ctx.cr6.lt) goto loc_82779300;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// std r5,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r5.u64);
	// lfd f13,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// stw r9,32580(r10)
	REX_STORE_U32(ctx.r10.u32 + 32580, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// subf r8,r25,r8
	ctx.r8.u64 = ctx.r8.u64 - r25.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r5,r4,r5
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r28,r8
	ctx.r8.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// lbz r4,1(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// mullw r9,r4,r25
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,2(r4)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// mullw r9,r9,r25
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r25.s32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// stb r5,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r5.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lwz r5,80(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r9,r6,r8
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x82779304
	goto loc_82779304;
loc_82779300:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_82779304:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8277904c
	if (ctx.cr6.lt) goto loc_8277904C;
	// b 0x827794b4
	goto loc_827794B4;
loc_8277931C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82779490
	if (!ctx.cr6.gt) goto loc_82779490;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82779490
	if (!ctx.cr6.lt) goto loc_82779490;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827794b8
	if (!ctx.cr6.gt) goto loc_827794B8;
loc_82779340:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f13.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82779474
	if (ctx.cr6.lt) goto loc_82779474;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82779428
	if (!ctx.cr6.lt) goto loc_82779428;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// stw r9,32580(r10)
	REX_STORE_U32(ctx.r10.u32 + 32580, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lfd f13,-168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fmsub f6,f0,f12,f11
	ctx.f6.f64 = std::fma(ctx.f0.f64, ctx.f12.f64, -ctx.f11.f64);
	// fctiwz f5,f6
	ctx.f5.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f5.u64);
	// lwz r31,-308(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// subfic r6,r31,256
	ctx.xer.ca = r31.u32 <= 256;
	ctx.r6.u64 = static_cast<uint64_t>(256) - r31.u64;
	// subf r9,r25,r6
	ctx.r9.u64 = ctx.r6.u64 - r25.u64;
	// mullw r6,r8,r31
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 + r25.u64;
	// add r28,r9,r25
	r28.u64 = ctx.r9.u64 + r25.u64;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r4,r9,r25
	ctx.r4.u64 = ctx.r9.u64 + r25.u64;
	// srawi r8,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 8;
	// add r6,r9,r25
	ctx.r6.u64 = ctx.r9.u64 + r25.u64;
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// lbz r8,5(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r9,1(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// mullw r9,r28,r9
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r8.u8);
	// lbz r8,6(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r8,r31
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r9,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 8;
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r6,7(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 7);
	// mullw r9,r6,r31
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(r31.s32);
	// lbz r10,3(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x82779478
	goto loc_82779478;
loc_82779428:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82779474
	if (!ctx.cr6.gt) goto loc_82779474;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82779474
	if (!ctx.cr6.lt) goto loc_82779474;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-32119
	ctx.r8.s64 = -2104950784;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// stw r9,32580(r8)
	REX_STORE_U32(ctx.r8.u32 + 32580, ctx.r9.u32);
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r4,1(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r9.u8);
	// lbz r8,3(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// stb r8,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r8.u8);
	// b 0x82779478
	goto loc_82779478;
loc_82779474:
	// stb r30,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r30.u8);
loc_82779478:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82779340
	if (ctx.cr6.lt) goto loc_82779340;
	// b 0x827794b4
	goto loc_827794B4;
loc_82779490:
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x827794b8
	if (!ctx.cr6.gt) goto loc_827794B8;
loc_827794A0:
	// stbu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, r30.u8);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x827794a0
	if (ctx.cr6.lt) goto loc_827794A0;
loc_827794B4:
	// stw r11,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r11.u32);
loc_827794B8:
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r29,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82778764
	if (ctx.cr6.lt) goto loc_82778764;
loc_827794CC:
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_827CEB10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x827CEB18;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 + ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x82740258
	ctx.lr = 0x827CEB3C;
	sub_82740258(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,512
	ctx.r3.s64 = r31.s64 + 512;
	// bl 0x827400a8
	ctx.lr = 0x827CEB54;
	sub_827400A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827D18E0) {
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
	ctx.lr = 0x827D18E8;
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,21928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r11,r11,2336
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(2336));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r11,15952
	r30.s64 = ctx.r11.s64 + 15952;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82799a68
	ctx.lr = 0x827D1908;
	sub_82799A68(ctx, base);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r28,r31,22640
	r28.s64 = r31.s64 + 22640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,30024(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 30024);
	// bl 0x827d1cd0
	ctx.lr = 0x827D191C;
	sub_827D1CD0(ctx, base);
	// addi r29,r30,1408
	r29.s64 = r30.s64 + 1408;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827a9ac8
	ctx.lr = 0x827D1930;
	sub_827A9AC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827cb340
	ctx.lr = 0x827D1948;
	sub_827CB340(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827e3238
	ctx.lr = 0x827D1960;
	sub_827E3238(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x827ae300
	ctx.lr = 0x827D1988;
	sub_827AE300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x827d1a68
	if (!ctx.cr6.eq) goto loc_827D1A68;
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x827d1a18
	if (ctx.cr6.eq) goto loc_827D1A18;
	// lhz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827339f8
	ctx.lr = 0x827D19B8;
	sub_827339F8(ctx, base);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r7,3752(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3752);
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// lwz r6,3748(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3748);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,220(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,1368(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 1368);
	// lwz r29,3744(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// lhz r30,52(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 52);
	// mullw r9,r9,r27
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r27.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r9,r30,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x82732760
	ctx.lr = 0x827D1A18;
	sub_82732760(ctx, base);
loc_827D1A18:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827d2018
	ctx.lr = 0x827D1A24;
	sub_827D2018(ctx, base);
	// lwz r11,3916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d1a4c
	if (!ctx.cr6.eq) goto loc_827D1A4C;
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827d1a4c
	if (!ctx.cr6.eq) goto loc_827D1A4C;
	// lwz r11,15228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15228);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x827d1a50
	if (ctx.cr6.eq) goto loc_827D1A50;
loc_827D1A4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_827D1A50:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, ctx.r9.u32);
loc_827D1A68:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x826a1d04
	return;
}

