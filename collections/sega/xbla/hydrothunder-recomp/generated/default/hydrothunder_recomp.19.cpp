#include "hydrothunder_funcs.19.h"

DEFINE_REX_FUNC(sub_82120F58) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82120fa8
	if (ctx.cr6.eq) goto loc_82120FA8;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82120f74
	if (ctx.cr6.lt) goto loc_82120F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82120f78
	goto loc_82120F78;
loc_82120F74:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82120F78:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82120fa8
	if (ctx.cr6.lt) goto loc_82120FA8;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82120f90
	if (ctx.cr6.lt) goto loc_82120F90;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82120f94
	goto loc_82120F94;
loc_82120F90:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82120F94:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_82120FA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82128578) {
	REX_FUNC_PROLOGUE();
	// b 0x821289b8
	sub_821289B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82128600) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82128608;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,72(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// addi r31,r3,68
	r31.s64 = ctx.r3.s64 + 68;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x82128670
	goto loc_82128670;
loc_82128624:
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 72);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8212863c
	if (ctx.cr6.eq) goto loc_8212863C;
	// bl 0x82127160
	ctx.lr = 0x8212863C;
	sub_82127160(ctx, base);
loc_8212863C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269cc20
	ctx.lr = 0x82128658;
	sub_8269CC20(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_82128670:
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82128624
	if (ctx.cr6.gt) goto loc_82128624;
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821286a4
	goto loc_821286A4;
loc_82128688:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212869C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 88);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821286A4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82128688
	if (!ctx.cr6.eq) goto loc_82128688;
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821286d4
	goto loc_821286D4;
loc_821286B8:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821286CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,152(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 152);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_821286D4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821286b8
	if (!ctx.cr6.eq) goto loc_821286B8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82130E28) {
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
	ctx.lr = 0x82130E4C;
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
	ctx.lr = 0x82130E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6076(r10)
	REX_STORE_U32(ctx.r10.u32 + 6076, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82133D50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82133D58;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82133dd8
	if (!ctx.cr6.eq) goto loc_82133DD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,2072(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133d9c
	if (ctx.cr6.eq) goto loc_82133D9C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133d9c
	if (ctx.cr6.eq) goto loc_82133D9C;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133D9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133D9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d5fd8
	ctx.lr = 0x82133DA4;
	sub_822D5FD8(ctx, base);
	// addi r30,r31,15156
	r30.s64 = r31.s64 + 15156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x82133DB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,11324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11324);
	// lbz r10,10942(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,11408(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 11408);
	// stb r10,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
	// stw r11,10888(r31)
	REX_STORE_U32(r31.u32 + 10888, ctx.r11.u32);
	// bl 0x827938b4
	ctx.lr = 0x82133DD8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82133DD8:
	// lwz r11,252(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 252);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,252(r29)
	REX_STORE_U32(r29.u32 + 252, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82139810) {
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
	ctx.lr = 0x82139834;
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
	ctx.lr = 0x8213984C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6096(r10)
	REX_STORE_U32(ctx.r10.u32 + 6096, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8213AE28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213AE30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// li r30,0
	r30.s64 = 0;
	// bl 0x821501a8
	ctx.lr = 0x8213AE54;
	sub_821501A8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8213aea0
	if (ctx.cr6.eq) goto loc_8213AEA0;
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mulli r11,r9,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x8213ae8c
	if (ctx.cr6.lt) goto loc_8213AE8C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x8213ae90
	goto loc_8213AE90;
loc_8213AE8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8213AE90:
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8213AE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8213AEA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213F5F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,25(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 25);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x8213f610
	if (!ctx.cr0.eq) goto loc_8213F610;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8213F610:
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
	// bne cr6,0x8213f630
	if (!ctx.cr6.eq) goto loc_8213F630;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x8213f64c
	goto loc_8213F64C;
loc_8213F630:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8213f648
	if (!ctx.cr6.eq) goto loc_8213F648;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x8213f64c
	goto loc_8213F64C;
loc_8213F648:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8213F64C:
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82143EE8) {
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
	ctx.lr = 0x82143EF0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82144104
	if (!ctx.cr6.gt) goto loc_82144104;
	// addi r27,r3,244
	r27.s64 = ctx.r3.s64 + 244;
loc_82143F10:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143F1C;
	sub_8228CA78(ctx, base);
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82143f58
	if (!ctx.cr6.gt) goto loc_82143F58;
loc_82143F30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228ca78
	ctx.lr = 0x82143F3C;
	sub_8228CA78(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82143f6c
	if (ctx.cr6.eq) goto loc_82143F6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82143f30
	if (ctx.cr6.lt) goto loc_82143F30;
loc_82143F58:
	// lwz r11,248(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 248);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82143f10
	if (ctx.cr6.lt) goto loc_82143F10;
	// b 0x82144104
	goto loc_82144104;
loc_82143F6C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r25,r11,-23616
	r25.s64 = ctx.r11.s64 + -23616;
	// addi r24,r10,-25320
	r24.s64 = ctx.r10.s64 + -25320;
	// blt cr6,0x82143f94
	if (ctx.cr6.lt) goto loc_82143F94;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82143fa4
	if (!ctx.cr6.gt) goto loc_82143FA4;
loc_82143F94:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x82143FA4;
	sub_821231D0(ctx, base);
loc_82143FA4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82143FC8;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,4(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144028
	if (!ctx.cr6.gt) goto loc_82144028;
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
	// bgt cr6,0x82143ff4
	if (ctx.cr6.gt) goto loc_82143FF4;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_82143FF4:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144028
	if (!ctx.cr6.gt) goto loc_82144028;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x82144008;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82144018;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x82144020;
	sub_8269D1B8(ctx, base);
	// stw r23,0(r31)
	REX_STORE_U32(r31.u32 + 0, r23.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_82144028:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x82144104
	if (!ctx.cr6.eq) goto loc_82144104;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x82120ac0
	ctx.lr = 0x82144044;
	sub_82120AC0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x8214404C;
	sub_8269D1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82144054;
	sub_8269CE98(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x8214406c
	if (ctx.cr6.lt) goto loc_8214406C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8214407c
	if (!ctx.cr6.gt) goto loc_8214407C;
loc_8214406C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// li r5,81
	ctx.r5.s64 = 81;
	// bl 0x821231d0
	ctx.lr = 0x8214407C;
	sub_821231D0(ctx, base);
loc_8214407C:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - r26.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x821440A0;
	sub_826A1E70(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r29,4(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r31,r29,-1
	r31.s64 = r29.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144100
	if (!ctx.cr6.gt) goto loc_82144100;
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
	// bgt cr6,0x821440cc
	if (ctx.cr6.gt) goto loc_821440CC;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_821440CC:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82144100
	if (!ctx.cr6.gt) goto loc_82144100;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8269d1d0
	ctx.lr = 0x821440E0;
	sub_8269D1D0(ctx, base);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826a1e70
	ctx.lr = 0x821440F0;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x821440F8;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r27)
	REX_STORE_U32(r27.u32 + 0, r28.u32);
	// stw r30,8(r27)
	REX_STORE_U32(r27.u32 + 8, r30.u32);
loc_82144100:
	// stw r31,4(r27)
	REX_STORE_U32(r27.u32 + 4, r31.u32);
loc_82144104:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82154CF0) {
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
	// addi r11,r11,-9404
	ctx.r11.s64 = ctx.r11.s64 + -9404;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82154d1c
	if (ctx.cr0.eq) goto loc_82154D1C;
	// bl 0x8269ce98
	ctx.lr = 0x82154D1C;
	sub_8269CE98(ctx, base);
loc_82154D1C:
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

DEFINE_REX_FUNC(sub_82156290) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82156298;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,40448
	ctx.r11.u64 = ctx.r11.u64 | 40448;
	// lwzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// bl 0x82155fd0
	ctx.lr = 0x821562B0;
	sub_82155FD0(ctx, base);
	// addis r30,r28,1
	r30.s64 = r28.s64 + 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r30,-25128
	r30.s64 = r30.s64 + -25128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ed2c0
	ctx.lr = 0x821562CC;
	sub_823ED2C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8215633c
	if (ctx.cr0.eq) goto loc_8215633C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ede70
	ctx.lr = 0x821562DC;
	sub_823EDE70(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82156324
	if (ctx.cr6.eq) goto loc_82156324;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// beq cr6,0x8215631c
	if (ctx.cr6.eq) goto loc_8215631C;
	// cmpwi cr6,r11,1167
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1167, ctx.xer);
	// beq cr6,0x82156324
	if (ctx.cr6.eq) goto loc_82156324;
	// cmpwi cr6,r11,1392
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1392, ctx.xer);
	// beq cr6,0x82156314
	if (ctx.cr6.eq) goto loc_82156314;
	// cmpwi cr6,r11,1617
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1617, ctx.xer);
	// beq cr6,0x82156324
	if (ctx.cr6.eq) goto loc_82156324;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// b 0x82156328
	goto loc_82156328;
loc_82156314:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82156328
	goto loc_82156328;
loc_8215631C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82156328
	goto loc_82156328;
loc_82156324:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82156328:
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, ctx.r11.u32);
	// ori r11,r10,40444
	ctx.r11.u64 = ctx.r10.u64 | 40444;
	// stwx r30,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r30.u32);
	// b 0x821564cc
	goto loc_821564CC;
loc_8215633C:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r29,r11,980
	r29.s64 = ctx.r11.s64 + 980;
	// addi r5,r10,-8580
	ctx.r5.s64 = ctx.r10.s64 + -8580;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82121610
	ctx.lr = 0x82156358;
	sub_82121610(ctx, base);
	// lwz r11,10024(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10024);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,308
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(308));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r4,r11,280
	ctx.r4.s64 = ctx.r11.s64 + 280;
	// bl 0x82121928
	ctx.lr = 0x82156370;
	sub_82121928(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82156384
	if (!ctx.cr6.lt) goto loc_82156384;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_82156384:
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
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
	// bl 0x823ede98
	ctx.lr = 0x821563A4;
	sub_823EDE98(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,10076(r31)
	REX_STORE_U32(r31.u32 + 10076, ctx.r3.u32);
	// bne cr6,0x821563e8
	if (!ctx.cr6.eq) goto loc_821563E8;
loc_821563B0:
	// li r30,1
	r30.s64 = 1;
	// stw r30,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, r30.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x821563cc
	if (ctx.cr6.lt) goto loc_821563CC;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x821563d0
	goto loc_821563D0;
loc_821563CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_821563D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823edd68
	ctx.lr = 0x821563D8;
	sub_823EDD68(ctx, base);
loc_821563D8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// stwx r30,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r30.u32);
	// b 0x821564bc
	goto loc_821564BC;
loc_821563E8:
	// lwz r11,10096(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10096);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82156428
	if (!ctx.cr6.eq) goto loc_82156428;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823ed568
	ctx.lr = 0x82156408;
	sub_823ED568(ctx, base);
	// stw r3,10096(r31)
	REX_STORE_U32(r31.u32 + 10096, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82156428
	if (!ctx.cr0.eq) goto loc_82156428;
loc_82156414:
	// lwz r3,10076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10076);
	// bl 0x823ed360
	ctx.lr = 0x8215641C;
	sub_823ED360(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// stw r30,10004(r31)
	REX_STORE_U32(r31.u32 + 10004, r30.u32);
	// b 0x821563d8
	goto loc_821563D8;
loc_82156428:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,10076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10076);
	// bl 0x823ee090
	ctx.lr = 0x82156434;
	sub_823EE090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82156414
	if (ctx.cr0.eq) goto loc_82156414;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82156414
	if (!ctx.cr6.eq) goto loc_82156414;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,10028(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10028);
	// stw r11,10036(r31)
	REX_STORE_U32(r31.u32 + 10036, ctx.r11.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82125c20
	ctx.lr = 0x8215645C;
	sub_82125C20(ctx, base);
	// lwz r11,10028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,10036(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10036);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x826a2e60
	ctx.lr = 0x82156470;
	sub_826A2E60(ctx, base);
	// lwz r11,10028(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10028);
	// addi r7,r31,10080
	ctx.r7.s64 = r31.s64 + 10080;
	// addi r6,r31,10040
	ctx.r6.s64 = r31.s64 + 10040;
	// lwz r5,10036(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 10036);
	// lwz r3,10076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10076);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823ee100
	ctx.lr = 0x8215648C;
	sub_823EE100(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821564ac
	if (!ctx.cr0.eq) goto loc_821564AC;
	// bl 0x823ee280
	ctx.lr = 0x82156498;
	sub_823EE280(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x821564ac
	if (ctx.cr6.eq) goto loc_821564AC;
	// lwz r3,10076(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10076);
	// bl 0x823ed360
	ctx.lr = 0x821564A8;
	sub_823ED360(ctx, base);
	// b 0x821563b0
	goto loc_821563B0;
loc_821564AC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r11,r11,40444
	ctx.r11.u64 = ctx.r11.u64 | 40444;
	// stwx r10,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r10.u32);
loc_821564BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821564CC;
	sub_82120AC0(ctx, base);
loc_821564CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821682C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821682D0;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lwz r11,6100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6100);
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6100);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216835C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821683e0
	if (!ctx.cr0.eq) goto loc_821683E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821683e0
	if (!ctx.cr6.gt) goto loc_821683E0;
loc_82168370:
	// lwz r11,6100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6100);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82168394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821683d0
	if (!ctx.cr0.eq) goto loc_821683D0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82120600
	ctx.lr = 0x821683A8;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r29,84
	ctx.r3.s64 = r29.s64 + 84;
	// bl 0x82169848
	ctx.lr = 0x821683B4;
	sub_82169848(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,124
	ctx.r5.s64 = 124;
	// bl 0x826a1e70
	ctx.lr = 0x821683C0;
	sub_826A1E70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821683D0;
	sub_82120AC0(ctx, base);
loc_821683D0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82168370
	if (ctx.cr6.lt) goto loc_82168370;
loc_821683E0:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82170D90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// rlwinm. r9,r11,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// bne 0x82170db0
	if (!ctx.cr0.eq) goto loc_82170DB0;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82170DA8:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82170DB0:
	// rlwinm r9,r10,0,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r9,192
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 192, ctx.xer);
	// bne cr6,0x82170de0
	if (!ctx.cr6.eq) goto loc_82170DE0;
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r9,r10,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwimi r10,r11,6,21,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x7C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF83F);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// b 0x82170da8
	goto loc_82170DA8;
loc_82170DE0:
	// rlwinm r9,r10,0,24,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r9,224
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 224, ctx.xer);
	// bne cr6,0x82170e28
	if (!ctx.cr6.eq) goto loc_82170E28;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r10,r9,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r8,r10,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// clrlwi r11,r9,22
	ctx.r11.u64 = ctx.r9.u32 & 0x3FF;
	// rlwimi r10,r11,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82170E28:
	// rlwinm r10,r10,0,24,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// cmplwi cr6,r10,240
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 240, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// lbz r8,1(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rlwinm r10,r8,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// lbz r9,2(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// rlwinm r10,r9,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// lbz r10,3(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// rlwinm r7,r10,0,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// cmplwi cr6,r7,128
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 128, ctx.xer);
	// bne cr6,0x82170e9c
	if (!ctx.cr6.eq) goto loc_82170E9C;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwimi r8,r11,6,23,25
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE3F);
	// clrlwi r11,r8,23
	ctx.r11.u64 = ctx.r8.u32 & 0x1FF;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// rlwimi r9,r11,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// ori r11,r8,65535
	ctx.r11.u64 = ctx.r8.u64 | 65535;
	// rlwimi r10,r9,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// li r9,4
	ctx.r9.s64 = 4;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// and r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 & ctx.r9.u64;
	// blr 
	return;
loc_82170E9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217A880) {
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
	// bl 0x8217a7e8
	ctx.lr = 0x8217A8A0;
	sub_8217A7E8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217a8b0
	if (ctx.cr0.eq) goto loc_8217A8B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8217A8B0;
	sub_8269CE98(ctx, base);
loc_8217A8B0:
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

DEFINE_REX_FUNC(sub_8217BC20) {
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
	// bl 0x8217ab98
	ctx.lr = 0x8217BC40;
	sub_8217AB98(ctx, base);
	// lbz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 44);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stb r11,44(r31)
	REX_STORE_U8(r31.u32 + 44, ctx.r11.u8);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8217a390
	ctx.lr = 0x8217BC64;
	sub_8217A390(ctx, base);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lbz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 68);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// lwz r30,24(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 24);
	// b 0x8217bcb0
	goto loc_8217BCB0;
loc_8217BC8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217BCA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8217ac78
	ctx.lr = 0x8217BCAC;
	sub_8217AC78(ctx, base);
	// lwz r30,40(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 40);
loc_8217BCB0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8217bc8c
	if (!ctx.cr6.eq) goto loc_8217BC8C;
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

DEFINE_REX_FUNC(sub_82181068) {
	REX_FUNC_PROLOGUE();
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821812C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821812C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82181380
	if (ctx.cr0.eq) goto loc_82181380;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82181380
	if (ctx.cr0.eq) goto loc_82181380;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f0,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f10,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f8,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f8,f11
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,31588
	ctx.r4.s64 = ctx.r11.s64 + 31588;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826a0568
	ctx.lr = 0x82181364;
	sub_826A0568(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82181380:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8218AF90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8218AF98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82189f08
	ctx.lr = 0x8218AFA8;
	sub_82189F08(ctx, base);
	// addi r11,r31,208
	ctx.r11.s64 = r31.s64 + 208;
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 32);
	// lwz r30,6168(r8)
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 6168);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// std r11,208(r31)
	REX_STORE_U64(r31.u32 + 208, ctx.r11.u64);
	// lfs f0,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// ld r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 40);
	// lfs f13,212(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// std r11,216(r31)
	REX_STORE_U64(r31.u32 + 216, ctx.r11.u64);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f11,216(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,48(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f12,224(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f10,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// std r11,48(r31)
	REX_STORE_U64(r31.u32 + 48, ctx.r11.u64);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fadds f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// stfs f10,228(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
	// ld r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// std r8,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
	// std r9,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r9.u64);
	// std r10,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// bl 0x82149f18
	ctx.lr = 0x8218B058;
	sub_82149F18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82149e08
	ctx.lr = 0x8218B064;
	sub_82149E08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821904C0) {
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
	// bl 0x826a1c98
	ctx.lr = 0x821904C8;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2c98
	ctx.lr = 0x821904D0;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// addi r23,r11,32
	r23.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8219075c
	if (!ctx.cr6.gt) goto loc_8219075C;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r21,r3,80
	r21.s64 = ctx.r3.s64 + 80;
	// lfs f28,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f28.f64 = double(temp.f32);
	// addi r20,r3,84
	r20.s64 = ctx.r3.s64 + 84;
	// lfs f24,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	f24.f64 = double(temp.f32);
	// addi r26,r3,100
	r26.s64 = ctx.r3.s64 + 100;
	// lfs f29,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	f29.f64 = double(temp.f32);
	// addi r22,r4,96
	r22.s64 = ctx.r4.s64 + 96;
	// lfs f27,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	f27.f64 = double(temp.f32);
	// addi r25,r11,-27152
	r25.s64 = ctx.r11.s64 + -27152;
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r24,r10,-27136
	r24.s64 = ctx.r10.s64 + -27136;
	// lfs f25,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f26,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f26.f64 = double(temp.f32);
loc_82190540:
	// lfs f13,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82190740
	if (!ctx.cr6.lt) goto loc_82190740;
	// lfs f11,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82190740
	if (!ctx.cr6.gt) goto loc_82190740;
	// lfs f11,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f30,f12
	f30.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// fdivs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 / f30.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - f31.f64));
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
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
	// lfsx f13,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? f31.f64 : ctx.f0.f64;
	// fsubs f13,f25,f0
	ctx.f13.f64 = double(float(f25.f64 - ctx.f0.f64));
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
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
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsel f1,f13,f25,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? f25.f64 : ctx.f0.f64;
	// bl 0x82186c18
	ctx.lr = 0x821905F4;
	sub_82186C18(ctx, base);
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82190740
	if (!ctx.cr6.lt) goto loc_82190740;
	// lfs f13,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f12,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v62,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// addi r11,r31,116
	ctx.r11.s64 = r31.s64 + 116;
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fmsubs f12,f12,f27,f29
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f27.f64, -f29.f64)));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v60,v61,v62
	simde_mm_store_ps(ctx.v60.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v61,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 + f31.f64));
	// fmuls f10,f10,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * f26.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// fmuls f12,f10,f11
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// ble cr6,0x82190734
	if (!ctx.cr6.gt) goto loc_82190734;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 - ctx.f13.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmadds f0,f0,f29,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, f29.f64)));
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
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
	// fmuls f0,f13,f24
	ctx.f0.f64 = double(float(ctx.f13.f64 * f24.f64));
	// rlwinm r6,r7,27,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x4;
	// rlwinm r7,r7,30,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x4;
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lfsx f11,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f0,f0,f27,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f27.f64, -ctx.f13.f64)));
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - f29.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmsum4fp128 v62,v60,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v60,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// fmuls f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 * f26.f64));
loc_82190734:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
loc_82190740:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82190540
	if (ctx.cr6.lt) goto loc_82190540;
loc_8219075C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ce4
	ctx.lr = 0x82190768;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_821AF808) {
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
	ctx.lr = 0x821AF810;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x821af8b8
	if (ctx.cr6.lt) goto loc_821AF8B8;
	// lwz r10,156(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 156);
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821af8b8
	if (!ctx.cr6.lt) goto loc_821AF8B8;
	// addi r30,r4,152
	r30.s64 = ctx.r4.s64 + 152;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AF844;
	sub_821AFA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821afa30
	ctx.lr = 0x821AF854;
	sub_821AFA30(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821af8b8
	if (!ctx.cr6.gt) goto loc_821AF8B8;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,32(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// b 0x821af8c8
	goto loc_821AF8C8;
loc_821AF8B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
loc_821AF8C8:
	// stfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821B6000) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821B6008;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x821ba620
	ctx.lr = 0x821B6014;
	sub_821BA620(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B6024:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6024;
	// lwa r7,140(r30)
	ctx.r7.s64 = int32_t(REX_LOAD_U32(r30.u32 + 140));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lis r8,-32106
	ctx.r8.s64 = -2104098816;
	// lwa r9,136(r30)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(r30.u32 + 136));
	// lfs f0,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// li r3,320
	ctx.r3.s64 = 320;
	// lfs f10,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// lwz r29,6168(r8)
	r29.u64 = REX_LOAD_U32(ctx.r8.u32 + 6168);
	// lfs f9,296(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 296);
	ctx.f9.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// ld r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// ld r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfs f11,88(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f9,136(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821B60A8;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x821b60f8
	if (ctx.cr0.eq) goto loc_821B60F8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821d3ac0
	ctx.lr = 0x821B60BC;
	sub_821D3AC0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,-32280
	ctx.r9.s64 = ctx.r10.s64 + -32280;
	// addi r10,r31,72
	ctx.r10.s64 = r31.s64 + 72;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B60D8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x821b60d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B60D8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218d918
	ctx.lr = 0x821B60EC;
	sub_8218D918(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218db40
	ctx.lr = 0x821B60F4;
	sub_8218DB40(ctx, base);
	// b 0x821b60fc
	goto loc_821B60FC;
loc_821B60F8:
	// li r31,0
	r31.s64 = 0;
loc_821B60FC:
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
	ctx.lr = 0x821B6118;
	sub_8214ABD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82149e08
	ctx.lr = 0x821B6124;
	sub_82149E08(ctx, base);
	// stw r31,300(r30)
	REX_STORE_U32(r30.u32 + 300, r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821BF0D8) {
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
	ctx.lr = 0x821BF0EC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bf0fc
	if (ctx.cr0.eq) goto loc_821BF0FC;
	// bl 0x821bee28
	ctx.lr = 0x821BF0F8;
	sub_821BEE28(ctx, base);
	// b 0x821bf100
	goto loc_821BF100;
loc_821BF0FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BF100:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BFE40) {
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
	// li r3,124
	ctx.r3.s64 = 124;
	// bl 0x822f6280
	ctx.lr = 0x821BFE54;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bfe64
	if (ctx.cr0.eq) goto loc_821BFE64;
	// bl 0x821bfe78
	ctx.lr = 0x821BFE60;
	sub_821BFE78(ctx, base);
	// b 0x821bfe68
	goto loc_821BFE68;
loc_821BFE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821BFE68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C1AA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821C1AA8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c1acc
	if (ctx.cr0.eq) goto loc_821C1ACC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// stb r11,204(r31)
	REX_STORE_U8(r31.u32 + 204, ctx.r11.u8);
	// bl 0x82191520
	ctx.lr = 0x821C1ACC;
	sub_82191520(ctx, base);
loc_821C1ACC:
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212eae0
	ctx.lr = 0x821C1ADC;
	sub_8212EAE0(ctx, base);
	// addi r31,r31,200
	r31.s64 = r31.s64 + 200;
	// li r30,4
	r30.s64 = 4;
loc_821C1AE4:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1AF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzu r3,16(r31)
	ea = 16 + r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C1B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x821c1ae4
	if (!ctx.cr0.eq) goto loc_821C1AE4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r11,r11,1608
	ctx.r11.s64 = ctx.r11.s64 + 1608;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x821c1b38
	if (!ctx.cr0.eq) goto loc_821C1B38;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,6060(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6060);
	// bl 0x8212ee20
	ctx.lr = 0x821C1B38;
	sub_8212EE20(ctx, base);
loc_821C1B38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C65E8) {
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
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// lfs f0,196(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fadds f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f13.f64)));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x821c66e4
	if (!ctx.cr6.lt) goto loc_821C66E4;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r9,r1,72
	ctx.r9.s64 = ctx.r1.s64 + 72;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821C6690:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x821c6690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C6690;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x821C66AC;
	sub_821884B0(ctx, base);
	// lbz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 184);
	// lbz r10,185(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 185);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lbz r9,186(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 186);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbz r8,187(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 187);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lbz r7,200(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 200);
	// stb r11,368(r31)
	REX_STORE_U8(r31.u32 + 368, ctx.r11.u8);
	// stb r10,369(r31)
	REX_STORE_U8(r31.u32 + 369, ctx.r10.u8);
	// stb r9,370(r31)
	REX_STORE_U8(r31.u32 + 370, ctx.r9.u8);
	// stb r8,371(r31)
	REX_STORE_U8(r31.u32 + 371, ctx.r8.u8);
	// stb r7,372(r31)
	REX_STORE_U8(r31.u32 + 372, ctx.r7.u8);
	// bl 0x821e8080
	ctx.lr = 0x821C66E4;
	sub_821E8080(ctx, base);
loc_821C66E4:
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

DEFINE_REX_FUNC(sub_821D13E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1CA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f0,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f3,f8,f9
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmsubs f9,f7,f9,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, -ctx.f4.f64)));
	// fmsubs f11,f11,f10,f3
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f10.f64, -ctx.f3.f64)));
	// fmsubs f12,f8,f12,f2
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, -ctx.f2.f64)));
	// fmuls f10,f9,f9
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f10,f11,f11,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f10.f64)));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f10.f64)));
	// fsqrts f10,f10
	ctx.f10.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f13,f6,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f11.f64, ctx.f13.f64)));
	// fnmadds f0,f0,f5,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f13.f64)));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D9940) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821D9948;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r10,11308
	ctx.r9.s64 = ctx.r10.s64 + 11308;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// li r29,-1
	r29.s64 = -1;
	// stw r5,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r5.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r8,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r3,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r6,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r6.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824d1cf8
	ctx.lr = 0x821D99A8;
	sub_824D1CF8(ctx, base);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// li r6,1028
	ctx.r6.s64 = 1028;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823ed608
	ctx.lr = 0x821D99BC;
	sub_823ED608(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x824d1dd0
	ctx.lr = 0x821D99D0;
	sub_824D1DD0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,26,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821DC6A0) {
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
	ctx.lr = 0x821DC6A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,12204
	ctx.r11.s64 = ctx.r11.s64 + 12204;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821dc70c
	if (!ctx.cr0.gt) goto loc_821DC70C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_821DC6E0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x821357c8
	ctx.lr = 0x821DC6EC;
	sub_821357C8(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dc6e0
	if (ctx.cr6.lt) goto loc_821DC6E0;
loc_821DC70C:
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 32);
	// addi r31,r26,32
	r31.s64 = r26.s64 + 32;
	// lwz r10,36(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 36);
	// mr r30,r29
	r30.u64 = r29.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821dc758
	if (!ctx.cr0.gt) goto loc_821DC758;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_821DC72C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// bl 0x821357c8
	ctx.lr = 0x821DC738;
	sub_821357C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dc72c
	if (ctx.cr6.lt) goto loc_821DC72C;
loc_821DC758:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 48);
	// addi r30,r26,48
	r30.s64 = r26.s64 + 48;
	// lwz r10,52(r26)
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + 52);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x821dc784
	goto loc_821DC784;
loc_821DC76C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821dd3e0
	ctx.lr = 0x821DC778;
	sub_821DD3E0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_821DC784:
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821dc76c
	if (!ctx.cr0.eq) goto loc_821DC76C;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dc79c
	if (ctx.cr6.eq) goto loc_821DC79C;
	// bl 0x8269ce98
	ctx.lr = 0x821DC79C;
	sub_8269CE98(ctx, base);
loc_821DC79C:
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dc7b8
	if (ctx.cr6.eq) goto loc_821DC7B8;
	// bl 0x8269ce98
	ctx.lr = 0x821DC7B8;
	sub_8269CE98(ctx, base);
loc_821DC7B8:
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dc7d4
	if (ctx.cr6.eq) goto loc_821DC7D4;
	// bl 0x8269ce98
	ctx.lr = 0x821DC7D4;
	sub_8269CE98(ctx, base);
loc_821DC7D4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// stw r29,4(r27)
	REX_STORE_U32(r27.u32 + 4, r29.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r11,r11,30592
	ctx.r11.s64 = ctx.r11.s64 + 30592;
	// stw r29,8(r27)
	REX_STORE_U32(r27.u32 + 8, r29.u32);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// bl 0x8214e4b0
	ctx.lr = 0x821DC7F4;
	sub_8214E4B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_821E57C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// ld r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 40);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// blt cr6,0x821e5890
	if (ctx.cr6.lt) goto loc_821E5890;
	// beq cr6,0x821e5880
	if (ctx.cr6.eq) goto loc_821E5880;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x821e5850
	if (ctx.cr6.lt) goto loc_821E5850;
	// beq cr6,0x821e5840
	if (ctx.cr6.eq) goto loc_821E5840;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// blt cr6,0x821e5830
	if (ctx.cr6.lt) goto loc_821E5830;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
loc_821E5810:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,8(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// b 0x821e58b8
	goto loc_821E58B8;
loc_821E5830:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821e5810
	goto loc_821E5810;
loc_821E5840:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821e585c
	goto loc_821E585C;
loc_821E5850:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_821E585C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-12(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_821E5880:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821e589c
	goto loc_821E589C;
loc_821E5890:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
loc_821E589C:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_821E58B8:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EFF78) {
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
	ctx.lr = 0x821EFF9C;
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
	ctx.lr = 0x821EFFB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6248(r10)
	REX_STORE_U32(ctx.r10.u32 + 6248, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821F5280) {
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
	// beq cr6,0x821f52b8
	if (ctx.cr6.eq) goto loc_821F52B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,22816
	ctx.r4.s64 = ctx.r11.s64 + 22816;
	// addi r3,r10,22864
	ctx.r3.s64 = ctx.r10.s64 + 22864;
	// li r5,310
	ctx.r5.s64 = 310;
	// bl 0x821231d0
	ctx.lr = 0x821F52B8;
	sub_821231D0(ctx, base);
loc_821F52B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x821F52CC;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,23184
	ctx.r4.s64 = ctx.r11.s64 + 23184;
	// bl 0x8215f338
	ctx.lr = 0x821F52D8;
	sub_8215F338(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821f52f0
	if (!ctx.cr6.eq) goto loc_821F52F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x821f52f4
	goto loc_821F52F4;
loc_821F52F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F52F4:
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

DEFINE_REX_FUNC(sub_821F80E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821F80E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,6272(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F810C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8124;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// lwz r3,6280(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F813C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6304(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6304);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r3,6280(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 6280);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r11,84(r31)
	REX_STORE_U8(r31.u32 + 84, ctx.r11.u8);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F8188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821FC3A8) {
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
	ctx.lr = 0x821FC3B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r31,r3,168
	r31.s64 = ctx.r3.s64 + 168;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821fc410
	if (ctx.cr6.eq) goto loc_821FC410;
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x821fc408
	if (ctx.cr6.eq) goto loc_821FC408;
loc_821FC3DC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,28
	ctx.r3.s64 = r30.s64 + 28;
	// bl 0x82120ac0
	ctx.lr = 0x821FC3EC;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821FC3FC;
	sub_82120AC0(ctx, base);
	// addi r30,r30,56
	r30.s64 = r30.s64 + 56;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// bne cr6,0x821fc3dc
	if (!ctx.cr6.eq) goto loc_821FC3DC;
loc_821FC408:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce98
	ctx.lr = 0x821FC410;
	sub_8269CE98(ctx, base);
loc_821FC410:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,3
	r30.s64 = 3;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_821FC424:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821FC438;
	sub_82120AC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x821fc424
	if (!ctx.cr0.lt) goto loc_821FC424;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x821FC450;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi. r10,r27,31
	ctx.r10.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,26012
	ctx.r11.s64 = ctx.r11.s64 + 26012;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// beq 0x821fc46c
	if (ctx.cr0.eq) goto loc_821FC46C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269ce98
	ctx.lr = 0x821FC46C;
	sub_8269CE98(ctx, base);
loc_821FC46C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82201CD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfs f1,-19008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -19008);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82202DE8) {
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
	ctx.lr = 0x82202DF0;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r3,4
	r27.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,29748
	ctx.r11.s64 = ctx.r11.s64 + 29748;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x8216ba58
	ctx.lr = 0x82202E14;
	sub_8216BA58(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stb r30,22(r31)
	REX_STORE_U8(r31.u32 + 22, r30.u8);
	// li r3,80
	ctx.r3.s64 = 80;
	// stb r28,20(r31)
	REX_STORE_U8(r31.u32 + 20, r28.u8);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82202E30;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82202f3c
	if (ctx.cr0.eq) goto loc_82202F3C;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r11,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stb r28,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, r28.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stb r28,77(r11)
	REX_STORE_U8(ctx.r11.u32 + 77, r28.u8);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x82202E74;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82202f24
	if (ctx.cr0.eq) goto loc_82202F24;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// stw r30,4(r29)
	REX_STORE_U32(r29.u32 + 4, r30.u32);
	// stw r30,8(r29)
	REX_STORE_U32(r29.u32 + 8, r30.u32);
	// stw r30,12(r29)
	REX_STORE_U32(r29.u32 + 12, r30.u32);
	// stw r30,16(r29)
	REX_STORE_U32(r29.u32 + 16, r30.u32);
	// stfs f31,68(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82120ac0
	ctx.lr = 0x82202EC4;
	sub_82120AC0(ctx, base);
	// stfs f31,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82202ED4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82202f00
	if (ctx.cr0.eq) goto loc_82202F00;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// lis r10,-32224
	ctx.r10.s64 = -2111832064;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r10,r10,13208
	ctx.r10.s64 = ctx.r10.s64 + 13208;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82202f04
	goto loc_82202F04;
loc_82202F00:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82202F04:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r5,r11,17116
	ctx.r5.s64 = ctx.r11.s64 + 17116;
	// bl 0x8216be80
	ctx.lr = 0x82202F14;
	sub_8216BE80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
loc_82202F24:
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
	ctx.lr = 0x82202F3C;
	sub_82120018(ctx, base);
loc_82202F3C:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82202F54;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_8220B818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8220B820;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r3,228
	r31.s64 = ctx.r3.s64 + 228;
	// li r30,2
	r30.s64 = 2;
loc_8220B834:
	// addi r31,r31,-28
	r31.s64 = r31.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120ac0
	ctx.lr = 0x8220B848;
	sub_82120AC0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8220b834
	if (!ctx.cr0.lt) goto loc_8220B834;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8220ac98
	ctx.lr = 0x8220B858;
	sub_8220AC98(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220b868
	if (ctx.cr0.eq) goto loc_8220B868;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8220B868;
	sub_8269CE98(ctx, base);
loc_8220B868:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8220D4C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14252
	ctx.r3.s64 = ctx.r11.s64 + -14252;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220DD80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14236
	ctx.r3.s64 = ctx.r11.s64 + -14236;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220E098) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-14220
	ctx.r3.s64 = ctx.r11.s64 + -14220;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220E2E0) {
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
	// li r3,292
	ctx.r3.s64 = 292;
	// bl 0x822f6280
	ctx.lr = 0x8220E2F4;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220e304
	if (ctx.cr0.eq) goto loc_8220E304;
	// bl 0x8220e318
	ctx.lr = 0x8220E300;
	sub_8220E318(ctx, base);
	// b 0x8220e308
	goto loc_8220E308;
loc_8220E304:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220E308:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220FED0) {
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
	ctx.lr = 0x8220FED8;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,16340
	ctx.r4.s64 = ctx.r11.s64 + 16340;
	// bl 0x82120600
	ctx.lr = 0x8220FEF0;
	sub_82120600(ctx, base);
	// lis r31,-32106
	r31.s64 = -2104098816;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,6040(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// bl 0x82180e18
	ctx.lr = 0x8220FF00;
	sub_82180E18(ctx, base);
	// stw r3,220(r29)
	REX_STORE_U32(r29.u32 + 220, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x8220FF14;
	sub_82120AC0(ctx, base);
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220ff38
	if (!ctx.cr6.eq) goto loc_8220FF38;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,-29680
	ctx.r4.s64 = ctx.r11.s64 + -29680;
	// addi r3,r10,-29620
	ctx.r3.s64 = ctx.r10.s64 + -29620;
	// li r5,66
	ctx.r5.s64 = 66;
	// bl 0x821231d0
	ctx.lr = 0x8220FF38;
	sub_821231D0(ctx, base);
loc_8220FF38:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r4,r11,16492
	ctx.r4.s64 = ctx.r11.s64 + 16492;
	// addi r3,r10,1624
	ctx.r3.s64 = ctx.r10.s64 + 1624;
	// bl 0x8215f338
	ctx.lr = 0x8220FF4C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16504
	ctx.r4.s64 = ctx.r11.s64 + 16504;
	// bl 0x8215f338
	ctx.lr = 0x8220FF58;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220FF5C;
	sub_8215FA30(ctx, base);
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r10,22808
	ctx.r4.s64 = ctx.r10.s64 + 22808;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x8215f338
	ctx.lr = 0x8220FF74;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8220FF7C;
	sub_8215F2D0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-29576
	ctx.r4.s64 = ctx.r11.s64 + -29576;
	// bl 0x8215f338
	ctx.lr = 0x8220FF88;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x8220FF8C;
	sub_8215FA30(ctx, base);
	// lwz r11,6040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82154c08
	ctx.lr = 0x8220FFA0;
	sub_82154C08(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r30,r29,204
	r30.s64 = r29.s64 + 204;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x8220FFB4;
	sub_82145710(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,1
	r27.s64 = 1;
	// addi r26,r11,-29556
	r26.s64 = ctx.r11.s64 + -29556;
loc_8220FFC0:
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a06d8
	ctx.lr = 0x8220FFD0;
	sub_826A06D8(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82121610
	ctx.lr = 0x8220FFE4;
	sub_82121610(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82121928
	ctx.lr = 0x8220FFEC;
	sub_82121928(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120670
	ctx.lr = 0x8220FFF8;
	sub_82120670(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82120ac0
	ctx.lr = 0x82210008;
	sub_82120AC0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// bl 0x821883a0
	ctx.lr = 0x82210014;
	sub_821883A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210038
	if (ctx.cr0.eq) goto loc_82210038;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,6040(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6040);
	// bl 0x82154c08
	ctx.lr = 0x82210028;
	sub_82154C08(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82145710
	ctx.lr = 0x82210038;
	sub_82145710(ctx, base);
loc_82210038:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x82210048;
	sub_82120AC0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,8
	ctx.cr6.compare<int32_t>(r27.s32, 8, ctx.xer);
	// blt cr6,0x8220ffc0
	if (ctx.cr6.lt) goto loc_8220FFC0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r11,6248(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// srawi r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r31.s64 = ctx.r10.s32 >> 2;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x821a33a0
	ctx.lr = 0x82210074;
	sub_821A33A0(ctx, base);
	// clrldi r11,r31,32
	ctx.r11.u64 = r31.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,228(r29)
	REX_STORE_U32(r29.u32 + 228, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_822228F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13988
	ctx.r3.s64 = ctx.r11.s64 + -13988;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822234E0) {
	REX_FUNC_PROLOGUE();
	// lbz r11,792(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 792);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82224828) {
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
	ctx.lr = 0x82224830;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,16492
	r30.s64 = ctx.r11.s64 + 16492;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224858;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,16528
	ctx.r4.s64 = ctx.r11.s64 + 16528;
	// bl 0x8215f338
	ctx.lr = 0x82224864;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224868;
	sub_8215FA30(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r11,16504
	r28.s64 = ctx.r11.s64 + 16504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82125d00
	ctx.lr = 0x82224880;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224918
	if (!ctx.cr0.eq) goto loc_82224918;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,17388
	ctx.r4.s64 = ctx.r11.s64 + 17388;
	// bl 0x82125d00
	ctx.lr = 0x82224898;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822248b8
	if (ctx.cr0.eq) goto loc_822248B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,17424
	ctx.r4.s64 = ctx.r11.s64 + 17424;
	// bl 0x82125d00
	ctx.lr = 0x822248B0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822249d4
	if (!ctx.cr0.eq) goto loc_822249D4;
loc_822248B8:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-26856
	ctx.r4.s64 = ctx.r11.s64 + -26856;
	// bl 0x82120600
	ctx.lr = 0x822248C8;
	sub_82120600(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822248EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82120ac0
	ctx.lr = 0x82224908;
	sub_82120AC0(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x822249d4
	if (ctx.cr0.eq) goto loc_822249D4;
loc_82224910:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822249d8
	goto loc_822249D8;
loc_82224918:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,16576
	ctx.r4.s64 = ctx.r11.s64 + 16576;
	// bl 0x82125d00
	ctx.lr = 0x82224928;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82224990
	if (!ctx.cr0.eq) goto loc_82224990;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,16568
	ctx.r4.s64 = ctx.r11.s64 + 16568;
	// bl 0x82125d00
	ctx.lr = 0x82224940;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822249d4
	if (!ctx.cr0.eq) goto loc_822249D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82224954;
	sub_8215F338(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8215f338
	ctx.lr = 0x8222495C;
	sub_8215F338(ctx, base);
	// bl 0x8215fa30
	ctx.lr = 0x82224960;
	sub_8215FA30(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82224984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822249d4
	if (!ctx.cr0.eq) goto loc_822249D4;
	// b 0x82224910
	goto loc_82224910;
loc_82224990:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,20280
	ctx.r4.s64 = ctx.r11.s64 + 20280;
	// bl 0x82125d00
	ctx.lr = 0x822249A0;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822249d4
	if (!ctx.cr0.eq) goto loc_822249D4;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,6276(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6276);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822249C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x822249d8
	if (ctx.cr0.eq) goto loc_822249D8;
loc_822249D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822249D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8222C548) {
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
	// lbz r11,544(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 544);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8222c6a8
	if (!ctx.cr0.eq) goto loc_8222C6A8;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,160(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f0,15048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x8222C5AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821c3ec8
	ctx.lr = 0x8222C5BC;
	sub_821C3EC8(ctx, base);
	// addi r10,r31,240
	ctx.r10.s64 = r31.s64 + 240;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// std r10,240(r31)
	REX_STORE_U64(r31.u32 + 240, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,248(r31)
	REX_STORE_U64(r31.u32 + 248, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,256(r31)
	REX_STORE_U64(r31.u32 + 256, ctx.r10.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r10,264(r31)
	REX_STORE_U64(r31.u32 + 264, ctx.r10.u64);
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r10,272(r31)
	REX_STORE_U64(r31.u32 + 272, ctx.r10.u64);
	// ld r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// std r10,280(r31)
	REX_STORE_U64(r31.u32 + 280, ctx.r10.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// std r10,288(r31)
	REX_STORE_U64(r31.u32 + 288, ctx.r10.u64);
	// ld r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r11,296(r31)
	REX_STORE_U64(r31.u32 + 296, ctx.r11.u64);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C624;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,118
	ctx.r6.s64 = 118;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r31,224
	ctx.r4.s64 = r31.s64 + 224;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C640;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,6164(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6164);
	// addi r4,r31,116
	ctx.r4.s64 = r31.s64 + 116;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222C658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,141(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8222c6a0
	if (ctx.cr0.eq) goto loc_8222C6A0;
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
	ctx.lr = 0x8222C67C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222c6a0
	if (ctx.cr0.eq) goto loc_8222C6A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-23944
	ctx.r3.s64 = ctx.r11.s64 + -23944;
	// bl 0x82162af8
	ctx.lr = 0x8222C694;
	sub_82162AF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x8217f770
	ctx.lr = 0x8222C6A0;
	sub_8217F770(ctx, base);
loc_8222C6A0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,544(r31)
	REX_STORE_U8(r31.u32 + 544, ctx.r11.u8);
loc_8222C6A8:
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

DEFINE_REX_FUNC(sub_82238080) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13492
	ctx.r3.s64 = ctx.r11.s64 + -13492;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822380F8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 120);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822385C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13476
	ctx.r3.s64 = ctx.r11.s64 + -13476;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82239280) {
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
	ctx.lr = 0x82239288;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,365(r28)
	REX_STORE_U8(r28.u32 + 365, ctx.r11.u8);
	// lwz r11,128(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 128);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821b2d80
	ctx.lr = 0x822392AC;
	sub_821B2D80(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822392CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8223936c
	if (!ctx.cr0.gt) goto loc_8223936C;
loc_822392D4:
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822392EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6284(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223930C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,460(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 460);
	// mulli r11,r3,320
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(320));
	// lwz r10,3828(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 3828);
	// lwz r9,128(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 128);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r27.s32, ctx.xer);
	// beq cr6,0x8223934c
	if (ctx.cr6.eq) goto loc_8223934C;
	// lwz r3,6284(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6284);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82239340;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822392d4
	if (ctx.cr6.lt) goto loc_822392D4;
	// b 0x8223936c
	goto loc_8223936C;
loc_8223934C:
	// lbz r11,113(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 113);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// bl 0x8223a608
	ctx.lr = 0x8223936C;
	sub_8223A608(ctx, base);
loc_8223936C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82241940) {
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
	ctx.lr = 0x82241948;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,6284(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6284);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82241970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,3856(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 3856);
	// mulli r11,r3,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(304));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r26,0
	r26.s64 = 0;
	// addi r27,r31,144
	r27.s64 = r31.s64 + 144;
	// lbz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 52);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82241a34
	if (ctx.cr0.eq) goto loc_82241A34;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82241a34
	if (!ctx.cr6.lt) goto loc_82241A34;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x8269d1d0
	ctx.lr = 0x822419B0;
	sub_8269D1D0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269d1b8
	ctx.lr = 0x822419BC;
	sub_8269D1B8(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227ad20
	ctx.lr = 0x822419D4;
	sub_8227AD20(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r25,80(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x822419ec
	if (!ctx.cr6.gt) goto loc_822419EC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_822419EC:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r29,3788
	ctx.r3.s64 = r29.s64 + 3788;
	// lfs f0,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x8226cd70
	ctx.lr = 0x82241A20;
	sub_8226CD70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82241a2c
	if (ctx.cr0.eq) goto loc_82241A2C;
	// li r26,1
	r26.s64 = 1;
loc_82241A2C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8269d1b8
	ctx.lr = 0x82241A34;
	sub_8269D1B8(ctx, base);
loc_82241A34:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82249388) {
	REX_FUNC_PROLOGUE();
	// b 0x82249480
	sub_82249480(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82249480) {
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
	ctx.lr = 0x82249488;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r31,r3,132
	r31.s64 = ctx.r3.s64 + 132;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x822494f4
	if (!ctx.cr6.lt) goto loc_822494F4;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r29,13
	ctx.cr6.compare<int32_t>(r29.s32, 13, ctx.xer);
	// bgt cr6,0x822494bc
	if (ctx.cr6.gt) goto loc_822494BC;
	// li r29,13
	r29.s64 = 13;
loc_822494BC:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x822494f4
	if (!ctx.cr6.gt) goto loc_822494F4;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r3,r29,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8269d1d0
	ctx.lr = 0x822494D0;
	sub_8269D1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x822494E4;
	sub_826A1E70(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x8269d1b8
	ctx.lr = 0x822494EC;
	sub_8269D1B8(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,8(r30)
	REX_STORE_U32(r30.u32 + 8, r29.u32);
loc_822494F4:
	// li r11,13
	ctx.r11.s64 = 13;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r10,-25252
	r27.s64 = ctx.r10.s64 + -25252;
	// addi r26,r11,-25320
	r26.s64 = ctx.r11.s64 + -25320;
loc_82249514:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x82249528
	if (ctx.cr6.lt) goto loc_82249528;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82249538
	if (ctx.cr6.lt) goto loc_82249538;
loc_82249528:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,111
	ctx.r5.s64 = 111;
	// bl 0x821231d0
	ctx.lr = 0x82249538;
	sub_821231D0(ctx, base);
loc_82249538:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r11,r29,r11
	ctx.r11.u64 = r29.u64 + ctx.r11.u64;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmpwi cr6,r29,104
	ctx.cr6.compare<int32_t>(r29.s32, 104, ctx.xer);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blt cr6,0x82249514
	if (ctx.cr6.lt) goto loc_82249514;
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,128(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwz r3,6080(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6080);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249574;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82249760
	if (ctx.cr0.eq) goto loc_82249760;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82249648
	if (!ctx.cr6.eq) goto loc_82249648;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8227e758
	ctx.lr = 0x82249598;
	sub_8227E758(ctx, base);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495A8;
	sub_8227E758(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495B8;
	sub_8227E758(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495C8;
	sub_8227E758(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495DC;
	sub_8227E758(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495EC;
	sub_8227E758(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822495FC;
	sub_8227E758(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x8224960C;
	sub_8227E758(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x8224961C;
	sub_8227E758(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x8224962C;
	sub_8227E758(ctx, base);
	// lwz r3,6080(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6080);
	// lwz r4,128(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82249760
	goto loc_82249760;
loc_82249648:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// bl 0x8227e758
	ctx.lr = 0x82249654;
	sub_8227E758(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x82249664;
	sub_8227E758(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,512
	ctx.r4.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x82249674;
	sub_8227E758(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x82249684;
	sub_8227E758(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x82249698;
	sub_8227E758(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822496A8;
	sub_8227E758(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822496B8;
	sub_8227E758(ctx, base);
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822496C8;
	sub_8227E758(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x822496D8;
	sub_8227E758(ctx, base);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// lwz r4,128(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822496F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82249714
	if (ctx.cr0.eq) goto loc_82249714;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x8227e758
	ctx.lr = 0x8224970C;
	sub_8227E758(ctx, base);
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// b 0x82249720
	goto loc_82249720;
loc_82249714:
	// lis r4,32
	ctx.r4.s64 = 2097152;
	// bl 0x8227e758
	ctx.lr = 0x8224971C;
	sub_8227E758(ctx, base);
	// li r4,4096
	ctx.r4.s64 = 4096;
loc_82249720:
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227e758
	ctx.lr = 0x8224972C;
	sub_8227E758(ctx, base);
	// lwz r3,6280(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 6280);
	// lwz r4,128(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82249744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// bne 0x8224975c
	if (!ctx.cr0.eq) goto loc_8224975C;
	// lis r4,16
	ctx.r4.s64 = 1048576;
loc_8224975C:
	// bl 0x8227e758
	ctx.lr = 0x82249760;
	sub_8227E758(ctx, base);
loc_82249760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82258818) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x822594b8
	sub_822594B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82259E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82259E90;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259ecc
	if (ctx.cr6.eq) goto loc_82259ECC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82259ECC:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r30,r11,-27048
	r30.s64 = ctx.r11.s64 + -27048;
	// addi r29,r10,1624
	r29.s64 = ctx.r10.s64 + 1624;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82259EE8;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-26752
	ctx.r4.s64 = ctx.r11.s64 + -26752;
	// bl 0x8215f338
	ctx.lr = 0x82259EF4;
	sub_8215F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f338
	ctx.lr = 0x82259F00;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-31444
	ctx.r4.s64 = ctx.r11.s64 + -31444;
	// bl 0x8215f338
	ctx.lr = 0x82259F0C;
	sub_8215F338(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lbz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82259fc8
	if (!ctx.cr0.eq) goto loc_82259FC8;
	// bne cr6,0x82259f4c
	if (!ctx.cr6.eq) goto loc_82259F4C;
	// lwz r11,1600(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1600);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259fc8
	if (ctx.cr6.eq) goto loc_82259FC8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259F48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82259fc8
	goto loc_82259FC8;
loc_82259F4C:
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82259fc8
	if (ctx.cr6.eq) goto loc_82259FC8;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82259fc8
	if (ctx.cr6.eq) goto loc_82259FC8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82259F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,192
	ctx.r8.s64 = 192;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r8,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r3,6096(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 6096);
	// bl 0x82136798
	ctx.lr = 0x82259FC8;
	sub_82136798(ctx, base);
loc_82259FC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82264D18) {
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
	ctx.lr = 0x82264D20;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r7,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82264d8c
	goto loc_82264D8C;
loc_82264D4C:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,212
	ctx.r3.s64 = ctx.r1.s64 + 212;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r5,-4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82263a78
	ctx.lr = 0x82264D64;
	sub_82263A78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264d70
	if (ctx.cr0.eq) goto loc_82264D70;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_82264D70:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// mr r31,r30
	r31.u64 = r30.u64;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_82264D8C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(r30.s32, r28.s32, ctx.xer);
	// blt cr6,0x82264d4c
	if (ctx.cr6.lt) goto loc_82264D4C;
	// bne cr6,0x82264db0
	if (!ctx.cr6.eq) goto loc_82264DB0;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r31,r28,-1
	r31.s64 = r28.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_82264DB0:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// addze r31,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x82264e0c
	if (!ctx.cr6.lt) goto loc_82264E0C;
loc_82264DCC:
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// bl 0x82263a78
	ctx.lr = 0x82264DE0;
	sub_82263A78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82264e0c
	if (ctx.cr0.eq) goto loc_82264E0C;
	// lwzx r11,r28,r29
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r31
	ctx.cr6.compare<int32_t>(r27.s32, r31.s32, ctx.xer);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addze r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	r31.s64 = temp.s64;
	// blt cr6,0x82264dcc
	if (ctx.cr6.lt) goto loc_82264DCC;
loc_82264E0C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8226EE60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8226EE68;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r31,r3,84
	r31.s64 = ctx.r3.s64 + 84;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226eea4
	if (!ctx.cr0.eq) goto loc_8226EEA4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8226eea4
	if (ctx.cr6.gt) goto loc_8226EEA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203d60
	ctx.lr = 0x8226EEA4;
	sub_82203D60(ctx, base);
loc_8226EEA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r29,r11,r9
	r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8226eec4
	if (ctx.cr6.gt) goto loc_8226EEC4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_8226EEC4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r10
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226eef0
	if (!ctx.cr6.eq) goto loc_8226EEF0;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822f6280
	ctx.lr = 0x8226EEE0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226ef1c
	if (ctx.cr0.eq) goto loc_8226EF1C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r3,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, ctx.r3.u32);
loc_8226EEF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r29,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xC;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226ef08
	if (ctx.cr0.eq) goto loc_8226EF08;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_8226EF08:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8226EF1C:
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
	ctx.lr = 0x8226EF38;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_822746F0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-112
	ctx.r3.s64 = ctx.r3.s64 + -112;
	// b 0x822742d0
	sub_822742D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822747B8) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r11,r11,-3368
	ctx.r11.s64 = ctx.r11.s64 + -3368;
	// addi r10,r10,-3288
	ctx.r10.s64 = ctx.r10.s64 + -3288;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// stw r10,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82274df0
	ctx.lr = 0x822747F4;
	sub_82274DF0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,124(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r11,r11,-11740
	ctx.r11.s64 = ctx.r11.s64 + -11740;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// bl 0x8269d1b8
	ctx.lr = 0x82274808;
	sub_8269D1B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x82274818;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,29356
	ctx.r11.s64 = ctx.r11.s64 + 29356;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// beq 0x82274834
	if (ctx.cr0.eq) goto loc_82274834;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x82274834;
	sub_8269CE98(ctx, base);
loc_82274834:
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

DEFINE_REX_FUNC(sub_82278E18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r10,-11640
	ctx.r4.s64 = ctx.r10.s64 + -11640;
	// lwz r3,6076(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6076);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82278E50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82278e64
	if (!ctx.cr6.eq) goto loc_82278E64;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// b 0x82278e68
	goto loc_82278E68;
loc_82278E64:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82278E68:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82278ec0
	if (!ctx.cr0.eq) goto loc_82278EC0;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r31,r30,200
	r31.s64 = r30.s64 + 200;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,6248(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6248);
	// bl 0x821efdf0
	ctx.lr = 0x82278E88;
	sub_821EFDF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278ec0
	if (ctx.cr0.eq) goto loc_82278EC0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82278ea4
	if (ctx.cr6.lt) goto loc_82278EA4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x82278ea8
	goto loc_82278EA8;
loc_82278EA4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_82278EA8:
	// addi r3,r30,188
	ctx.r3.s64 = r30.s64 + 188;
	// bl 0x821ea0e0
	ctx.lr = 0x82278EB0;
	sub_821EA0E0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278ec0
	if (ctx.cr0.eq) goto loc_82278EC0;
	// lwz r3,192(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 192);
	// bl 0x822fbe20
	ctx.lr = 0x82278EC0;
	sub_822FBE20(ctx, base);
loc_82278EC0:
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

DEFINE_REX_FUNC(sub_8227DD78) {
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
	ctx.lr = 0x8227DD80;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,-608
	r25.s64 = ctx.r11.s64 + -608;
	// bne cr6,0x8227ddc4
	if (!ctx.cr6.eq) goto loc_8227DDC4;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,30052
	ctx.r3.s64 = ctx.r11.s64 + 30052;
	// li r5,172
	ctx.r5.s64 = 172;
	// bl 0x821231d0
	ctx.lr = 0x8227DDC4;
	sub_821231D0(ctx, base);
loc_8227DDC4:
	// cmplwi cr6,r24,30
	ctx.cr6.compare<uint32_t>(r24.u32, 30, ctx.xer);
	// bge cr6,0x8227dde0
	if (!ctx.cr6.lt) goto loc_8227DDE0;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,30080
	ctx.r3.s64 = ctx.r11.s64 + 30080;
	// li r5,173
	ctx.r5.s64 = 173;
	// bl 0x821231d0
	ctx.lr = 0x8227DDE0;
	sub_821231D0(ctx, base);
loc_8227DDE0:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,32771
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32771, ctx.xer);
	// beq cr6,0x8227de00
	if (ctx.cr6.eq) goto loc_8227DE00;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r11,30128
	ctx.r3.s64 = ctx.r11.s64 + 30128;
	// li r5,177
	ctx.r5.s64 = 177;
	// bl 0x821231d0
	ctx.lr = 0x8227DE00;
	sub_821231D0(ctx, base);
loc_8227DE00:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r6,r30,8
	ctx.r6.s64 = r30.s64 + 8;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ldx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U64(r31.u32 + ctx.r11.u32);
	// bl 0x8228e020
	ctx.lr = 0x8227DE18;
	sub_8228E020(ctx, base);
	// addi r6,r29,8
	ctx.r6.s64 = r29.s64 + 8;
	// addi r5,r29,4
	ctx.r5.s64 = r29.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,10(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 10);
	// bl 0x8228df80
	ctx.lr = 0x8227DE2C;
	sub_8228DF80(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r3,30
	ctx.r3.s64 = 30;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lha r11,14(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 14));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lha r11,16(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 16));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lha r11,18(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 18));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// lha r11,20(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 20));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// lha r11,24(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 24));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// lwz r11,26(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 26);
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82288B00) {
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
	ctx.lr = 0x82288B08;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x82288b34
	if (ctx.cr6.lt) goto loc_82288B34;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r4,r11,2984
	ctx.r4.s64 = ctx.r11.s64 + 2984;
	// addi r3,r10,-4520
	ctx.r3.s64 = ctx.r10.s64 + -4520;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x821231d0
	ctx.lr = 0x82288B34;
	sub_821231D0(ctx, base);
loc_82288B34:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82288f68
	ctx.lr = 0x82288B3C;
	sub_82288F68(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mulli r30,r27,392
	r30.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(392));
	// addi r29,r11,4376
	r29.s64 = ctx.r11.s64 + 4376;
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// lwzx r28,r30,r31
	r28.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(r28.u32, 32, ctx.xer);
	// bge cr6,0x82288bac
	if (!ctx.cr6.lt) goto loc_82288BAC;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,6256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6256);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288B78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288bac
	if (ctx.cr0.eq) goto loc_82288BAC;
	// mulli r11,r27,98
	ctx.r11.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(98));
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// addi r9,r29,264
	ctx.r9.s64 = r29.s64 + 264;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r30,r31
	REX_STORE_U32(r30.u32 + r31.u32, ctx.r11.u32);
	// b 0x82288bb0
	goto loc_82288BB0;
loc_82288BAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82288BB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8228C718) {
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
	ctx.lr = 0x8228C720;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8228c7a4
	if (!ctx.cr6.gt) goto loc_8228C7A4;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// li r28,0
	r28.s64 = 0;
	// addi r27,r10,-25252
	r27.s64 = ctx.r10.s64 + -25252;
	// addi r26,r11,-25320
	r26.s64 = ctx.r11.s64 + -25320;
loc_8228C750:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt cr6,0x8228c764
	if (ctx.cr6.lt) goto loc_8228C764;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228c774
	if (ctx.cr6.lt) goto loc_8228C774;
loc_8228C764:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x821231d0
	ctx.lr = 0x8228C774;
	sub_821231D0(ctx, base);
loc_8228C774:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r31,r11,r28
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8228C788;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8228c7b0
	if (ctx.cr0.eq) goto loc_8228C7B0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8228c750
	if (ctx.cr6.lt) goto loc_8228C750;
loc_8228C7A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228C7A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1cfc
	return;
loc_8228C7B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228c7a8
	goto loc_8228C7A8;
}

DEFINE_REX_FUNC(sub_8228FC28) {
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
	// bl 0x8228fcc0
	ctx.lr = 0x8228FC48;
	sub_8228FCC0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228fc58
	if (ctx.cr0.eq) goto loc_8228FC58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8228FC58;
	sub_8269CE98(ctx, base);
loc_8228FC58:
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

DEFINE_REX_FUNC(sub_822911A8) {
	REX_FUNC_PROLOGUE();
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// std r11,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r11.u64);
	// ld r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// std r11,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r11.u64);
	// ld r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// std r11,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82293190) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82293198;
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
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822931B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822931D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822931F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r6,19010
	ctx.r6.s64 = 1245839360;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// ori r6,r6,20291
	ctx.r6.u64 = ctx.r6.u64 | 20291;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82297210) {
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
	// bl 0x826a1c88
	ctx.lr = 0x82297218;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x826a2c70
	ctx.lr = 0x82297220;
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 48);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// ld r9,56(r4)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r4.u32 + 56);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r25,r4,48
	r25.s64 = ctx.r4.s64 + 48;
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229725C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r11,-7264
	r23.s64 = ctx.r11.s64 + -7264;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f11,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r24,r11,16592
	r24.s64 = ctx.r11.s64 + 16592;
	// lfs f31,22312(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 22312);
	f31.f64 = double(temp.f32);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// lfs f10,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,832
	ctx.r5.s64 = ctx.r1.s64 + 832;
	// lfs f8,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f7,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// fmadds f0,f0,f31,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f11.f64)));
	// lfs f11,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	f30.f64 = double(temp.f32);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// fmadds f13,f13,f31,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f9.f64)));
	// stfs f31,580(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f31,584(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// fmadds f12,f12,f31,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f10.f64)));
	// stfs f31,588(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// stfs f30,576(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stfs f31,844(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 844, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,832(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 832, temp.u32);
	// fadds f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// stfs f0,836(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 836, temp.u32);
	// fadds f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f0,840(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 840, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229730C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297320;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f11,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f8.f64 = double(temp.f32);
	// stfs f31,864(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 864, temp.u32);
	// stfs f30,868(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 868, temp.u32);
	// stfs f31,872(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 872, temp.u32);
	// fmadds f0,f0,f31,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f10.f64)));
	// fmadds f13,f13,f31,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f11.f64)));
	// fmadds f12,f12,f31,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f9.f64)));
	// lfs f11,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,784(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 784, temp.u32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f31,876(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 876, temp.u32);
	// addi r6,r1,864
	ctx.r6.s64 = ctx.r1.s64 + 864;
	// stfs f31,796(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 796, temp.u32);
	// addi r5,r1,784
	ctx.r5.s64 = ctx.r1.s64 + 784;
	// stfs f13,788(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 788, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f0,792(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 792, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822973B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822973C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f31,640(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stfs f31,644(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stfs f30,648(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stfs f31,652(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// fmadds f0,f0,f31,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f31.f64, ctx.f12.f64)));
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f13,f31,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f11.f64)));
	// lfs f9,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f12,f10,f31,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f10.f64, f31.f64, ctx.f7.f64)));
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fadds f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297454;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82297698
	if (!ctx.cr6.eq) goto loc_82297698;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addic. r24,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r24.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x82298bec
	if (ctx.cr0.lt) goto loc_82298BEC;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mulli r23,r24,80
	r23.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(80));
loc_82297474:
	// lwz r11,24(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 24);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lfs f4,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f1,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lfs f30,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f30.f64 = double(temp.f32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lfs f3,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f29.f64 = double(temp.f32);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfs f26,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f26.f64 = double(temp.f32);
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f27,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f27.f64 = double(temp.f32);
	// ld r22,48(r11)
	r22.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfs f28,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f28.f64 = double(temp.f32);
	// ld r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lfs f25,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	f25.f64 = double(temp.f32);
	// ld r3,40(r11)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// lfs f24,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f24.f64 = double(temp.f32);
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lfs f23,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f23.f64 = double(temp.f32);
	// ld r6,56(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// std r5,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r22,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r22.u64);
	// ld r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// std r4,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r4.u64);
	// std r6,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// ld r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// std r3,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r3.u64);
	// std r10,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// lwz r5,64(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// std r7,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r7.u64);
	// lfs f10,256(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,244(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,264(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 264);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,212(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,216(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,248(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f19,f30,f13
	f19.f64 = double(float(f30.f64 * ctx.f13.f64));
	// lfs f0,260(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f18,f30,f12
	f18.f64 = double(float(f30.f64 * ctx.f12.f64));
	// fmuls f20,f1,f0
	f20.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f22,f4,f0
	f22.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f21,f2,f0
	f21.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f17,f1,f11
	f17.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f22,f3,f10,f22
	f22.f64 = double(float(std::fma(ctx.f3.f64, ctx.f10.f64, f22.f64)));
	// fmuls f16,f29,f13
	f16.f64 = double(float(f29.f64 * ctx.f13.f64));
	// fmuls f15,f29,f12
	f15.f64 = double(float(f29.f64 * ctx.f12.f64));
	// fmadds f21,f26,f10,f21
	f21.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, f21.f64)));
	// fmadds f10,f27,f10,f20
	ctx.f10.f64 = double(float(std::fma(f27.f64, ctx.f10.f64, f20.f64)));
	// fmuls f12,f28,f12
	ctx.f12.f64 = double(float(f28.f64 * ctx.f12.f64));
	// fmadds f20,f1,f0,f19
	f20.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f19.f64)));
	// fmuls f13,f28,f13
	ctx.f13.f64 = double(float(f28.f64 * ctx.f13.f64));
	// fmadds f1,f1,f9,f18
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, f18.f64)));
	// fmuls f14,f2,f11
	f14.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmadds f22,f28,f7,f22
	f22.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, f22.f64)));
	// fmadds f19,f2,f0,f16
	f19.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, f16.f64)));
	// fmadds f18,f8,f27,f17
	f18.f64 = double(float(std::fma(ctx.f8.f64, f27.f64, f17.f64)));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmadds f2,f2,f9,f15
	ctx.f2.f64 = double(float(std::fma(ctx.f2.f64, ctx.f9.f64, f15.f64)));
	// fmadds f12,f4,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f21,f29,f7,f21
	f21.f64 = double(float(std::fma(f29.f64, ctx.f7.f64, f21.f64)));
	// fmadds f13,f4,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f0,240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f30,f7,f10
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f7,f27,f5,f1
	ctx.f7.f64 = double(float(std::fma(f27.f64, ctx.f5.f64, ctx.f1.f64)));
	// fadds f9,f22,f25
	ctx.f9.f64 = double(float(f22.f64 + f25.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f17,f8,f26,f14
	f17.f64 = double(float(std::fma(ctx.f8.f64, f26.f64, f14.f64)));
	// fmadds f9,f27,f6,f20
	ctx.f9.f64 = double(float(std::fma(f27.f64, ctx.f6.f64, f20.f64)));
	// fmadds f4,f30,f0,f18
	ctx.f4.f64 = double(float(std::fma(f30.f64, ctx.f0.f64, f18.f64)));
	// fmadds f1,f26,f6,f19
	ctx.f1.f64 = double(float(std::fma(f26.f64, ctx.f6.f64, f19.f64)));
	// fmadds f11,f8,f3,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f3.f64, ctx.f11.f64)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmadds f12,f3,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f5.f64, ctx.f12.f64)));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f9,f21,f24
	ctx.f9.f64 = double(float(f21.f64 + f24.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f12,f10,f23
	ctx.f12.f64 = double(float(ctx.f10.f64 + f23.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f3,f6,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f6.f64, ctx.f13.f64)));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f8,f29,f0,f17
	ctx.f8.f64 = double(float(std::fma(f29.f64, ctx.f0.f64, f17.f64)));
	// ld r22,8(r10)
	r22.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f13,f26,f5,f2
	ctx.f13.f64 = double(float(std::fma(f26.f64, ctx.f5.f64, ctx.f2.f64)));
	// stfs f8,160(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f28,f0,f11
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f4,176(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r7,r1,912
	ctx.r7.s64 = ctx.r1.s64 + 912;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r21,r1,928
	r21.s64 = ctx.r1.s64 + 928;
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// addi r19,r1,944
	r19.s64 = ctx.r1.s64 + 944;
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r18,r1,960
	r18.s64 = ctx.r1.s64 + 960;
	// ld r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// addi r4,r1,912
	ctx.r4.s64 = ctx.r1.s64 + 912;
	// std r6,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r6.u64);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r17,8(r11)
	r17.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r16,0(r9)
	r16.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// ld r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + 8);
	// std r22,8(r18)
	REX_STORE_U64(r18.u32 + 8, r22.u64);
	// std r11,0(r19)
	REX_STORE_U64(r19.u32 + 0, ctx.r11.u64);
	// std r10,0(r18)
	REX_STORE_U64(r18.u32 + 0, ctx.r10.u64);
	// std r16,0(r21)
	REX_STORE_U64(r21.u32 + 0, r16.u64);
	// std r8,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r8.u64);
	// std r9,8(r21)
	REX_STORE_U64(r21.u32 + 8, ctx.r9.u64);
	// std r17,8(r19)
	REX_STORE_U64(r19.u32 + 8, r17.u64);
	// lwz r20,0(r28)
	r20.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297688;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r23,r23,-80
	r23.s64 = r23.s64 + -80;
	// bge 0x82297474
	if (!ctx.cr0.lt) goto loc_82297474;
	// b 0x82298bec
	goto loc_82298BEC;
loc_82297698:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298b84
	if (ctx.cr0.eq) goto loc_82298B84;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82298b44
	if (ctx.cr6.eq) goto loc_82298B44;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8229895c
	if (ctx.cr6.eq) goto loc_8229895C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x822982d4
	if (ctx.cr6.eq) goto loc_822982D4;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82297e84
	if (ctx.cr6.eq) goto loc_82297E84;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82297bfc
	if (ctx.cr6.eq) goto loc_82297BFC;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// beq cr6,0x8229795c
	if (ctx.cr6.eq) goto loc_8229795C;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x822976e4
	if (!ctx.cr6.gt) goto loc_822976E4;
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822976e8
	if (ctx.cr6.lt) goto loc_822976E8;
loc_822976E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822976E8:
	// clrlwi. r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f30,308(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r24.u32 + 308);
	f30.f64 = double(temp.f32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f29,100(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 100);
	f29.f64 = double(temp.f32);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// addi r24,r11,5148
	r24.s64 = ctx.r11.s64 + 5148;
	// addi r23,r10,5148
	r23.s64 = ctx.r10.s64 + 5148;
	// beq 0x82297778
	if (ctx.cr0.eq) goto loc_82297778;
	// stfs f30,736(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stfs f30,740(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 740, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f30,744(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 744, temp.u32);
	// stfs f31,748(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 748, temp.u32);
	// stfs f29,352(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f29,356(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f29,360(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229773C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x82296dd8
	ctx.lr = 0x82297750;
	sub_82296DD8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, r23.u32);
	// stw r24,1056(r1)
	REX_STORE_U32(ctx.r1.u32 + 1056, r24.u32);
loc_82297778:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822977f4
	if (!ctx.cr6.eq) goto loc_822977F4;
	// stfs f30,672(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stfs f30,676(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfs f30,680(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stfs f31,684(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 684, temp.u32);
	// stfs f29,384(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// stfs f29,388(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfs f29,392(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f31,396(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822977B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x82296dd8
	ctx.lr = 0x822977CC;
	sub_82296DD8(ctx, base);
	// lwz r3,112(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 112);
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,1156
	ctx.r4.s64 = ctx.r1.s64 + 1156;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822977EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,1156(r1)
	REX_STORE_U32(ctx.r1.u32 + 1156, r23.u32);
	// stw r24,1152(r1)
	REX_STORE_U32(ctx.r1.u32 + 1152, r24.u32);
loc_822977F4:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82298bec
	if (!ctx.cr6.lt) goto loc_82298BEC;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82298bec
	if (!ctx.cr0.gt) goto loc_82298BEC;
loc_82297820:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r6,r1,896
	ctx.r6.s64 = ctx.r1.s64 + 896;
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297840;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,888(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 888);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f8,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f7,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f5,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f13,904(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,884(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 884);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f1,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f3,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f11,900(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 900);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,880(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 880);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,896(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 896);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f3,f12,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f6.f64)));
	// stfs f31,428(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// fmadds f4,f2,f12,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f4.f64)));
	// stfs f31,780(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 780, temp.u32);
	// fmadds f0,f1,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f0.f64)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f12,f3,f11,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f8.f64)));
	// fmadds f8,f2,f11,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmadds f13,f1,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f13.f64)));
	// lfs f29,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f30,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmadds f11,f10,f5,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f6.f64)));
	// lfs f26,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f26.f64 = double(temp.f32);
	// fmadds f7,f10,f30,f4
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, ctx.f4.f64)));
	// lfs f28,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	f28.f64 = double(temp.f32);
	// fmadds f0,f10,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, ctx.f0.f64)));
	// lfs f27,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f27.f64 = double(temp.f32);
	// fmadds f12,f9,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f10,f9,f30,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, f30.f64, ctx.f8.f64)));
	// fmadds f13,f9,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, f29.f64, ctx.f13.f64)));
	// fadds f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f11,416(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// fadds f11,f7,f27
	ctx.f11.f64 = double(float(ctx.f7.f64 + f27.f64));
	// stfs f11,420(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,424(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// fadds f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f0,768(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 768, temp.u32);
	// fadds f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f0,772(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 772, temp.u32);
	// fadds f0,f13,f26
	ctx.f0.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f0,776(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 776, temp.u32);
	// bctrl 
	ctx.lr = 0x8229791C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,768
	ctx.r5.s64 = ctx.r1.s64 + 768;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297950;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r24,r3
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82297820
	if (ctx.cr6.lt) goto loc_82297820;
	// b 0x82298bec
	goto loc_82298BEC;
loc_8229795C:
	// lfs f13,56(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r27,48
	ctx.r11.s64 = r27.s64 + 48;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f10,64(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f0,48(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f12,948(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 948);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x822979cc
	if (!ctx.cr6.gt) goto loc_822979CC;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f10,f10,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f12.f64)));
	// fsqrts f12,f10
	ctx.f12.f64 = double(float(sqrt(ctx.f10.f64)));
	// fdivs f8,f30,f12
	ctx.f8.f64 = double(float(f30.f64 / ctx.f12.f64));
	// fmuls f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f13,f8,f9
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x822979fc
	goto loc_822979FC;
loc_822979CC:
	// fmuls f11,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f12,f31
	ctx.f12.f64 = f31.f64;
	// fmadds f11,f10,f10,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f10.f64, ctx.f11.f64)));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fdivs f10,f30,f10
	ctx.f10.f64 = double(float(f30.f64 / ctx.f10.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f13,f0,f10
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fneg f11,f8
	ctx.f11.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_822979FC:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fadds f30,f11,f7
	f30.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// fadds f29,f13,f6
	f29.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f28,f12,f5
	f28.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fsubs f27,f7,f11
	f27.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f26,f6,f13
	f26.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f25,f5,f12
	f25.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fadds f24,f8,f7
	f24.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fadds f23,f9,f6
	f23.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fadds f22,f0,f5
	f22.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fsubs f21,f7,f8
	f21.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fsubs f20,f6,f9
	f20.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f19,f5,f0
	f19.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x82297A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * f28.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f25
	ctx.f10.f64 = double(float(ctx.f13.f64 * f25.f64));
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * f28.f64));
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f11,f25
	ctx.f9.f64 = double(float(ctx.f11.f64 * f25.f64));
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f11,f28
	ctx.f11.f64 = double(float(ctx.f11.f64 * f28.f64));
	// lfs f6,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// lfs f5,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// lfs f2,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f8,f29,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, ctx.f12.f64)));
	// lfs f28,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f28.f64 = double(temp.f32);
	// fmadds f10,f7,f26,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f26.f64, ctx.f10.f64)));
	// stfs f31,460(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// fmadds f13,f7,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f29.f64, ctx.f13.f64)));
	// stfs f31,812(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 812, temp.u32);
	// fmadds f9,f6,f26,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f26.f64, ctx.f9.f64)));
	// fmadds f11,f6,f29,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f11.f64)));
	// fmadds f0,f8,f26,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, f26.f64, ctx.f0.f64)));
	// fmadds f12,f30,f5,f12
	ctx.f12.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f10,f27,f4,f10
	ctx.f10.f64 = double(float(std::fma(f27.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f13,f30,f4,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, ctx.f4.f64, ctx.f13.f64)));
	// fmadds f9,f27,f3,f9
	ctx.f9.f64 = double(float(std::fma(f27.f64, ctx.f3.f64, ctx.f9.f64)));
	// fmadds f11,f30,f3,f11
	ctx.f11.f64 = double(float(std::fma(f30.f64, ctx.f3.f64, ctx.f11.f64)));
	// fmadds f0,f27,f5,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f5.f64, ctx.f0.f64)));
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f12,800(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 800, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,452(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f13,804(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 804, temp.u32);
	// fadds f12,f9,f28
	ctx.f12.f64 = double(float(ctx.f9.f64 + f28.f64));
	// stfs f12,456(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// fadds f13,f11,f28
	ctx.f13.f64 = double(float(ctx.f11.f64 + f28.f64));
	// stfs f13,808(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 808, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297B28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f19
	ctx.f12.f64 = double(float(ctx.f0.f64 * f19.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	ctx.f0.f64 = double(float(ctx.f0.f64 * f22.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f19
	ctx.f10.f64 = double(float(ctx.f13.f64 * f19.f64));
	// lfs f8,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f13,f22
	ctx.f13.f64 = double(float(ctx.f13.f64 * f22.f64));
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f9,f11,f19
	ctx.f9.f64 = double(float(ctx.f11.f64 * f19.f64));
	// lfs f6,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f11,f11,f22
	ctx.f11.f64 = double(float(ctx.f11.f64 * f22.f64));
	// lfs f5,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// lfs f2,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// lfs f1,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f8,f20,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, f20.f64, ctx.f12.f64)));
	// lfs f30,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f30.f64 = double(temp.f32);
	// fmadds f0,f8,f23,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, f23.f64, ctx.f0.f64)));
	// stfs f31,732(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 732, temp.u32);
	// fmadds f10,f7,f20,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, f20.f64, ctx.f10.f64)));
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// fmadds f13,f7,f23,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, f23.f64, ctx.f13.f64)));
	// fmadds f9,f6,f20,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, f20.f64, ctx.f9.f64)));
	// fmadds f11,f6,f23,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f23.f64, ctx.f11.f64)));
	// fmadds f12,f21,f5,f12
	ctx.f12.f64 = double(float(std::fma(f21.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f0,f24,f5,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f10,f21,f4,f10
	ctx.f10.f64 = double(float(std::fma(f21.f64, ctx.f4.f64, ctx.f10.f64)));
	// fmadds f13,f24,f4,f13
	ctx.f13.f64 = double(float(std::fma(f24.f64, ctx.f4.f64, ctx.f13.f64)));
	// fmadds f9,f21,f3,f9
	ctx.f9.f64 = double(float(std::fma(f21.f64, ctx.f3.f64, ctx.f9.f64)));
	// fmadds f11,f24,f3,f11
	ctx.f11.f64 = double(float(std::fma(f24.f64, ctx.f3.f64, ctx.f11.f64)));
	// fadds f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f12,720(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,480(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// fadds f12,f10,f1
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f12,724(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 724, temp.u32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,484(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// fadds f12,f9,f30
	ctx.f12.f64 = double(float(ctx.f9.f64 + f30.f64));
	// stfs f12,728(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 728, temp.u32);
	// fadds f0,f11,f30
	ctx.f0.f64 = double(float(ctx.f11.f64 + f30.f64));
	// stfs f0,488(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// b 0x82298948
	goto loc_82298948;
loc_82297BFC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r24,64(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 64);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297C14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r3,r1,1040
	ctx.r3.s64 = ctx.r1.s64 + 1040;
	// bl 0x82294688
	ctx.lr = 0x82297C24;
	sub_82294688(ctx, base);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r11,r24,1
	ctx.r11.s64 = r24.s64 + 1;
	// ld r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U64(r25.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// ld r6,8(r25)
	ctx.r6.u64 = REX_LOAD_U64(r25.u32 + 8);
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfsx f0,r3,r8
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// std r7,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.r7.u64);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// std r6,8(r5)
	REX_STORE_U64(ctx.r5.u32 + 8, ctx.r6.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfsx f30,r11,r9
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// bctrl 
	ctx.lr = 0x82297C9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f24,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f24.f64 = double(temp.f32);
	// fneg f21,f24
	f21.u64 = f24.u64 ^ 0x8000000000000000;
	// lfs f30,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f30.f64 = double(temp.f32);
	// lfs f23,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f23.f64 = double(temp.f32);
	// fadds f13,f30,f24
	ctx.f13.f64 = double(float(f30.f64 + f24.f64));
	// fneg f20,f23
	f20.u64 = f23.u64 ^ 0x8000000000000000;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f22,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f22.f64 = double(temp.f32);
	// lfs f29,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f29.f64 = double(temp.f32);
	// fneg f19,f22
	f19.u64 = f22.u64 ^ 0x8000000000000000;
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f29,f23
	ctx.f11.f64 = double(float(f29.f64 + f23.f64));
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f28,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f28.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f22,f28
	ctx.f9.f64 = double(float(f22.f64 + f28.f64));
	// lfs f7,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f21,f30
	ctx.f6.f64 = double(float(f21.f64 + f30.f64));
	// lfs f5,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f3,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f4,f20,f29
	ctx.f4.f64 = double(float(f20.f64 + f29.f64));
	// lfs f27,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f27.f64 = double(temp.f32);
	// fmuls f25,f12,f13
	f25.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f26,f19,f28
	f26.f64 = double(float(f19.f64 + f28.f64));
	// lfs f18,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f18.f64 = double(temp.f32);
	// stfs f31,860(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 860, temp.u32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f0,f0,f6
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f6,f8,f6
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmadds f2,f10,f11,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f2.f64)));
	// fmadds f0,f10,f4,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f12,f5,f4,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f12.f64)));
	// fmadds f10,f3,f4,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f4.f64, ctx.f6.f64)));
	// fmadds f6,f9,f7,f2
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f2.f64)));
	// fmadds f0,f26,f7,f0
	ctx.f0.f64 = double(float(std::fma(f26.f64, ctx.f7.f64, ctx.f0.f64)));
	// fmadds f12,f26,f1,f12
	ctx.f12.f64 = double(float(std::fma(f26.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f10,f26,f18,f10
	ctx.f10.f64 = double(float(std::fma(f26.f64, f18.f64, ctx.f10.f64)));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f26,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f26.f64 = double(temp.f32);
	// fmadds f8,f5,f11,f25
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, f25.f64)));
	// stfs f0,848(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 848, temp.u32);
	// fadds f0,f26,f12
	ctx.f0.f64 = double(float(f26.f64 + ctx.f12.f64));
	// stfs f0,852(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 852, temp.u32);
	// fmadds f0,f3,f11,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f13.f64)));
	// lfs f25,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f25.f64 = double(temp.f32);
	// fadds f7,f6,f27
	ctx.f7.f64 = double(float(ctx.f6.f64 + f27.f64));
	// fadds f12,f25,f10
	ctx.f12.f64 = double(float(f25.f64 + ctx.f10.f64));
	// stfs f31,524(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfs f7,512(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stfs f12,856(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 856, temp.u32);
	// addi r5,r1,848
	ctx.r5.s64 = ctx.r1.s64 + 848;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// fmadds f13,f9,f1,f8
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f8.f64)));
	// fmadds f0,f9,f18,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, f18.f64, ctx.f0.f64)));
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,516(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,520(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297DA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82297DB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f24.f64 - f30.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f21,f30
	ctx.f12.f64 = double(float(f21.f64 - f30.f64));
	// lfs f11,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f23,f29
	ctx.f9.f64 = double(float(f23.f64 - f29.f64));
	// fsubs f8,f20,f29
	ctx.f8.f64 = double(float(f20.f64 - f29.f64));
	// stfs f31,556(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 556, temp.u32);
	// stfs f31,764(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 764, temp.u32);
	// fsubs f5,f22,f28
	ctx.f5.f64 = double(float(f22.f64 - f28.f64));
	// lfs f4,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f19,f28
	ctx.f3.f64 = double(float(f19.f64 - f28.f64));
	// lfs f7,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f6,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,544
	ctx.r5.s64 = ctx.r1.s64 + 544;
	// lfs f30,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f30.f64 = double(temp.f32);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// lfs f2,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f10,f7,f9,f29
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f9.f64, f29.f64)));
	// fmadds f31,f6,f9,f31
	f31.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, f31.f64)));
	// fmadds f0,f4,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f0.f64)));
	// fmadds f13,f7,f8,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f8.f64, ctx.f13.f64)));
	// fmadds f11,f6,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f12,f4,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f10,f5,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f5.f64, ctx.f2.f64, ctx.f10.f64)));
	// fmadds f9,f5,f1,f31
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f1.f64, f31.f64)));
	// fmadds f0,f5,f30,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, f30.f64, ctx.f0.f64)));
	// fmadds f13,f3,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f13.f64)));
	// fmadds f11,f3,f1,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, ctx.f11.f64)));
	// fmadds f12,f3,f30,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, f30.f64, ctx.f12.f64)));
	// fadds f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f10,752(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 752, temp.u32);
	// fadds f10,f9,f26
	ctx.f10.f64 = double(float(ctx.f9.f64 + f26.f64));
	// stfs f10,756(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 756, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,760(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 760, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,544(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// fadds f0,f11,f26
	ctx.f0.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f0,548(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// fadds f0,f12,f25
	ctx.f0.f64 = double(float(ctx.f12.f64 + f25.f64));
	// stfs f0,552(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 552, temp.u32);
	// b 0x82298948
	goto loc_82298948;
loc_82297E84:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r23,3
	r23.s64 = 3;
	// lwz r11,80(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 80);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// ld r7,0(r25)
	ctx.r7.u64 = REX_LOAD_U64(r25.u32 + 0);
	// lfs f13,72(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// ld r5,8(r25)
	ctx.r5.u64 = REX_LOAD_U64(r25.u32 + 8);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lfs f0,4(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// divw r4,r8,r23
	ctx.r4.u64 = uint32_t((r23.s32 && !(ctx.r8.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r8.s32 / r23.s32 : 0);
	// divw r3,r6,r23
	ctx.r3.u64 = uint32_t((r23.s32 && !(ctx.r6.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r6.s32 / r23.s32 : 0);
	// lfs f12,68(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// mulli r4,r4,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(3));
	// std r7,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
	// std r5,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r5.u64);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mulli r10,r3,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(3));
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// subf r9,r4,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r4.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f12,r9,r7
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r7.u32, temp.u32);
	// stfsx f12,r10,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
	// bctrl 
	ctx.lr = 0x82297F38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f30,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f30.f64 = double(temp.f32);
	// fneg f21,f30
	f21.u64 = f30.u64 ^ 0x8000000000000000;
	// lfs f29,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f29.f64 = double(temp.f32);
	// lfs f24,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	f24.f64 = double(temp.f32);
	// fneg f20,f29
	f20.u64 = f29.u64 ^ 0x8000000000000000;
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f28,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	f28.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f23,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f23.f64 = double(temp.f32);
	// fneg f19,f28
	f19.u64 = f28.u64 ^ 0x8000000000000000;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f22,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	f22.f64 = double(temp.f32);
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f21,f24
	ctx.f7.f64 = double(float(f21.f64 + f24.f64));
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f20,f23
	ctx.f5.f64 = double(float(f20.f64 + f23.f64));
	// lfs f4,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f13,f10,f29,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, f29.f64, ctx.f13.f64)));
	// lfs f2,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f27,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	f27.f64 = double(temp.f32);
	// fadds f1,f19,f22
	ctx.f1.f64 = double(float(f19.f64 + f22.f64));
	// stfs f31,828(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 828, temp.u32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f13,f6,f28,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f13.f64)));
	// fmuls f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmadds f0,f10,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f12,f8,f5,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f10,f4,f5,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f7.f64)));
	// fmadds f0,f6,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, ctx.f0.f64)));
	// fmadds f12,f3,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, ctx.f12.f64)));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// lfs f26,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	f26.f64 = double(temp.f32);
	// stfs f0,816(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 816, temp.u32);
	// fadds f0,f26,f12
	ctx.f0.f64 = double(float(f26.f64 + ctx.f12.f64));
	// stfs f0,820(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 820, temp.u32);
	// fadds f0,f13,f27
	ctx.f0.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f11,f8,f29,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, f29.f64, ctx.f11.f64)));
	// fmadds f0,f4,f29,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f9.f64)));
	// lfs f25,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	f25.f64 = double(temp.f32);
	// fmadds f10,f2,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f1.f64, ctx.f10.f64)));
	// stfs f31,284(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// fmadds f13,f3,f28,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, f28.f64, ctx.f11.f64)));
	// fmadds f0,f2,f28,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, f28.f64, ctx.f0.f64)));
	// fadds f12,f25,f10
	ctx.f12.f64 = double(float(f25.f64 + ctx.f10.f64));
	// stfs f12,824(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 824, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,276(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298034;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fsubs f0,f19,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f19.f64 - f22.f64));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * f30.f64));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f6,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f20,f23
	ctx.f3.f64 = double(float(f20.f64 - f23.f64));
	// lfs f4,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f11,f21,f24
	ctx.f11.f64 = double(float(f21.f64 - f24.f64));
	// lfs f2,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f1,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lfs f24,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	f24.f64 = double(temp.f32);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// stfs f31,620(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// fmuls f23,f13,f0
	f23.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f31,700(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 700, temp.u32);
	// fmuls f22,f6,f0
	f22.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f9,f2,f29,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f2.f64, f29.f64, ctx.f9.f64)));
	// fmadds f7,f1,f29,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, ctx.f7.f64)));
	// fmadds f5,f24,f29,f5
	ctx.f5.f64 = double(float(std::fma(f24.f64, f29.f64, ctx.f5.f64)));
	// fmadds f12,f12,f11,f23
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, f23.f64)));
	// fmadds f10,f10,f11,f22
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, f22.f64)));
	// fmadds f0,f8,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f13,f13,f28,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f9.f64)));
	// fmadds f11,f6,f28,f7
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f7.f64)));
	// fmadds f9,f4,f28,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, f28.f64, ctx.f5.f64)));
	// fmadds f12,f3,f2,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f12.f64)));
	// fmadds f10,f3,f1,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f3.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f0,f24,f3,f0
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f3.f64, ctx.f0.f64)));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// stfs f13,688(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// fadds f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 + f26.f64));
	// stfs f13,692(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// fadds f13,f9,f25
	ctx.f13.f64 = double(float(ctx.f9.f64 + f25.f64));
	// stfs f13,696(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 696, temp.u32);
	// fadds f13,f12,f27
	ctx.f13.f64 = double(float(ctx.f12.f64 + f27.f64));
	// stfs f13,608(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// fadds f13,f10,f26
	ctx.f13.f64 = double(float(ctx.f10.f64 + f26.f64));
	// stfs f13,612(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// fadds f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 + f25.f64));
	// stfs f0,616(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298114;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f22,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f22.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// fadds f0,f19,f22
	ctx.f0.f64 = double(float(f19.f64 + f22.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f9,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lfs f7,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// lfs f18,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f18.f64 = double(temp.f32);
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * f30.f64));
	// lfs f24,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f24.f64 = double(temp.f32);
	// fadds f5,f21,f24
	ctx.f5.f64 = double(float(f21.f64 + f24.f64));
	// lfs f3,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * f30.f64));
	// lfs f23,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	f23.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f17,f9,f0
	f17.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f31,300(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fmuls f0,f18,f0
	ctx.f0.f64 = double(float(f18.f64 * ctx.f0.f64));
	// stfs f31,716(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 716, temp.u32);
	// fmadds f8,f3,f29,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, f29.f64, ctx.f8.f64)));
	// fadds f16,f20,f23
	f16.f64 = double(float(f20.f64 + f23.f64));
	// fmadds f6,f2,f29,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, f29.f64, ctx.f6.f64)));
	// fmadds f11,f4,f29,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f11.f64)));
	// fmadds f10,f10,f5,f1
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f7,f7,f5,f17
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f5.f64, f17.f64)));
	// fmadds f0,f13,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f12,f12,f28,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f28.f64, ctx.f8.f64)));
	// fmadds f9,f9,f28,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f28.f64, ctx.f6.f64)));
	// fmadds f11,f18,f28,f11
	ctx.f11.f64 = double(float(std::fma(f18.f64, f28.f64, ctx.f11.f64)));
	// fmadds f13,f16,f3,f10
	ctx.f13.f64 = double(float(std::fma(f16.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmadds f10,f16,f2,f7
	ctx.f10.f64 = double(float(std::fma(f16.f64, ctx.f2.f64, ctx.f7.f64)));
	// fmadds f0,f16,f4,f0
	ctx.f0.f64 = double(float(std::fma(f16.f64, ctx.f4.f64, ctx.f0.f64)));
	// fadds f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 + f26.f64));
	// stfs f12,708(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 708, temp.u32);
	// fadds f12,f9,f25
	ctx.f12.f64 = double(float(ctx.f9.f64 + f25.f64));
	// stfs f12,712(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 712, temp.u32);
	// fadds f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 + f27.f64));
	// stfs f11,704(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// fadds f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f13,292(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// fadds f13,f10,f25
	ctx.f13.f64 = double(float(ctx.f10.f64 + f25.f64));
	// stfs f13,296(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298200;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298214;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f12,f19,f22
	ctx.f12.f64 = double(float(f19.f64 - f22.f64));
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f21,f24
	ctx.f7.f64 = double(float(f21.f64 - f24.f64));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f10,f30
	ctx.f5.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * f30.f64));
	// lfs f13,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f8,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 * f30.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f30,f13,f12
	f30.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// fmadds f5,f6,f29,f5
	ctx.f5.f64 = double(float(std::fma(ctx.f6.f64, f29.f64, ctx.f5.f64)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// fmadds f3,f2,f29,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f2.f64, f29.f64, ctx.f3.f64)));
	// fmadds f1,f4,f29,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, f29.f64, ctx.f1.f64)));
	// fsubs f24,f20,f23
	f24.f64 = double(float(f20.f64 - f23.f64));
	// fmadds f10,f10,f7,f31
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, f31.f64)));
	// fmadds f9,f9,f7,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, f30.f64)));
	// fmadds f12,f8,f7,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f7.f64, ctx.f12.f64)));
	// fmadds f0,f0,f28,f5
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f28.f64, ctx.f5.f64)));
	// fmadds f13,f13,f28,f3
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, f28.f64, ctx.f3.f64)));
	// fmadds f11,f11,f28,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, f28.f64, ctx.f1.f64)));
	// fmadds f10,f24,f6,f10
	ctx.f10.f64 = double(float(std::fma(f24.f64, ctx.f6.f64, ctx.f10.f64)));
	// fmadds f9,f24,f2,f9
	ctx.f9.f64 = double(float(std::fma(f24.f64, ctx.f2.f64, ctx.f9.f64)));
	// fmadds f12,f24,f4,f12
	ctx.f12.f64 = double(float(std::fma(f24.f64, ctx.f4.f64, ctx.f12.f64)));
	// fadds f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 + f27.f64));
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// fadds f0,f13,f26
	ctx.f0.f64 = double(float(ctx.f13.f64 + f26.f64));
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// fadds f0,f11,f25
	ctx.f0.f64 = double(float(ctx.f11.f64 + f25.f64));
	// stfs f0,312(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fadds f0,f10,f27
	ctx.f0.f64 = double(float(ctx.f10.f64 + f27.f64));
	// stfs f0,336(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fadds f0,f9,f26
	ctx.f0.f64 = double(float(ctx.f9.f64 + f26.f64));
	// stfs f0,340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fadds f0,f12,f25
	ctx.f0.f64 = double(float(ctx.f12.f64 + f25.f64));
	// stfs f0,344(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// b 0x82298948
	goto loc_82298948;
loc_822982D4:
	// lwz r24,64(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r17,r1,80
	r17.s64 = ctx.r1.s64 + 80;
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r24,2
	ctx.r8.s64 = r24.s64 + 2;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r23,3
	r23.s64 = 3;
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r7,0(r28)
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// divw r6,r8,r23
	ctx.r6.u64 = uint32_t((r23.s32 && !(ctx.r8.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r8.s32 / r23.s32 : 0);
	// lfsx f0,r10,r27
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r9,r11
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r9,r17
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + r17.u32, temp.u32);
	// mulli r10,r6,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(3));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// ld r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lfs f10,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ld r22,0(r29)
	r22.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// ld r21,8(r29)
	r21.u64 = REX_LOAD_U64(r29.u32 + 8);
	// lfs f8,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// ld r20,0(r30)
	r20.u64 = REX_LOAD_U64(r30.u32 + 0);
	// lfs f7,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// ld r19,8(r30)
	r19.u64 = REX_LOAD_U64(r30.u32 + 8);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f6,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// lfs f5,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lwz r10,12(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// lfs f4,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f3,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r18,r1,240
	r18.s64 = ctx.r1.s64 + 240;
	// std r6,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r6.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfsx f27,r11,r27
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	f27.f64 = double(temp.f32);
	// std r4,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r4.u64);
	// std r22,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, r22.u64);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// std r21,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, r21.u64);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f12,f0
	f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// std r20,0(r18)
	REX_STORE_U64(r18.u32 + 0, r20.u64);
	// std r19,8(r18)
	REX_STORE_U64(r18.u32 + 8, r19.u64);
	// fmadds f9,f12,f9,f30
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, f30.f64)));
	// fmadds f11,f12,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f11.f64)));
	// fmadds f12,f12,f7,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f10.f64)));
	// fmadds f13,f6,f13,f9
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f9.f64)));
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f0,f0,f4,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f12.f64)));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f2
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82298420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821814a0
	ctx.lr = 0x82298430;
	sub_821814A0(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// ld r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 8);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r6,0(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f4,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lfs f3,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// std r5,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r5.u64);
	// fmadds f11,f12,f8,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f8.f64, ctx.f11.f64)));
	// lfs f2,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// std r4,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r4.u64);
	// fmadds f10,f12,f7,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f10.f64)));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f12,f12,f6,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f9.f64)));
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f8,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// ld r27,0(r29)
	r27.u64 = REX_LOAD_U64(r29.u32 + 0);
	// ld r22,8(r29)
	r22.u64 = REX_LOAD_U64(r29.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// fmadds f13,f5,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f11.f64)));
	// ld r21,0(r30)
	r21.u64 = REX_LOAD_U64(r30.u32 + 0);
	// ld r20,8(r30)
	r20.u64 = REX_LOAD_U64(r30.u32 + 8);
	// fmadds f11,f4,f0,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f10.f64)));
	// fmadds f0,f0,f3,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f12.f64)));
	// std r27,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r27.u64);
	// std r22,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, r22.u64);
	// std r21,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r21.u64);
	// std r20,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r20.u64);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,8(r7)
	REX_STORE_U64(ctx.r7.u32 + 8, ctx.r11.u64);
	// std r10,0(r7)
	REX_STORE_U64(ctx.r7.u32 + 0, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x82298514;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f27.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821814a0
	ctx.lr = 0x82298524;
	sub_821814A0(ctx, base);
	// addi r11,r24,1
	ctx.r11.s64 = r24.s64 + 1;
	// addi r22,r1,96
	r22.s64 = ctx.r1.s64 + 96;
	// ld r8,8(r25)
	ctx.r8.u64 = REX_LOAD_U64(r25.u32 + 8);
	// divw r10,r11,r23
	ctx.r10.u64 = uint32_t((r23.s32 && !(ctx.r11.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r11.s32 / r23.s32 : 0);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r21,r1,80
	r21.s64 = ctx.r1.s64 + 80;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfsx f27,r27,r22
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r27.u32 + r22.u32, temp.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// ld r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U64(r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stfsx f27,r27,r21
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r27.u32 + r21.u32, temp.u32);
	// std r10,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// std r8,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r8.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f5,f10,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f4,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f3,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lfs f10,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f25,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f9,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f4,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f8.f64)));
	// lfs f1,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f7,f12,f3,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f7.f64)));
	// lfs f26,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmadds f0,f12,f2,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, ctx.f0.f64)));
	// lfs f28,200(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 200);
	f28.f64 = double(temp.f32);
	// fmadds f12,f11,f4,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f6.f64)));
	// lfs f30,192(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 192);
	f30.f64 = double(temp.f32);
	// fmadds f6,f11,f3,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f5.f64)));
	// lfs f29,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	f29.f64 = double(temp.f32);
	// fmadds f13,f11,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f13.f64)));
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f31,412(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// fmadds f11,f1,f10,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f8.f64)));
	// fmadds f8,f26,f10,f7
	ctx.f8.f64 = double(float(std::fma(f26.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f0,f25,f10,f0
	ctx.f0.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, ctx.f0.f64)));
	// fmadds f12,f1,f9,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f12.f64)));
	// fmadds f10,f26,f9,f6
	ctx.f10.f64 = double(float(std::fma(f26.f64, ctx.f9.f64, ctx.f6.f64)));
	// fmadds f13,f25,f9,f13
	ctx.f13.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, ctx.f13.f64)));
	// fadds f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 + f30.f64));
	// stfs f11,368(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fadds f11,f29,f8
	ctx.f11.f64 = double(float(f29.f64 + ctx.f8.f64));
	// stfs f11,372(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 + ctx.f0.f64));
	// stfs f0,376(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fadds f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f0,400(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// fadds f0,f10,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 + f29.f64));
	// stfs f0,404(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// fadds f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f0,408(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298654;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fneg f26,f27
	ctx.fpscr.disableFlushMode();
	f26.u64 = f27.u64 ^ 0x8000000000000000;
	// stfsx f26,r27,r22
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + r22.u32, temp.u32);
	// stfsx f26,r27,r21
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + r21.u32, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f10,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f7,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f11,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f3,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f2,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f9,f13,f3,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f3.f64, ctx.f9.f64)));
	// fmadds f8,f13,f2,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f8.f64)));
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f1,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f6.f64)));
	// lfs f7,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f3,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f5.f64)));
	// lfs f25,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f24,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f24.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// stfs f31,444(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// stfs f31,476(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// fmadds f5,f11,f2,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f4.f64)));
	// fmadds f12,f11,f1,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f12.f64)));
	// fmadds f9,f7,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmadds f8,f25,f0,f8
	ctx.f8.f64 = double(float(std::fma(f25.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f0,f24,f0,f13
	ctx.f0.f64 = double(float(std::fma(f24.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f13,f7,f10,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f11,f25,f10,f5
	ctx.f11.f64 = double(float(std::fma(f25.f64, ctx.f10.f64, ctx.f5.f64)));
	// fmadds f12,f24,f10,f12
	ctx.f12.f64 = double(float(std::fma(f24.f64, ctx.f10.f64, ctx.f12.f64)));
	// fadds f9,f9,f30
	ctx.f9.f64 = double(float(ctx.f9.f64 + f30.f64));
	// stfs f9,432(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// fadds f9,f8,f29
	ctx.f9.f64 = double(float(ctx.f8.f64 + f29.f64));
	// stfs f9,436(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,440(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// fadds f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 + f29.f64));
	// stfs f0,468(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// fadds f0,f12,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 + f28.f64));
	// stfs f0,472(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229874C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r24,2
	ctx.r11.s64 = r24.s64 + 2;
	// stfsx f31,r27,r22
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + r22.u32, temp.u32);
	// stfsx f31,r27,r21
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + r21.u32, temp.u32);
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// divw r10,r11,r23
	ctx.r10.u64 = uint32_t((r23.s32 && !(ctx.r11.s32 == INT32_MIN && r23.s32 == -1)) ? ctx.r11.s32 / r23.s32 : 0);
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stfsx f27,r27,r25
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r27.u32 + r25.u32, temp.u32);
	// stfsx f27,r27,r24
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r27.u32 + r24.u32, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229878C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f3,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f11,f13
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f2,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f27,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmadds f8,f0,f3,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f8.f64)));
	// stfs f31,508(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// fmadds f7,f0,f2,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f7.f64)));
	// fmadds f0,f0,f6,f10
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f10.f64)));
	// lfs f10,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f6,f5
	ctx.f9.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f5.f64)));
	// lfs f5,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f12,f3,f4
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64)));
	// stfs f31,540(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// fmadds f13,f12,f2,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, ctx.f13.f64)));
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// fmadds f8,f1,f11,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f8.f64)));
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// fmadds f7,f27,f11,f7
	ctx.f7.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f7.f64)));
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// fmadds f0,f5,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f12,f5,f10,f9
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f10.f64, ctx.f9.f64)));
	// fmadds f11,f1,f10,f6
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f10.f64, ctx.f6.f64)));
	// fmadds f13,f27,f10,f13
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f10.f64, ctx.f13.f64)));
	// fadds f9,f8,f29
	ctx.f9.f64 = double(float(ctx.f8.f64 + f29.f64));
	// stfs f9,500(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// fadds f9,f7,f28
	ctx.f9.f64 = double(float(ctx.f7.f64 + f28.f64));
	// stfs f9,504(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,496(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// fadds f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f0,528(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// fadds f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 + f29.f64));
	// stfs f0,532(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// fadds f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f0,536(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stfsx f26,r27,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + r25.u32, temp.u32);
	// stfsx f26,r27,r24
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r27.u32 + r24.u32, temp.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298880;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f4,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f12,f6,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f10.f64)));
	// lfs f1,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f7,f12,f4,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f7.f64)));
	// lfs f27,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f27.f64 = double(temp.f32);
	// fmadds f6,f0,f6,f11
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f11.f64)));
	// lfs f11,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f0,f4,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f4.f64, ctx.f9.f64)));
	// stfs f31,572(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 572, temp.u32);
	// fmadds f12,f12,f3,f5
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f5.f64)));
	// stfs f31,604(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// fmadds f0,f0,f3,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f8.f64)));
	// fmadds f10,f2,f13,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f10.f64)));
	// fmadds f8,f1,f13,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f7.f64)));
	// fmadds f13,f27,f13,f12
	ctx.f13.f64 = double(float(std::fma(f27.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f0,f27,f11,f0
	ctx.f0.f64 = double(float(std::fma(f27.f64, ctx.f11.f64, ctx.f0.f64)));
	// fmadds f12,f2,f11,f6
	ctx.f12.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f6.f64)));
	// fmadds f11,f1,f11,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, ctx.f9.f64)));
	// fadds f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 + f30.f64));
	// stfs f10,560(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// fadds f10,f8,f29
	ctx.f10.f64 = double(float(ctx.f8.f64 + f29.f64));
	// stfs f10,564(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,600(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// fadds f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfs f0,592(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,568(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// fadds f0,f11,f29
	ctx.f0.f64 = double(float(ctx.f11.f64 + f29.f64));
	// stfs f0,596(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 596, temp.u32);
loc_82298948:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82298bec
	goto loc_82298BEC;
loc_8229895C:
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 116);
	// addic. r24,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r24.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt 0x82298bec
	if (ctx.cr0.lt) goto loc_82298BEC;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// rlwinm r22,r24,2,0,29
	r22.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r23,r24,4,0,27
	r23.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
loc_82298974:
	// lwz r11,124(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 124);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * f31.f64));
	// add r11,r23,r11
	ctx.r11.u64 = r23.u64 + ctx.r11.u64;
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f3,f11,f31
	ctx.f3.f64 = double(float(ctx.f11.f64 * f31.f64));
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f31
	ctx.f5.f64 = double(float(ctx.f8.f64 * f31.f64));
	// addi r10,r1,1024
	ctx.r10.s64 = ctx.r1.s64 + 1024;
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * f31.f64));
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fmuls f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 * f31.f64));
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f29,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f29.f64 = double(temp.f32);
	// std r8,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f27,f29,f31
	f27.f64 = double(float(f29.f64 * f31.f64));
	// lfs f1,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f30,f2,f31
	f30.f64 = double(float(ctx.f2.f64 * f31.f64));
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f25,f10,f9
	f25.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f31,188(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fadds f24,f6,f5
	f24.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// fadds f5,f4,f5
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f23,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	f23.f64 = double(temp.f32);
	// fadds f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// lfs f22,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	f22.f64 = double(temp.f32);
	// fadds f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// lfs f21,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f21.f64 = double(temp.f32);
	// fadds f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// fmuls f28,f1,f31
	f28.f64 = double(float(ctx.f1.f64 * f31.f64));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// fadds f26,f26,f30
	f26.f64 = double(float(f26.f64 + f30.f64));
	// stfs f26,144(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fadds f9,f24,f27
	ctx.f9.f64 = double(float(f24.f64 + f27.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fadds f0,f4,f27
	ctx.f0.f64 = double(float(ctx.f4.f64 + f27.f64));
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fadds f0,f3,f30
	ctx.f0.f64 = double(float(ctx.f3.f64 + f30.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f9,f5,f29
	ctx.f9.f64 = double(float(ctx.f5.f64 + f29.f64));
	// stfs f9,184(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fadds f9,f7,f28
	ctx.f9.f64 = double(float(ctx.f7.f64 + f28.f64));
	// stfs f9,164(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f26,f25,f28
	f26.f64 = double(float(f25.f64 + f28.f64));
	// stfs f26,160(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f0,1028(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1028);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f12,1032(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1032);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,1024(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 1024);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// ld r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// fmadds f10,f13,f10,f7
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f7.f64)));
	// fmadds f11,f13,f11,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f9.f64)));
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// fmadds f0,f13,f6,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f0.f64)));
	// ld r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// fmadds f13,f12,f2,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, ctx.f11.f64)));
	// fmadds f11,f12,f1,f10
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f10.f64)));
	// fmadds f0,f12,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f29.f64, ctx.f0.f64)));
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + f23.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f13,f11,f22
	ctx.f13.f64 = double(float(ctx.f11.f64 + f22.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// std r9,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r9.u64);
	// fadds f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 + f21.f64));
	// std r8,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r8.u64);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r21,r1,176
	r21.s64 = ctx.r1.s64 + 176;
	// lwz r20,144(r27)
	r20.u64 = REX_LOAD_U32(r27.u32 + 144);
	// ld r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// addi r19,r1,240
	r19.s64 = ctx.r1.s64 + 240;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r18,r1,256
	r18.s64 = ctx.r1.s64 + 256;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ld r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r6,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// ld r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U64(r21.u32 + 0);
	// lfsx f30,r20,r22
	temp.u32 = REX_LOAD_U32(r20.u32 + r22.u32);
	f30.f64 = double(temp.f32);
	// ld r8,8(r21)
	ctx.r8.u64 = REX_LOAD_U64(r21.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r7,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// std r5,8(r18)
	REX_STORE_U64(r18.u32 + 8, ctx.r5.u64);
	// std r9,0(r19)
	REX_STORE_U64(r19.u32 + 0, ctx.r9.u64);
	// std r8,8(r19)
	REX_STORE_U64(r19.u32 + 8, ctx.r8.u64);
	// std r11,0(r18)
	REX_STORE_U64(r18.u32 + 0, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82298B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821814a0
	ctx.lr = 0x82298B30;
	sub_821814A0(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r23,r23,-16
	r23.s64 = r23.s64 + -16;
	// addi r22,r22,-4
	r22.s64 = r22.s64 + -4;
	// bge 0x82298974
	if (!ctx.cr0.lt) goto loc_82298974;
	// b 0x82298bec
	goto loc_82298BEC;
loc_82298B44:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298B58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298B70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821814a0
	ctx.lr = 0x82298B80;
	sub_821814A0(ctx, base);
	// b 0x82298bec
	goto loc_82298BEC;
loc_82298B84:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82294688
	ctx.lr = 0x82298B90;
	sub_82294688(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298BA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,624(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lfs f13,628(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 628);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,656(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// stfs f13,660(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stfs f31,668(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 668, temp.u32);
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// lfs f12,632(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 632);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,664(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82298BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82298BEC:
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x826a2cbc
	ctx.lr = 0x82298BF8;
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_82397260) {
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
	ctx.lr = 0x82397268;
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-9280(r1)
	ea = -9280 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 292);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823972a0
	if (ctx.cr6.eq) goto loc_823972A0;
	// lwz r11,328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// lwz r26,48(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// b 0x823972b4
	goto loc_823972B4;
loc_823972A0:
	// lwz r11,336(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 336);
	// lwz r10,320(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 320);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r26,48(r8)
	r26.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
loc_823972B4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,336(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 336);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823968a0
	ctx.lr = 0x823972C4;
	sub_823968A0(ctx, base);
	// lwz r3,348(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 348);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397340
	if (ctx.cr6.eq) goto loc_82397340;
loc_823972D4:
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,376(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 376);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// divwu r5,r9,r10
	ctx.r5.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8239e890
	ctx.lr = 0x823972F4;
	sub_8239E890(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397308
	if (ctx.cr6.eq) goto loc_82397308;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82397a88
	if (!ctx.cr6.eq) goto loc_82397A88;
loc_82397308:
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
loc_8239730C:
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82397310:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82397a80
	if (!ctx.cr6.lt) goto loc_82397A80;
	// rlwinm r10,r26,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82397688
	if (ctx.cr6.eq) goto loc_82397688;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x82397688
	if (!ctx.cr6.eq) goto loc_82397688;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82397698
	if (!ctx.cr6.eq) goto loc_82397698;
	// li r31,4
	r31.s64 = 4;
	// b 0x823976d0
	goto loc_823976D0;
loc_82397340:
	// lwz r3,364(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823972d4
	if (!ctx.cr6.eq) goto loc_823972D4;
	// rlwinm r11,r26,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823974c8
	if (ctx.cr6.eq) goto loc_823974C8;
	// lwz r11,352(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823974c8
	if (!ctx.cr6.eq) goto loc_823974C8;
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,256(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 256);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82340718
	ctx.lr = 0x8239738C;
	sub_82340718(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82397a88
	if (!ctx.cr6.eq) goto loc_82397A88;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823973d4
	if (!ctx.cr6.eq) goto loc_823973D4;
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,220(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 220);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823d0fb0
	ctx.lr = 0x823973BC;
	sub_823D0FB0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82397310
	goto loc_82397310;
loc_823973D4:
	// rlwinm r11,r26,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82397418
	if (ctx.cr6.eq) goto loc_82397418;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82397418
	if (!ctx.cr6.eq) goto loc_82397418;
	// li r7,64
	ctx.r7.s64 = 64;
	// lwz r4,220(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 220);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823d1378
	ctx.lr = 0x82397400;
	sub_823D1378(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82397310
	goto loc_82397310;
loc_82397418:
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 1);
	// divw r28,r29,r8
	r28.u64 = uint32_t((ctx.r8.s32 && !(r29.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? r29.s32 / ctx.r8.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x823974b8
	if (!ctx.cr6.gt) goto loc_823974B8;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82397440:
	// rotlwi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 1);
	// divw. r10,r29,r8
	ctx.r10.u64 = uint32_t((ctx.r8.s32 && !(r29.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? r29.s32 / ctx.r8.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x82397484
	if (!ctx.cr0.gt) goto loc_82397484;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r1,976
	ctx.r10.s64 = ctx.r1.s64 + 976;
	// subf r6,r11,r31
	ctx.r6.u64 = r31.u64 - ctx.r11.u64;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
loc_82397478:
	// lhzux r7,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82397478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397478;
loc_82397484:
	// lwz r11,220(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 220);
	// li r7,64
	ctx.r7.s64 = 64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r1,976
	ctx.r3.s64 = ctx.r1.s64 + 976;
	// bl 0x823d0fb0
	ctx.lr = 0x823974A0;
	sub_823D0FB0(ctx, base);
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82397440
	if (ctx.cr6.lt) goto loc_82397440;
loc_823974B8:
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82397310
	goto loc_82397310;
loc_823974C8:
	// lwz r3,368(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823972d4
	if (!ctx.cr6.eq) goto loc_823972D4;
	// lwz r3,372(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 372);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82397508
	if (ctx.cr6.eq) goto loc_82397508;
	// lwz r11,356(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,376(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 376);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// divwu r5,r9,r10
	ctx.r5.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// bl 0x8239e890
	ctx.lr = 0x82397500;
	sub_8239E890(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// b 0x82397308
	goto loc_82397308;
loc_82397508:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// li r5,1
	ctx.r5.s64 = 1;
	// divwu r9,r31,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// lwz r3,256(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 256);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r6,r9,r10
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// bl 0x82340718
	ctx.lr = 0x8239752C;
	sub_82340718(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82397540
	if (ctx.cr6.eq) goto loc_82397540;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// bne cr6,0x82397a88
	if (!ctx.cr6.eq) goto loc_82397A88;
loc_82397540:
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x823975f0
	if (!ctx.cr6.eq) goto loc_823975F0;
	// rlwinm r10,r8,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823975cc
	if (ctx.cr6.eq) goto loc_823975CC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82397564:
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,1(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// xori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 ^ 128;
	// lbz r4,3(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// xori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 ^ 128;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// xori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 ^ 128;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r31,6(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r30,7(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// stb r5,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// xori r5,r4,128
	ctx.r5.u64 = ctx.r4.u64 ^ 128;
	// stb r3,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// xori r4,r10,128
	ctx.r4.u64 = ctx.r10.u64 ^ 128;
	// stb r7,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r7.u8);
	// xori r3,r6,128
	ctx.r3.u64 = ctx.r6.u64 ^ 128;
	// xori r10,r31,128
	ctx.r10.u64 = r31.u64 ^ 128;
	// stb r5,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// xori r7,r30,128
	ctx.r7.u64 = r30.u64 ^ 128;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// stb r3,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r7,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, ctx.r7.u8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82397564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397564;
loc_823975CC:
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823975f0
	if (ctx.cr6.eq) goto loc_823975F0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_823975E0:
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// xori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 ^ 128;
	// stbu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r6.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823975e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823975E0;
loc_823975F0:
	// lwz r11,292(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 292);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8239730c
	if (!ctx.cr6.eq) goto loc_8239730C;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82397640
	if (!ctx.cr6.eq) goto loc_82397640;
	// rlwinm r11,r8,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8239730c
	if (ctx.cr6.eq) goto loc_8239730C;
	// addi r10,r27,-2
	ctx.r10.s64 = r27.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8239761C:
	// lhz r11,2(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// rlwinm r7,r11,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// sthu r4,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r4.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8239761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239761C;
	// b 0x8239730c
	goto loc_8239730C;
loc_82397640:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x8239730c
	if (!ctx.cr6.eq) goto loc_8239730C;
	// rlwinm r10,r8,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8239730c
	if (ctx.cr6.eq) goto loc_8239730C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8239765C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwinm r6,r10,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r4,r7,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r4,r6
	ctx.r3.u64 = ctx.r4.u64 | ctx.r6.u64;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8239765c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239765C;
	// b 0x8239730c
	goto loc_8239730C;
loc_82397688:
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bne cr6,0x82397698
	if (!ctx.cr6.eq) goto loc_82397698;
	// li r31,2
	r31.s64 = 2;
	// b 0x823976d0
	goto loc_823976D0;
loc_82397698:
	// rlwinm r10,r26,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823976b4
	if (ctx.cr6.eq) goto loc_823976B4;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823976b4
	if (!ctx.cr6.eq) goto loc_823976B4;
	// li r31,2
	r31.s64 = 2;
	// b 0x823976d0
	goto loc_823976D0;
loc_823976B4:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r31,r10,r8
	r31.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_823976D0:
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r6,r31,r8
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// divwu r5,r7,r8
	ctx.r5.u64 = uint32_t(ctx.r8.u32 ? ctx.r7.u32 / ctx.r8.u32 : 0);
	// subf r10,r6,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r4,r31,r5
	ctx.r4.u64 = ctx.r5.u64 - r31.u64;
	// add r25,r10,r27
	r25.u64 = ctx.r10.u64 + r27.u64;
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// add r28,r9,r27
	r28.u64 = ctx.r9.u64 + r27.u64;
	// divwu r10,r7,r6
	ctx.r10.u64 = uint32_t(ctx.r6.u32 ? ctx.r7.u32 / ctx.r6.u32 : 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(r31.s32, 1, ctx.xer);
	// bne cr6,0x823977b0
	if (!ctx.cr6.eq) goto loc_823977B0;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82397750
	if (!ctx.cr6.eq) goto loc_82397750;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
loc_82397714:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82397734
	if (ctx.cr0.lt) goto loc_82397734;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82397724:
	// lbz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U8(r25.u32 + 0);
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, ctx.r9.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x82397724
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397724;
loc_82397734:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// bne 0x82397714
	if (!ctx.cr0.eq) goto loc_82397714;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// b 0x82397a60
	goto loc_82397A60;
loc_82397750:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_8239775C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// blt 0x82397798
	if (ctx.cr0.lt) goto loc_82397798;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82397770:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82397780
	if (!ctx.cr6.gt) goto loc_82397780;
	// stbx r24,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, r24.u8);
	// b 0x8239778c
	goto loc_8239778C;
loc_82397780:
	// lbzx r9,r10,r25
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + r25.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stbx r9,r11,r28
	REX_STORE_U8(ctx.r11.u32 + r28.u32, ctx.r9.u8);
loc_8239778C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bdnz 0x82397770
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397770;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82397798:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r25,r8,r25
	r25.u64 = r25.u64 - ctx.r8.u64;
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// bne 0x8239775c
	if (!ctx.cr0.eq) goto loc_8239775C;
	// b 0x82397a60
	goto loc_82397A60;
loc_823977B0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(r31.s32, 2, ctx.xer);
	// bne cr6,0x82397894
	if (!ctx.cr6.eq) goto loc_82397894;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82397814
	if (!ctx.cr6.eq) goto loc_82397814;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823977CC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823977f4
	if (ctx.cr0.lt) goto loc_823977F4;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823977E8:
	// lhz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U16(r25.u32 + 0);
	// sthu r10,-2(r11)
	ea = -2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x823977e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823977E8;
loc_823977F4:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r25,-2
	r25.s64 = r25.s64 + -2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r10,r28
	r28.u64 = r28.u64 - ctx.r10.u64;
	// bne 0x823977cc
	if (!ctx.cr0.eq) goto loc_823977CC;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// b 0x82397a60
	goto loc_82397A60;
loc_82397814:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82397820:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// blt 0x82397874
	if (ctx.cr0.lt) goto loc_82397874;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82397848:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82397858
	if (!ctx.cr6.gt) goto loc_82397858;
	// sth r24,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, r24.u16);
	// b 0x82397864
	goto loc_82397864;
loc_82397858:
	// lhzu r8,-2(r7)
	ea = -2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r8,0(r10)
	REX_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
loc_82397864:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bdnz 0x82397848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82397848;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82397874:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r25,r10,r25
	r25.u64 = r25.u64 - ctx.r10.u64;
	// subf r28,r9,r28
	r28.u64 = r28.u64 - ctx.r9.u64;
	// bne 0x82397820
	if (!ctx.cr0.eq) goto loc_82397820;
	// b 0x82397a60
	goto loc_82397A60;
loc_82397894:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// bne cr6,0x82397978
	if (!ctx.cr6.eq) goto loc_82397978;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823978f8
	if (!ctx.cr6.eq) goto loc_823978F8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823978B0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823978d8
	if (ctx.cr0.lt) goto loc_823978D8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823978CC:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// stwu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823978cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823978CC;
loc_823978D8:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r10,r28
	r28.u64 = r28.u64 - ctx.r10.u64;
	// bne 0x823978b0
	if (!ctx.cr0.eq) goto loc_823978B0;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// b 0x82397a60
	goto loc_82397A60;
loc_823978F8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82397904:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// blt 0x82397958
	if (ctx.cr0.lt) goto loc_82397958;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 + r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8239792C:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8239793c
	if (!ctx.cr6.gt) goto loc_8239793C;
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r24.u32);
	// b 0x82397948
	goto loc_82397948;
loc_8239793C:
	// lwzu r8,-4(r7)
	ea = -4 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82397948:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bdnz 0x8239792c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8239792C;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82397958:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r10,r25
	r25.u64 = r25.u64 - ctx.r10.u64;
	// subf r28,r9,r28
	r28.u64 = r28.u64 - ctx.r9.u64;
	// bne 0x82397904
	if (!ctx.cr0.eq) goto loc_82397904;
	// b 0x82397a60
	goto loc_82397A60;
loc_82397978:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823979dc
	if (!ctx.cr6.eq) goto loc_823979DC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_8239798C:
	// addic. r30,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r30.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x823979bc
	if (ctx.cr0.lt) goto loc_823979BC;
	// mullw r11,r30,r31
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r31.s32);
	// neg r27,r31
	r27.s64 = static_cast<int64_t>(-r31.u64);
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
loc_823979A0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x823979B0;
	sub_823EF2F8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// bge 0x823979a0
	if (!ctx.cr0.lt) goto loc_823979A0;
loc_823979BC:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subf r25,r31,r25
	r25.u64 = r25.u64 - r31.u64;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// subf r28,r10,r28
	r28.u64 = r28.u64 - ctx.r10.u64;
	// bne 0x8239798c
	if (!ctx.cr0.eq) goto loc_8239798C;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// b 0x82397a60
	goto loc_82397A60;
loc_823979DC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82397a60
	if (!ctx.cr6.gt) goto loc_82397A60;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
loc_823979E8:
	// addic. r27,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	r27.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r29,r8,-1
	r29.s64 = ctx.r8.s64 + -1;
	// blt 0x82397a44
	if (ctx.cr0.lt) goto loc_82397A44;
	// mullw r10,r27,r31
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(r31.s32);
	// mullw r11,r29,r31
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// neg r24,r31
	r24.s64 = static_cast<int64_t>(-r31.u64);
	// add r30,r10,r28
	r30.u64 = ctx.r10.u64 + r28.u64;
	// add r26,r11,r25
	r26.u64 = ctx.r11.u64 + r25.u64;
loc_82397A08:
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ble cr6,0x82397a24
	if (!ctx.cr6.gt) goto loc_82397A24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823ef5f0
	ctx.lr = 0x82397A20;
	sub_823EF5F0(ctx, base);
	// b 0x82397a34
	goto loc_82397A34;
loc_82397A24:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x82397A2C;
	sub_823EF2F8(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// add r26,r26,r24
	r26.u64 = r26.u64 + r24.u64;
loc_82397A34:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// add r30,r30,r24
	r30.u64 = r30.u64 + r24.u64;
	// bge 0x82397a08
	if (!ctx.cr0.lt) goto loc_82397A08;
	// lwz r8,356(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_82397A44:
	// lwz r11,376(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 376);
	// mullw r10,r31,r8
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r8.s32);
	// mullw r9,r11,r31
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// subf r25,r10,r25
	r25.u64 = r25.u64 - ctx.r10.u64;
	// subf r28,r9,r28
	r28.u64 = r28.u64 - ctx.r9.u64;
	// bne 0x823979e8
	if (!ctx.cr0.eq) goto loc_823979E8;
loc_82397A60:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// stw r8,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r8.u32);
	// addi r1,r1,9280
	ctx.r1.s64 = ctx.r1.s64 + 9280;
	// b 0x826a1ce8
	return;
loc_82397A80:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r11.u32);
loc_82397A88:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,9280
	ctx.r1.s64 = ctx.r1.s64 + 9280;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_823D9500) {
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

DEFINE_REX_FUNC(sub_823D97D8) {
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
	ctx.lr = 0x823D97E0;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r18,32(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r17,12(r3)
	r17.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823d998c
	if (!ctx.cr6.gt) goto loc_823D998C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r20,20(r3)
	r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r25,0
	r25.s64 = 0;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// rlwinm r19,r20,2,0,29
	r19.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f11,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// lfd f12,-5360(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -5360);
loc_823D9818:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823d9978
	if (!ctx.cr6.gt) goto loc_823D9978;
	// mr r24,r18
	r24.u64 = r18.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// mr r22,r20
	r22.u64 = r20.u64;
loc_823D982C:
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U16(r24.u32 + 0);
	// fadd f13,f0,f12
	ctx.f13.f64 = ctx.f0.f64 + ctx.f12.f64;
	// lhz r10,2(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 2);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r26,r10
	r26.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// fdiv f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 / ctx.f13.f64;
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// bge cr6,0x823d9968
	if (!ctx.cr6.lt) goto loc_823D9968;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823d9920
	if (ctx.cr6.lt) goto loc_823D9920;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// mullw r7,r11,r9
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// add r30,r7,r8
	r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r31,r31,r9
	r31.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// rlwinm r7,r10,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r25,r11
	ctx.r10.u64 = r25.u64 + ctx.r11.u64;
	// add r29,r6,r8
	r29.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r3,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r16,r31,2,0,29
	r16.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r3,r10,r30
	ctx.r3.u64 = r30.u64 - ctx.r10.u64;
	// subf r31,r10,r29
	r31.u64 = r29.u64 - ctx.r10.u64;
	// rlwinm r28,r7,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r10,r27
	r30.u64 = r27.u64 - ctx.r10.u64;
	// subf r29,r10,r16
	r29.u64 = r16.u64 - ctx.r10.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r27,r31,r5
	r27.u64 = r31.u64 + ctx.r5.u64;
	// add r31,r30,r5
	r31.u64 = r30.u64 + ctx.r5.u64;
	// add r3,r29,r5
	ctx.r3.u64 = r29.u64 + ctx.r5.u64;
	// add r11,r28,r11
	ctx.r11.u64 = r28.u64 + ctx.r11.u64;
loc_823D98EC:
	// lfs f13,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsu f13,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfsux f9,r6,r10
	temp.f32 = float(ctx.f9.f64);
	ea = ctx.r6.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsux f7,r3,r10
	temp.f32 = float(ctx.f7.f64);
	ea = ctx.r3.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// stfsux f6,r31,r10
	temp.f32 = float(ctx.f6.f64);
	ea = r31.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	r31.u32 = ea;
	// stfsux f5,r27,r10
	temp.f32 = float(ctx.f5.f64);
	ea = r27.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// bdnz 0x823d98ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D98EC;
loc_823D9920:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x823d9968
	if (!ctx.cr6.lt) goto loc_823D9968;
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r7,r25,r11
	ctx.r7.u64 = r25.u64 + ctx.r11.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r11,r26
	ctx.r3.u64 = r26.u64 - ctx.r11.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r7,r4
	ctx.r11.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r7,r10,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
loc_823D9958:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsux f13,r7,r10
	temp.f32 = float(ctx.f13.f64);
	ea = ctx.r7.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x823d9958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D9958;
loc_823D9968:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r24,r24,2
	r24.s64 = r24.s64 + 2;
	// bne 0x823d982c
	if (!ctx.cr0.eq) goto loc_823D982C;
loc_823D9978:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r21,r19,r21
	r21.u64 = r19.u64 + r21.u64;
	// add r25,r25,r17
	r25.u64 = r25.u64 + r17.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823d9818
	if (ctx.cr6.lt) goto loc_823D9818;
loc_823D998C:
	// b 0x826a1cd8
	return;
}

DEFINE_REX_FUNC(sub_823E5590) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb4
	ctx.lr = 0x823E5598;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2c94
	ctx.lr = 0x823E55A0;
	// mullw r11,r4,r6
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r6.s32);
	// addi r7,r5,264
	ctx.r7.s64 = ctx.r5.s64 + 264;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ldx r10,r9,r7
	ctx.r10.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r31,r6,4,0,27
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// ldx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 + ctx.r3.u64;
	// std r10,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r10.u64);
	// std r9,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r9.u64);
	// ble cr6,0x823e57b8
	if (!ctx.cr6.gt) goto loc_823E57B8;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,-236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -236);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f13,-240(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -240);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r31,r5
	ctx.r6.u64 = ctx.r5.u64 - r31.u64;
	// lfs f12,-228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -228);
	ctx.f12.f64 = double(temp.f32);
	// subf r3,r8,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r8.u64;
	// lfs f11,-232(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -232);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r9,-4
	ctx.r8.s64 = ctx.r9.s64 + -4;
	// add r29,r4,r10
	r29.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r30,r4,5,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r28,r4,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r27,r4,3,0,28
	r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r29,r29,3,0,28
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
loc_823E5640:
	// lfs f10,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// ld r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 4);
	// lfs f8,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f7,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f3,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f5
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f30,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	f30.f64 = double(temp.f32);
	// std r5,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r5.u64);
	// lfs f29,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f29.f64 = double(temp.f32);
	// lfs f31,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	f31.f64 = double(temp.f32);
	// fmuls f27,f29,f30
	f27.f64 = double(float(f29.f64 * f30.f64));
	// lfs f28,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f28.f64 = double(temp.f32);
	// lfs f26,8(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	f26.f64 = double(temp.f32);
	// fmsubs f6,f10,f5,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f5.f64, -ctx.f6.f64)));
	// lfs f25,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	f25.f64 = double(temp.f32);
	// fmuls f24,f31,f26
	f24.f64 = double(float(f31.f64 * f26.f64));
	// lfs f23,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	f23.f64 = double(temp.f32);
	// fmsubs f5,f28,f3,f4
	ctx.f5.f64 = double(float(std::fma(f28.f64, ctx.f3.f64, -ctx.f4.f64)));
	// lfs f9,-220(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -220);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f4,f10,f8,f2
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f8.f64, ctx.f2.f64)));
	// lfs f3,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f8,f31,f25
	ctx.f8.f64 = double(float(f31.f64 * f25.f64));
	// lfs f10,-224(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -224);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f28,f7,f1
	ctx.f2.f64 = double(float(std::fma(f28.f64, ctx.f7.f64, ctx.f1.f64)));
	// lfs f1,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f29,f23
	f31.f64 = double(float(f29.f64 * f23.f64));
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f28,f1,f23,f27
	f28.f64 = double(float(std::fma(ctx.f1.f64, f23.f64, -f27.f64)));
	// lfs f29,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f29.f64 = double(temp.f32);
	// fmsubs f27,f3,f25,f24
	f27.f64 = double(float(std::fma(ctx.f3.f64, f25.f64, -f24.f64)));
	// fadds f25,f5,f6
	f25.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmadds f3,f3,f26,f8
	ctx.f3.f64 = double(float(std::fma(ctx.f3.f64, f26.f64, ctx.f8.f64)));
	// fadds f5,f2,f4
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmadds f1,f1,f30,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f31.f64)));
	// fsubs f8,f4,f2
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f4,f28,f27
	ctx.f4.f64 = double(float(f28.f64 + f27.f64));
	// fsubs f2,f27,f28
	ctx.f2.f64 = double(float(f27.f64 - f28.f64));
	// fmuls f31,f13,f25
	f31.f64 = double(float(ctx.f13.f64 * f25.f64));
	// fmuls f30,f0,f6
	f30.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f28,f13,f5
	f28.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fadds f26,f1,f3
	f26.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fmuls f27,f11,f25
	f27.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fsubs f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fadds f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f4.f64));
	// fmuls f24,f11,f5
	f24.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f31,f11,f4,f31
	f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, f31.f64)));
	// fneg f30,f30
	f30.u64 = f30.u64 ^ 0x8000000000000000;
	// fmuls f23,f0,f2
	f23.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f28,f11,f26,f28
	f28.f64 = double(float(std::fma(ctx.f11.f64, f26.f64, f28.f64)));
	// fmadds f4,f13,f4,f27
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f4.f64, f27.f64)));
	// fadds f29,f29,f26
	f29.f64 = double(float(f29.f64 + f26.f64));
	// fmadds f3,f12,f1,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f3.f64)));
	// fmsubs f1,f0,f1,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, -ctx.f8.f64)));
	// fadds f7,f7,f25
	ctx.f7.f64 = double(float(ctx.f7.f64 + f25.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f8,f13,f26,f24
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, f26.f64, f24.f64)));
	// fadds f7,f31,f10
	ctx.f7.f64 = double(float(f31.f64 + ctx.f10.f64));
	// fnmsubs f2,f12,f2,f30
	ctx.f2.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f2.f64, -f30.f64)));
	// fadds f31,f28,f9
	f31.f64 = double(float(f28.f64 + ctx.f9.f64));
	// fadds f10,f4,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f5,f29,f5
	ctx.f5.f64 = double(float(f29.f64 + ctx.f5.f64));
	// stfsu f5,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fsubs f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fmsubs f7,f12,f6,f23
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, -f23.f64)));
	// fadds f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f5,f31,f2
	ctx.f5.f64 = double(float(f31.f64 - ctx.f2.f64));
	// stfsu f5,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fadds f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// fadds f3,f2,f31
	ctx.f3.f64 = double(float(ctx.f2.f64 + f31.f64));
	// stfsu f3,8(r9)
	ea = 8 + ctx.r9.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f2,f7,f6
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// fsubs f1,f10,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// stfsu f2,8(r8)
	ea = 8 + ctx.r8.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// fsubs f10,f6,f7
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// stfs f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// add r6,r27,r6
	ctx.r6.u64 = r27.u64 + ctx.r6.u64;
	// stfsu f10,8(r7)
	ea = 8 + ctx.r7.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// add r4,r28,r4
	ctx.r4.u64 = r28.u64 + ctx.r4.u64;
	// add r3,r29,r3
	ctx.r3.u64 = r29.u64 + ctx.r3.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// bdnz 0x823e5640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E5640;
loc_823E57B8:
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x826a2ce0
	ctx.lr = 0x823E57C0;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823F0058) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f0070
	if (!ctx.cr6.eq) goto loc_823F0070;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_823F0070:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F03B8) {
	REX_FUNC_PROLOGUE();
	// b 0x823f56a8
	sub_823F56A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823F0530) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82793bf4
	ctx.lr = 0x823F0544;
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823f0558
	if (!ctx.cr0.lt) goto loc_823F0558;
	// bl 0x823eff48
	ctx.lr = 0x823F0550;
	sub_823EFF48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f055c
	goto loc_823F055C;
loc_823F0558:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823F055C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F3FC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x823f3ff4
	if (ctx.cr6.eq) goto loc_823F3FF4;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x827938b4
	ctx.lr = 0x823F3FF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823F3FF4:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F5BE8) {
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
	// bl 0x823f5f38
	ctx.lr = 0x823F5C00;
	sub_823F5F38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f5fb0
	ctx.lr = 0x823F5C08;
	sub_823F5FB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7e40
	ctx.lr = 0x823F5C10;
	sub_823F7E40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11972(r31)
	REX_STORE_U32(r31.u32 + 11972, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823F7E40) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11968(r3)
	REX_STORE_U32(ctx.r3.u32 + 11968, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F7FE8) {
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
	ctx.lr = 0x823F7FF0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x823f8218
	goto loc_823F8218;
loc_823F8008:
	// lwz r11,11988(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11988);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823f81e8
	if (!ctx.cr6.eq) goto loc_823F81E8;
	// lbz r11,11958(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11958);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823f8068
	if (ctx.cr0.eq) goto loc_823F8068;
	// stb r27,11958(r31)
	REX_STORE_U8(r31.u32 + 11958, r27.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F8030;
	sub_823F8390(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8064
	if (ctx.cr0.eq) goto loc_823F8064;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F8044;
	sub_823F8390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F8054;
	sub_823F8390(ctx, base);
	// rlwinm r11,r30,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// stw r11,11964(r31)
	REX_STORE_U32(r31.u32 + 11964, ctx.r11.u32);
	// b 0x823f8068
	goto loc_823F8068;
loc_823F8064:
	// stw r27,11964(r31)
	REX_STORE_U32(r31.u32 + 11964, r27.u32);
loc_823F8068:
	// lwz r11,11984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11984);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f8080
	if (!ctx.cr6.eq) goto loc_823F8080;
	// stw r27,11984(r31)
	REX_STORE_U32(r31.u32 + 11984, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8258
	ctx.lr = 0x823F8080;
	sub_823F8258(ctx, base);
loc_823F8080:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F808C;
	sub_823F8390(ctx, base);
	// stw r3,11984(r31)
	REX_STORE_U32(r31.u32 + 11984, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F809C;
	sub_823F8390(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F80AC;
	sub_823F8390(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8390
	ctx.lr = 0x823F80BC;
	sub_823F8390(ctx, base);
	// rlwinm r11,r26,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,11984(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 11984);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,11976(r31)
	REX_STORE_U32(r31.u32 + 11976, ctx.r11.u32);
	// stw r11,11980(r31)
	REX_STORE_U32(r31.u32 + 11980, ctx.r11.u32);
	// bne cr6,0x823f80e8
	if (!ctx.cr6.eq) goto loc_823F80E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fb6d8
	ctx.lr = 0x823F80E8;
	sub_823FB6D8(ctx, base);
loc_823F80E8:
	// lwz r11,11984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11984);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823f811c
	if (ctx.cr6.eq) goto loc_823F811C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823f811c
	if (ctx.cr6.eq) goto loc_823F811C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f8114
	if (!ctx.cr6.eq) goto loc_823F8114;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fa0d0
	ctx.lr = 0x823F810C;
	sub_823FA0D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f814c
	if (!ctx.cr0.eq) goto loc_823F814C;
loc_823F8114:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823f824c
	goto loc_823F824C;
loc_823F811C:
	// lbz r11,11957(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11957);
	// addi r4,r31,2584
	ctx.r4.s64 = r31.s64 + 2584;
	// addi r3,r31,11028
	ctx.r3.s64 = r31.s64 + 11028;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x826a1e70
	ctx.lr = 0x823F8134;
	sub_826A1E70(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// addi r4,r31,3256
	ctx.r4.s64 = r31.s64 + 3256;
	// addi r3,r31,11700
	ctx.r3.s64 = r31.s64 + 11700;
	// bl 0x826a1e70
	ctx.lr = 0x823F8144;
	sub_826A1E70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fb5e8
	ctx.lr = 0x823F814C;
	sub_823FB5E8(ctx, base);
loc_823F814C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,11988(r31)
	REX_STORE_U32(r31.u32 + 11988, ctx.r11.u32);
	// b 0x823f81e8
	goto loc_823F81E8;
loc_823F8158:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823f81f4
	if (!ctx.cr6.gt) goto loc_823F81F4;
	// lwz r30,11980(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 11980);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// blt cr6,0x823f8170
	if (ctx.cr6.lt) goto loc_823F8170;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823F8170:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823f8114
	if (ctx.cr6.eq) goto loc_823F8114;
	// lwz r11,11984(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11984);
	// lwz r4,11960(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 11960);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823f8198
	if (!ctx.cr6.eq) goto loc_823F8198;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823faf90
	ctx.lr = 0x823F8194;
	sub_823FAF90(ctx, base);
	// b 0x823f81cc
	goto loc_823F81CC;
loc_823F8198:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823f81b0
	if (!ctx.cr6.eq) goto loc_823F81B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fa780
	ctx.lr = 0x823F81AC;
	sub_823FA780(ctx, base);
	// b 0x823f81cc
	goto loc_823F81CC;
loc_823F81B0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823f81c8
	if (!ctx.cr6.eq) goto loc_823F81C8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f9ee8
	ctx.lr = 0x823F81C4;
	sub_823F9EE8(ctx, base);
	// b 0x823f81cc
	goto loc_823F81CC;
loc_823F81C8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823F81CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823f8114
	if (!ctx.cr6.eq) goto loc_823F8114;
	// lwz r11,11980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11980);
	// subf r29,r30,r29
	r29.u64 = r29.u64 - r30.u64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// stw r11,11980(r31)
	REX_STORE_U32(r31.u32 + 11980, ctx.r11.u32);
loc_823F81E8:
	// lwz r11,11980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x823f8158
	if (ctx.cr6.gt) goto loc_823F8158;
loc_823F81F4:
	// lwz r11,11980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f8208
	if (!ctx.cr6.eq) goto loc_823F8208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,11988(r31)
	REX_STORE_U32(r31.u32 + 11988, ctx.r11.u32);
loc_823F8208:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x823f821c
	if (!ctx.cr6.eq) goto loc_823F821C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8258
	ctx.lr = 0x823F8218;
	sub_823F8258(ctx, base);
loc_823F8218:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
loc_823F821C:
	// bgt cr6,0x823f8008
	if (ctx.cr6.gt) goto loc_823F8008;
	// lwz r11,11960(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 11960);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f8234
	if (!ctx.cr6.eq) goto loc_823F8234;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
loc_823F8234:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823fb000
	ctx.lr = 0x823F8248;
	sub_823FB000(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823F824C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82407FC0) {
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
	ctx.lr = 0x82407FC8;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r8,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// bl 0x82407e60
	ctx.lr = 0x82407FEC;
	sub_82407E60(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x822d3400
	ctx.lr = 0x82407FF8;
	sub_822D3400(ctx, base);
	// li r14,1
	r14.s64 = 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x824080c8
	if (ctx.cr6.eq) goto loc_824080C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwz r18,112(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// blt cr6,0x824080bc
	if (ctx.cr6.lt) goto loc_824080BC;
	// lwz r19,120(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r19,r30
	ctx.cr6.compare<uint32_t>(r19.u32, r30.u32, ctx.xer);
	// bgt cr6,0x824080bc
	if (ctx.cr6.gt) goto loc_824080BC;
	// cmpw cr6,r18,r19
	ctx.cr6.compare<int32_t>(r18.s32, r19.s32, ctx.xer);
	// bgt cr6,0x824080bc
	if (ctx.cr6.gt) goto loc_824080BC;
	// lwz r20,116(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// blt cr6,0x824080bc
	if (ctx.cr6.lt) goto loc_824080BC;
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// bgt cr6,0x824080bc
	if (ctx.cr6.gt) goto loc_824080BC;
	// cmpw cr6,r20,r21
	ctx.cr6.compare<int32_t>(r20.s32, r21.s32, ctx.xer);
	// bgt cr6,0x824080bc
	if (ctx.cr6.gt) goto loc_824080BC;
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x82408098
	if (!ctx.cr6.eq) goto loc_82408098;
	// cmplw cr6,r19,r30
	ctx.cr6.compare<uint32_t>(r19.u32, r30.u32, ctx.xer);
	// bne cr6,0x82408098
	if (!ctx.cr6.eq) goto loc_82408098;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82408098
	if (!ctx.cr6.eq) goto loc_82408098;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// mr r25,r22
	r25.u64 = r22.u64;
	// beq cr6,0x8240809c
	if (ctx.cr6.eq) goto loc_8240809C;
loc_82408098:
	// mr r25,r14
	r25.u64 = r14.u64;
loc_8240809C:
	// clrlwi. r11,r15,31
	ctx.r11.u64 = r15.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824080b4
	if (!ctx.cr0.eq) goto loc_824080B4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x824080b4
	if (!ctx.cr6.eq) goto loc_824080B4;
	// mr r26,r14
	r26.u64 = r14.u64;
	// b 0x82408100
	goto loc_82408100;
loc_824080B4:
	// mr r26,r22
	r26.u64 = r22.u64;
	// b 0x82408100
	goto loc_82408100;
loc_824080BC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x824084d4
	goto loc_824084D4;
loc_824080C8:
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r22,0
	r22.s64 = 0;
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// not r11,r15
	ctx.r11.u64 = ~r15.u64;
	// mr r18,r22
	r18.u64 = r22.u64;
	// stw r22,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// mr r20,r22
	r20.u64 = r22.u64;
	// stw r22,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// mr r19,r30
	r19.u64 = r30.u64;
	// mr r21,r28
	r21.u64 = r28.u64;
	// stw r30,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// mr r25,r22
	r25.u64 = r22.u64;
	// stw r28,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r28.u32);
	// clrlwi r26,r11,31
	r26.u64 = ctx.r11.u32 & 0x1;
loc_82408100:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// rlwinm. r17,r15,0,15,15
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// ori r24,r11,20
	r24.u64 = ctx.r11.u64 | 20;
	// beq 0x82408260
	if (ctx.cr0.eq) goto loc_82408260;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// mr r31,r22
	r31.u64 = r22.u64;
	// ori r10,r10,18
	ctx.r10.u64 = ctx.r10.u64 | 18;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82408150
	if (ctx.cr6.lt) goto loc_82408150;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bgt cr6,0x82408150
	if (ctx.cr6.gt) goto loc_82408150;
	// or r11,r28,r30
	ctx.r11.u64 = r28.u64 | r30.u64;
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82408150
	if (ctx.cr0.eq) goto loc_82408150;
loc_82408140:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// slw r10,r11,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82408140
	if (!ctx.cr0.eq) goto loc_82408140;
loc_82408150:
	// addi r27,r23,16
	r27.s64 = r23.s64 + 16;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x822c5f70
	ctx.lr = 0x82408160;
	sub_822C5F70(ctx, base);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r5,1
	ctx.r5.s64 = 1;
	// slw r4,r28,r31
	ctx.r4.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// slw r3,r30,r31
	ctx.r3.u64 = r31.u8 & 0x20 ? 0 : (r30.u32 << (r31.u8 & 0x3F));
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// bl 0x822d3178
	ctx.lr = 0x82408194;
	sub_822D3178(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r3.u32);
	// ori r30,r11,14
	r30.u64 = ctx.r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r28,r11,r30
	r28.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8240821c
	if (ctx.cr0.lt) goto loc_8240821C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// bl 0x822d2ef0
	ctx.lr = 0x824081BC;
	sub_822D2EF0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r28,r11,r30
	r28.u64 = ctx.r11.u64 & r30.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt 0x8240821c
	if (ctx.cr0.lt) goto loc_8240821C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x8240820c
	if (!ctx.cr6.eq) goto loc_8240820C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e88
	ctx.lr = 0x824081E0;
	sub_82130E88(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,8(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 8);
	// bl 0x82407d68
	ctx.lr = 0x824081EC;
	sub_82407D68(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x824081F8;
	sub_82130E88(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x8240820c
	if (!ctx.cr6.lt) goto loc_8240820C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x824084d4
	goto loc_824084D4;
loc_8240820C:
	// lwz r26,8(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x82408264
	goto loc_82408264;
loc_8240821C:
	// lwz r3,8(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408230
	if (ctx.cr6.eq) goto loc_82408230;
	// bl 0x822c5ef0
	ctx.lr = 0x8240822C;
	sub_822C5EF0(ctx, base);
	// stw r22,8(r23)
	REX_STORE_U32(r23.u32 + 8, r22.u32);
loc_82408230:
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408244
	if (ctx.cr6.eq) goto loc_82408244;
	// bl 0x822c5ef0
	ctx.lr = 0x82408240;
	sub_822C5EF0(ctx, base);
	// stw r22,12(r23)
	REX_STORE_U32(r23.u32 + 12, r22.u32);
loc_82408244:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82408258
	if (ctx.cr6.eq) goto loc_82408258;
	// bl 0x822c5580
	ctx.lr = 0x82408254;
	sub_822C5580(ctx, base);
	// stw r22,0(r27)
	REX_STORE_U32(r27.u32 + 0, r22.u32);
loc_82408258:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x824084d4
	goto loc_824084D4;
loc_82408260:
	// mr r26,r16
	r26.u64 = r16.u64;
loc_82408264:
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r27,r15,4,27,27
	r27.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// addi r11,r11,-256
	ctx.r11.s64 = ctx.r11.s64 + -256;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r25
	r31.u64 = ctx.r11.u64 & r25.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x824083b0
	if (ctx.cr6.eq) goto loc_824083B0;
	// lis r9,6688
	ctx.r9.s64 = 438304768;
	// rlwinm r11,r10,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// ori r10,r9,11
	ctx.r10.u64 = ctx.r9.u64 | 11;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82408388
	if (ctx.cr6.lt) goto loc_82408388;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 12;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82408334
	if (!ctx.cr6.gt) goto loc_82408334;
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,17
	ctx.r10.u64 = ctx.r10.u64 | 17;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82408388
	if (!ctx.cr6.gt) goto loc_82408388;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r24.s32, ctx.xer);
	// bgt cr6,0x82408388
	if (ctx.cr6.gt) goto loc_82408388;
	// addi r11,r19,3
	ctx.r11.s64 = r19.s64 + 3;
	// addi r10,r21,3
	ctx.r10.s64 = r21.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r9,r18,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r20,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// ble cr6,0x824082fc
	if (!ctx.cr6.gt) goto loc_824082FC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_824082FC:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
	// ble cr6,0x8240830c
	if (!ctx.cr6.gt) goto loc_8240830C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
loc_8240830C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r28.u32, ctx.xer);
loc_82408328:
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// mr r31,r22
	r31.u64 = r22.u64;
	// b 0x824083b0
	goto loc_824083B0;
loc_82408334:
	// addi r11,r19,1
	ctx.r11.s64 = r19.s64 + 1;
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// rlwinm r10,r18,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// ble cr6,0x82408360
	if (!ctx.cr6.gt) goto loc_82408360;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_82408360:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82408380
	if (!ctx.cr6.eq) goto loc_82408380;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(r21.u32, r28.u32, ctx.xer);
	// b 0x82408328
	goto loc_82408328;
loc_82408380:
	// mr r31,r14
	r31.u64 = r14.u64;
	// b 0x824083b0
	goto loc_824083B0;
loc_82408388:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_824083B0:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// bne cr6,0x824083ec
	if (!ctx.cr6.eq) goto loc_824083EC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82130e88
	ctx.lr = 0x824083C0;
	sub_82130E88(ctx, base);
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r27,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d3498
	ctx.lr = 0x824083E0;
	sub_822D3498(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82130e88
	ctx.lr = 0x824083E8;
	sub_82130E88(ctx, base);
	// b 0x8240840c
	goto loc_8240840C;
loc_824083EC:
	// subfic r11,r31,0
	ctx.xer.ca = r31.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - r31.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r6,r27,0,28,26
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d3498
	ctx.lr = 0x8240840C;
	sub_822D3498(ctx, base);
loc_8240840C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8240843c
	if (ctx.cr6.eq) goto loc_8240843C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r11,r18
	ctx.r9.u64 = r18.u64 - ctx.r11.u64;
	// subf r8,r10,r20
	ctx.r8.u64 = r20.u64 - ctx.r10.u64;
	// subf r11,r11,r19
	ctx.r11.u64 = r19.u64 - ctx.r11.u64;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// subf r10,r10,r21
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_8240843C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,380(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r9.u32);
	// stw r8,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r8.u32);
	// stw r7,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r7.u32);
	// stw r22,12(r29)
	REX_STORE_U32(r29.u32 + 12, r22.u32);
	// stw r22,16(r29)
	REX_STORE_U32(r29.u32 + 16, r22.u32);
	// stw r22,20(r29)
	REX_STORE_U32(r29.u32 + 20, r22.u32);
	// stw r6,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r6.u32);
	// stw r22,32(r29)
	REX_STORE_U32(r29.u32 + 32, r22.u32);
	// stw r14,36(r29)
	REX_STORE_U32(r29.u32 + 36, r14.u32);
	// stw r5,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r5.u32);
	// stw r4,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r4.u32);
	// stw r31,48(r29)
	REX_STORE_U32(r29.u32 + 48, r31.u32);
	// stw r11,52(r29)
	REX_STORE_U32(r29.u32 + 52, ctx.r11.u32);
	// stw r22,56(r29)
	REX_STORE_U32(r29.u32 + 56, r22.u32);
	// stw r14,60(r29)
	REX_STORE_U32(r29.u32 + 60, r14.u32);
	// stw r14,64(r29)
	REX_STORE_U32(r29.u32 + 64, r14.u32);
	// stw r22,68(r29)
	REX_STORE_U32(r29.u32 + 68, r22.u32);
	// stw r22,72(r29)
	REX_STORE_U32(r29.u32 + 72, r22.u32);
	// stw r30,76(r29)
	REX_STORE_U32(r29.u32 + 76, r30.u32);
	// stw r28,80(r29)
	REX_STORE_U32(r29.u32 + 80, r28.u32);
	// stw r16,4(r23)
	REX_STORE_U32(r23.u32 + 4, r16.u32);
	// stw r15,0(r23)
	REX_STORE_U32(r23.u32 + 0, r15.u32);
	// bl 0x822c5e78
	ctx.lr = 0x824084D0;
	sub_822C5E78(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_824084D4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8242AF20) {
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
	ctx.lr = 0x8242AF28;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,1716(r1)
	REX_STORE_U32(ctx.r1.u32 + 1716, ctx.r3.u32);
	// mr r16,r4
	r16.u64 = ctx.r4.u64;
	// stw r4,1724(r1)
	REX_STORE_U32(ctx.r1.u32 + 1724, ctx.r4.u32);
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// stw r5,1732(r1)
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8242af60
	if (!ctx.cr6.eq) goto loc_8242AF60;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8243187c
	if (!ctx.cr6.eq) goto loc_8243187C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82431884
	goto loc_82431884;
loc_8242AF60:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x8243187c
	if (!ctx.cr6.eq) goto loc_8243187C;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 36);
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(r16.u32 + 20);
	// lwz r9,28(r16)
	ctx.r9.u64 = REX_LOAD_U32(r16.u32 + 28);
	// lwz r8,24(r16)
	ctx.r8.u64 = REX_LOAD_U32(r16.u32 + 24);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// stw r11,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
	// mullw r30,r10,r8
	r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// bne cr6,0x8243187c
	if (!ctx.cr6.eq) goto loc_8243187C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,28(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 28);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r7,100(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 100);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r22,0
	r22.s64 = 0;
	// lis r25,3584
	r25.s64 = 234881024;
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r22.u64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// std r22,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, r22.u64);
	// std r22,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, r22.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r22.u64);
	// std r22,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, r22.u64);
	// std r22,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, r22.u64);
	// stw r9,528(r1)
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
	// stw r7,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r7.u32);
	// beq cr6,0x8242b098
	if (ctx.cr6.eq) goto loc_8242B098;
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8242AFD8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242b07c
	if (ctx.cr6.eq) goto loc_8242B07C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,160
	r27.s64 = ctx.r1.s64 + 160;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r11,r29,r31
	REX_STORE_U32(r29.u32 + r31.u32, ctx.r11.u32);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stwx r11,r29,r27
	REX_STORE_U32(r29.u32 + r27.u32, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823f02b8
	ctx.lr = 0x8242B010;
	sub_823F02B8(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwx r28,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r28.u32);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82434350
	ctx.lr = 0x8242B034;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwzx r9,r29,r27
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + r27.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8242b07c
	if (ctx.cr6.eq) goto loc_8242B07C;
	// lwz r8,8(r14)
	ctx.r8.u64 = REX_LOAD_U32(r14.u32 + 8);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
loc_8242B058:
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// and r25,r7,r25
	r25.u64 = ctx.r7.u64 & r25.u64;
	// blt cr6,0x8242b058
	if (ctx.cr6.lt) goto loc_8242B058;
loc_8242B07C:
	// lwz r26,12(r26)
	r26.u64 = REX_LOAD_U32(r26.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x8242afd8
	if (!ctx.cr6.eq) goto loc_8242AFD8;
	// lis r11,3584
	ctx.r11.s64 = 234881024;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8242b09c
	if (!ctx.cr6.eq) goto loc_8242B09C;
loc_8242B098:
	// mr r25,r22
	r25.u64 = r22.u64;
loc_8242B09C:
	// stw r25,100(r14)
	REX_STORE_U32(r14.u32 + 100, r25.u32);
	// lwz r11,32(r16)
	ctx.r11.u64 = REX_LOAD_U32(r16.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,137
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 137, ctx.xer);
	// bgt cr6,0x8243181c
	if (ctx.cr6.gt) goto loc_8243181C;
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-23536
	ctx.r12.s64 = ctx.r12.s64 + -23536;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,-20260
	ctx.r12.s64 = ctx.r12.s64 + -20260;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8242B0DC;
	case 1:
		goto loc_8242B190;
	case 2:
		goto loc_8242B1E8;
	case 3:
		goto loc_8242B50C;
	case 4:
		goto loc_8242B598;
	case 5:
		goto loc_8243181C;
	case 6:
		goto loc_8242B5DC;
	case 7:
		goto loc_8242B634;
	case 8:
		goto loc_8242B680;
	case 9:
		goto loc_8242B788;
	case 10:
		goto loc_8242B84C;
	case 11:
		goto loc_8242B870;
	case 12:
		goto loc_8242B8C8;
	case 13:
		goto loc_8242BB60;
	case 14:
		goto loc_8243181C;
	case 15:
		goto loc_8243181C;
	case 16:
		goto loc_8242BCC4;
	case 17:
		goto loc_8242BD18;
	case 18:
		goto loc_8242BD64;
	case 19:
		goto loc_8242BE08;
	case 20:
		goto loc_8243181C;
	case 21:
		goto loc_8242C720;
	case 22:
		goto loc_8242C890;
	case 23:
		goto loc_8242C8EC;
	case 24:
		goto loc_8242C990;
	case 25:
		goto loc_8242CAB4;
	case 26:
		goto loc_8242CAF8;
	case 27:
		goto loc_8242CD00;
	case 28:
		goto loc_8242CDD8;
	case 29:
		goto loc_8242D008;
	case 30:
		goto loc_8242D054;
	case 31:
		goto loc_8242D460;
	case 32:
		goto loc_8242D6C8;
	case 33:
		goto loc_8242D958;
	case 34:
		goto loc_8242DBBC;
	case 35:
		goto loc_8242DE44;
	case 36:
		goto loc_8242DEF0;
	case 37:
		goto loc_8242DFF4;
	case 38:
		goto loc_8242E044;
	case 39:
		goto loc_8243181C;
	case 40:
		goto loc_8242E308;
	case 41:
		goto loc_8242E418;
	case 42:
		goto loc_8242E50C;
	case 43:
		goto loc_8242E54C;
	case 44:
		goto loc_8242E5A0;
	case 45:
		goto loc_8242E5FC;
	case 46:
		goto loc_8242EA28;
	case 47:
		goto loc_8242EA28;
	case 48:
		goto loc_8242EA28;
	case 49:
		goto loc_8242EAA8;
	case 50:
		goto loc_8242EB24;
	case 51:
		goto loc_8242EB24;
	case 52:
		goto loc_8242EAA8;
	case 53:
		goto loc_8242EB24;
	case 54:
		goto loc_8242EB24;
	case 55:
		goto loc_8242F14C;
	case 56:
		goto loc_8242F17C;
	case 57:
		goto loc_8242F37C;
	case 58:
		goto loc_8242F3BC;
	case 59:
		goto loc_8243181C;
	case 60:
		goto loc_8243181C;
	case 61:
		goto loc_8243181C;
	case 62:
		goto loc_8242F44C;
	case 63:
		goto loc_8242F5D4;
	case 64:
		goto loc_8242FA54;
	case 65:
		goto loc_8242FC08;
	case 66:
		goto loc_8242FC48;
	case 67:
		goto loc_8242FD48;
	case 68:
		goto loc_8242FF14;
	case 69:
		goto loc_8242FF58;
	case 70:
		goto loc_8242FFF0;
	case 71:
		goto loc_824302D4;
	case 72:
		goto loc_824305F4;
	case 73:
		goto loc_824306A4;
	case 74:
		goto loc_824306FC;
	case 75:
		goto loc_8243082C;
	case 76:
		goto loc_82430BB4;
	case 77:
		goto loc_8243181C;
	case 78:
		goto loc_8243181C;
	case 79:
		goto loc_8243181C;
	case 80:
		goto loc_8243181C;
	case 81:
		goto loc_82430D1C;
	case 82:
		goto loc_8243181C;
	case 83:
		goto loc_8243181C;
	case 84:
		goto loc_8243181C;
	case 85:
		goto loc_8243181C;
	case 86:
		goto loc_82430DC8;
	case 87:
		goto loc_82430E3C;
	case 88:
		goto loc_82430EB0;
	case 89:
		goto loc_8243181C;
	case 90:
		goto loc_8243181C;
	case 91:
		goto loc_8243181C;
	case 92:
		goto loc_8243181C;
	case 93:
		goto loc_8243181C;
	case 94:
		goto loc_82430F24;
	case 95:
		goto loc_8243181C;
	case 96:
		goto loc_8243181C;
	case 97:
		goto loc_8243181C;
	case 98:
		goto loc_8243181C;
	case 99:
		goto loc_82430F94;
	case 100:
		goto loc_8243181C;
	case 101:
		goto loc_8243181C;
	case 102:
		goto loc_8243181C;
	case 103:
		goto loc_8243181C;
	case 104:
		goto loc_82431068;
	case 105:
		goto loc_824310DC;
	case 106:
		goto loc_82431150;
	case 107:
		goto loc_8243181C;
	case 108:
		goto loc_8243181C;
	case 109:
		goto loc_8243181C;
	case 110:
		goto loc_8243181C;
	case 111:
		goto loc_8243181C;
	case 112:
		goto loc_824311C4;
	case 113:
		goto loc_8243181C;
	case 114:
		goto loc_8243181C;
	case 115:
		goto loc_82431238;
	case 116:
		goto loc_8243181C;
	case 117:
		goto loc_8243181C;
	case 118:
		goto loc_8243130C;
	case 119:
		goto loc_82431380;
	case 120:
		goto loc_824313F4;
	case 121:
		goto loc_8243181C;
	case 122:
		goto loc_8243181C;
	case 123:
		goto loc_82431468;
	case 124:
		goto loc_8243181C;
	case 125:
		goto loc_8243181C;
	case 126:
		goto loc_824314D4;
	case 127:
		goto loc_8243181C;
	case 128:
		goto loc_8243181C;
	case 129:
		goto loc_824315A8;
	case 130:
		goto loc_8243161C;
	case 131:
		goto loc_82431690;
	case 132:
		goto loc_8243181C;
	case 133:
		goto loc_8243181C;
	case 134:
		goto loc_8243181C;
	case 135:
		goto loc_82431704;
	case 136:
		goto loc_8243181C;
	case 137:
		goto loc_82431788;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_8242B0DC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242B0FC;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b14c
	if (ctx.cr6.eq) goto loc_8242B14C;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b12c
	if (ctx.cr0.eq) goto loc_8242B12C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B124:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B124;
loc_8242B12C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b14c
	if (ctx.cr6.eq) goto loc_8242B14C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b14c
	if (ctx.cr0.eq) goto loc_8242B14C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B144:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B144;
loc_8242B14C:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B174;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = r30.u64 | 537919488;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242B190:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b1c8
	if (ctx.cr6.eq) goto loc_8242B1C8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b1c8
	if (ctx.cr0.eq) goto loc_8242B1C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B1C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b1c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B1C0;
loc_8242B1C8:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8242B1D0:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82425a08
	ctx.lr = 0x8242B1E4;
	sub_82425A08(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242B1E8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r31,160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bne cr6,0x8242b254
	if (!ctx.cr6.eq) goto loc_8242B254;
	// li r29,-1
	r29.s64 = -1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, r29.u32);
	// addi r6,r1,420
	ctx.r6.s64 = ctx.r1.s64 + 420;
	// stw r29,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, r29.u32);
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82427618
	ctx.lr = 0x8242B234;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r8,r1,412
	ctx.r8.s64 = ctx.r1.s64 + 412;
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
loc_8242B244:
	// lis r5,8224
	ctx.r5.s64 = 538968064;
loc_8242B248:
	// li r9,23
	ctx.r9.s64 = 23;
loc_8242B24C:
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242B254:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// bne cr6,0x8242b2c8
	if (!ctx.cr6.eq) goto loc_8242B2C8;
	// li r29,-1
	r29.s64 = -1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// stw r29,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, r29.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// stw r29,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, r29.u32);
	// addi r6,r1,428
	ctx.r6.s64 = ctx.r1.s64 + 428;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B290;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,428
	ctx.r7.s64 = ctx.r1.s64 + 428;
	// addi r6,r1,364
	ctx.r6.s64 = ctx.r1.s64 + 364;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82427618
	ctx.lr = 0x8242B2B4;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,364
	ctx.r7.s64 = ctx.r1.s64 + 364;
	// b 0x8242b244
	goto loc_8242B244;
loc_8242B2C8:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// bne cr6,0x8242b378
	if (!ctx.cr6.eq) goto loc_8242B378;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r29,-1
	r29.s64 = -1;
	// lis r8,8272
	ctx.r8.s64 = 542113792;
	// stw r29,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, r29.u32);
	// ori r28,r8,1
	r28.u64 = ctx.r8.u64 | 1;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B318;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,8
	ctx.r8.s64 = r30.s64 + 8;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,500
	ctx.r6.s64 = ctx.r1.s64 + 500;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B340;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,500
	ctx.r7.s64 = ctx.r1.s64 + 500;
	// addi r6,r1,424
	ctx.r6.s64 = ctx.r1.s64 + 424;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82427618
	ctx.lr = 0x8242B364;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r8,r1,316
	ctx.r8.s64 = ctx.r1.s64 + 316;
	// addi r7,r1,424
	ctx.r7.s64 = ctx.r1.s64 + 424;
	// b 0x8242b244
	goto loc_8242B244;
loc_8242B378:
	// mulli r4,r31,3
	ctx.r4.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(3));
	// bl 0x82423b58
	ctx.lr = 0x8242B380;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242B398:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8242b398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B398;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242b3d0
	if (ctx.cr6.eq) goto loc_8242B3D0;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242b3d0
	if (ctx.cr0.eq) goto loc_8242B3D0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242B3C8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b3c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B3C8;
loc_8242B3D0:
	// lwz r26,132(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242b3f8
	if (ctx.cr6.eq) goto loc_8242B3F8;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242b3f8
	if (ctx.cr0.eq) goto loc_8242B3F8;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242B3F0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b3f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B3F0;
loc_8242B3F8:
	// lwz r28,136(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242b420
	if (ctx.cr6.eq) goto loc_8242B420;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242b420
	if (ctx.cr0.eq) goto loc_8242B420;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242B418:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B418;
loc_8242B420:
	// stw r29,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, r29.u32);
	// clrlwi r30,r31,12
	r30.u64 = r31.u32 & 0xFFFFF;
	// stw r29,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B450;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B478;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8240
	ctx.r5.u64 = r30.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B4A0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,284
	ctx.r6.s64 = ctx.r1.s64 + 284;
	// oris r5,r30,20480
	ctx.r5.u64 = r30.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B4C8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,324
	ctx.r6.s64 = ctx.r1.s64 + 324;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B4F4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// addi r8,r1,284
	ctx.r8.s64 = ctx.r1.s64 + 284;
	// addi r7,r1,324
	ctx.r7.s64 = ctx.r1.s64 + 324;
	// b 0x8242b248
	goto loc_8242B248;
loc_8242B50C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r29,-1
	r29.s64 = -1;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, r29.u32);
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B558;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B584;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// b 0x8242b244
	goto loc_8242B244;
loc_8242B598:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b5d0
	if (ctx.cr6.eq) goto loc_8242B5D0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b5d0
	if (ctx.cr0.eq) goto loc_8242B5D0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B5C8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b5c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B5C8;
loc_8242B5D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// b 0x8242b1d0
	goto loc_8242B1D0;
loc_8242B5DC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b614
	if (ctx.cr6.eq) goto loc_8242B614;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b614
	if (ctx.cr0.eq) goto loc_8242B614;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B60C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b60c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B60C;
loc_8242B614:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8242B618:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82426090
	ctx.lr = 0x8242B630;
	sub_82426090(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242B634:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b678
	if (ctx.cr6.eq) goto loc_8242B678;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b678
	if (ctx.cr0.eq) goto loc_8242B678;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B670:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b670
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B670;
loc_8242B678:
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x8242b618
	goto loc_8242B618;
loc_8242B680:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242B6A0;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// beq cr6,0x8242b71c
	if (ctx.cr6.eq) goto loc_8242B71C;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b6d8
	if (ctx.cr0.eq) goto loc_8242B6D8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B6D0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b6d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B6D0;
loc_8242B6D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b71c
	if (ctx.cr6.eq) goto loc_8242B71C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b6fc
	if (ctx.cr0.eq) goto loc_8242B6FC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B6F4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B6F4;
loc_8242B6FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b71c
	if (ctx.cr6.eq) goto loc_8242B71C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b71c
	if (ctx.cr0.eq) goto loc_8242B71C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B714:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B714;
loc_8242B71C:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B744;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,20
	ctx.r9.s64 = 20;
	// oris r5,r30,4160
	ctx.r5.u64 = r30.u64 | 272629760;
loc_8242B754:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B76C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
loc_8242B780:
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242B788:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242B7C0;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b810
	if (ctx.cr6.eq) goto loc_8242B810;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b7f0
	if (ctx.cr0.eq) goto loc_8242B7F0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B7E8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B7E8;
loc_8242B7F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b810
	if (ctx.cr6.eq) goto loc_8242B810;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b810
	if (ctx.cr0.eq) goto loc_8242B810;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B808:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B808;
loc_8242B810:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242B834;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = r30.u64 | 536870912;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242B84C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82427468
	ctx.lr = 0x8242B86C;
	sub_82427468(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242B870:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b8a8
	if (ctx.cr6.eq) goto loc_8242B8A8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b8a8
	if (ctx.cr0.eq) goto loc_8242B8A8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B8A0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b8a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B8A0;
loc_8242B8A8:
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8242B8B0:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_8242B8B4:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82424ff8
	ctx.lr = 0x8242B8C4;
	sub_82424FF8(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242B8C8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x8242B8EC;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x82478758
	ctx.lr = 0x8242B90C;
	sub_82478758(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// lfd f1,32424(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// bl 0x82478758
	ctx.lr = 0x8242B930;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mulli r4,r30,7
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(7));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242B940;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242B958:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x8242b958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B958;
	// lwz r22,184(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r8,180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// beq cr6,0x8242b990
	if (ctx.cr6.eq) goto loc_8242B990;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// subf r10,r22,r8
	ctx.r10.u64 = ctx.r8.u64 - r22.u64;
loc_8242B980:
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242b980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B980;
loc_8242B990:
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b9bc
	if (ctx.cr6.eq) goto loc_8242B9BC;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b9bc
	if (ctx.cr0.eq) goto loc_8242B9BC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B9B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b9b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B9B4;
loc_8242B9BC:
	// lwz r23,164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242b9e4
	if (ctx.cr6.eq) goto loc_8242B9E4;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242b9e4
	if (ctx.cr0.eq) goto loc_8242B9E4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242B9DC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242b9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242B9DC;
loc_8242B9E4:
	// lwz r24,168(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ba0c
	if (ctx.cr6.eq) goto loc_8242BA0C;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ba0c
	if (ctx.cr0.eq) goto loc_8242BA0C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BA04:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ba04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BA04;
loc_8242BA0C:
	// lwz r26,172(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ba34
	if (ctx.cr6.eq) goto loc_8242BA34;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ba34
	if (ctx.cr0.eq) goto loc_8242BA34;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BA2C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ba2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BA2C;
loc_8242BA34:
	// lwz r27,176(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ba7c
	if (ctx.cr6.eq) goto loc_8242BA7C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ba5c
	if (ctx.cr0.eq) goto loc_8242BA5C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BA54:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ba54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BA54;
loc_8242BA5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ba7c
	if (ctx.cr6.eq) goto loc_8242BA7C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ba7c
	if (ctx.cr0.eq) goto loc_8242BA7C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BA74:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ba74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BA74;
loc_8242BA7C:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r28,r30,8272
	r28.u64 = r30.u64 | 542113792;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BAA0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r30,4176
	r29.u64 = r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BACC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BAF4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BB1C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BB44;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242BB60:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r1,808
	r25.s64 = ctx.r1.s64 + 808;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r24,r1,824
	r24.s64 = ctx.r1.s64 + 824;
	// addi r23,r1,752
	r23.s64 = ctx.r1.s64 + 752;
	// li r29,-1
	r29.s64 = -1;
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r26,r30,8272
	r26.u64 = r30.u64 | 542113792;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r8,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r8.u32);
	// addi r8,r1,584
	ctx.r8.s64 = ctx.r1.s64 + 584;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r7,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r7.u32);
	// addi r7,r1,568
	ctx.r7.s64 = ctx.r1.s64 + 568;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r27,r29
	r27.u64 = r29.u64;
	// stw r5,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r5.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r3.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r22,0(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r22,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, r22.u32);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r22,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, r22.u32);
	// lwz r22,8(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r22,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, r22.u32);
	// lwz r22,0(r10)
	r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r22,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, r22.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r29,0(r24)
	REX_STORE_U32(r24.u32 + 0, r29.u32);
	// stw r29,0(r23)
	REX_STORE_U32(r23.u32 + 0, r29.u32);
	// stw r29,4(r25)
	REX_STORE_U32(r25.u32 + 4, r29.u32);
	// stw r29,4(r24)
	REX_STORE_U32(r24.u32 + 4, r29.u32);
	// stw r29,4(r23)
	REX_STORE_U32(r23.u32 + 4, r29.u32);
	// stw r29,8(r25)
	REX_STORE_U32(r25.u32 + 8, r29.u32);
	// stw r29,8(r24)
	REX_STORE_U32(r24.u32 + 8, r29.u32);
	// stw r29,8(r23)
	REX_STORE_U32(r23.u32 + 8, r29.u32);
	// stw r11,624(r1)
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// stw r29,4(r15)
	REX_STORE_U32(r15.u32 + 4, r29.u32);
	// stw r29,8(r15)
	REX_STORE_U32(r15.u32 + 8, r29.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242BC5C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,616
	ctx.r8.s64 = ctx.r1.s64 + 616;
	// addi r7,r1,600
	ctx.r7.s64 = ctx.r1.s64 + 600;
	// addi r6,r1,824
	ctx.r6.s64 = ctx.r1.s64 + 824;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BC84;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,824
	ctx.r7.s64 = ctx.r1.s64 + 824;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BCAC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r8,r1,752
	ctx.r8.s64 = ctx.r1.s64 + 752;
	// addi r7,r1,808
	ctx.r7.s64 = ctx.r1.s64 + 808;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242BCC4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bcfc
	if (ctx.cr6.eq) goto loc_8242BCFC;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bcfc
	if (ctx.cr0.eq) goto loc_8242BCFC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BCF4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bcf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BCF4;
loc_8242BCFC:
	// li r11,269
	ctx.r11.s64 = 269;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8242BD04:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
loc_8242BD0C:
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242BD18:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bd50
	if (ctx.cr6.eq) goto loc_8242BD50;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bd50
	if (ctx.cr0.eq) goto loc_8242BD50;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BD48:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bd48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BD48;
loc_8242BD50:
	// li r11,135
	ctx.r11.s64 = 135;
loc_8242BD54:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x8242bd0c
	goto loc_8242BD0C;
loc_8242BD64:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-22720(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -22720);
	// bl 0x82478758
	ctx.lr = 0x8242BD94;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242BDA4;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bdcc
	if (ctx.cr0.eq) goto loc_8242BDCC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BDC4:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bdc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BDC4;
loc_8242BDCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bdf0
	if (ctx.cr0.eq) goto loc_8242BDF0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BDE8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bde8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BDE8;
loc_8242BDF0:
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8242BDF4:
	// li r11,517
	ctx.r11.s64 = 517;
loc_8242BDF8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8242BDFC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82430b98
	goto loc_82430B98;
loc_8242BE08:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8242be94
	if (!ctx.cr6.eq) goto loc_8242BE94;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
loc_8242BE34:
	// lwz r11,524(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r30,12(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be8c
	if (ctx.cr6.eq) goto loc_8242BE8C;
	// lwz r28,1716(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// addi r29,r1,144
	r29.s64 = ctx.r1.s64 + 144;
loc_8242BE4C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242be7c
	if (ctx.cr6.eq) goto loc_8242BE7C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,28(r28)
	REX_STORE_U32(r28.u32 + 28, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82434350
	ctx.lr = 0x8242BE74;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
loc_8242BE7C:
	// lwz r30,12(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242be4c
	if (!ctx.cr6.eq) goto loc_8242BE4C;
loc_8242BE8C:
	// li r31,0
	r31.s64 = 0;
	// b 0x82431840
	goto loc_82431840;
loc_8242BE94:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8242bf68
	if (!ctx.cr6.eq) goto loc_8242BF68;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// beq cr6,0x8242bed8
	if (ctx.cr6.eq) goto loc_8242BED8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bed8
	if (ctx.cr0.eq) goto loc_8242BED8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BED0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BED0;
loc_8242BED8:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,560
	ctx.r8.s64 = ctx.r1.s64 + 560;
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r10,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242BF20;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,516
	ctx.r7.s64 = ctx.r1.s64 + 516;
	// addi r6,r1,520
	ctx.r6.s64 = ctx.r1.s64 + 520;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242BF4C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// addi r8,r1,520
	ctx.r8.s64 = ctx.r1.s64 + 520;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242BF68:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8242c124
	if (!ctx.cr6.eq) goto loc_8242C124;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,776
	ctx.r6.s64 = ctx.r1.s64 + 776;
	// addi r5,r1,840
	ctx.r5.s64 = ctx.r1.s64 + 840;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r29.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, r29.u32);
	// stw r29,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r29.u32);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// stw r29,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, r29.u32);
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r29.u32);
	// stw r29,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, r29.u32);
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r29.u32);
	// beq cr6,0x8242bfe4
	if (ctx.cr6.eq) goto loc_8242BFE4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bfe4
	if (ctx.cr0.eq) goto loc_8242BFE4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242BFDC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242bfdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242BFDC;
loc_8242BFE4:
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242C040;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,776
	ctx.r6.s64 = ctx.r1.s64 + 776;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242C098;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,776
	ctx.r7.s64 = ctx.r1.s64 + 776;
	// addi r6,r1,840
	ctx.r6.s64 = ctx.r1.s64 + 840;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C0C4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,840
	ctx.r8.s64 = ctx.r1.s64 + 840;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,792
	ctx.r6.s64 = ctx.r1.s64 + 792;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C0F0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r5,20480
	ctx.r5.s64 = 1342177280;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,792
	ctx.r7.s64 = ctx.r1.s64 + 792;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x82430b94
	goto loc_82430B94;
loc_8242C124:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8242be34
	if (!ctx.cr6.eq) goto loc_8242BE34;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r29,-1
	r29.s64 = -1;
	// addi r10,r1,988
	ctx.r10.s64 = ctx.r1.s64 + 988;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242C140:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242c140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C140;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,940
	ctx.r10.s64 = ctx.r1.s64 + 940;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242C158:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242c158
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C158;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,1036
	ctx.r10.s64 = ctx.r1.s64 + 1036;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242C170:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242c170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C170;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,892
	ctx.r10.s64 = ctx.r1.s64 + 892;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242C188:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242c188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C188;
	// addi r10,r1,544
	ctx.r10.s64 = ctx.r1.s64 + 544;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// beq cr6,0x8242c1c8
	if (ctx.cr6.eq) goto loc_8242C1C8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242c1c8
	if (ctx.cr0.eq) goto loc_8242C1C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242C1C0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242c1c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C1C0;
loc_8242C1C8:
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// addi r6,r1,992
	ctx.r6.s64 = ctx.r1.s64 + 992;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242C2B4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,444
	ctx.r8.s64 = ctx.r1.s64 + 444;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// addi r6,r1,1004
	ctx.r6.s64 = ctx.r1.s64 + 1004;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C2DC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,1016
	ctx.r6.s64 = ctx.r1.s64 + 1016;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C304;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,468
	ctx.r8.s64 = ctx.r1.s64 + 468;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r1,1028
	ctx.r6.s64 = ctx.r1.s64 + 1028;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C32C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// stw r11,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// stw r11,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242C414;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,444
	ctx.r8.s64 = ctx.r1.s64 + 444;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// addi r6,r1,956
	ctx.r6.s64 = ctx.r1.s64 + 956;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C43C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,968
	ctx.r6.s64 = ctx.r1.s64 + 968;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C464;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,468
	ctx.r8.s64 = ctx.r1.s64 + 468;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r1,980
	ctx.r6.s64 = ctx.r1.s64 + 980;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C48C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r11,4112
	ctx.r11.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	r29.u64 = ctx.r11.u64 | 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C4BC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,956
	ctx.r7.s64 = ctx.r1.s64 + 956;
	// addi r6,r1,1052
	ctx.r6.s64 = ctx.r1.s64 + 1052;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C4E4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,968
	ctx.r7.s64 = ctx.r1.s64 + 968;
	// addi r6,r1,1064
	ctx.r6.s64 = ctx.r1.s64 + 1064;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C50C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,980
	ctx.r7.s64 = ctx.r1.s64 + 980;
	// addi r6,r1,1076
	ctx.r6.s64 = ctx.r1.s64 + 1076;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C534;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,1040
	ctx.r8.s64 = ctx.r1.s64 + 1040;
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,896
	ctx.r6.s64 = ctx.r1.s64 + 896;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C564;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1052
	ctx.r8.s64 = ctx.r1.s64 + 1052;
	// addi r7,r1,1004
	ctx.r7.s64 = ctx.r1.s64 + 1004;
	// addi r6,r1,908
	ctx.r6.s64 = ctx.r1.s64 + 908;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C58C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1064
	ctx.r8.s64 = ctx.r1.s64 + 1064;
	// addi r7,r1,1016
	ctx.r7.s64 = ctx.r1.s64 + 1016;
	// addi r6,r1,920
	ctx.r6.s64 = ctx.r1.s64 + 920;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C5B4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1076
	ctx.r8.s64 = ctx.r1.s64 + 1076;
	// addi r7,r1,1028
	ctx.r7.s64 = ctx.r1.s64 + 1028;
	// addi r6,r1,932
	ctx.r6.s64 = ctx.r1.s64 + 932;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C5DC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r10,3
	r29.u64 = ctx.r10.u64 | 3;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 52);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242C66C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// addi r7,r1,908
	ctx.r7.s64 = ctx.r1.s64 + 908;
	// addi r6,r1,548
	ctx.r6.s64 = ctx.r1.s64 + 548;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C694;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,248
	ctx.r8.s64 = ctx.r1.s64 + 248;
	// addi r7,r1,920
	ctx.r7.s64 = ctx.r1.s64 + 920;
	// addi r6,r1,552
	ctx.r6.s64 = ctx.r1.s64 + 552;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C6BC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,260
	ctx.r8.s64 = ctx.r1.s64 + 260;
	// addi r7,r1,932
	ctx.r7.s64 = ctx.r1.s64 + 932;
	// addi r6,r1,556
	ctx.r6.s64 = ctx.r1.s64 + 556;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C6E4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r5,20480
	ctx.r5.s64 = 1342177280;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// b 0x82430b94
	goto loc_82430B94;
loc_8242C720:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r31,160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r4,r31,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82423b58
	ctx.lr = 0x8242C750;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242C768:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8242c768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C768;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242c7a0
	if (ctx.cr6.eq) goto loc_8242C7A0;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242c7a0
	if (ctx.cr0.eq) goto loc_8242C7A0;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242C798:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242c798
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C798;
loc_8242C7A0:
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242c7c8
	if (ctx.cr6.eq) goto loc_8242C7C8;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242c7c8
	if (ctx.cr0.eq) goto loc_8242C7C8;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242C7C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242c7c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C7C0;
loc_8242C7C8:
	// stw r29,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, r29.u32);
	// clrlwi r30,r31,12
	r30.u64 = r31.u32 & 0xFFFFF;
	// stw r29,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C7F8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C820;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r1,332
	ctx.r6.s64 = ctx.r1.s64 + 332;
	// oris r5,r30,20480
	ctx.r5.u64 = r30.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C848;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,332
	ctx.r7.s64 = ctx.r1.s64 + 332;
	// addi r6,r1,360
	ctx.r6.s64 = ctx.r1.s64 + 360;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242C874;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// b 0x8242b24c
	goto loc_8242B24C;
loc_8242C890:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242c8d4
	if (ctx.cr6.eq) goto loc_8242C8D4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242c8d4
	if (ctx.cr0.eq) goto loc_8242C8D4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242C8CC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242c8cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C8CC;
loc_8242C8D4:
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82430b94
	goto loc_82430B94;
loc_8242C8EC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r9,32(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stw r11,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stw r11,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,708(r1)
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stw r11,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// beq cr6,0x8242c978
	if (ctx.cr6.eq) goto loc_8242C978;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242c978
	if (ctx.cr0.eq) goto loc_8242C978;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242C970:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242c970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C970;
loc_8242C978:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r11,517
	ctx.r11.s64 = 517;
	// addi r8,r1,704
	ctx.r8.s64 = ctx.r1.s64 + 704;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// addi r7,r1,688
	ctx.r7.s64 = ctx.r1.s64 + 688;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242C990:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x8242C9B4;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x82478758
	ctx.lr = 0x8242C9D4;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242C9E4;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242C9FC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242c9fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242C9FC;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ca2c
	if (ctx.cr6.eq) goto loc_8242CA2C;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ca2c
	if (ctx.cr0.eq) goto loc_8242CA2C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CA24:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ca24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CA24;
loc_8242CA2C:
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ca78
	if (ctx.cr6.eq) goto loc_8242CA78;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ca58
	if (ctx.cr0.eq) goto loc_8242CA58;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CA50:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ca50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CA50;
loc_8242CA58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ca78
	if (ctx.cr6.eq) goto loc_8242CA78;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ca78
	if (ctx.cr0.eq) goto loc_8242CA78;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CA70:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ca70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CA70;
loc_8242CA78:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CA98;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r30,4176
	ctx.r5.u64 = r30.u64 | 273678336;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242CAB4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242caec
	if (ctx.cr6.eq) goto loc_8242CAEC;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242caec
	if (ctx.cr0.eq) goto loc_8242CAEC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CAE4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CAE4;
loc_8242CAEC:
	// li r11,261
	ctx.r11.s64 = 261;
loc_8242CAF0:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x8242bd04
	goto loc_8242BD04;
loc_8242CAF8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r29,-1
	r29.s64 = -1;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r25,r30,12
	r25.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r29.u32);
	// addi r6,r1,340
	ctx.r6.s64 = ctx.r1.s64 + 340;
	// oris r5,r25,20480
	ctx.r5.u64 = r25.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CB54;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r14,36
	ctx.r8.s64 = r14.s64 + 36;
	// addi r7,r1,340
	ctx.r7.s64 = ctx.r1.s64 + 340;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CB80;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242CB98;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242CBAC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242cbac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CBAC;
	// lwz r24,172(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cbd8
	if (ctx.cr6.eq) goto loc_8242CBD8;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CBCC:
	// lwz r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CBCC;
loc_8242CBD8:
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cc00
	if (ctx.cr6.eq) goto loc_8242CC00;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cc00
	if (ctx.cr0.eq) goto loc_8242CC00;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CBF8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cbf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CBF8;
loc_8242CC00:
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cc28
	if (ctx.cr6.eq) goto loc_8242CC28;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cc28
	if (ctx.cr0.eq) goto loc_8242CC28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CC20:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cc20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CC20;
loc_8242CC28:
	// lwz r28,168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cc70
	if (ctx.cr6.eq) goto loc_8242CC70;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cc50
	if (ctx.cr0.eq) goto loc_8242CC50;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CC48:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cc48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CC48;
loc_8242CC50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cc70
	if (ctx.cr6.eq) goto loc_8242CC70;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cc70
	if (ctx.cr0.eq) goto loc_8242CC70;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CC68:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cc68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CC68;
loc_8242CC70:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r25,4112
	ctx.r5.u64 = r25.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CC94;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r30,r25,8256
	r30.u64 = r25.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CCC0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r25,8272
	ctx.r5.u64 = r25.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CCE8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242CD00:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242CD20;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// add r27,r11,r28
	r27.u64 = ctx.r11.u64 + r28.u64;
	// beq cr6,0x8242cd9c
	if (ctx.cr6.eq) goto loc_8242CD9C;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cd58
	if (ctx.cr0.eq) goto loc_8242CD58;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CD50:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cd50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CD50;
loc_8242CD58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cd9c
	if (ctx.cr6.eq) goto loc_8242CD9C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cd7c
	if (ctx.cr0.eq) goto loc_8242CD7C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CD74:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cd74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CD74;
loc_8242CD7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242cd9c
	if (ctx.cr6.eq) goto loc_8242CD9C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242cd9c
	if (ctx.cr0.eq) goto loc_8242CD9C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CD94:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242cd94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CD94;
loc_8242CD9C:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = r30.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CDC4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,24
	ctx.r9.s64 = 24;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// b 0x8242b754
	goto loc_8242B754;
loc_8242CDD8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242CE04;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242CE1C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8242ce1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CE1C;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r29,-1
	r29.s64 = -1;
loc_8242CE34:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ce5c
	if (ctx.cr6.eq) goto loc_8242CE5C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ce5c
	if (ctx.cr0.eq) goto loc_8242CE5C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CE54:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ce54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CE54;
loc_8242CE5C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x8242ce34
	if (!ctx.cr0.eq) goto loc_8242CE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ce88
	if (ctx.cr6.eq) goto loc_8242CE88;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ce88
	if (ctx.cr0.eq) goto loc_8242CE88;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242CE80:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ce80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242CE80;
loc_8242CE88:
	// lwz r22,148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r29,r30,12
	r29.u64 = r30.u32 & 0xFFFFF;
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r29,4144
	ctx.r5.u64 = r29.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CEB4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// oris r23,r29,8272
	r23.u64 = r29.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CEE4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// oris r24,r29,4112
	r24.u64 = r29.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CF14;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r25,172(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r29,8208
	ctx.r5.u64 = r29.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CF40;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r26,176(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r29,4160
	ctx.r5.u64 = r29.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CF6C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r25,180(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CF98;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r28,184(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242CFC4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r29,188(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824269e8
	ctx.lr = 0x8242CFF0;
	sub_824269E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242D008:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d040
	if (ctx.cr6.eq) goto loc_8242D040;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d040
	if (ctx.cr0.eq) goto loc_8242D040;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D038:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D038;
loc_8242D040:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r11,65
	ctx.r11.s64 = 65;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,22,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x8242bd0c
	goto loc_8242BD0C;
loc_8242D054:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242D070;
	sub_823F02B8(ctx, base);
	// mr. r17,r3
	r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r17.s32, 0, ctx.xer);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r17.u32);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// mulli r4,r30,10
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(10));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242D088;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242D09C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x8242d09c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D09C;
	// lwz r19,160(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d0d4
	if (ctx.cr6.eq) goto loc_8242D0D4;
	// addi r11,r19,-4
	ctx.r11.s64 = r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d0d4
	if (ctx.cr0.eq) goto loc_8242D0D4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D0CC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d0cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D0CC;
loc_8242D0D4:
	// lwz r23,164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d0fc
	if (ctx.cr6.eq) goto loc_8242D0FC;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d0fc
	if (ctx.cr0.eq) goto loc_8242D0FC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D0F4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D0F4;
loc_8242D0FC:
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d124
	if (ctx.cr6.eq) goto loc_8242D124;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d124
	if (ctx.cr0.eq) goto loc_8242D124;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D11C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D11C;
loc_8242D124:
	// lwz r20,172(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d14c
	if (ctx.cr6.eq) goto loc_8242D14C;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d14c
	if (ctx.cr0.eq) goto loc_8242D14C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D144:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D144;
loc_8242D14C:
	// lwz r21,176(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d174
	if (ctx.cr6.eq) goto loc_8242D174;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d174
	if (ctx.cr0.eq) goto loc_8242D174;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D16C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D16C;
loc_8242D174:
	// lwz r22,180(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d19c
	if (ctx.cr6.eq) goto loc_8242D19C;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d19c
	if (ctx.cr0.eq) goto loc_8242D19C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D194:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D194;
loc_8242D19C:
	// lwz r24,184(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d1c4
	if (ctx.cr6.eq) goto loc_8242D1C4;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d1c4
	if (ctx.cr0.eq) goto loc_8242D1C4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D1BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d1bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D1BC;
loc_8242D1C4:
	// lwz r25,188(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d210
	if (ctx.cr6.eq) goto loc_8242D210;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d1ec
	if (ctx.cr0.eq) goto loc_8242D1EC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D1E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D1E4;
loc_8242D1EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d210
	if (ctx.cr6.eq) goto loc_8242D210;
	// addi r11,r17,-4
	ctx.r11.s64 = r17.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d210
	if (ctx.cr0.eq) goto loc_8242D210;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D208:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D208;
loc_8242D210:
	// clrlwi r28,r30,12
	r28.u64 = r30.u32 & 0xFFFFF;
	// lwz r18,144(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r26,r28,4112
	r26.u64 = r28.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D23C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// oris r5,r28,8208
	ctx.r5.u64 = r28.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D264;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D28C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// oris r5,r28,8240
	ctx.r5.u64 = r28.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D2B4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r27,r28,8256
	r27.u64 = r28.u64 | 541065216;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D2E0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// oris r5,r28,4192
	ctx.r5.u64 = r28.u64 | 274726912;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D308;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D330;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r28,4160
	ctx.r5.u64 = r28.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D358;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D380;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r26,192(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d3b8
	if (ctx.cr6.eq) goto loc_8242D3B8;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d3b8
	if (ctx.cr0.eq) goto loc_8242D3B8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D3B0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D3B0;
loc_8242D3B8:
	// lwz r27,196(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d400
	if (ctx.cr6.eq) goto loc_8242D400;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d3e0
	if (ctx.cr0.eq) goto loc_8242D3E0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D3D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d3d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D3D8;
loc_8242D3E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d400
	if (ctx.cr6.eq) goto loc_8242D400;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d400
	if (ctx.cr0.eq) goto loc_8242D400;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D3F8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d3f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D3F8;
loc_8242D400:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r28,4176
	ctx.r5.u64 = r28.u64 | 273678336;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D420;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r28,4144
	ctx.r5.u64 = r28.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D448;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
loc_8242D458:
	// oris r5,r28,8272
	ctx.r5.u64 = r28.u64 | 542113792;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242D460:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mulli r4,r30,6
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(6));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242D480;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242D498:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242d498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D498;
	// lwz r23,160(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d4d0
	if (ctx.cr6.eq) goto loc_8242D4D0;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d4d0
	if (ctx.cr0.eq) goto loc_8242D4D0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D4C8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D4C8;
loc_8242D4D0:
	// lwz r22,164(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d4f8
	if (ctx.cr6.eq) goto loc_8242D4F8;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d4f8
	if (ctx.cr0.eq) goto loc_8242D4F8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D4F0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D4F0;
loc_8242D4F8:
	// lwz r21,168(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d520
	if (ctx.cr6.eq) goto loc_8242D520;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d520
	if (ctx.cr0.eq) goto loc_8242D520;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D518:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D518;
loc_8242D520:
	// lwz r25,172(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d548
	if (ctx.cr6.eq) goto loc_8242D548;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d548
	if (ctx.cr0.eq) goto loc_8242D548;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D540:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D540;
loc_8242D548:
	// lwz r24,176(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d570
	if (ctx.cr6.eq) goto loc_8242D570;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d570
	if (ctx.cr0.eq) goto loc_8242D570;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D568:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D568;
loc_8242D570:
	// lwz r26,180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d5b8
	if (ctx.cr6.eq) goto loc_8242D5B8;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d598
	if (ctx.cr0.eq) goto loc_8242D598;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D590:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D590;
loc_8242D598:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d5b8
	if (ctx.cr6.eq) goto loc_8242D5B8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d5b8
	if (ctx.cr0.eq) goto loc_8242D5B8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D5B0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D5B0;
loc_8242D5B8:
	// lwz r27,144(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// oris r5,r30,4304
	ctx.r5.u64 = r30.u64 | 282066944;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D5E0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r28,r30,4112
	r28.u64 = r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D60C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r30,8208
	r29.u64 = r30.u64 | 537919488;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D638;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r30,4320
	ctx.r5.u64 = r30.u64 | 283115520;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D660;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D688;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D6B0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// b 0x8242b780
	goto loc_8242B780;
loc_8242D6C8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242d938
	if (!ctx.cr0.eq) goto loc_8242D938;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242D6FC;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242D710:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242d710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D710;
	// lwz r23,160(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d748
	if (ctx.cr6.eq) goto loc_8242D748;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d748
	if (ctx.cr0.eq) goto loc_8242D748;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D740:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D740;
loc_8242D748:
	// lwz r24,164(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d770
	if (ctx.cr6.eq) goto loc_8242D770;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d770
	if (ctx.cr0.eq) goto loc_8242D770;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D768:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D768;
loc_8242D770:
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d798
	if (ctx.cr6.eq) goto loc_8242D798;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d798
	if (ctx.cr0.eq) goto loc_8242D798;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D790:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D790;
loc_8242D798:
	// lwz r25,172(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d7e0
	if (ctx.cr6.eq) goto loc_8242D7E0;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d7c0
	if (ctx.cr0.eq) goto loc_8242D7C0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D7B8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D7B8;
loc_8242D7C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d7e0
	if (ctx.cr6.eq) goto loc_8242D7E0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d7e0
	if (ctx.cr0.eq) goto loc_8242D7E0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D7D8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D7D8;
loc_8242D7E0:
	// clrlwi r29,r30,12
	r29.u64 = r30.u32 & 0xFFFFF;
	// lwz r26,144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,64
	ctx.r9.s64 = 64;
	// oris r28,r29,4112
	r28.u64 = r29.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D80C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// oris r5,r29,8256
	ctx.r5.u64 = r29.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D834;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D85C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D884;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242D8AC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r29,r15
	r29.u64 = r15.u64;
	// subf r28,r15,r26
	r28.u64 = r26.u64 - r15.u64;
loc_8242D8C8:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82422288
	ctx.lr = 0x8242D8D8;
	sub_82422288(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lfd f0,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r14.u32 + 176);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f12,168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8242d908
	if (!ctx.cr6.gt) goto loc_8242D908;
	// lfd f11,168(r14)
	ctx.f11.u64 = REX_LOAD_U64(r14.u32 + 168);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8242d908
	if (!ctx.cr6.lt) goto loc_8242D908;
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 32);
	// b 0x8242d920
	goto loc_8242D920;
loc_8242D908:
	// lfd f11,168(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(r14.u32 + 168);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x8242d91c
	if (ctx.cr6.eq) goto loc_8242D91C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8242d924
	if (!ctx.cr6.eq) goto loc_8242D924;
loc_8242D91C:
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 36);
loc_8242D920:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8242D924:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// blt cr6,0x8242d8c8
	if (ctx.cr6.lt) goto loc_8242D8C8;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242D938:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
loc_8242D948:
	// lwz r10,32(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D948;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242D958:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242db9c
	if (!ctx.cr0.eq) goto loc_8242DB9C;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242D98C;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242D9A0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242d9a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D9A0;
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242d9d8
	if (ctx.cr6.eq) goto loc_8242D9D8;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242d9d8
	if (ctx.cr0.eq) goto loc_8242D9D8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D9D0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d9d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D9D0;
loc_8242D9D8:
	// lwz r27,164(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242da00
	if (ctx.cr6.eq) goto loc_8242DA00;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242da00
	if (ctx.cr0.eq) goto loc_8242DA00;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242D9F8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242d9f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242D9F8;
loc_8242DA00:
	// lwz r26,168(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242da70
	if (ctx.cr6.eq) goto loc_8242DA70;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242da28
	if (ctx.cr0.eq) goto loc_8242DA28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DA20:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242da20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DA20;
loc_8242DA28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242da70
	if (ctx.cr6.eq) goto loc_8242DA70;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq 0x8242da50
	if (ctx.cr0.eq) goto loc_8242DA50;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DA48:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242da48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DA48;
loc_8242DA50:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242da70
	if (ctx.cr6.eq) goto loc_8242DA70;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242da70
	if (ctx.cr0.eq) goto loc_8242DA70;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DA68:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242da68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DA68;
loc_8242DA70:
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r29,r30,12
	r29.u64 = r30.u32 & 0xFFFFF;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r29,4144
	ctx.r5.u64 = r29.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DA98;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DAC0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r29,4112
	ctx.r5.u64 = r29.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DAE8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DB10;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r29,r15
	r29.u64 = r15.u64;
	// subf r28,r15,r28
	r28.u64 = r28.u64 - r15.u64;
loc_8242DB2C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r29,r28
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r28.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82422288
	ctx.lr = 0x8242DB3C;
	sub_82422288(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lfd f0,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r14.u32 + 176);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f12,168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8242db6c
	if (!ctx.cr6.gt) goto loc_8242DB6C;
	// lfd f11,168(r14)
	ctx.f11.u64 = REX_LOAD_U64(r14.u32 + 168);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x8242db6c
	if (!ctx.cr6.lt) goto loc_8242DB6C;
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 36);
	// b 0x8242db84
	goto loc_8242DB84;
loc_8242DB6C:
	// lfd f11,168(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(r14.u32 + 168);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x8242db80
	if (ctx.cr6.eq) goto loc_8242DB80;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8242db88
	if (!ctx.cr6.eq) goto loc_8242DB88;
loc_8242DB80:
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 32);
loc_8242DB84:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8242DB88:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// blt cr6,0x8242db2c
	if (ctx.cr6.lt) goto loc_8242DB2C;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242DB9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
loc_8242DBAC:
	// lwz r10,36(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 36);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dbac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DBAC;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242DBBC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8242de24
	if (!ctx.cr0.eq) goto loc_8242DE24;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242DBF0;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242DC04:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242dc04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DC04;
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242dc3c
	if (ctx.cr6.eq) goto loc_8242DC3C;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242dc3c
	if (ctx.cr0.eq) goto loc_8242DC3C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DC34:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dc34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DC34;
loc_8242DC3C:
	// lwz r23,164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242dc64
	if (ctx.cr6.eq) goto loc_8242DC64;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242dc64
	if (ctx.cr0.eq) goto loc_8242DC64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DC5C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dc5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DC5C;
loc_8242DC64:
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242dc8c
	if (ctx.cr6.eq) goto loc_8242DC8C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242dc8c
	if (ctx.cr0.eq) goto loc_8242DC8C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DC84:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dc84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DC84;
loc_8242DC8C:
	// lwz r24,172(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242dcd4
	if (ctx.cr6.eq) goto loc_8242DCD4;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242dcb4
	if (ctx.cr0.eq) goto loc_8242DCB4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DCAC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DCAC;
loc_8242DCB4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242dcd4
	if (ctx.cr6.eq) goto loc_8242DCD4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242dcd4
	if (ctx.cr0.eq) goto loc_8242DCD4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DCCC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242dccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DCCC;
loc_8242DCD4:
	// lwz r26,144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r29,r30,12
	r29.u64 = r30.u32 & 0xFFFFF;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DCFC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r28,r29,4112
	r28.u64 = r29.u64 | 269484032;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DD28;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r29,8240
	r29.u64 = r29.u64 | 540016640;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DD54;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DD7C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DDA4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r29,r15
	r29.u64 = r15.u64;
	// subf r28,r15,r26
	r28.u64 = r26.u64 - r15.u64;
loc_8242DDC0:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r29,r28
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + r28.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82422288
	ctx.lr = 0x8242DDD0;
	sub_82422288(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lfd f12,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(r14.u32 + 176);
	// lfd f11,160(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x8242de08
	if (ctx.cr6.gt) goto loc_8242DE08;
	// lfd f0,168(r14)
	ctx.f0.u64 = REX_LOAD_U64(r14.u32 + 168);
	// lfd f13,168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8242de08
	if (ctx.cr6.lt) goto loc_8242DE08;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x8242de08
	if (ctx.cr6.eq) goto loc_8242DE08;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x8242de10
	if (!ctx.cr6.eq) goto loc_8242DE10;
loc_8242DE08:
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 36);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_8242DE10:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(r27.u32, r30.u32, ctx.xer);
	// blt cr6,0x8242ddc0
	if (ctx.cr6.lt) goto loc_8242DDC0;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242DE24:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
loc_8242DE34:
	// lwz r10,36(r14)
	ctx.r10.u64 = REX_LOAD_U32(r14.u32 + 36);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242de34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DE34;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242DE44:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242DE64;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242deb4
	if (ctx.cr6.eq) goto loc_8242DEB4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242de94
	if (ctx.cr0.eq) goto loc_8242DE94;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DE8C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242de8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DE8C;
loc_8242DE94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242deb4
	if (ctx.cr6.eq) goto loc_8242DEB4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242deb4
	if (ctx.cr0.eq) goto loc_8242DEB4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DEAC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242deac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DEAC;
loc_8242DEB4:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4176
	ctx.r5.u64 = r30.u64 | 273678336;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DED8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8242DEE4:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242DEF0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8242df60
	if (!ctx.cr6.eq) goto loc_8242DF60;
	// stw r29,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, r29.u32);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DF44;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8208
	ctx.r5.s64 = 537919488;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,348
	ctx.r8.s64 = ctx.r1.s64 + 348;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// b 0x8242b24c
	goto loc_8242B24C;
loc_8242DF60:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, r29.u32);
	// stw r29,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, r29.u32);
	// beq cr6,0x8242df88
	if (ctx.cr6.eq) goto loc_8242DF88;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242df88
	if (ctx.cr0.eq) goto loc_8242DF88;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242DF80:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242df80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242DF80;
loc_8242DF88:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r6,r1,376
	ctx.r6.s64 = ctx.r1.s64 + 376;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DFAC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,376
	ctx.r7.s64 = ctx.r1.s64 + 376;
	// addi r6,r1,356
	ctx.r6.s64 = ctx.r1.s64 + 356;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242DFD8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,356
	ctx.r7.s64 = ctx.r1.s64 + 356;
	// b 0x8242b24c
	goto loc_8242B24C;
loc_8242DFF4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x824269e8
	ctx.lr = 0x8242E040;
	sub_824269E8(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242E044:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(r30.u32, 4, ctx.xer);
	// bne cr6,0x82431838
	if (!ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242e0e4
	if (ctx.cr0.eq) goto loc_8242E0E4;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r31,148(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,20496
	ctx.r5.s64 = 1343225856;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// lwz r30,0(r6)
	r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stw r30,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, r30.u32);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, r31.u32);
	// lwz r31,0(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r31,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, r31.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	REX_STORE_U32(r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	REX_STORE_U32(r15.u32 + 12, ctx.r11.u32);
	// b 0x82430b9c
	goto loc_82430B9C;
loc_8242E0E4:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82423b58
	ctx.lr = 0x8242E0EC;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242E108:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242e108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E108;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,-1
	r29.s64 = -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8242E12C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8242e12c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E12C;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// stw r29,4(r15)
	REX_STORE_U32(r15.u32 + 4, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,8(r15)
	REX_STORE_U32(r15.u32 + 8, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,12(r15)
	REX_STORE_U32(r15.u32 + 12, r29.u32);
	// lwz r30,144(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E170;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E1A0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r15,4
	ctx.r6.s64 = r15.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E1D0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// lwz r29,168(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E204;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r30,172(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E234;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r29,176(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E260;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r30,180(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82426ec8
	ctx.lr = 0x8242E288;
	sub_82426EC8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r15,8
	ctx.r6.s64 = r15.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E2B0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r30,r14,32
	r30.s64 = r14.s64 + 32;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E2E0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// addi r6,r15,12
	ctx.r6.s64 = r15.s64 + 12;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// b 0x82430ba0
	goto loc_82430BA0;
loc_8242E308:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x8242E32C;
	sub_826A16A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x8242E340;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242E350;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242E368:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8242e368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E368;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e398
	if (ctx.cr6.eq) goto loc_8242E398;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e398
	if (ctx.cr0.eq) goto loc_8242E398;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E390:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E390;
loc_8242E398:
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e3e4
	if (ctx.cr6.eq) goto loc_8242E3E4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e3c4
	if (ctx.cr0.eq) goto loc_8242E3C4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E3BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e3bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E3BC;
loc_8242E3C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e3e4
	if (ctx.cr6.eq) goto loc_8242E3E4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e3e4
	if (ctx.cr0.eq) goto loc_8242E3E4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E3DC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E3DC;
loc_8242E3E4:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4192
	ctx.r5.u64 = r30.u64 | 274726912;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E408;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// b 0x8242dee4
	goto loc_8242DEE4;
loc_8242E418:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x8242E43C;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,10608(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 10608);
	// bl 0x826a16a0
	ctx.lr = 0x8242E44C;
	sub_826A16A0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fdiv f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82478758
	ctx.lr = 0x8242E464;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242E474;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242E48C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x8242e48c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E48C;
	// lwz r27,128(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e4bc
	if (ctx.cr6.eq) goto loc_8242E4BC;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e4bc
	if (ctx.cr0.eq) goto loc_8242E4BC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E4B4:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E4B4;
loc_8242E4BC:
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e3e4
	if (ctx.cr6.eq) goto loc_8242E3E4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e4e8
	if (ctx.cr0.eq) goto loc_8242E4E8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E4E0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e4e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E4E0;
loc_8242E4E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e3e4
	if (ctx.cr6.eq) goto loc_8242E3E4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e3e4
	if (ctx.cr0.eq) goto loc_8242E3E4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E500:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E500;
	// b 0x8242e3e4
	goto loc_8242E3E4;
loc_8242E50C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e544
	if (ctx.cr6.eq) goto loc_8242E544;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e544
	if (ctx.cr0.eq) goto loc_8242E544;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E53C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E53C;
loc_8242E544:
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x8242bd54
	goto loc_8242BD54;
loc_8242E54C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e590
	if (ctx.cr6.eq) goto loc_8242E590;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e590
	if (ctx.cr0.eq) goto loc_8242E590;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E588:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E588;
loc_8242E590:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,513
	ctx.r11.s64 = 513;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x8242bdf8
	goto loc_8242BDF8;
loc_8242E5A0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e5e4
	if (ctx.cr6.eq) goto loc_8242E5E4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e5e4
	if (ctx.cr0.eq) goto loc_8242E5E4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E5DC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e5dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E5DC;
loc_8242E5E4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwimi r5,r11,29,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82430b94
	goto loc_82430B94;
loc_8242E5FC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242E618;
	sub_823F02B8(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r15.s32, 0, ctx.xer);
	// stw r15,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r15.u32);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// mulli r4,r30,10
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(10));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242E630;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242E644:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242e644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E644;
	// lwz r18,160(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e67c
	if (ctx.cr6.eq) goto loc_8242E67C;
	// addi r11,r18,-4
	ctx.r11.s64 = r18.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e67c
	if (ctx.cr0.eq) goto loc_8242E67C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E674:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E674;
loc_8242E67C:
	// lwz r17,164(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e6a4
	if (ctx.cr6.eq) goto loc_8242E6A4;
	// addi r11,r17,-4
	ctx.r11.s64 = r17.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e6a4
	if (ctx.cr0.eq) goto loc_8242E6A4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E69C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e69c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E69C;
loc_8242E6A4:
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e6cc
	if (ctx.cr6.eq) goto loc_8242E6CC;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e6cc
	if (ctx.cr0.eq) goto loc_8242E6CC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E6C4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e6c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E6C4;
loc_8242E6CC:
	// lwz r16,172(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e6f4
	if (ctx.cr6.eq) goto loc_8242E6F4;
	// addi r11,r16,-4
	ctx.r11.s64 = r16.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e6f4
	if (ctx.cr0.eq) goto loc_8242E6F4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E6EC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e6ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E6EC;
loc_8242E6F4:
	// lwz r20,176(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e71c
	if (ctx.cr6.eq) goto loc_8242E71C;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e71c
	if (ctx.cr0.eq) goto loc_8242E71C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E714:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e714
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E714;
loc_8242E71C:
	// lwz r19,180(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e744
	if (ctx.cr6.eq) goto loc_8242E744;
	// addi r11,r19,-4
	ctx.r11.s64 = r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e744
	if (ctx.cr0.eq) goto loc_8242E744;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E73C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e73c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E73C;
loc_8242E744:
	// lwz r21,184(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e76c
	if (ctx.cr6.eq) goto loc_8242E76C;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e76c
	if (ctx.cr0.eq) goto loc_8242E76C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E764:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E764;
loc_8242E76C:
	// lwz r22,188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e794
	if (ctx.cr6.eq) goto loc_8242E794;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e794
	if (ctx.cr0.eq) goto loc_8242E794;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E78C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e78c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E78C;
loc_8242E794:
	// lwz r23,192(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e7e0
	if (ctx.cr6.eq) goto loc_8242E7E0;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e7bc
	if (ctx.cr0.eq) goto loc_8242E7BC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E7B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e7b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E7B4;
loc_8242E7BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e7e0
	if (ctx.cr6.eq) goto loc_8242E7E0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e7e0
	if (ctx.cr0.eq) goto loc_8242E7E0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E7D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e7d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E7D8;
loc_8242E7E0:
	// lwz r24,144(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r28,r30,12
	r28.u64 = r30.u32 & 0xFFFFF;
	// lwz r25,1724(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// oris r5,r28,4128
	ctx.r5.u64 = r28.u64 | 270532608;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E80C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// oris r5,r28,4160
	ctx.r5.u64 = r28.u64 | 272629760;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E834;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r26,r28,4112
	r26.u64 = r28.u64 | 269484032;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E860;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// rotlwi r18,r25,0
	r18.u64 = __builtin_rotateleft32(r25.u32, 0);
	// oris r25,r28,8256
	r25.u64 = r28.u64 | 541065216;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E890;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E8B8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r27,r28,8224
	r27.u64 = r28.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E8E4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E90C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E934;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// oris r5,r28,8272
	ctx.r5.u64 = r28.u64 | 542113792;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E95C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r16
	ctx.r7.u64 = r16.u64;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242E984;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,1732(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r28,196(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e9e0
	if (ctx.cr6.eq) goto loc_8242E9E0;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e9c0
	if (ctx.cr0.eq) goto loc_8242E9C0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E9B8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E9B8;
loc_8242E9C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242e9e0
	if (ctx.cr6.eq) goto loc_8242E9E0;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242e9e0
	if (ctx.cr0.eq) goto loc_8242E9E0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242E9D8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242e9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242E9D8;
loc_8242E9E0:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242EA00;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// b 0x82430ba4
	goto loc_82430BA4;
loc_8242EA28:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242EA54;
	sub_82423B58(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242eaa0
	if (ctx.cr6.eq) goto loc_8242EAA0;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242EA70:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ea70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EA70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242eaa0
	if (ctx.cr6.eq) goto loc_8242EAA0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242eaa0
	if (ctx.cr0.eq) goto loc_8242EAA0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242EA98:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ea98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EA98;
loc_8242EAA0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x8242bdf4
	goto loc_8242BDF4;
loc_8242EAA8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242EAD4;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242EAF0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242eaf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EAF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bdf0
	if (ctx.cr0.eq) goto loc_8242BDF0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242EB18:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242eb18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EB18;
	// b 0x8242bdf0
	goto loc_8242BDF0;
loc_8242EB24:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r29,132(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r27,16(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82431838
	if (!ctx.cr6.eq) goto loc_82431838;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8242eb70
	if (!ctx.cr6.eq) goto loc_8242EB70;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8242eb94
	goto loc_8242EB94;
loc_8242EB70:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// lwz r5,20(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,32(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,28(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 28);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x824461c0
	ctx.lr = 0x8242EB90;
	sub_824461C0(ctx, base);
	// addi r4,r1,1488
	ctx.r4.s64 = ctx.r1.s64 + 1488;
loc_8242EB94:
	// lwz r14,144(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// bl 0x82427e48
	ctx.lr = 0x8242EBA8;
	sub_82427E48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 32);
	// lwz r29,16(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r15,28(r27)
	r15.u64 = REX_LOAD_U32(r27.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82431838
	if (!ctx.cr6.eq) goto loc_82431838;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8242ec10
	if (!ctx.cr6.eq) goto loc_8242EC10;
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82427e48
	ctx.lr = 0x8242EBFC;
	sub_82427E48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r16,32(r29)
	r16.u64 = REX_LOAD_U32(r29.u32 + 32);
	// lwz r18,28(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 28);
	// b 0x8242ec5c
	goto loc_8242EC5C;
loc_8242EC10:
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,28(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 28);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x824461c0
	ctx.lr = 0x8242EC30;
	sub_824461C0(ctx, base);
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82427e48
	ctx.lr = 0x8242EC4C;
	sub_82427E48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r16,28(r29)
	r16.u64 = REX_LOAD_U32(r29.u32 + 28);
	// lwz r18,32(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 32);
loc_8242EC5C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r16.u32, ctx.xer);
	// bne cr6,0x82431838
	if (!ctx.cr6.eq) goto loc_82431838;
	// mullw r11,r18,r15
	ctx.r11.s64 = int64_t(r18.s32) * int64_t(r15.s32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82431838
	if (!ctx.cr6.eq) goto loc_82431838;
	// lwz r31,1716(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 16);
	// bl 0x82422ff8
	ctx.lr = 0x8242EC90;
	sub_82422FF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x8242ee44
	if (!ctx.cr0.eq) goto loc_8242EE44;
	// mulli r4,r15,5
	ctx.r4.s64 = static_cast<int64_t>(r15.u64 * static_cast<uint64_t>(5));
	// bl 0x82423b58
	ctx.lr = 0x8242ECA4;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r17,r15,2,0,29
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242ECBC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r17,r11
	ctx.r11.u64 = r17.u64 + ctx.r11.u64;
	// bdnz 0x8242ecbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242ECBC;
	// li r21,0
	r21.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r19,1732(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r29,-1
	r29.s64 = -1;
	// lwz r20,176(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,172(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r23,168(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r27,164(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,160(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8242ECF0:
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8242ee0c
	if (ctx.cr6.eq) goto loc_8242EE0C;
	// clrlwi r24,r15,12
	r24.u64 = r15.u32 & 0xFFFFF;
	// oris r22,r24,8272
	r22.u64 = r24.u64 | 542113792;
loc_8242ED04:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242ed6c
	if (ctx.cr6.eq) goto loc_8242ED6C;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r11,r30,r18
	ctx.r11.s64 = int64_t(r30.s32) * int64_t(r18.s32);
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + r14.u64;
	// subf r8,r27,r25
	ctx.r8.u64 = r25.u64 - r27.u64;
loc_8242ED38:
	// lwzux r6,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwx r6,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r28.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242ed38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242ED38;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq 0x8242ed6c
	if (ctx.cr0.eq) goto loc_8242ED6C;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
loc_8242ED64:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ed64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242ED64;
loc_8242ED6C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242ED8C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242eda4
	if (!ctx.cr6.eq) goto loc_8242EDA4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8242edf4
	goto loc_8242EDF4;
loc_8242EDA4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242edc8
	if (ctx.cr6.eq) goto loc_8242EDC8;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq 0x8242edc8
	if (ctx.cr0.eq) goto loc_8242EDC8;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
loc_8242EDC0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242edc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EDC0;
loc_8242EDC8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// oris r5,r24,8256
	ctx.r5.u64 = r24.u64 | 541065216;
	// bl 0x82423f70
	ctx.lr = 0x8242EDE8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8242EDF4:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8242EE00;
	sub_826A1E70(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(r30.u32, r16.u32, ctx.xer);
	// blt cr6,0x8242ed04
	if (ctx.cr6.lt) goto loc_8242ED04;
loc_8242EE0C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242ee30
	if (ctx.cr6.eq) goto loc_8242EE30;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r15
	ctx.ctr.u64 = r15.u64;
	// addi r10,r23,-4
	ctx.r10.s64 = r23.s64 + -4;
	// subf r9,r11,r19
	ctx.r9.u64 = r19.u64 - ctx.r11.u64;
loc_8242EE24:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwux r8,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8242ee24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EE24;
loc_8242EE30:
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(r21.u32, r18.u32, ctx.xer);
	// blt cr6,0x8242ecf0
	if (ctx.cr6.lt) goto loc_8242ECF0;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242EE44:
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824231d8
	ctx.lr = 0x8242EE58;
	sub_824231D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8242ef88
	if (ctx.cr0.eq) goto loc_8242EF88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242EE6C;
	sub_82423B58(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// beq cr6,0x8242eec8
	if (ctx.cr6.eq) goto loc_8242EEC8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
loc_8242EE88:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242eeb8
	if (ctx.cr6.eq) goto loc_8242EEB8;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_8242EEA0:
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + r28.u32);
	// stwux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242eea0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EEA0;
loc_8242EEB8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + r18.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x8242ee88
	if (!ctx.cr0.eq) goto loc_8242EE88;
loc_8242EEC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242eef0
	if (ctx.cr6.eq) goto loc_8242EEF0;
	// lwz r11,1732(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq 0x8242eef0
	if (ctx.cr0.eq) goto loc_8242EEF0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242EEE8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242eee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EEE8;
loc_8242EEF0:
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r14
	r28.u64 = r14.u64;
	// rlwinm r23,r11,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8242EF0C:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242ef70
	if (ctx.cr6.eq) goto loc_8242EF70;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r25,r16,2,0,29
	r25.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r22
	r30.u64 = r22.u64;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// oris r26,r11,20480
	r26.u64 = ctx.r11.u64 | 1342177280;
loc_8242EF2C:
	// add r11,r27,r29
	ctx.r11.u64 = r27.u64 + r29.u64;
	// lwz r10,1732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242EF58;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(r29.u32, r18.u32, ctx.xer);
	// blt cr6,0x8242ef2c
	if (ctx.cr6.lt) goto loc_8242EF2C;
loc_8242EF70:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// add r28,r28,r23
	r28.u64 = r28.u64 + r23.u64;
	// add r27,r27,r18
	r27.u64 = r27.u64 + r18.u64;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(r24.u32, r15.u32, ctx.xer);
	// blt cr6,0x8242ef0c
	if (ctx.cr6.lt) goto loc_8242EF0C;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242EF88:
	// mulli r4,r18,5
	ctx.r4.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(5));
	// bl 0x82423b58
	ctx.lr = 0x8242EF90;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r16,r18,2,0,29
	r16.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242EFA8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r16,r11
	ctx.r11.u64 = r16.u64 + ctx.r11.u64;
	// bdnz 0x8242efa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242EFA8;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r20,176(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r19,0
	r19.s64 = 0;
	// lwz r27,172(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r23,0
	r23.s64 = 0;
	// lwz r22,168(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r29,-1
	r29.s64 = -1;
	// lwz r25,164(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r21,160(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_8242EFE0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8242f100
	if (ctx.cr6.eq) goto loc_8242F100;
	// clrlwi r26,r18,12
	r26.u64 = r18.u32 & 0xFFFFF;
	// oris r24,r26,8272
	r24.u64 = r26.u64 | 542113792;
loc_8242EFF8:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242f05c
	if (ctx.cr6.eq) goto loc_8242F05C;
	// add r11,r23,r30
	ctx.r11.u64 = r23.u64 + r30.u64;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
	// mullw r10,r30,r18
	ctx.r10.s64 = int64_t(r30.s32) * int64_t(r18.s32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r9,r25,r21
	ctx.r9.u64 = r21.u64 - r25.u64;
loc_8242F01C:
	// lwzx r6,r8,r14
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r14.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + r28.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242f01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F01C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r18,0
	ctx.cr0.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq 0x8242f05c
	if (ctx.cr0.eq) goto loc_8242F05C;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
loc_8242F054:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F054;
loc_8242F05C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F07C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242f094
	if (!ctx.cr6.eq) goto loc_8242F094;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8242f0e4
	goto loc_8242F0E4;
loc_8242F094:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242f0b8
	if (ctx.cr6.eq) goto loc_8242F0B8;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r18,0
	ctx.cr0.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq 0x8242f0b8
	if (ctx.cr0.eq) goto loc_8242F0B8;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
loc_8242F0B0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f0b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F0B0;
loc_8242F0B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// oris r5,r26,8256
	ctx.r5.u64 = r26.u64 | 541065216;
	// bl 0x82423f70
	ctx.lr = 0x8242F0D8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_8242F0E4:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8242F0F0;
	sub_826A1E70(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8242eff8
	if (ctx.cr6.lt) goto loc_8242EFF8;
loc_8242F100:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(r18.u32, 0, ctx.xer);
	// beq cr6,0x8242f130
	if (ctx.cr6.eq) goto loc_8242F130;
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
	// mtctr r18
	ctx.ctr.u64 = r18.u64;
loc_8242F114:
	// add r8,r19,r11
	ctx.r8.u64 = r19.u64 + ctx.r11.u64;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r7,1732(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x8242f114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F114;
loc_8242F130:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// add r19,r19,r18
	r19.u64 = r19.u64 + r18.u64;
	// add r23,r23,r11
	r23.u64 = r23.u64 + ctx.r11.u64;
	// cmplw cr6,r17,r15
	ctx.cr6.compare<uint32_t>(r17.u32, r15.u32, ctx.xer);
	// blt cr6,0x8242efe0
	if (ctx.cr6.lt) goto loc_8242EFE0;
	// b 0x8242be34
	goto loc_8242BE34;
loc_8242F14C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,641
	ctx.r10.s64 = 641;
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwimi r5,r10,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x8242bd0c
	goto loc_8242BD0C;
loc_8242F17C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bne cr6,0x8242f2c0
	if (!ctx.cr6.eq) goto loc_8242F2C0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82423b58
	ctx.lr = 0x8242F1A4;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242F1C0:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242f1c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F1C0;
	// lwz r30,160(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// lwz r27,168(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r25,172(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r29,0(r15)
	REX_STORE_U32(r15.u32 + 0, r29.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242F220;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F24C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F278;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F2A4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,18
	ctx.r9.s64 = 18;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x8242b24c
	goto loc_8242B24C;
loc_8242F2C0:
	// li r29,-1
	r29.s64 = -1;
	// lwz r27,144(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r28,r30,12
	r28.u64 = r30.u32 & 0xFFFFF;
	// stw r29,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, r29.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// oris r5,r28,20480
	ctx.r5.u64 = r28.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F2F0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,396
	ctx.r7.s64 = ctx.r1.s64 + 396;
	// addi r6,r1,404
	ctx.r6.s64 = ctx.r1.s64 + 404;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F31C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242F330;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f374
	if (ctx.cr6.eq) goto loc_8242F374;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F348:
	// lwz r10,404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F348;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f374
	if (ctx.cr6.eq) goto loc_8242F374;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f374
	if (ctx.cr0.eq) goto loc_8242F374;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F36C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f36c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F36C;
loc_8242F374:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// b 0x8242d458
	goto loc_8242D458;
loc_8242F37C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82426ec8
	ctx.lr = 0x8242F3B8;
	sub_82426EC8(ctx, base);
	// b 0x82430ba8
	goto loc_82430BA8;
loc_8242F3BC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-22728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -22728);
	// bl 0x82478758
	ctx.lr = 0x8242F3EC;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242F3FC;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f424
	if (ctx.cr0.eq) goto loc_8242F424;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F41C:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F41C;
loc_8242F424:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242bdf0
	if (ctx.cr6.eq) goto loc_8242BDF0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242bdf0
	if (ctx.cr0.eq) goto loc_8242BDF0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F440:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F440;
	// b 0x8242bdf0
	goto loc_8242BDF0;
loc_8242F44C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r29,-1
	r29.s64 = -1;
	// lwz r26,148(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r25,144(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r27,r30,12
	r27.u64 = r30.u32 & 0xFFFFF;
	// stw r29,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, r29.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stw r29,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, r29.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// oris r5,r27,20480
	ctx.r5.u64 = r27.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F4A8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F4D4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,372
	ctx.r6.s64 = ctx.r1.s64 + 372;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F500;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242F514;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242F52C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242f52c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F52C;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f558
	if (ctx.cr6.eq) goto loc_8242F558;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F54C:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F54C;
loc_8242F558:
	// lwz r28,132(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f5a0
	if (ctx.cr6.eq) goto loc_8242F5A0;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f580
	if (ctx.cr0.eq) goto loc_8242F580;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F578:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f578
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F578;
loc_8242F580:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f5a0
	if (ctx.cr6.eq) goto loc_8242F5A0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f5a0
	if (ctx.cr0.eq) goto loc_8242F5A0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F598:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F598;
loc_8242F5A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r27,8272
	ctx.r5.u64 = r27.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F5BC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r27,8256
	ctx.r5.u64 = r27.u64 | 541065216;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242F5D4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r29,-1
	r29.s64 = -1;
	// lwz r22,148(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r23,144(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r24,r30,12
	r24.u64 = r30.u32 & 0xFFFFF;
	// stw r29,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, r29.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r29,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, r29.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r29,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, r29.u32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// stw r29,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, r29.u32);
	// oris r5,r24,20480
	ctx.r5.u64 = r24.u64 | 1342177280;
	// stw r29,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, r29.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, r29.u32);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r29,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, r29.u32);
	// stw r29,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r29.u32);
	// stw r29,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, r29.u32);
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r29.u32);
	// stw r29,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, r29.u32);
	// stw r29,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, r29.u32);
	// stw r29,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, r29.u32);
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r29.u32);
	// bl 0x82423f70
	ctx.lr = 0x8242F66C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r28,r11,1
	r28.u64 = ctx.r11.u64 | 1;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,380
	ctx.r6.s64 = ctx.r1.s64 + 380;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F69C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r26,152(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r1,408
	ctx.r6.s64 = ctx.r1.s64 + 408;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F6C8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,380
	ctx.r7.s64 = ctx.r1.s64 + 380;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F6F4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// addi r27,r14,32
	r27.s64 = r14.s64 + 32;
	// ori r25,r11,1
	r25.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,308
	ctx.r8.s64 = ctx.r1.s64 + 308;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,388
	ctx.r6.s64 = ctx.r1.s64 + 388;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F728;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,388
	ctx.r8.s64 = ctx.r1.s64 + 388;
	// addi r7,r1,408
	ctx.r7.s64 = ctx.r1.s64 + 408;
	// addi r6,r1,392
	ctx.r6.s64 = ctx.r1.s64 + 392;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F750;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,392
	ctx.r7.s64 = ctx.r1.s64 + 392;
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F77C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,312
	ctx.r8.s64 = ctx.r1.s64 + 312;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,300
	ctx.r6.s64 = ctx.r1.s64 + 300;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F7A4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r14,36
	ctx.r8.s64 = r14.s64 + 36;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F7D0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F7F8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F820;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,292
	ctx.r7.s64 = ctx.r1.s64 + 292;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F848;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F874;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F8A0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,344
	ctx.r7.s64 = ctx.r1.s64 + 344;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F8C8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mulli r4,r30,5
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(5));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242F8DC;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242F8F4:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242f8f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F8F4;
	// lwz r25,176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// beq cr6,0x8242f934
	if (ctx.cr6.eq) goto loc_8242F934;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// subf r10,r25,r7
	ctx.r10.u64 = ctx.r7.u64 - r25.u64;
loc_8242F91C:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242f91c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F91C;
loc_8242F934:
	// lwz r26,160(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f95c
	if (ctx.cr6.eq) goto loc_8242F95C;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f95c
	if (ctx.cr0.eq) goto loc_8242F95C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F954:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f954
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F954;
loc_8242F95C:
	// lwz r27,164(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f984
	if (ctx.cr6.eq) goto loc_8242F984;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f984
	if (ctx.cr0.eq) goto loc_8242F984;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F97C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F97C;
loc_8242F984:
	// lwz r28,168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f9cc
	if (ctx.cr6.eq) goto loc_8242F9CC;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f9ac
	if (ctx.cr0.eq) goto loc_8242F9AC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F9A4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f9a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F9A4;
loc_8242F9AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242f9cc
	if (ctx.cr6.eq) goto loc_8242F9CC;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242f9cc
	if (ctx.cr0.eq) goto loc_8242F9CC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242F9C4:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242f9c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242F9C4;
loc_8242F9CC:
	// oris r30,r24,8272
	r30.u64 = r24.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242F9EC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FA14;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r24,4112
	ctx.r5.u64 = r24.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FA3C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// oris r5,r24,8256
	ctx.r5.u64 = r24.u64 | 541065216;
	// b 0x82430b94
	goto loc_82430B94;
loc_8242FA54:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,32424(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 32424);
	// bl 0x82478758
	ctx.lr = 0x8242FA84;
	sub_82478758(ctx, base);
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242FA98;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242FAAC:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// bdnz 0x8242faac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FAAC;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fadc
	if (ctx.cr6.eq) goto loc_8242FADC;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fadc
	if (ctx.cr0.eq) goto loc_8242FADC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FAD4:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FAD4;
loc_8242FADC:
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fb08
	if (ctx.cr6.eq) goto loc_8242FB08;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fb08
	if (ctx.cr0.eq) goto loc_8242FB08;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FB00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fb00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FB00;
loc_8242FB08:
	// lwz r26,164(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fb30
	if (ctx.cr6.eq) goto loc_8242FB30;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fb30
	if (ctx.cr0.eq) goto loc_8242FB30;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FB28:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fb28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FB28;
loc_8242FB30:
	// lwz r28,168(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fb78
	if (ctx.cr6.eq) goto loc_8242FB78;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fb58
	if (ctx.cr0.eq) goto loc_8242FB58;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FB50:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FB50;
loc_8242FB58:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fb78
	if (ctx.cr6.eq) goto loc_8242FB78;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fb78
	if (ctx.cr0.eq) goto loc_8242FB78;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FB70:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fb70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FB70;
loc_8242FB78:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r29,r30,8256
	r29.u64 = r30.u64 | 541065216;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FB9C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = r30.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FBC4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FBEC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242FC08:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fc40
	if (ctx.cr6.eq) goto loc_8242FC40;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fc40
	if (ctx.cr0.eq) goto loc_8242FC40;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FC38:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fc38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FC38;
loc_8242FC40:
	// li r11,263
	ctx.r11.s64 = 263;
	// b 0x8242caf0
	goto loc_8242CAF0;
loc_8242FC48:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242FC68;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8242FC80:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8242fc80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FC80;
	// lwz r27,132(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// beq cr6,0x8242fcc0
	if (ctx.cr6.eq) goto loc_8242FCC0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// subf r10,r27,r8
	ctx.r10.u64 = ctx.r8.u64 - r27.u64;
loc_8242FCA8:
	// lwz r9,36(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 36);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,32(r14)
	ctx.r9.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8242fca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FCA8;
loc_8242FCC0:
	// lwz r28,136(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fd0c
	if (ctx.cr6.eq) goto loc_8242FD0C;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fcec
	if (ctx.cr0.eq) goto loc_8242FCEC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FCE4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fce4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FCE4;
loc_8242FCEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fd0c
	if (ctx.cr6.eq) goto loc_8242FD0C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fd0c
	if (ctx.cr0.eq) goto loc_8242FD0C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FD04:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fd04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FD04;
loc_8242FD0C:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FD2C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = r30.u64 | 536870912;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242FD48:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x8242FD6C;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8242FD80:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x8242fd80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FD80;
	// lwz r26,160(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fdb8
	if (ctx.cr6.eq) goto loc_8242FDB8;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fdb8
	if (ctx.cr0.eq) goto loc_8242FDB8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FDB0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fdb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FDB0;
loc_8242FDB8:
	// lwz r23,164(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fde0
	if (ctx.cr6.eq) goto loc_8242FDE0;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fde0
	if (ctx.cr0.eq) goto loc_8242FDE0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FDD8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fdd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FDD8;
loc_8242FDE0:
	// lwz r24,168(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fe08
	if (ctx.cr6.eq) goto loc_8242FE08;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fe08
	if (ctx.cr0.eq) goto loc_8242FE08;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FE00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fe00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FE00;
loc_8242FE08:
	// lwz r25,172(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fe50
	if (ctx.cr6.eq) goto loc_8242FE50;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fe30
	if (ctx.cr0.eq) goto loc_8242FE30;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FE28:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fe28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FE28;
loc_8242FE30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242fe50
	if (ctx.cr6.eq) goto loc_8242FE50;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242fe50
	if (ctx.cr0.eq) goto loc_8242FE50;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FE48:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242fe48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FE48;
loc_8242FE50:
	// clrlwi r28,r30,12
	r28.u64 = r30.u32 & 0xFFFFF;
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r28,4112
	r27.u64 = r28.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FE7C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r30,r28,8224
	r30.u64 = r28.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FEA8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FED0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8242FEF8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,18
	ctx.r9.s64 = 18;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// oris r5,r28,8256
	ctx.r5.u64 = r28.u64 | 541065216;
	// b 0x82430b98
	goto loc_82430B98;
loc_8242FF14:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8242ff4c
	if (ctx.cr6.eq) goto loc_8242FF4C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8242ff4c
	if (ctx.cr0.eq) goto loc_8242FF4C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8242FF44:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ff44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FF44;
loc_8242FF4C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// b 0x8242b8b0
	goto loc_8242B8B0;
loc_8242FF58:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r31,160(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242FF78;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8242FF90;
	sub_823F02B8(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242ffe4
	if (ctx.cr6.eq) goto loc_8242FFE4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242ffc4
	if (ctx.cr0.eq) goto loc_8242FFC4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242FFBC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ffbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FFBC;
loc_8242FFC4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8242ffe4
	if (ctx.cr6.eq) goto loc_8242FFE4;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq 0x8242ffe4
	if (ctx.cr0.eq) goto loc_8242FFE4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8242FFDC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8242ffdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8242FFDC;
loc_8242FFE4:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// b 0x8242b8b4
	goto loc_8242B8B4;
loc_8242FFF0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x82430014;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x82478758
	ctx.lr = 0x82430034;
	sub_82478758(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// lfd f1,32424(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// bl 0x82478758
	ctx.lr = 0x82430058;
	sub_82478758(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x82430068;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82430080:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x82430080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430080;
	// lwz r20,188(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// beq cr6,0x824300b8
	if (ctx.cr6.eq) goto loc_824300B8;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// subf r10,r20,r8
	ctx.r10.u64 = ctx.r8.u64 - r20.u64;
loc_824300A8:
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r31.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824300a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824300A8;
loc_824300B8:
	// lwz r24,160(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824300e4
	if (ctx.cr6.eq) goto loc_824300E4;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824300e4
	if (ctx.cr0.eq) goto loc_824300E4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824300DC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824300dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824300DC;
loc_824300E4:
	// lwz r21,164(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243010c
	if (ctx.cr6.eq) goto loc_8243010C;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243010c
	if (ctx.cr0.eq) goto loc_8243010C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430104:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430104;
loc_8243010C:
	// lwz r22,168(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430134
	if (ctx.cr6.eq) goto loc_82430134;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430134
	if (ctx.cr0.eq) goto loc_82430134;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243012C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243012c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243012C;
loc_82430134:
	// lwz r23,172(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243015c
	if (ctx.cr6.eq) goto loc_8243015C;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243015c
	if (ctx.cr0.eq) goto loc_8243015C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430154:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430154
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430154;
loc_8243015C:
	// lwz r25,176(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430184
	if (ctx.cr6.eq) goto loc_82430184;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430184
	if (ctx.cr0.eq) goto loc_82430184;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243017C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243017c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243017C;
loc_82430184:
	// lwz r26,180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824301cc
	if (ctx.cr6.eq) goto loc_824301CC;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824301ac
	if (ctx.cr0.eq) goto loc_824301AC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824301A4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824301a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824301A4;
loc_824301AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824301cc
	if (ctx.cr6.eq) goto loc_824301CC;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824301cc
	if (ctx.cr0.eq) goto loc_824301CC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824301C4:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824301c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824301C4;
loc_824301CC:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r30,8272
	r27.u64 = r30.u64 | 542113792;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824301F0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r28,r30,4176
	r28.u64 = r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243021C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r30,4112
	r29.u64 = r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430248;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430270;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430298;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824302C0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x82430b90
	goto loc_82430B90;
loc_824302D4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-23096(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23096);
	// bl 0x82478758
	ctx.lr = 0x8243031C;
	sub_82478758(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
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
	// lfd f1,-22736(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -22736);
	// bl 0x82478758
	ctx.lr = 0x82430340;
	sub_82478758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mulli r4,r30,14
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(14));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x82430350;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82430368:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x82430368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430368;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r29,-1
	r29.s64 = -1;
loc_82430380:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824303a8
	if (ctx.cr6.eq) goto loc_824303A8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824303a8
	if (ctx.cr0.eq) goto loc_824303A8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824303A0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824303a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824303A0;
loc_824303A8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82430380
	if (!ctx.cr0.eq) goto loc_82430380;
	// lwz r21,212(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// lwz r22,208(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r24,204(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r23,200(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// beq cr6,0x82430420
	if (ctx.cr6.eq) goto loc_82430420;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// subf r10,r24,r23
	ctx.r10.u64 = r23.u64 - r24.u64;
	// subf r9,r24,r22
	ctx.r9.u64 = r22.u64 - r24.u64;
	// subf r8,r24,r21
	ctx.r8.u64 = r21.u64 - r24.u64;
loc_824303E0:
	// lwz r7,36(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 36);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,32(r14)
	ctx.r7.u64 = REX_LOAD_U32(r14.u32 + 32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, r31.u32);
	// stwx r28,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824303e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824303E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430420
	if (ctx.cr6.eq) goto loc_82430420;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430420
	if (ctx.cr0.eq) goto loc_82430420;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430418:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430418;
loc_82430420:
	// lwz r29,160(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430448;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// oris r25,r30,8256
	r25.u64 = r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430478;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r26,168(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824304A4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,172(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824304D0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r29,176(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// oris r28,r30,8272
	r28.u64 = r30.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430500;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,180(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243052C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r29,184(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = r30.u64 | 536870912;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430558;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r30,188(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430584;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r27,192(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824305B0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// lwz r30,196(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x824305DC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// b 0x82430b94
	goto loc_82430B94;
loc_824305F4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x82430614;
	sub_82423B58(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430664
	if (ctx.cr6.eq) goto loc_82430664;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430644
	if (ctx.cr0.eq) goto loc_82430644;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243063C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243063c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243063C;
loc_82430644:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430664
	if (ctx.cr6.eq) goto loc_82430664;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430664
	if (ctx.cr0.eq) goto loc_82430664;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243065C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243065c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243065C;
loc_82430664:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4208
	ctx.r5.u64 = r30.u64 | 275775488;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430688;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// b 0x82430b98
	goto loc_82430B98;
loc_824306A4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824306e8
	if (ctx.cr6.eq) goto loc_824306E8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824306e8
	if (ctx.cr0.eq) goto loc_824306E8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824306E0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824306e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824306E0;
loc_824306E8:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,515
	ctx.r11.s64 = 515;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,23
	ctx.r9.s64 = 23;
	// b 0x8242bdfc
	goto loc_8242BDFC;
loc_824306FC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x82430714;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82430888
	if (ctx.cr0.eq) goto loc_82430888;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8243072C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8243072c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243072C;
	// lwz r26,128(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430764
	if (ctx.cr6.eq) goto loc_82430764;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430764
	if (ctx.cr0.eq) goto loc_82430764;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243075C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243075c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243075C;
loc_82430764:
	// lwz r27,132(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243078c
	if (ctx.cr6.eq) goto loc_8243078C;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243078c
	if (ctx.cr0.eq) goto loc_8243078C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430784:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430784;
loc_8243078C:
	// lwz r28,136(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824307d4
	if (ctx.cr6.eq) goto loc_824307D4;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824307b4
	if (ctx.cr0.eq) goto loc_824307B4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824307AC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824307ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824307AC;
loc_824307B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824307d4
	if (ctx.cr6.eq) goto loc_824307D4;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824307d4
	if (ctx.cr0.eq) goto loc_824307D4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824307CC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824307cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824307CC;
loc_824307D4:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82424ff8
	ctx.lr = 0x824307F0;
	sub_82424FF8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243081C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x8242dee4
	goto loc_8242DEE4;
loc_8243082C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,8(r14)
	r31.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lfd f1,8312(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 8312);
	// bl 0x826a16a0
	ctx.lr = 0x82430850;
	sub_826A16A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f0,3728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 3728);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x82478758
	ctx.lr = 0x82430870;
	sub_82478758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r4,r30,9
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(9));
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423b58
	ctx.lr = 0x82430880;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82430894
	if (!ctx.cr0.eq) goto loc_82430894;
loc_82430888:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82431840
	goto loc_82431840;
loc_82430894:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824308A4:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x824308a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824308A4;
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824308d4
	if (ctx.cr6.eq) goto loc_824308D4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824308d4
	if (ctx.cr0.eq) goto loc_824308D4;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824308CC:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824308cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824308CC;
loc_824308D4:
	// lwz r23,160(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430900
	if (ctx.cr6.eq) goto loc_82430900;
	// addi r11,r23,-4
	ctx.r11.s64 = r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430900
	if (ctx.cr0.eq) goto loc_82430900;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824308F8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824308f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824308F8;
loc_82430900:
	// lwz r19,164(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430928
	if (ctx.cr6.eq) goto loc_82430928;
	// addi r11,r19,-4
	ctx.r11.s64 = r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430928
	if (ctx.cr0.eq) goto loc_82430928;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430920:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430920;
loc_82430928:
	// lwz r20,168(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430950
	if (ctx.cr6.eq) goto loc_82430950;
	// addi r11,r20,-4
	ctx.r11.s64 = r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430950
	if (ctx.cr0.eq) goto loc_82430950;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430948:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430948;
loc_82430950:
	// lwz r22,172(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430978
	if (ctx.cr6.eq) goto loc_82430978;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430978
	if (ctx.cr0.eq) goto loc_82430978;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430970:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430970;
loc_82430978:
	// lwz r24,176(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824309a0
	if (ctx.cr6.eq) goto loc_824309A0;
	// addi r11,r24,-4
	ctx.r11.s64 = r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824309a0
	if (ctx.cr0.eq) goto loc_824309A0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430998:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430998;
loc_824309A0:
	// lwz r21,180(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824309c8
	if (ctx.cr6.eq) goto loc_824309C8;
	// addi r11,r21,-4
	ctx.r11.s64 = r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824309c8
	if (ctx.cr0.eq) goto loc_824309C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824309C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824309c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824309C0;
loc_824309C8:
	// lwz r25,184(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824309f0
	if (ctx.cr6.eq) goto loc_824309F0;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824309f0
	if (ctx.cr0.eq) goto loc_824309F0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824309E8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824309e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824309E8;
loc_824309F0:
	// lwz r26,188(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430a38
	if (ctx.cr6.eq) goto loc_82430A38;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430a18
	if (ctx.cr0.eq) goto loc_82430A18;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430A10:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430a10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430A10;
loc_82430A18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430a38
	if (ctx.cr6.eq) goto loc_82430A38;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430a38
	if (ctx.cr0.eq) goto loc_82430A38;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430A30:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430A30;
loc_82430A38:
	// clrlwi r30,r30,12
	r30.u64 = r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r30,8272
	r27.u64 = r30.u64 | 542113792;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430A5C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r28,r30,4176
	r28.u64 = r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430A88;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r30,4112
	r29.u64 = r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430AB4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430ADC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430B04;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// oris r29,r30,8256
	r29.u64 = r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430B30;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430B58;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423f70
	ctx.lr = 0x82430B80;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82431840
	if (ctx.cr0.lt) goto loc_82431840;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82430B90:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_82430B94:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82430B98:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
loc_82430B9C:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_82430BA0:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
loc_82430BA4:
	// bl 0x82423f70
	ctx.lr = 0x82430BA8;
	sub_82423F70(ctx, base);
loc_82430BA8:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8242be34
	if (!ctx.cr0.lt) goto loc_8242BE34;
	// b 0x82431840
	goto loc_82431840;
loc_82430BB4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,676
	ctx.r11.s64 = ctx.r1.s64 + 676;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_82430BE8:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430BE8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,504
	ctx.r5.s64 = ctx.r1.s64 + 504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r11,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r11.u32);
	// bl 0x82427e48
	ctx.lr = 0x82430C18;
	sub_82427E48(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r10,680(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82430ce4
	if (ctx.cr0.eq) goto loc_82430CE4;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82430ce4
	if (!ctx.cr6.eq) goto loc_82430CE4;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82430cbc
	if (ctx.cr6.eq) goto loc_82430CBC;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_82430C68:
	// lwzx r11,r7,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82430ca4
	if (!ctx.cr6.eq) goto loc_82430CA4;
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82430ca4
	if (!ctx.cr6.eq) goto loc_82430CA4;
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82430ca4
	if (!ctx.cr6.eq) goto loc_82430CA4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82430cb8
	if (ctx.cr6.eq) goto loc_82430CB8;
loc_82430CA4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82430c68
	if (ctx.cr6.lt) goto loc_82430C68;
	// b 0x82430cbc
	goto loc_82430CBC;
loc_82430CB8:
	// stw r9,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r9.u32);
loc_82430CBC:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82430ce4
	if (!ctx.cr6.eq) goto loc_82430CE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,3509
	ctx.r5.s64 = 3509;
	// addi r6,r11,-22824
	ctx.r6.s64 = ctx.r11.s64 + -22824;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423ee8
	ctx.lr = 0x82430CE4;
	sub_82423EE8(ctx, base);
loc_82430CE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430d08
	if (ctx.cr6.eq) goto loc_82430D08;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430d08
	if (ctx.cr0.eq) goto loc_82430D08;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430D00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430D00;
loc_82430D08:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r8,r1,680
	ctx.r8.s64 = ctx.r1.s64 + 680;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
loc_82430D14:
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// b 0x82430b94
	goto loc_82430B94;
loc_82430D1C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,1428
	ctx.r11.s64 = ctx.r1.s64 + 1428;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
loc_82430D70:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430D70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430db8
	if (ctx.cr6.eq) goto loc_82430DB8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430db8
	if (ctx.cr0.eq) goto loc_82430DB8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430DB0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430db0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430DB0;
loc_82430DB8:
	// lis r5,24592
	ctx.r5.s64 = 1611661312;
	// addi r8,r1,1416
	ctx.r8.s64 = ctx.r1.s64 + 1416;
	// addi r7,r1,1408
	ctx.r7.s64 = ctx.r1.s64 + 1408;
	// b 0x82430d14
	goto loc_82430D14;
loc_82430DC8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1180
	ctx.r10.s64 = ctx.r1.s64 + 1180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82430DF8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82430df8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430DF8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430e28
	if (ctx.cr6.eq) goto loc_82430E28;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430e28
	if (ctx.cr0.eq) goto loc_82430E28;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430E20:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430E20;
loc_82430E28:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24608
	ctx.r5.s64 = 1612709888;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1184
	ctx.r7.s64 = ctx.r1.s64 + 1184;
	// b 0x82431814
	goto loc_82431814;
loc_82430E3C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1196
	ctx.r10.s64 = ctx.r1.s64 + 1196;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82430E6C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82430e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430E6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430e9c
	if (ctx.cr6.eq) goto loc_82430E9C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430e9c
	if (ctx.cr0.eq) goto loc_82430E9C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430E94:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430e94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430E94;
loc_82430E9C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24624
	ctx.r5.s64 = 1613758464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1200
	ctx.r7.s64 = ctx.r1.s64 + 1200;
	// b 0x82431814
	goto loc_82431814;
loc_82430EB0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1340
	ctx.r10.s64 = ctx.r1.s64 + 1340;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82430EE0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82430ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430EE0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430f10
	if (ctx.cr6.eq) goto loc_82430F10;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430f10
	if (ctx.cr0.eq) goto loc_82430F10;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430F08:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430F08;
loc_82430F10:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24640
	ctx.r5.s64 = 1614807040;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1344
	ctx.r7.s64 = ctx.r1.s64 + 1344;
	// b 0x82431814
	goto loc_82431814;
loc_82430F24:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,764
	ctx.r11.s64 = ctx.r1.s64 + 764;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82430F54:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430f54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430F54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82430f84
	if (ctx.cr6.eq) goto loc_82430F84;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82430f84
	if (ctx.cr0.eq) goto loc_82430F84;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82430F7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82430f7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82430F7C;
loc_82430F84:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24656
	ctx.r5.s64 = 1615855616;
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// b 0x82430d14
	goto loc_82430D14;
loc_82430F94:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,872
	ctx.r7.s64 = ctx.r1.s64 + 872;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,888
	ctx.r4.s64 = ctx.r1.s64 + 888;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_8243100C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8243100c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243100C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431058
	if (ctx.cr6.eq) goto loc_82431058;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82431058
	if (ctx.cr0.eq) goto loc_82431058;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431050:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431050;
loc_82431058:
	// lis r5,24672
	ctx.r5.s64 = 1616904192;
	// addi r8,r1,872
	ctx.r8.s64 = ctx.r1.s64 + 872;
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// b 0x82430d14
	goto loc_82430D14;
loc_82431068:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1148
	ctx.r10.s64 = ctx.r1.s64 + 1148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82431098:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82431098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431098;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824310c8
	if (ctx.cr6.eq) goto loc_824310C8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824310c8
	if (ctx.cr0.eq) goto loc_824310C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824310C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824310c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824310C0;
loc_824310C8:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24688
	ctx.r5.s64 = 1617952768;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// b 0x82431814
	goto loc_82431814;
loc_824310DC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1116
	ctx.r10.s64 = ctx.r1.s64 + 1116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8243110C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243110c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243110C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243113c
	if (ctx.cr6.eq) goto loc_8243113C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243113c
	if (ctx.cr0.eq) goto loc_8243113C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431134:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431134;
loc_8243113C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24704
	ctx.r5.s64 = 1619001344;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// b 0x82431814
	goto loc_82431814;
loc_82431150:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1212
	ctx.r10.s64 = ctx.r1.s64 + 1212;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82431180:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82431180
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431180;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824311b0
	if (ctx.cr6.eq) goto loc_824311B0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824311b0
	if (ctx.cr0.eq) goto loc_824311B0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824311A8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824311a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824311A8;
loc_824311B0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24720
	ctx.r5.s64 = 1620049920;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1216
	ctx.r7.s64 = ctx.r1.s64 + 1216;
	// b 0x82431814
	goto loc_82431814;
loc_824311C4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,1100
	ctx.r11.s64 = ctx.r1.s64 + 1100;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_824311F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824311f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824311F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431224
	if (ctx.cr6.eq) goto loc_82431224;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82431224
	if (ctx.cr0.eq) goto loc_82431224;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243121C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243121c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243121C;
loc_82431224:
	// lis r5,24736
	ctx.r5.s64 = 1621098496;
	// addi r7,r1,1104
	ctx.r7.s64 = ctx.r1.s64 + 1104;
loc_8243122C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_82431230:
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// b 0x82430b94
	goto loc_82430B94;
loc_82431238:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,1280
	ctx.r9.s64 = ctx.r1.s64 + 1280;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,1292
	ctx.r7.s64 = ctx.r1.s64 + 1292;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,1304
	ctx.r5.s64 = ctx.r1.s64 + 1304;
	// addi r4,r1,1316
	ctx.r4.s64 = ctx.r1.s64 + 1316;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_824312B0:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824312b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824312B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824312fc
	if (ctx.cr6.eq) goto loc_824312FC;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824312fc
	if (ctx.cr0.eq) goto loc_824312FC;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824312F4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824312f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824312F4;
loc_824312FC:
	// lis r5,24752
	ctx.r5.s64 = 1622147072;
	// addi r8,r1,1292
	ctx.r8.s64 = ctx.r1.s64 + 1292;
	// addi r7,r1,1280
	ctx.r7.s64 = ctx.r1.s64 + 1280;
	// b 0x82431230
	goto loc_82431230;
loc_8243130C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1324
	ctx.r10.s64 = ctx.r1.s64 + 1324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8243133C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243133c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243133C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243136c
	if (ctx.cr6.eq) goto loc_8243136C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243136c
	if (ctx.cr0.eq) goto loc_8243136C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431364:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431364;
loc_8243136C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24768
	ctx.r5.s64 = 1623195648;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1328
	ctx.r7.s64 = ctx.r1.s64 + 1328;
	// b 0x82431814
	goto loc_82431814;
loc_82431380:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1356
	ctx.r10.s64 = ctx.r1.s64 + 1356;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_824313B0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824313b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824313B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824313e0
	if (ctx.cr6.eq) goto loc_824313E0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824313e0
	if (ctx.cr0.eq) goto loc_824313E0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824313D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824313d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824313D8;
loc_824313E0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24784
	ctx.r5.s64 = 1624244224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1360
	ctx.r7.s64 = ctx.r1.s64 + 1360;
	// b 0x82431814
	goto loc_82431814;
loc_824313F4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1388
	ctx.r10.s64 = ctx.r1.s64 + 1388;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82431424:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82431424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431424;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431454
	if (ctx.cr6.eq) goto loc_82431454;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82431454
	if (ctx.cr0.eq) goto loc_82431454;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_8243144C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243144c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243144C;
loc_82431454:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24800
	ctx.r5.s64 = 1625292800;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1392
	ctx.r7.s64 = ctx.r1.s64 + 1392;
	// b 0x82431814
	goto loc_82431814;
loc_82431468:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,1084
	ctx.r11.s64 = ctx.r1.s64 + 1084;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82431498:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431498;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824314c8
	if (ctx.cr6.eq) goto loc_824314C8;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824314c8
	if (ctx.cr0.eq) goto loc_824314C8;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824314C0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824314c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824314C0;
loc_824314C8:
	// lis r5,24816
	ctx.r5.s64 = 1626341376;
	// addi r7,r1,1088
	ctx.r7.s64 = ctx.r1.s64 + 1088;
	// b 0x8243122c
	goto loc_8243122C;
loc_824314D4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,1232
	ctx.r9.s64 = ctx.r1.s64 + 1232;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,1244
	ctx.r7.s64 = ctx.r1.s64 + 1244;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,1256
	ctx.r5.s64 = ctx.r1.s64 + 1256;
	// addi r4,r1,1268
	ctx.r4.s64 = ctx.r1.s64 + 1268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_8243154C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8243154c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243154C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431598
	if (ctx.cr6.eq) goto loc_82431598;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82431598
	if (ctx.cr0.eq) goto loc_82431598;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431590:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431590;
loc_82431598:
	// lis r5,24832
	ctx.r5.s64 = 1627389952;
	// addi r8,r1,1244
	ctx.r8.s64 = ctx.r1.s64 + 1244;
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// b 0x82431230
	goto loc_82431230;
loc_824315A8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1132
	ctx.r10.s64 = ctx.r1.s64 + 1132;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_824315D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824315d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824315D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431608
	if (ctx.cr6.eq) goto loc_82431608;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x82431608
	if (ctx.cr0.eq) goto loc_82431608;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431600:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431600;
loc_82431608:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24848
	ctx.r5.s64 = 1628438528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// b 0x82431814
	goto loc_82431814;
loc_8243161C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1164
	ctx.r10.s64 = ctx.r1.s64 + 1164;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_8243164C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8243164c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243164C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243167c
	if (ctx.cr6.eq) goto loc_8243167C;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x8243167c
	if (ctx.cr0.eq) goto loc_8243167C;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_82431674:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82431674
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431674;
loc_8243167C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24864
	ctx.r5.s64 = 1629487104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// b 0x82431814
	goto loc_82431814;
loc_82431690:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1372
	ctx.r10.s64 = ctx.r1.s64 + 1372;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_824316C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x824316c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824316C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824316f0
	if (ctx.cr6.eq) goto loc_824316F0;
	// addi r11,r15,-4
	ctx.r11.s64 = r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq 0x824316f0
	if (ctx.cr0.eq) goto loc_824316F0;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824316E8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824316e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824316E8;
loc_824316F0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24880
	ctx.r5.s64 = 1630535680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1376
	ctx.r7.s64 = ctx.r1.s64 + 1376;
	// b 0x82431814
	goto loc_82431814;
loc_82431704:
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8242be34
	if (!ctx.cr6.gt) goto loc_8242BE34;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_82431730:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82431774
	if (ctx.cr6.eq) goto loc_82431774;
loc_8243173C:
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r6,24(r16)
	ctx.r6.u64 = REX_LOAD_U32(r16.u32 + 24);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stwx r6,r8,r15
	REX_STORE_U32(ctx.r8.u32 + r15.u32, ctx.r6.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8243173c
	if (ctx.cr6.lt) goto loc_8243173C;
loc_82431774:
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82431730
	if (ctx.cr6.lt) goto loc_82431730;
	// b 0x8242be34
	goto loc_8242BE34;
loc_82431788:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82431838
	if (ctx.cr6.eq) goto loc_82431838;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(r15.u32, 0, ctx.xer);
	// beq cr6,0x8242be34
	if (ctx.cr6.eq) goto loc_8242BE34;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(r14.u32 + 8);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,-22832(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -22832);
	// bl 0x82478758
	ctx.lr = 0x824317B8;
	sub_82478758(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// addi r7,r1,720
	ctx.r7.s64 = ctx.r1.s64 + 720;
	// stw r3,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// lwz r30,4(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, r30.u32);
	// lwz r30,0(r10)
	r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, r30.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r31,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, r31.u32);
	// stw r31,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, r31.u32);
	// stw r31,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, r31.u32);
	// stw r31,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, r31.u32);
	// stw r10,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r10.u32);
	// stw r11,0(r15)
	REX_STORE_U32(r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	REX_STORE_U32(r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	REX_STORE_U32(r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	REX_STORE_U32(r15.u32 + 12, ctx.r11.u32);
loc_82431814:
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// b 0x82430b98
	goto loc_82430B98;
loc_8243181C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,56(r16)
	ctx.r7.u64 = REX_LOAD_U32(r16.u32 + 56);
	// li r5,3042
	ctx.r5.s64 = 3042;
	// addi r6,r11,-22880
	ctx.r6.s64 = ctx.r11.s64 + -22880;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x82423e58
	ctx.lr = 0x82431838;
	sub_82423E58(ctx, base);
loc_82431838:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82431840:
	// lwz r10,1716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,528(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// li r30,4
	r30.s64 = 4;
	// lwz r8,532(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// addi r29,r11,-4
	r29.s64 = ctx.r11.s64 + -4;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r8.u32);
loc_82431860:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x823f0350
	ctx.lr = 0x8243186C;
	sub_823F0350(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x82431860
	if (!ctx.cr0.eq) goto loc_82431860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82431884
	goto loc_82431884;
loc_8243187C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82431884:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_826FCC80) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x826fcca8
	if (!ctx.cr6.eq) goto loc_826FCCA8;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x826fccfc
	goto loc_826FCCFC;
loc_826FCCA8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826fccbc
	if (ctx.cr6.eq) goto loc_826FCCBC;
	// li r3,13
	ctx.r3.s64 = 13;
	// b 0x826fccfc
	goto loc_826FCCFC;
loc_826FCCBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fc3d0
	ctx.lr = 0x826FCCC4;
	sub_826FC3D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b850
	ctx.lr = 0x826FCCCC;
	sub_8271B850(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r5,r5,40256
	ctx.r5.u64 = ctx.r5.u64 | 40256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2e60
	ctx.lr = 0x826FCCE4;
	sub_826A2E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826fccf8
	if (!ctx.cr6.eq) goto loc_826FCCF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x826FCCF8;
	sub_8271B1A0(ctx, base);
loc_826FCCF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826FCCFC:
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

DEFINE_REX_FUNC(sub_827038F8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,3728(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3728);
	// lwz r11,3724(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3724);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r10,3724(r3)
	REX_STORE_U32(ctx.r3.u32 + 3724, ctx.r10.u32);
	// stw r11,3728(r3)
	REX_STORE_U32(ctx.r3.u32 + 3728, ctx.r11.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,3768(r3)
	REX_STORE_U32(ctx.r3.u32 + 3768, ctx.r8.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,3772(r3)
	REX_STORE_U32(ctx.r3.u32 + 3772, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,3776(r3)
	REX_STORE_U32(ctx.r3.u32 + 3776, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,3800(r3)
	REX_STORE_U32(ctx.r3.u32 + 3800, ctx.r5.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r4,3804(r3)
	REX_STORE_U32(ctx.r3.u32 + 3804, ctx.r4.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,3808(r3)
	REX_STORE_U32(ctx.r3.u32 + 3808, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82707BF0) {
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
	ctx.lr = 0x82707BF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r30,11
	r30.s64 = 11;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x82707c78
	if (!ctx.cr6.lt) goto loc_82707C78;
loc_82707C20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707c78
	if (ctx.cr6.eq) goto loc_82707C78;
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
	// bge 0x82707c68
	if (!ctx.cr0.lt) goto loc_82707C68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707C68;
	sub_82725E38(ctx, base);
loc_82707C68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707c20
	if (ctx.cr6.gt) goto loc_82707C20;
loc_82707C78:
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
	// add r28,r11,r29
	r28.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82707cb0
	if (!ctx.cr0.lt) goto loc_82707CB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707CB0;
	sub_82725E38(ctx, base);
loc_82707CB0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,11
	r30.s64 = 11;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bge cr6,0x82707d24
	if (!ctx.cr6.lt) goto loc_82707D24;
loc_82707CCC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707d24
	if (ctx.cr6.eq) goto loc_82707D24;
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
	// bge 0x82707d14
	if (!ctx.cr0.lt) goto loc_82707D14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707D14;
	sub_82725E38(ctx, base);
loc_82707D14:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707ccc
	if (ctx.cr6.gt) goto loc_82707CCC;
loc_82707D24:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82707d5c
	if (!ctx.cr0.lt) goto loc_82707D5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707D5C;
	sub_82725E38(ctx, base);
loc_82707D5C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x82708020
	if (ctx.cr6.eq) goto loc_82708020;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82708020
	if (ctx.cr6.eq) goto loc_82708020;
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// stw r28,156(r27)
	REX_STORE_U32(r27.u32 + 156, r28.u32);
	// stw r29,160(r27)
	REX_STORE_U32(r27.u32 + 160, r29.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82707dcc
	if (!ctx.cr6.lt) goto loc_82707DCC;
loc_82707D8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707dcc
	if (ctx.cr6.eq) goto loc_82707DCC;
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
	// bge 0x82707dbc
	if (!ctx.cr0.lt) goto loc_82707DBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707DBC;
	sub_82725E38(ctx, base);
loc_82707DBC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707d8c
	if (ctx.cr6.gt) goto loc_82707D8C;
loc_82707DCC:
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
	// bge 0x82707df0
	if (!ctx.cr0.lt) goto loc_82707DF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707DF0;
	sub_82725E38(ctx, base);
loc_82707DF0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,3916(r27)
	REX_STORE_U32(r27.u32 + 3916, r26.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r11,3924(r27)
	REX_STORE_U32(r27.u32 + 3924, ctx.r11.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r26,3912(r27)
	REX_STORE_U32(r27.u32 + 3912, r26.u32);
	// stw r26,436(r27)
	REX_STORE_U32(r27.u32 + 436, r26.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82707e78
	if (!ctx.cr6.lt) goto loc_82707E78;
loc_82707E20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707e78
	if (ctx.cr6.eq) goto loc_82707E78;
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
	// bge 0x82707e68
	if (!ctx.cr0.lt) goto loc_82707E68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707E68;
	sub_82725E38(ctx, base);
loc_82707E68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707e20
	if (ctx.cr6.gt) goto loc_82707E20;
loc_82707E78:
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
	// bge 0x82707eb0
	if (!ctx.cr0.lt) goto loc_82707EB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707EB0;
	sub_82725E38(ctx, base);
loc_82707EB0:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r30,3908(r27)
	REX_STORE_U32(r27.u32 + 3908, r30.u32);
	// li r30,1
	r30.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82707f28
	if (!ctx.cr6.lt) goto loc_82707F28;
loc_82707ED0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707f28
	if (ctx.cr6.eq) goto loc_82707F28;
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
	// bge 0x82707f18
	if (!ctx.cr0.lt) goto loc_82707F18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707F18;
	sub_82725E38(ctx, base);
loc_82707F18:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707ed0
	if (ctx.cr6.gt) goto loc_82707ED0;
loc_82707F28:
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
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82707f60
	if (!ctx.cr0.lt) goto loc_82707F60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707F60;
	sub_82725E38(ctx, base);
loc_82707F60:
	// lwz r31,84(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 84);
	// li r30,3
	r30.s64 = 3;
	// stw r29,396(r27)
	REX_STORE_U32(r27.u32 + 396, r29.u32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82707fd8
	if (!ctx.cr6.lt) goto loc_82707FD8;
loc_82707F80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82707fd8
	if (ctx.cr6.eq) goto loc_82707FD8;
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
	// bge 0x82707fc8
	if (!ctx.cr0.lt) goto loc_82707FC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82707FC8;
	sub_82725E38(ctx, base);
loc_82707FC8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82707f80
	if (ctx.cr6.gt) goto loc_82707F80;
loc_82707FD8:
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
	// bge 0x82708010
	if (!ctx.cr0.lt) goto loc_82708010;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82708010;
	sub_82725E38(ctx, base);
loc_82708010:
	// stw r30,15496(r27)
	REX_STORE_U32(r27.u32 + 15496, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
loc_82708020:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82731908) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82734668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82734670;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1244(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1244);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82734714
	if (ctx.cr6.lt) goto loc_82734714;
	// lwz r11,1308(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82734698
	if (ctx.cr6.eq) goto loc_82734698;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x827346a4
	if (!ctx.cr6.eq) goto loc_827346A4;
loc_82734698:
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827346b0
	if (!ctx.cr6.eq) goto loc_827346B0;
loc_827346A4:
	// lbz r11,27(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82734714
	if (!ctx.cr6.eq) goto loc_82734714;
loc_827346B0:
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_827346B8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82734700
	if (!ctx.cr6.eq) goto loc_82734700;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge 0x827346e8
	if (!ctx.cr0.lt) goto loc_827346E8;
	// bl 0x82725e38
	ctx.lr = 0x827346E8;
	sub_82725E38(ctx, base);
loc_827346E8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x827346b8
	if (ctx.cr6.lt) goto loc_827346B8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82734708
	if (ctx.cr6.eq) goto loc_82734708;
loc_82734700:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x827348bc
	goto loc_827348BC;
loc_82734708:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
	// b 0x827348c0
	goto loc_827348C0;
loc_82734714:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,3
	r30.s64 = 3;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82734788
	if (!ctx.cr6.lt) goto loc_82734788;
loc_82734730:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734788
	if (ctx.cr6.eq) goto loc_82734788;
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
	// bge 0x82734778
	if (!ctx.cr0.lt) goto loc_82734778;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82734778;
	sub_82725E38(ctx, base);
loc_82734778:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82734730
	if (ctx.cr6.gt) goto loc_82734730;
loc_82734788:
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
	// bge 0x827347c0
	if (!ctx.cr0.lt) goto loc_827347C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x827347C0;
	sub_82725E38(ctx, base);
loc_827347C0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
	// bne cr6,0x827348c0
	if (!ctx.cr6.eq) goto loc_827348C0;
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1168);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x82734890
	if (ctx.cr6.lt) goto loc_82734890;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82734850
	if (!ctx.cr6.lt) goto loc_82734850;
loc_827347F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734850
	if (ctx.cr6.eq) goto loc_82734850;
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
	// bge 0x82734840
	if (!ctx.cr0.lt) goto loc_82734840;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82734840;
	sub_82725E38(ctx, base);
loc_82734840:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827347f8
	if (ctx.cr6.gt) goto loc_827347F8;
loc_82734850:
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
	// bge 0x82734888
	if (!ctx.cr0.lt) goto loc_82734888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82734888;
	sub_82725E38(ctx, base);
loc_82734888:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// b 0x827348bc
	goto loc_827348BC;
loc_82734890:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge 0x827348b8
	if (!ctx.cr0.lt) goto loc_827348B8;
	// bl 0x82725e38
	ctx.lr = 0x827348B8;
	sub_82725E38(ctx, base);
loc_827348B8:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
loc_827348BC:
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
loc_827348C0:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r30,2
	r30.s64 = 2;
	// li r29,0
	r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82734934
	if (!ctx.cr6.lt) goto loc_82734934;
loc_827348DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82734934
	if (ctx.cr6.eq) goto loc_82734934;
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
	// bge 0x82734924
	if (!ctx.cr0.lt) goto loc_82734924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x82734924;
	sub_82725E38(ctx, base);
loc_82734924:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x827348dc
	if (ctx.cr6.gt) goto loc_827348DC;
loc_82734934:
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
	// bge 0x8273496c
	if (!ctx.cr0.lt) goto loc_8273496C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273496C;
	sub_82725E38(ctx, base);
loc_8273496C:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// stb r11,1248(r28)
	REX_STORE_U8(r28.u32 + 1248, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_827493E8) {
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
	ctx.lr = 0x827493F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r28,r11,r4
	r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// li r25,16
	r25.s64 = 16;
	// li r26,4
	r26.s64 = 4;
	// add r24,r11,r28
	r24.u64 = ctx.r11.u64 + r28.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82749430
	if (ctx.cr6.eq) goto loc_82749430;
	// li r25,20
	r25.s64 = 20;
	// li r26,0
	r26.s64 = 0;
loc_82749430:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// beq cr6,0x82749440
	if (ctx.cr6.eq) goto loc_82749440;
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// b 0x82749460
	goto loc_82749460;
loc_82749440:
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274945C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
loc_82749460:
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274947C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r11,r26,r31
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r31.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
	// addi r28,r11,3
	r28.s64 = ctx.r11.s64 + 3;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addic. r26,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r26.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x82749588
	if (!ctx.cr0.gt) goto loc_82749588;
	// bne cr6,0x82749524
	if (!ctx.cr6.eq) goto loc_82749524;
loc_8274949C:
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827494B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15896(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827494D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,15900(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x827494F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,15900(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8274950C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x8274949c
	if (!ctx.cr0.eq) goto loc_8274949C;
	// b 0x82749588
	goto loc_82749588;
loc_82749524:
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82749540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274955C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,15900(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82749578;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// bne 0x82749524
	if (!ctx.cr0.eq) goto loc_82749524;
loc_82749588:
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827495A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// bne cr6,0x827495c8
	if (!ctx.cr6.eq) goto loc_827495C8;
	// lwz r11,15896(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15896);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827495C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827495C8:
	// lwz r11,15900(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15900);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827495E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_8274D648) {
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
	ctx.lr = 0x8274D650;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,22164(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 22164);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r19,r10
	r19.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274d7c0
	if (ctx.cr6.eq) goto loc_8274D7C0;
	// lwz r11,20904(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274d6b4
	if (ctx.cr6.eq) goto loc_8274D6B4;
	// lwz r11,20908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8274d6b4
	if (ctx.cr6.eq) goto loc_8274D6B4;
	// lwz r11,21928(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21928);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8274d6b4
	if (!ctx.cr6.eq) goto loc_8274D6B4;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// lwz r10,22196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 22196);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,22192(r3)
	REX_STORE_U32(ctx.r3.u32 + 22192, ctx.r10.u32);
	// b 0x8274d6bc
	goto loc_8274D6BC;
loc_8274D6B4:
	// lwz r11,22196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22196);
	// stw r11,22192(r31)
	REX_STORE_U32(r31.u32 + 22192, ctx.r11.u32);
loc_8274D6BC:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r21,300(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r28,r11,-1
	r28.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(r28.s32, r21.s32, ctx.xer);
	// bge cr6,0x8274db40
	if (!ctx.cr6.lt) goto loc_8274DB40;
	// lwz r27,308(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r26,r28,2,0,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r28,1
	r22.s64 = r28.s64 + 1;
loc_8274D6DC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x8274d6f8
	if (ctx.cr6.eq) goto loc_8274D6F8;
	// lwz r11,22192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// li r29,0
	r29.s64 = 0;
	// lwzx r10,r26,r11
	ctx.r10.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274d6fc
	if (ctx.cr6.eq) goto loc_8274D6FC;
loc_8274D6F8:
	// li r29,1
	r29.s64 = 1;
loc_8274D6FC:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8274d714
	if (!ctx.cr6.eq) goto loc_8274D714;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(r22.s32, r21.s32, ctx.xer);
	// beq cr6,0x8274d72c
	if (ctx.cr6.eq) goto loc_8274D72C;
loc_8274D714:
	// lwz r11,22192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22192);
	// li r30,0
	r30.s64 = 0;
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8274d730
	if (ctx.cr6.eq) goto loc_8274D730;
loc_8274D72C:
	// li r30,1
	r30.s64 = 1;
loc_8274D730:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827493e8
	ctx.lr = 0x8274D750;
	sub_827493E8(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827495f0
	ctx.lr = 0x8274D770;
	sub_827495F0(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827495f0
	ctx.lr = 0x8274D790;
	sub_827495F0(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r28,r21
	ctx.cr6.compare<int32_t>(r28.s32, r21.s32, ctx.xer);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// add r24,r24,r10
	r24.u64 = r24.u64 + ctx.r10.u64;
	// add r23,r11,r23
	r23.u64 = ctx.r11.u64 + r23.u64;
	// blt cr6,0x8274d6dc
	if (ctx.cr6.lt) goto loc_8274D6DC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
loc_8274D7C0:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8274d7dc
	if (!ctx.cr6.eq) goto loc_8274D7DC;
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// addi r20,r11,-1
	r20.s64 = ctx.r11.s64 + -1;
	// b 0x8274d7e0
	goto loc_8274D7E0;
loc_8274D7DC:
	// lwz r20,300(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_8274D7E0:
	// cntlzw r11,r20
	ctx.r11.u64 = r20.u32 == 0 ? 32 : __builtin_clz(r20.u32);
	// lwz r29,308(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// rlwinm r18,r11,27,31,31
	r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x8274d814
	if (!ctx.cr6.eq) goto loc_8274D814;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827493e8
	ctx.lr = 0x8274D814;
	sub_827493E8(ctx, base);
loc_8274D814:
	// lwz r21,292(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// mullw r11,r21,r11
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(ctx.r11.s32);
	// add r28,r11,r24
	r28.u64 = ctx.r11.u64 + r24.u64;
	// bge cr6,0x8274d860
	if (!ctx.cr6.lt) goto loc_8274D860;
	// subf r30,r21,r20
	r30.u64 = r20.u64 - r21.u64;
loc_8274D830:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827493e8
	ctx.lr = 0x8274D850;
	sub_827493E8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// bne 0x8274d830
	if (!ctx.cr0.eq) goto loc_8274D830;
loc_8274D860:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8274d898
	if (!ctx.cr6.eq) goto loc_8274D898;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8274d898
	if (!ctx.cr6.eq) goto loc_8274D898;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827493e8
	ctx.lr = 0x8274D898;
	sub_827493E8(ctx, base);
loc_8274D898:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x8274d8c0
	if (!ctx.cr6.eq) goto loc_8274D8C0;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827495f0
	ctx.lr = 0x8274D8C0;
	sub_827495F0(ctx, base);
loc_8274D8C0:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// mullw r11,r21,r11
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(ctx.r11.s32);
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// bge cr6,0x8274d994
	if (!ctx.cr6.lt) goto loc_8274D994;
	// addi r22,r19,-1
	r22.s64 = r19.s64 + -1;
	// subf r24,r21,r20
	r24.u64 = r20.u64 - r21.u64;
loc_8274D8DC:
	// lwz r30,208(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274D904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r27,r11,3
	r27.s64 = ctx.r11.s64 + 3;
	// ble cr6,0x8274d968
	if (!ctx.cr6.gt) goto loc_8274D968;
	// mr r26,r22
	r26.u64 = r22.u64;
loc_8274D920:
	// lwz r11,15896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274D93C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274D958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// bne 0x8274d920
	if (!ctx.cr0.eq) goto loc_8274D920;
loc_8274D968:
	// lwz r11,15896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274D984;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r25,r11
	r25.u64 = r25.u64 + ctx.r11.u64;
	// bne 0x8274d8dc
	if (!ctx.cr0.eq) goto loc_8274D8DC;
loc_8274D994:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8274d9ec
	if (!ctx.cr6.eq) goto loc_8274D9EC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8274d9ec
	if (!ctx.cr6.eq) goto loc_8274D9EC;
	// lwz r27,208(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r28,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r28.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r30,r11,3
	r30.s64 = ctx.r11.s64 + 3;
	// ble 0x8274d9ec
	if (!ctx.cr0.gt) goto loc_8274D9EC;
loc_8274D9C4:
	// lwz r11,15900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274D9E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8274d9c4
	if (!ctx.cr0.eq) goto loc_8274D9C4;
loc_8274D9EC:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(r17.u32, 0, ctx.xer);
	// bne cr6,0x8274da14
	if (!ctx.cr6.eq) goto loc_8274DA14;
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827495f0
	ctx.lr = 0x8274DA14;
	sub_827495F0(ctx, base);
loc_8274DA14:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(r21.s32, r20.s32, ctx.xer);
	// mullw r11,r21,r11
	ctx.r11.s64 = int64_t(r21.s32) * int64_t(ctx.r11.s32);
	// add r25,r11,r23
	r25.u64 = ctx.r11.u64 + r23.u64;
	// bge cr6,0x8274dae8
	if (!ctx.cr6.lt) goto loc_8274DAE8;
	// addi r23,r19,-1
	r23.s64 = r19.s64 + -1;
	// subf r24,r21,r20
	r24.u64 = r20.u64 - r21.u64;
loc_8274DA30:
	// lwz r30,208(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,15896(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274DA58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r27,r11,3
	r27.s64 = ctx.r11.s64 + 3;
	// ble cr6,0x8274dabc
	if (!ctx.cr6.gt) goto loc_8274DABC;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_8274DA74:
	// lwz r11,15896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274DA90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,15900(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8274DAAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// bne 0x8274da74
	if (!ctx.cr0.eq) goto loc_8274DA74;
loc_8274DABC:
	// lwz r11,15896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15896);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274DAD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// add r25,r25,r11
	r25.u64 = r25.u64 + ctx.r11.u64;
	// bne 0x8274da30
	if (!ctx.cr0.eq) goto loc_8274DA30;
loc_8274DAE8:
	// lwz r11,3380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3380);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(r17.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8274db40
	if (!ctx.cr6.eq) goto loc_8274DB40;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// bne cr6,0x8274db40
	if (!ctx.cr6.eq) goto loc_8274DB40;
	// lwz r27,208(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addic. r28,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r28.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// addi r30,r11,3
	r30.s64 = ctx.r11.s64 + 3;
	// ble 0x8274db40
	if (!ctx.cr0.gt) goto loc_8274DB40;
loc_8274DB18:
	// lwz r11,15900(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15900);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8274DB34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8274db18
	if (!ctx.cr0.eq) goto loc_8274DB18;
loc_8274DB40:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x826a1cdc
	return;
}

DEFINE_REX_FUNC(sub_8276DB08) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8276DB20:
	// lwz r7,0(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lwzux r7,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// stwux r7,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r4,12(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r7,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r31,r31,r10
	r31.u64 = r31.u64 + ctx.r10.u64;
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// bdnz 0x8276db20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8276DB20;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8276F450) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x8276f474
	if (!ctx.cr6.gt) goto loc_8276F474;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// ble cr6,0x8276f480
	if (!ctx.cr6.gt) goto loc_8276F480;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lbz r10,-1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// clrlwi r3,r10,30
	ctx.r3.u64 = ctx.r10.u32 & 0x3;
	// blr 
	return;
loc_8276F474:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8276F480:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8276F8B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8276F8B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x8271b190
	ctx.lr = 0x8276F8CC;
	sub_8271B190(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f9b4
	if (ctx.cr6.eq) goto loc_8276F9B4;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x8276F8E4;
	sub_826A2E60(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,60(r30)
	REX_STORE_U32(r30.u32 + 60, r31.u32);
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r29,r30,12
	r29.s64 = r30.s64 + 12;
	// stw r11,72(r30)
	REX_STORE_U32(r30.u32 + 72, ctx.r11.u32);
	// stw r10,64(r30)
	REX_STORE_U32(r30.u32 + 64, ctx.r10.u32);
loc_8276F908:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276f750
	ctx.lr = 0x8276F914;
	sub_8276F750(ctx, base);
	// stw r3,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f940
	if (ctx.cr6.eq) goto loc_8276F940;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 64);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8276f908
	if (ctx.cr6.lt) goto loc_8276F908;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_8276F940:
	// addic. r29,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r29.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8276f9ac
	if (ctx.cr0.lt) goto loc_8276F9AC;
	// addi r11,r29,3
	ctx.r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
loc_8276F954:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8276f9a0
	if (ctx.cr6.eq) goto loc_8276F9A0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// bl 0x82769858
	ctx.lr = 0x8276F968;
	sub_82769858(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f978
	if (ctx.cr6.eq) goto loc_8276F978;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F978;
	sub_8271B1A0(ctx, base);
loc_8276F978:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f988
	if (ctx.cr6.eq) goto loc_8276F988;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F988;
	sub_8271B1A0(ctx, base);
loc_8276F988:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8276f998
	if (ctx.cr6.eq) goto loc_8276F998;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F998;
	sub_8271B1A0(ctx, base);
loc_8276F998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F9A0;
	sub_8271B1A0(ctx, base);
loc_8276F9A0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x8276f954
	if (!ctx.cr0.lt) goto loc_8276F954;
loc_8276F9AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8271b1a0
	ctx.lr = 0x8276F9B4;
	sub_8271B1A0(ctx, base);
loc_8276F9B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8277B4F8) {
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
	ctx.lr = 0x8277B500;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2ca0
	ctx.lr = 0x8277B508;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// lwz r9,412(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f28,f0
	f28.f64 = double(ctx.f0.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsub f12,f28,f30
	ctx.f12.f64 = f28.f64 - f30.f64;
	// lfd f26,-3744(r10)
	f26.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// fadd f11,f28,f30
	ctx.f11.f64 = f28.f64 + f30.f64;
	// srawi r24,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r24.s64 = ctx.r3.s32 >> 1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// srawi r17,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r17.s64 = ctx.r4.s32 >> 1;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r25
	ctx.r6.s64 = r25.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fsub f7,f12,f8
	ctx.f7.f64 = ctx.f12.f64 - ctx.f8.f64;
	// fctiwz f6,f11
	ctx.f6.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f7,f26
	ctx.cr6.compare(ctx.f7.f64, f26.f64);
	// bne cr6,0x8277b5a4
	if (!ctx.cr6.eq) goto loc_8277B5A4;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_8277B5A4:
	// lwz r19,388(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x8277b628
	if (!ctx.cr6.gt) goto loc_8277B628;
	// subf r11,r23,r20
	ctx.r11.u64 = r20.u64 - r23.u64;
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// mr r31,r19
	r31.u64 = r19.u64;
	// subf r26,r19,r22
	r26.u64 = r22.u64 - r19.u64;
	// subf r30,r19,r20
	r30.u64 = r20.u64 - r19.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_8277B5CC:
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(r28.s32, r20.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// blt cr6,0x8277b5dc
	if (ctx.cr6.lt) goto loc_8277B5DC;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_8277B5DC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8277b5f0
	if (!ctx.cr6.gt) goto loc_8277B5F0;
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B5F0;
	sub_826A1E70(ctx, base);
loc_8277B5F0:
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(r27.s32, r20.s32, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// blt cr6,0x8277b600
	if (ctx.cr6.lt) goto loc_8277B600;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_8277B600:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8277b61c
	if (!ctx.cr6.gt) goto loc_8277B61C;
	// subf r11,r5,r30
	ctx.r11.u64 = r30.u64 - ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B61C;
	sub_826A1E70(ctx, base);
loc_8277B61C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r20
	r31.u64 = r31.u64 + r20.u64;
	// bne 0x8277b5cc
	if (!ctx.cr0.eq) goto loc_8277B5CC;
loc_8277B628:
	// lwz r26,404(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r29,0
	r29.s64 = 0;
	// lwz r21,396(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x8277b6ec
	if (!ctx.cr6.gt) goto loc_8277B6EC;
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// srawi r10,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r10.s64 = r23.s32 >> 1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// subf r11,r10,r24
	ctx.r11.u64 = r24.u64 - ctx.r10.u64;
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
loc_8277B650:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// blt cr6,0x8277b660
	if (ctx.cr6.lt) goto loc_8277B660;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8277B660:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277b698
	if (!ctx.cr6.gt) goto loc_8277B698;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r24
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B684;
	sub_826A1E70(ctx, base);
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r9
	ctx.r4.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B698;
	sub_826A1E70(ctx, base);
loc_8277B698:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// blt cr6,0x8277b6a8
	if (ctx.cr6.lt) goto loc_8277B6A8;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_8277B6A8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8277b6e0
	if (!ctx.cr6.gt) goto loc_8277B6E0;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// subf r31,r30,r10
	r31.u64 = ctx.r10.u64 - r30.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B6D0;
	sub_826A1E70(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x826a1e70
	ctx.lr = 0x8277B6E0;
	sub_826A1E70(ctx, base);
loc_8277B6E0:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(r29.s32, r18.s32, ctx.xer);
	// blt cr6,0x8277b650
	if (ctx.cr6.lt) goto loc_8277B650;
loc_8277B6EC:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r25,r22,r14
	r25.u64 = r14.u64 - r22.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r27,r19,r22
	r27.u64 = r22.u64 - r19.u64;
	// and r30,r5,r11
	r30.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lfd f29,32424(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 32424);
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lfd f27,-22784(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -22784);
loc_8277B728:
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(r23.s32, r20.s32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// blt cr6,0x8277b738
	if (ctx.cr6.lt) goto loc_8277B738;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_8277B738:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8277b890
	if (!ctx.cr6.lt) goto loc_8277B890;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f28,f13
	f31.f64 = f28.f64 - ctx.f13.f64;
	// fdiv f1,f31,f30
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x8269d370
	ctx.lr = 0x8277B75C;
	sub_8269D370(ctx, base);
	// fsub f12,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f27.f64 - ctx.f1.f64;
	// fmsub f11,f1,f30,f31
	ctx.f11.f64 = std::fma(ctx.f1.f64, f30.f64, -f31.f64);
	// fmsub f10,f12,f30,f31
	ctx.f10.f64 = std::fma(ctx.f12.f64, f30.f64, -f31.f64);
	// fadd f9,f11,f29
	ctx.f9.f64 = ctx.f11.f64 + f29.f64;
	// fadd f8,f10,f29
	ctx.f8.f64 = ctx.f10.f64 + f29.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// add. r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8277b7b4
	if (ctx.cr0.lt) goto loc_8277B7B4;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
loc_8277B79C:
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// li r29,1
	r29.s64 = 1;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// b 0x8277b7ec
	goto loc_8277B7EC;
loc_8277B7B4:
	// add. r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8277b7e0
	if (ctx.cr0.lt) goto loc_8277B7E0;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f26.f64);
	// ble cr6,0x8277b7cc
	if (!ctx.cr6.gt) goto loc_8277B7CC;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x8277b79c
	goto loc_8277B79C;
loc_8277B7CC:
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// add r11,r25,r27
	ctx.r11.u64 = r25.u64 + r27.u64;
	// li r29,0
	r29.s64 = 0;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8277b7ec
	goto loc_8277B7EC;
loc_8277B7E0:
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// li r29,2
	r29.s64 = 2;
	// add r4,r27,r3
	ctx.r4.u64 = r27.u64 + ctx.r3.u64;
loc_8277B7EC:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x8277bd18
	ctx.lr = 0x8277B7F8;
	sub_8277BD18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8277b888
	if (!ctx.cr6.eq) goto loc_8277B888;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8277b82c
	if (!ctx.cr6.eq) goto loc_8277B82C;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x8277bd18
	ctx.lr = 0x8277B824;
	sub_8277BD18(ctx, base);
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// b 0x8277b878
	goto loc_8277B878;
loc_8277B82C:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x8277b850
	if (!ctx.cr6.eq) goto loc_8277B850;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r28,r16
	ctx.r4.u64 = r28.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x8277bd18
	ctx.lr = 0x8277B848;
	sub_8277BD18(ctx, base);
	// add r4,r28,r15
	ctx.r4.u64 = r28.u64 + r15.u64;
	// b 0x8277b878
	goto loc_8277B878;
loc_8277B850:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x8277b888
	if (!ctx.cr6.eq) goto loc_8277B888;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x8277bd18
	ctx.lr = 0x8277B870;
	sub_8277BD18(ctx, base);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
loc_8277B878:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x8277bd18
	ctx.lr = 0x8277B888;
	sub_8277BD18(ctx, base);
loc_8277B888:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8277b728
	goto loc_8277B728;
loc_8277B890:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x826a2cec
	ctx.lr = 0x8277B89C;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82791BF0) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x82791C04;
	sub_822F6280(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82791c40
	if (ctx.cr0.eq) goto loc_82791C40;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r9,-32135
	ctx.r9.s64 = -2105999360;
	// addi r10,r10,-15944
	ctx.r10.s64 = ctx.r10.s64 + -15944;
	// addi r3,r9,11864
	ctx.r3.s64 = ctx.r9.s64 + 11864;
	// stw r11,180(r10)
	REX_STORE_U32(ctx.r10.u32 + 180, ctx.r11.u32);
	// stw r11,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,180(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 180);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// bl 0x8269d008
	ctx.lr = 0x82791C30;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82791C40:
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
	ctx.lr = 0x82791C5C;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82792198) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// addi r3,r11,12624
	ctx.r3.s64 = ctx.r11.s64 + 12624;
	// b 0x8269d008
	sub_8269D008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_827921B8) {
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
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x827921CC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82792220
	if (ctx.cr0.eq) goto loc_82792220;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r11,-14480
	ctx.r7.s64 = ctx.r11.s64 + -14480;
	// lis r11,-32135
	ctx.r11.s64 = -2105999360;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r3,12(r7)
	REX_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r3,r11,12656
	ctx.r3.s64 = ctx.r11.s64 + 12656;
	// lwz r11,12(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// stw r10,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, ctx.r10.u32);
	// stw r9,28(r7)
	REX_STORE_U32(ctx.r7.u32 + 28, ctx.r9.u32);
	// stb r8,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, ctx.r8.u8);
	// bl 0x8269d008
	ctx.lr = 0x82792210;
	sub_8269D008(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82792220:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,18624
	ctx.r11.s64 = ctx.r11.s64 + 18624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82120018
	ctx.lr = 0x82792238;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82792E38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// addi r3,r11,-29432
	ctx.r3.s64 = ctx.r11.s64 + -29432;
	// b 0x82791aa0
	sub_82791AA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82792E58) {
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
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r31,r11,-15944
	r31.s64 = ctx.r11.s64 + -15944;
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x8214ab00
	ctx.lr = 0x82792E78;
	sub_8214AB00(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82120ac0
	ctx.lr = 0x82792E88;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82120ac0
	ctx.lr = 0x82792E98;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x82120ac0
	ctx.lr = 0x82792EA8;
	sub_82120AC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x82120ac0
	ctx.lr = 0x82792EB8;
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

DEFINE_REX_FUNC(sub_82793838) {
	REX_FUNC_PROLOGUE();
	// .long 0x20002f7
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793968) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100c6
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793AC8) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100d5
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793C68) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010019
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82793E28) {
	REX_FUNC_PROLOGUE();
	// .long 0x201009d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794008) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000049
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82794218) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010226
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82799390) {
	REX_FUNC_PROLOGUE();
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// subf r9,r5,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r5.u64;
	// xor r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// srawi r11,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 31;
	// srawi r10,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 31;
	// and r7,r11,r4
	ctx.r7.u64 = ctx.r11.u64 & ctx.r4.u64;
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// and r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 & ctx.r3.u64;
	// andc r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 & ~ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// or r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 | ctx.r7.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827AC3B8) {
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
	ctx.lr = 0x827AC3C0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x827ac3e8
	if (ctx.cr6.eq) goto loc_827AC3E8;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
loc_827AC3E8:
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x827ac404
	if (ctx.cr6.eq) goto loc_827AC404;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_827AC404:
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x827ac420
	if (ctx.cr6.eq) goto loc_827AC420;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_827AC420:
	// lwz r10,12(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// beq cr6,0x827ac43c
	if (ctx.cr6.eq) goto loc_827AC43C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
loc_827AC43C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x827ac4e8
	if (!ctx.cr6.eq) goto loc_827AC4E8;
	// lhz r11,106(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,102(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,98(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// extsh r29,r9
	r29.s64 = ctx.r9.s16;
	// lhz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r28,r11
	r28.s64 = ctx.r11.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// subf r10,r7,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r7.u64;
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - r29.u64;
	// subf r8,r28,r3
	ctx.r8.u64 = ctx.r3.u64 - r28.u64;
	// subf r26,r6,r3
	r26.u64 = ctx.r3.u64 - ctx.r6.u64;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r25,r28,r6
	r25.u64 = ctx.r6.u64 - r28.u64;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// xor r26,r26,r8
	r26.u64 = r26.u64 ^ ctx.r8.u64;
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// xor r8,r25,r8
	ctx.r8.u64 = r25.u64 ^ ctx.r8.u64;
	// srawi r10,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 31;
	// srawi r9,r26,31
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r26.s32 >> 31;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// or r26,r11,r10
	r26.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r25,r9,r8
	r25.u64 = ctx.r9.u64 | ctx.r8.u64;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & r29.u64;
	// andc r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 & ~r26.u64;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
	// andc r6,r6,r25
	ctx.r6.u64 = ctx.r6.u64 & ~r25.u64;
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ctx.r4.u64;
	// and r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 & ctx.r3.u64;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r9,r7,r4
	ctx.r9.u64 = ctx.r7.u64 | ctx.r4.u64;
	// or r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x827ac53c
	goto loc_827AC53C;
loc_827AC4E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x827ac534
	if (!ctx.cr6.eq) goto loc_827AC534;
	// lhz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,102(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lhz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r11,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// sth r11,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addze r8,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r8.s64 = temp.s64;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// b 0x827ac53c
	goto loc_827AC53C;
loc_827AC534:
	// li r11,16384
	ctx.r11.s64 = 16384;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_827AC53C:
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,4
	r28.s64 = 4;
loc_827AC544:
	// rlwinm r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x827ac63c
	if (!ctx.cr6.eq) goto loc_827AC63C;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// rlwinm r9,r4,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// lwz r11,1840(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1840);
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,1844(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1844);
	// rlwinm r6,r10,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r9,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r5,r6,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r4.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x827ac638
	if (ctx.cr6.eq) goto loc_827AC638;
	// lwz r11,1168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x827ac5b4
	if (!ctx.cr6.eq) goto loc_827AC5B4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ac200
	ctx.lr = 0x827AC5AC;
	sub_827AC200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x827ac638
	goto loc_827AC638;
loc_827AC5B4:
	// lhz r11,18(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 18);
	// srawi r10,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 16;
	// lhz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 16);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// lhz r7,50(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 50);
	// rotlwi r9,r8,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// lhz r6,52(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 52);
	// add r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r5,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rotlwi r9,r7,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// rotlwi r7,r6,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// rlwinm r8,r3,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,-64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -64, ctx.xer);
	// bge cr6,0x827ac600
	if (!ctx.cr6.lt) goto loc_827AC600;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// addi r4,r11,-64
	ctx.r4.s64 = ctx.r11.s64 + -64;
	// b 0x827ac610
	goto loc_827AC610;
loc_827AC600:
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x827ac610
	if (!ctx.cr6.gt) goto loc_827AC610;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_827AC610:
	// cmpwi cr6,r8,-64
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -64, ctx.xer);
	// bge cr6,0x827ac624
	if (!ctx.cr6.lt) goto loc_827AC624;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// b 0x827ac634
	goto loc_827AC634;
loc_827AC624:
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x827ac634
	if (!ctx.cr6.gt) goto loc_827AC634;
	// subf r11,r8,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r8.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_827AC634:
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
loc_827AC638:
	// stw r4,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r4.u32);
loc_827AC63C:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// bne 0x827ac544
	if (!ctx.cr0.eq) goto loc_827AC544;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_827B4BC0) {
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
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,96
	ctx.r8.s64 = 96;
	// lvx128 v16,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,144
	ctx.r9.s64 = 144;
	// vaddshs v24,v1,v16
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// li r10,192
	ctx.r10.s64 = 192;
	// rlwinm r12,r6,1,0,30
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v2,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v24,v24,v24
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// lvx128 v4,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r4,r4,r10
	ctx.r4.u64 = ctx.r4.u64 + ctx.r10.u64;
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v6,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v7,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v8,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v20,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// vaddshs v28,v5,v20
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// lvx128 v17,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v25,v2,v17
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// lvx128 v19,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// vaddshs v26,v3,v18
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vpkshus v28,v28,v28
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v27,v4,v19
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vpkshus v25,v25,v25
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// lvx128 v21,r5,r7
	ea = (ctx.r5.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vpkshus v26,v26,v26
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// lvx128 v22,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v6,v21
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vpkshus v27,v27,v27
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// lvx128 v23,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v7,v22
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r6,r12
	ctx.r7.u64 = ctx.r6.u64 + ctx.r12.u64;
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddshs v31,v8,v23
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvewx v25,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v29,v29
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvewx v25,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 + ctx.r8.u64;
	// stvewx v26,r3,r12
	ea = (ctx.r3.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v30,v30,v30
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvewx v26,r4,r12
	ea = (ctx.r4.u32 + ctx.r12.u32) & ~0x3;
	REX_STORE_U32(ea, v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r12,r8
	ctx.r10.u64 = ctx.r12.u64 + ctx.r8.u64;
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v31,v31,v31
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_827B8E08) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb0
	ctx.lr = 0x827B8E10;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r9,r5
	r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// bgt cr6,0x827b8fa0
	if (ctx.cr6.gt) goto loc_827B8FA0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x827b912c
	if (!ctx.cr6.gt) goto loc_827B912C;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r4,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_827B8E58:
	// add r11,r30,r3
	ctx.r11.u64 = r30.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r28,r1,-128
	r28.s64 = ctx.r1.s64 + -128;
	// lvx128 v60,r30,r3
	ea = (r30.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r9,r8
	ea = (ctx.r9.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v9,v61,v58,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v8,v60,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v56,v57,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrghb v1,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v10,v4,v4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v4.u8));
	// vmrglb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v9,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// vmrglb v28,v0,v8
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v7
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor v8,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// vsldoi v26,v10,v2,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vor v7,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// vsldoi v25,v9,v31,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v24,v8,v28,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vaddshs v23,v10,v26
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsldoi v22,v7,v27,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vaddshs v21,v9,v25
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v20,v8,v24
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v19,v7,v22
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v18,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v20,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v18,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v7,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v5,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v55,v7,v6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vpkshus128 v54,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v55,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r11,-120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -120);
	// lwz r9,-128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -128);
	// stvx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r3,-112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -112);
	// lwz r28,-104(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -104);
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stwx r11,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stwx r28,r31,r6
	REX_STORE_U32(r31.u32 + ctx.r6.u32, r28.u32);
	// bne cr6,0x827b8f88
	if (!ctx.cr6.eq) goto loc_827B8F88;
	// lwz r9,-124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -124);
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// lwz r3,-116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -116);
	// lwz r28,-108(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -108);
	// lwz r27,-100(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -100);
	// stw r9,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stwx r3,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
loc_827B8F88:
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r29,r5
	ctx.r5.u64 = r29.u64 + ctx.r5.u64;
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// bdnz 0x827b8e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B8E58;
	// b 0x826a1d00
	return;
loc_827B8FA0:
	// li r11,4
	ctx.r11.s64 = 4;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_827B8FB0:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r8,16(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// add r11,r31,r3
	ctx.r11.u64 = r31.u64 + ctx.r3.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,-128
	r30.s64 = ctx.r1.s64 + -128;
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,-96
	r26.s64 = ctx.r1.s64 + -96;
	// addi r29,r1,-112
	r29.s64 = ctx.r1.s64 + -112;
	// lbz r28,16(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lbz r27,16(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sth r8,-112(r1)
	REX_STORE_U16(ctx.r1.u32 + -112, ctx.r8.u16);
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// lvx128 v51,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r28,-128(r1)
	REX_STORE_U16(ctx.r1.u32 + -128, r28.u16);
	// lvx128 v44,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// sth r27,-96(r1)
	REX_STORE_U16(ctx.r1.u32 + -96, r27.u16);
	// lvx128 v43,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lvx128 v48,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// vperm128 v6,v52,v50,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v47,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v53,v48,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// sth r11,-80(r1)
	REX_STORE_U16(ctx.r1.u32 + -80, ctx.r11.u16);
	// vperm128 v5,v51,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvx128 v45,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vmrglb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v8,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v1,v3,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// vsldoi v6,v2,v9,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// vsldoi128 v28,v10,v45,2
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), 14));
	// vsldoi128 v24,v9,v44,2
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), 14));
	// vaddshs v30,v2,v6
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi v31,v5,v8,2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), 14));
	// vaddshs v29,v3,v1
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v10,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vperm128 v4,v49,v46,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsldoi128 v22,v8,v43,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), 14));
	// lvx128 v42,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v19,v9,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v27,v5,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vmrglb v6,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v18,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v17,v8,v22
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vslh v10,v19,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsldoi128 v15,v6,v42,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), 14));
	// vaddshs v21,v26,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsldoi v16,v4,v6,2
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), 14));
	// vaddshs v20,v25,v11
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v14,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v9,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vslh v8,v17,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v3,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v5,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v1,v6,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vsrah v31,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v29,v8,v11
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vpkshus128 v41,v5,v2
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v14,v11
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v27,v4,v16
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vslh v26,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v40,v31,v30
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vsrah v25,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v23,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v39,v24,v25
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vaddshs v22,v26,v11
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stvx128 v41,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v40,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v21,v23,v11
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v39,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// vsrah v19,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v38,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// stvx128 v38,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x827b8fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827B8FB0;
loc_827B912C:
	// b 0x826a1d00
	return;
}

