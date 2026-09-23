#include "hydrothunder_funcs.65.h"

DEFINE_REX_FUNC(sub_821231D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821231D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r10,94(r1)
	REX_STORE_U8(ctx.r1.u32 + 94, ctx.r10.u8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r9,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r9.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r31,r1,94
	r31.s64 = ctx.r1.s64 + 94;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82123234
	if (ctx.cr6.eq) goto loc_82123234;
	// li r9,10
	ctx.r9.s64 = 10;
loc_82123208:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82123234
	if (ctx.cr6.lt) goto loc_82123234;
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divwu. r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bne 0x82123208
	if (!ctx.cr0.eq) goto loc_82123208;
loc_82123234:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26336
	ctx.r3.s64 = ctx.r11.s64 + -26336;
	// bl 0x823ecbd8
	ctx.lr = 0x82123240;
	sub_823ECBD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ecbd8
	ctx.lr = 0x82123248;
	sub_823ECBD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26316
	ctx.r3.s64 = ctx.r11.s64 + -26316;
	// bl 0x823ecbd8
	ctx.lr = 0x82123254;
	sub_823ECBD8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ecbd8
	ctx.lr = 0x8212325C;
	sub_823ECBD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26308
	ctx.r3.s64 = ctx.r11.s64 + -26308;
	// bl 0x823ecbd8
	ctx.lr = 0x82123268;
	sub_823ECBD8(ctx, base);
	// addi r3,r31,1
	ctx.r3.s64 = r31.s64 + 1;
	// bl 0x823ecbd8
	ctx.lr = 0x82123270;
	sub_823ECBD8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r11,-26300
	ctx.r3.s64 = ctx.r11.s64 + -26300;
	// bl 0x823ecbd8
	ctx.lr = 0x8212327C;
	sub_823ECBD8(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8212C260) {
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
	// addi r11,r11,-24140
	ctx.r11.s64 = ctx.r11.s64 + -24140;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8212c28c
	if (ctx.cr0.eq) goto loc_8212C28C;
	// bl 0x8269ce98
	ctx.lr = 0x8212C28C;
	sub_8269CE98(ctx, base);
loc_8212C28C:
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

DEFINE_REX_FUNC(sub_8212DC00) {
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
	ctx.lr = 0x8212DC24;
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
	ctx.lr = 0x8212DC3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6056(r10)
	REX_STORE_U32(ctx.r10.u32 + 6056, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82130D70) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82130da8
	if (ctx.cr6.gt) goto loc_82130DA8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-21824
	ctx.r4.s64 = ctx.r11.s64 + -21824;
	// addi r3,r10,-21704
	ctx.r3.s64 = ctx.r10.s64 + -21704;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x821231d0
	ctx.lr = 0x82130DA8;
	sub_821231D0(ctx, base);
loc_82130DA8:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r10,r10,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(28));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
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

DEFINE_REX_FUNC(sub_82133DF0) {
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
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,252(r3)
	REX_STORE_U32(ctx.r3.u32 + 252, ctx.r11.u32);
	// bne 0x82133e6c
	if (!ctx.cr0.eq) goto loc_82133E6C;
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
	// beq cr6,0x82133e44
	if (ctx.cr6.eq) goto loc_82133E44;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82133e44
	if (ctx.cr6.eq) goto loc_82133E44;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82133E44:
	// addi r30,r31,15156
	r30.s64 = r31.s64 + 15156;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x82133E50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x823eea88
	ctx.lr = 0x82133E54;
	sub_823EEA88(ctx, base);
	// lbz r11,10942(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 10942);
	// stw r3,10888(r31)
	REX_STORE_U32(r31.u32 + 10888, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// andi. r11,r11,253
	ctx.r11.u64 = ctx.r11.u64 & 253;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,10942(r31)
	REX_STORE_U8(r31.u32 + 10942, ctx.r11.u8);
	// bl 0x827938b4
	ctx.lr = 0x82133E6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82133E6C:
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

DEFINE_REX_FUNC(sub_82139768) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82139770;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82177510
	ctx.lr = 0x82139788;
	sub_82177510(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82139804
	if (ctx.cr0.eq) goto loc_82139804;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821397B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821397ec
	if (!ctx.cr6.gt) goto loc_821397EC;
loc_821397C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,255
	ctx.r4.s64 = 255;
	// mullw r11,r31,r11
	ctx.r11.s64 = int64_t(r31.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x821397DC;
	sub_826A2E60(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821397c4
	if (ctx.cr6.lt) goto loc_821397C4;
loc_821397EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82139804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82139804:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8213D238) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8213D240;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-24248
	ctx.r11.s64 = ctx.r11.s64 + -24248;
	// addi r9,r9,-17428
	ctx.r9.s64 = ctx.r9.s64 + -17428;
	// addi r8,r8,-17368
	ctx.r8.s64 = ctx.r8.s64 + -17368;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r10,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x822f6280
	ctx.lr = 0x8213D294;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8213d300
	if (ctx.cr0.eq) goto loc_8213D300;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,16(r29)
	REX_STORE_U32(r29.u32 + 16, r30.u32);
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
	// stw r30,24(r29)
	REX_STORE_U32(r29.u32 + 24, r30.u32);
	// stfs f0,40(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// bl 0x82162298
	ctx.lr = 0x8213D2D4;
	sub_82162298(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82120ac0
	ctx.lr = 0x8213D2E4;
	sub_82120AC0(ctx, base);
	// stb r30,96(r31)
	REX_STORE_U8(r31.u32 + 96, r30.u8);
	// stb r30,97(r31)
	REX_STORE_U8(r31.u32 + 97, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
	// std r30,112(r31)
	REX_STORE_U64(r31.u32 + 112, r30.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
loc_8213D300:
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
	ctx.lr = 0x8213D318;
	sub_82120018(ctx, base);
}

DEFINE_REX_FUNC(sub_82145B30) {
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
	ctx.lr = 0x82145B38;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// ble cr6,0x82145c90
	if (!ctx.cr6.gt) goto loc_82145C90;
loc_82145B60:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82145bf0
	if (!ctx.cr6.gt) goto loc_82145BF0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82145cc0
	ctx.lr = 0x82145B7C;
	sub_82145CC0(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82145bcc
	if (!ctx.cr6.lt) goto loc_82145BCC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82145b30
	ctx.lr = 0x82145BC4;
	sub_82145B30(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x82145bdc
	goto loc_82145BDC;
loc_82145BCC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82145b30
	ctx.lr = 0x82145BD8;
	sub_82145B30(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82145BDC:
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x82145b60
	if (ctx.cr6.gt) goto loc_82145B60;
loc_82145BF0:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82145c90
	if (!ctx.cr6.gt) goto loc_82145C90;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x82145cb4
	if (!ctx.cr6.gt) goto loc_82145CB4;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82145c40
	if (!ctx.cr0.gt) goto loc_82145C40;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_82145C14:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821462d8
	ctx.lr = 0x82145C38;
	sub_821462D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x82145c14
	if (ctx.cr6.gt) goto loc_82145C14;
loc_82145C40:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x82145cb4
	if (!ctx.cr6.gt) goto loc_82145CB4;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_82145C50:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x821462d8
	ctx.lr = 0x82145C7C;
	sub_821462D8(ctx, base);
	// rlwinm r10,r30,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x82145c50
	if (ctx.cr6.gt) goto loc_82145C50;
	// b 0x82145cb4
	goto loc_82145CB4;
loc_82145C90:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82145cb4
	if (!ctx.cr6.gt) goto loc_82145CB4;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x82145cb4
	if (ctx.cr6.eq) goto loc_82145CB4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82146090
	ctx.lr = 0x82145CB4;
	sub_82146090(ctx, base);
loc_82145CB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82151690) {
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
	ctx.lr = 0x82151698;
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r25,0
	r25.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
loc_821516AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821516ac
	if (!ctx.cr0.eq) goto loc_821516AC;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r26,r11,-11216
	r26.s64 = ctx.r11.s64 + -11216;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8269cd80
	ctx.lr = 0x821516D4;
	sub_8269CD80(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8215175c
	if (ctx.cr0.eq) goto loc_8215175C;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r28,28
	r28.s64 = 28;
	// addi r29,r11,964
	r29.s64 = ctx.r11.s64 + 964;
loc_821516E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw. r10,r10,r28
	ctx.r10.u64 = uint32_t((r28.s32 && !(ctx.r10.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r10.s32 / r28.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82151748
	if (!ctx.cr0.gt) goto loc_82151748;
	// li r30,0
	r30.s64 = 0;
loc_82151704:
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82125d00
	ctx.lr = 0x82151710;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215173c
	if (ctx.cr0.eq) goto loc_8215173C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// divw r10,r10,r28
	ctx.r10.u64 = uint32_t((r28.s32 && !(ctx.r10.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r10.s32 / r28.s32 : 0);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82151704
	if (ctx.cr6.lt) goto loc_82151704;
	// b 0x82151748
	goto loc_82151748;
loc_8215173C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// or r25,r11,r25
	r25.u64 = ctx.r11.u64 | r25.u64;
loc_82151748:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8269cd80
	ctx.lr = 0x82151754;
	sub_8269CD80(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne 0x821516e8
	if (!ctx.cr0.eq) goto loc_821516E8;
loc_8215175C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82157950) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82157988
	if (ctx.cr6.eq) goto loc_82157988;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,-8396
	ctx.r4.s64 = ctx.r11.s64 + -8396;
	// addi r3,r10,-7992
	ctx.r3.s64 = ctx.r10.s64 + -7992;
	// li r5,1126
	ctx.r5.s64 = 1126;
	// bl 0x821231d0
	ctx.lr = 0x82157988;
	sub_821231D0(ctx, base);
loc_82157988:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_8215AA18) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8215AA20;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,120
	ctx.r3.s64 = 120;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x822f6280
	ctx.lr = 0x8215AA34;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8215aaa8
	if (ctx.cr0.eq) goto loc_8215AAA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-25440
	ctx.r11.s64 = ctx.r11.s64 + -25440;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82120d70
	ctx.lr = 0x8215AA54;
	sub_82120D70(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// addi r11,r11,-25412
	ctx.r11.s64 = ctx.r11.s64 + -25412;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82125bc8
	ctx.lr = 0x8215AA78;
	sub_82125BC8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(r31.u32 + 96, r30.u32);
	// bl 0x826a2e60
	ctx.lr = 0x8215AAA0;
	sub_826A2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8215aaac
	goto loc_8215AAAC;
loc_8215AAA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215AAAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8215D398) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,18556
	ctx.r11.s64 = ctx.r11.s64 + 18556;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822f63d0
	ctx.lr = 0x8215D3C4;
	sub_822F63D0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215d3d4
	if (ctx.cr0.eq) goto loc_8215D3D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8215D3D4;
	sub_8269CE98(ctx, base);
loc_8215D3D4:
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

DEFINE_REX_FUNC(sub_8215F710) {
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
	ctx.lr = 0x8215F718;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8215f73c
	if (ctx.cr6.eq) goto loc_8215F73C;
loc_8215F734:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215f988
	goto loc_8215F988;
loc_8215F73C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8215f968
	if (ctx.cr6.eq) goto loc_8215F968;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8215f93c
	if (ctx.cr6.eq) goto loc_8215F93C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8215f914
	if (ctx.cr6.eq) goto loc_8215F914;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215f8f0
	if (ctx.cr6.eq) goto loc_8215F8F0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215f844
	if (ctx.cr6.eq) goto loc_8215F844;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8215f790
	if (ctx.cr6.eq) goto loc_8215F790;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8215f734
	if (!ctx.cr6.eq) goto loc_8215F734;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215fab8
	ctx.lr = 0x8215F77C;
	sub_8215FAB8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215fab8
	ctx.lr = 0x8215F788;
	sub_8215FAB8(ctx, base);
	// cmpd cr6,r3,r10
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r10.s64, ctx.xer);
	// b 0x8215f954
	goto loc_8215F954;
loc_8215F790:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8215f7ac
	if (!ctx.cr6.eq) goto loc_8215F7AC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8215f7b0
	goto loc_8215F7B0;
loc_8215F7AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F7B0:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8215f734
	if (!ctx.cr6.eq) goto loc_8215F734;
	// li r30,0
	r30.s64 = 0;
loc_8215F7BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8215f7d4
	if (!ctx.cr6.eq) goto loc_8215F7D4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8215f7d8
	goto loc_8215F7D8;
loc_8215F7D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F7D8:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215f8e8
	if (!ctx.cr6.lt) goto loc_8215F8E8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f530
	ctx.lr = 0x8215F7EC;
	sub_8215F530(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f530
	ctx.lr = 0x8215F7FC;
	sub_8215F530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8215F808;
	sub_82120780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8215f734
	if (!ctx.cr0.eq) goto loc_8215F734;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8215F81C;
	sub_8215F2D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f2d0
	ctx.lr = 0x8215F82C;
	sub_8215F2D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8215f710
	ctx.lr = 0x8215F834;
	sub_8215F710(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215f734
	if (ctx.cr0.eq) goto loc_8215F734;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8215f7bc
	goto loc_8215F7BC;
loc_8215F844:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 4;
	// bne cr6,0x8215f878
	if (!ctx.cr6.eq) goto loc_8215F878;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// b 0x8215f87c
	goto loc_8215F87C;
loc_8215F878:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F87C:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8215f734
	if (!ctx.cr6.eq) goto loc_8215F734;
	// li r31,0
	r31.s64 = 0;
loc_8215F888:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8215f8ac
	if (!ctx.cr6.eq) goto loc_8215F8AC;
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
	// b 0x8215f8b0
	goto loc_8215F8B0;
loc_8215F8AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F8B0:
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215f8e8
	if (!ctx.cr6.lt) goto loc_8215F8E8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8215F8C4;
	sub_8215F1B0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f1b0
	ctx.lr = 0x8215F8D0;
	sub_8215F1B0(ctx, base);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8215f710
	ctx.lr = 0x8215F8D8;
	sub_8215F710(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215f734
	if (ctx.cr0.eq) goto loc_8215F734;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x8215f888
	goto loc_8215F888;
loc_8215F8E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215f988
	goto loc_8215F988;
loc_8215F8F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215fa30
	ctx.lr = 0x8215F8F8;
	sub_8215FA30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215fa30
	ctx.lr = 0x8215F904;
	sub_8215FA30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82120780
	ctx.lr = 0x8215F90C;
	sub_82120780(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// b 0x8215f984
	goto loc_8215F984;
loc_8215F914:
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 8);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8215f928
	if (!ctx.cr6.eq) goto loc_8215F928;
	// lbz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 8);
	// b 0x8215f92c
	goto loc_8215F92C;
loc_8215F928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F92C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x8215f980
	goto loc_8215F980;
loc_8215F93C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f9e0
	ctx.lr = 0x8215F944;
	sub_8215F9E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// bl 0x8215f9e0
	ctx.lr = 0x8215F950;
	sub_8215F9E0(ctx, base);
	// fcmpu cr6,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
loc_8215F954:
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8215f960
	if (ctx.cr6.eq) goto loc_8215F960;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8215F960:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8215f988
	goto loc_8215F988;
loc_8215F968:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8215f990
	ctx.lr = 0x8215F970;
	sub_8215F990(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215f990
	ctx.lr = 0x8215F97C;
	sub_8215F990(ctx, base);
	// subf r11,r3,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r3.u64;
loc_8215F980:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
loc_8215F984:
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8215F988:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_821752D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821752E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82173db8
	ctx.lr = 0x821752F8;
	sub_82173DB8(ctx, base);
	// clrlwi r31,r3,16
	r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(r31.u32, 65535, ctx.xer);
	// beq cr6,0x8217535c
	if (ctx.cr6.eq) goto loc_8217535C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x82175318
	if (ctx.cr6.lt) goto loc_82175318;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82175330
	if (ctx.cr6.lt) goto loc_82175330;
loc_82175318:
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
	ctx.lr = 0x82175330;
	sub_821231D0(ctx, base);
loc_82175330:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mulli r10,r31,44
	ctx.r10.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(44));
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,16592
	ctx.r10.s64 = ctx.r9.s64 + 16592;
	// lfs f13,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,44(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8217535C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8217A4B8) {
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
	// b 0x8217a4f0
	goto loc_8217A4F0;
loc_8217A4D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217A4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8217a510
	if (!ctx.cr0.eq) goto loc_8217A510;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
loc_8217A4F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8217a4d0
	if (!ctx.cr6.eq) goto loc_8217A4D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217A4FC:
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
loc_8217A510:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217A524;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8217a4fc
	goto loc_8217A4FC;
}

DEFINE_REX_FUNC(sub_8217C028) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217C6C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a14b8
	ctx.lr = 0x8217C700;
	sub_826A14B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217F1C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8217F8A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,30632
	ctx.r11.s64 = ctx.r11.s64 + 30632;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stb r7,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r7.u8);
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stb r30,25(r31)
	REX_STORE_U8(r31.u32 + 25, r30.u8);
	// bl 0x82125bc8
	ctx.lr = 0x8217F908;
	sub_82125BC8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x82125bc8
	ctx.lr = 0x8217F914;
	sub_82125BC8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// addi r4,r10,-15840
	ctx.r4.s64 = ctx.r10.s64 + -15840;
	// lfs f29,15048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f29.f64 = double(temp.f32);
	// stfs f29,68(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// bl 0x82120600
	ctx.lr = 0x8217F938;
	sub_82120600(ctx, base);
	// stb r30,104(r31)
	REX_STORE_U8(r31.u32 + 104, r30.u8);
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(r31.u32 + 120, r30.u32);
	// std r30,128(r31)
	REX_STORE_U64(r31.u32 + 128, r30.u64);
	// bl 0x82125bc8
	ctx.lr = 0x8217F95C;
	sub_82125BC8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f980
	if (!ctx.cr6.eq) goto loc_8217F980;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r4,r11,30224
	ctx.r4.s64 = ctx.r11.s64 + 30224;
	// addi r3,r10,30288
	ctx.r3.s64 = ctx.r10.s64 + 30288;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x821231d0
	ctx.lr = 0x8217F980;
	sub_821231D0(ctx, base);
loc_8217F980:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 - f31.f64));
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lwz r3,6160(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 6160);
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
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
	// lfsx f0,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsel f0,f0,f31,f30
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? f31.f64 : f30.f64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F9D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8217fac0
	ctx.lr = 0x8217F9DC;
	sub_8217FAC0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_8218EE88) {
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
	// addi r11,r11,-32196
	ctx.r11.s64 = ctx.r11.s64 + -32196;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821d3be0
	ctx.lr = 0x8218EEB4;
	sub_821D3BE0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218eec4
	if (ctx.cr0.eq) goto loc_8218EEC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8218EEC4;
	sub_8269CE98(ctx, base);
loc_8218EEC4:
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

DEFINE_REX_FUNC(sub_82190770) {
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
	ctx.lr = 0x82190778;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2c98
	ctx.lr = 0x82190780;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// addi r25,r11,32
	r25.s64 = ctx.r11.s64 + 32;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82190a24
	if (!ctx.cr6.gt) goto loc_82190A24;
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
	// addi r21,r4,100
	r21.s64 = ctx.r4.s64 + 100;
	// lfs f28,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	f28.f64 = double(temp.f32);
	// addi r20,r4,104
	r20.s64 = ctx.r4.s64 + 104;
	// lfs f24,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	f24.f64 = double(temp.f32);
	// addi r22,r4,96
	r22.s64 = ctx.r4.s64 + 96;
	// lfs f29,288(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	f29.f64 = double(temp.f32);
	// li r28,0
	r28.s64 = 0;
	// lfs f27,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	f27.f64 = double(temp.f32);
	// addi r24,r11,-27152
	r24.s64 = ctx.r11.s64 + -27152;
	// lfs f31,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// addi r23,r10,-27136
	r23.s64 = ctx.r10.s64 + -27136;
	// lfs f25,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	f25.f64 = double(temp.f32);
	// lfs f26,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	f26.f64 = double(temp.f32);
loc_821907F0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 0);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(r20.u32 + 0);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82190a04
	if (!ctx.cr6.eq) goto loc_82190A04;
	// lfs f13,80(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,84(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f12,100(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82190a04
	if (!ctx.cr6.lt) goto loc_82190A04;
	// lfs f11,104(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x82190a04
	if (!ctx.cr6.gt) goto loc_82190A04;
	// lfs f11,128(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f30,f12
	f30.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,132(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 132);
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
	ctx.lr = 0x821908B8;
	sub_82186C18(ctx, base);
	// lfs f0,136(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82190a04
	if (!ctx.cr6.lt) goto loc_82190A04;
	// lfs f13,104(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f12,100(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvx128 v62,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// fdivs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// addi r11,r29,116
	ctx.r11.s64 = r29.s64 + 116;
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
	// lvx128 v61,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmsum4fp128 v63,v63,v61
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,116(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(r29.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 108);
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
	// ble cr6,0x821909f8
	if (!ctx.cr6.gt) goto loc_821909F8;
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
loc_821909F8:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
loc_82190A04:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// add r26,r11,r26
	r26.u64 = ctx.r11.u64 + r26.u64;
	// add r25,r11,r25
	r25.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821907f0
	if (ctx.cr6.lt) goto loc_821907F0;
loc_82190A24:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x826a2ce4
	ctx.lr = 0x82190A30;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_821B0598) {
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
	ctx.lr = 0x821B05A0;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,6188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 6188);
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(80));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b0690
	if (ctx.cr6.eq) goto loc_821B0690;
	// addi r31,r11,8
	r31.s64 = ctx.r11.s64 + 8;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f30,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f30.f64 = double(temp.f32);
loc_821B05E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 140);
	// and. r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b0670
	if (ctx.cr0.eq) goto loc_821B0670;
	// lwz r10,144(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 144);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b0670
	if (!ctx.cr0.eq) goto loc_821B0670;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b0718
	ctx.lr = 0x821B060C;
	sub_821B0718(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = r31.s64 + 40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfs f1,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821b0718
	ctx.lr = 0x821B0620;
	sub_821B0718(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821b0670
	if (ctx.cr6.gt) goto loc_821B0670;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821b063c
	if (ctx.cr6.lt) goto loc_821B063C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B063C:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821b0650
	if (ctx.cr6.lt) goto loc_821B0650;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B0650:
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821b0670
	if (ctx.cr6.eq) goto loc_821B0670;
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x821dfdb8
	ctx.lr = 0x821B0670;
	sub_821DFDB8(ctx, base);
loc_821B0670:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r31,-8
	ctx.r10.s64 = r31.s64 + -8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b05e0
	if (!ctx.cr6.eq) goto loc_821B05E0;
loc_821B0690:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821B7778) {
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
	// lwz r3,152(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x821357c8
	ctx.lr = 0x821B7794;
	sub_821357C8(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b77bc
	if (ctx.cr6.eq) goto loc_821B77BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r11,-20900
	ctx.r4.s64 = ctx.r11.s64 + -20900;
	// addi r3,r10,-20848
	ctx.r3.s64 = ctx.r10.s64 + -20848;
	// li r5,233
	ctx.r5.s64 = 233;
	// bl 0x821231d0
	ctx.lr = 0x821B77BC;
	sub_821231D0(ctx, base);
loc_821B77BC:
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,6168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6168);
	// bl 0x82149af0
	ctx.lr = 0x821B77CC;
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

DEFINE_REX_FUNC(sub_821BB618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x821BB620;
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,23080
	ctx.r4.s64 = ctx.r11.s64 + 23080;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82120600
	ctx.lr = 0x821BB640;
	sub_82120600(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BB64C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB670;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82120ac0
	ctx.lr = 0x821BB680;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,23076
	ctx.r4.s64 = ctx.r11.s64 + 23076;
	// bl 0x82120600
	ctx.lr = 0x821BB690;
	sub_82120600(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,112(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 112);
	// bl 0x821dd040
	ctx.lr = 0x821BB69C;
	sub_821DD040(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, r31.u32);
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BB6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120ac0
	ctx.lr = 0x821BB6D0;
	sub_82120AC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bb6e0
	if (!ctx.cr6.eq) goto loc_821BB6E0;
	// lwz r31,84(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821BB6E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821bb6f4
	if (!ctx.cr6.eq) goto loc_821BB6F4;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_821BB6F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r31,4(r30)
	REX_STORE_U32(r30.u32 + 4, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_821C07E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c0d10
	ctx.lr = 0x821C0808;
	sub_821C0D10(ctx, base);
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

DEFINE_REX_FUNC(sub_821C2FD0) {
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
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c3090
	if (ctx.cr6.eq) goto loc_821C3090;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3018;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 120);
	// beq 0x821c308c
	if (ctx.cr0.eq) goto loc_821C308C;
	// bl 0x821914c8
	ctx.lr = 0x821C3028;
	sub_821914C8(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C303C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 120);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// lbz r10,26(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 26);
	// std r11,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r11.u64);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// std r11,40(r4)
	REX_STORE_U64(ctx.r4.u32 + 40, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,48(r4)
	REX_STORE_U64(ctx.r4.u32 + 48, ctx.r11.u64);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// std r11,56(r4)
	REX_STORE_U64(ctx.r4.u32 + 56, ctx.r11.u64);
	// beq 0x821c3090
	if (ctx.cr0.eq) goto loc_821C3090;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lwz r3,6172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6172);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C3088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c3090
	goto loc_821C3090;
loc_821C308C:
	// bl 0x82191520
	ctx.lr = 0x821C3090;
	sub_82191520(ctx, base);
loc_821C3090:
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

DEFINE_REX_FUNC(sub_821C8630) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x821C8638;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x821c8710
	ctx.lr = 0x821C8648;
	sub_821C8710(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r28,r11,-17264
	r28.s64 = ctx.r11.s64 + -17264;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,200(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 200);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x821C8664;
	sub_8215F338(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,200(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 200);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C8678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8215f338
	ctx.lr = 0x821C868C;
	sub_8215F338(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,204(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C86A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_821CCDE8) {
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
	ctx.lr = 0x821CCDF0;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x82178268
	ctx.lr = 0x821CCE0C;
	sub_82178268(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r31,124
	r28.s64 = r31.s64 + 124;
	// addi r11,r11,-14224
	ctx.r11.s64 = ctx.r11.s64 + -14224;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82120ac0
	ctx.lr = 0x821CCE2C;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// stw r24,164(r31)
	REX_STORE_U32(r31.u32 + 164, r24.u32);
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,100
	ctx.r3.s64 = 100;
	// stb r9,152(r31)
	REX_STORE_U8(r31.u32 + 152, ctx.r9.u8);
	// addi r27,r31,152
	r27.s64 = r31.s64 + 152;
	// lfs f13,-7264(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -7264);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r31,156
	r26.s64 = r31.s64 + 156;
	// lfs f0,556(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r31,160
	r25.s64 = r31.s64 + 160;
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// stfs f13,160(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x821CCE68;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ccea8
	if (ctx.cr0.eq) goto loc_821CCEA8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-14376
	ctx.r4.s64 = ctx.r11.s64 + -14376;
	// bl 0x82120600
	ctx.lr = 0x821CCE80;
	sub_82120600(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x821bf110
	ctx.lr = 0x821CCE94;
	sub_821BF110(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// addi r10,r10,-14360
	ctx.r10.s64 = ctx.r10.s64 + -14360;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x821cceac
	goto loc_821CCEAC;
loc_821CCEA8:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CCEAC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CCEC0;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821cd6e0
	ctx.lr = 0x821CCECC;
	sub_821CD6E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ccee8
	if (ctx.cr0.eq) goto loc_821CCEE8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x821CCEE8;
	sub_82120AC0(ctx, base);
loc_821CCEE8:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x822f6280
	ctx.lr = 0x821CCEF0;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ccf20
	if (ctx.cr0.eq) goto loc_821CCF20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-24032
	ctx.r4.s64 = ctx.r11.s64 + -24032;
	// bl 0x82120600
	ctx.lr = 0x821CCF08;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x82191600
	ctx.lr = 0x821CCF1C;
	sub_82191600(ctx, base);
	// b 0x821ccf24
	goto loc_821CCF24;
loc_821CCF20:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CCF24:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CCF34;
	sub_82145710(ctx, base);
	// rlwinm. r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ccf50
	if (ctx.cr0.eq) goto loc_821CCF50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// rlwinm r30,r30,0,31,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x821CCF50;
	sub_82120AC0(ctx, base);
loc_821CCF50:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CCF58;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ccf88
	if (ctx.cr0.eq) goto loc_821CCF88;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-14256
	ctx.r4.s64 = ctx.r11.s64 + -14256;
	// bl 0x82120600
	ctx.lr = 0x821CCF70;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// bl 0x82196ba8
	ctx.lr = 0x821CCF84;
	sub_82196BA8(ctx, base);
	// b 0x821ccf8c
	goto loc_821CCF8C;
loc_821CCF88:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CCF8C:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CCF9C;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821cd6e0
	ctx.lr = 0x821CCFA8;
	sub_821CD6E0(ctx, base);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ccfc4
	if (ctx.cr0.eq) goto loc_821CCFC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// rlwinm r30,r30,0,30,28
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x821CCFC4;
	sub_82120AC0(ctx, base);
loc_821CCFC4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x821CCFCC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821ccffc
	if (ctx.cr0.eq) goto loc_821CCFFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-14240
	ctx.r4.s64 = ctx.r11.s64 + -14240;
	// bl 0x82120600
	ctx.lr = 0x821CCFE4;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r30,r30,8
	r30.u64 = r30.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x821CCFF8;
	sub_82196BA8(ctx, base);
	// b 0x821cd000
	goto loc_821CD000;
loc_821CCFFC:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_821CD000:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x821CD010;
	sub_82145710(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821cd6e0
	ctx.lr = 0x821CD01C;
	sub_821CD6E0(ctx, base);
	// rlwinm. r11,r30,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821cd034
	if (ctx.cr0.eq) goto loc_821CD034;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x821CD034;
	sub_82120AC0(ctx, base);
loc_821CD034:
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x821CD03C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd054
	if (ctx.cr0.eq) goto loc_821CD054;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821a1e80
	ctx.lr = 0x821CD04C;
	sub_821A1E80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cd058
	goto loc_821CD058;
loc_821CD054:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821CD058:
	// stw r4,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r4.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CD068;
	sub_821D3988(ctx, base);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x822f6280
	ctx.lr = 0x821CD070;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd090
	if (ctx.cr0.eq) goto loc_821CD090;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dc550
	ctx.lr = 0x821CD088;
	sub_821DC550(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cd094
	goto loc_821CD094;
loc_821CD090:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821CD094:
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CD0A0;
	sub_821D3988(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x822f6280
	ctx.lr = 0x821CD0A8;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd0c0
	if (ctx.cr0.eq) goto loc_821CD0C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821cd760
	ctx.lr = 0x821CD0B8;
	sub_821CD760(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cd0c4
	goto loc_821CD0C4;
loc_821CD0C0:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_821CD0C4:
	// stw r4,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821d3988
	ctx.lr = 0x821CD0D0;
	sub_821D3988(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CD0D8;
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
	// beq 0x821cd14c
	if (ctx.cr0.eq) goto loc_821CD14C;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23944
	ctx.r4.s64 = ctx.r11.s64 + -23944;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CD10C;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CD118;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd13c
	if (ctx.cr0.eq) goto loc_821CD13C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11432
	ctx.r10.s64 = ctx.r10.s64 + -11432;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cd140
	goto loc_821CD140;
loc_821CD13C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CD140:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cd150
	goto loc_821CD150;
loc_821CD14C:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CD150:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CD168;
	sub_82264568(ctx, base);
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x821CD170;
	sub_822F6280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x821cd1d4
	if (ctx.cr0.eq) goto loc_821CD1D4;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-23932
	ctx.r4.s64 = ctx.r11.s64 + -23932;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821dbb48
	ctx.lr = 0x821CD194;
	sub_821DBB48(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x822f6280
	ctx.lr = 0x821CD1A0;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd1c4
	if (ctx.cr0.eq) goto loc_821CD1C4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11344
	ctx.r10.s64 = ctx.r10.s64 + -11344;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x821cd1c8
	goto loc_821CD1C8;
loc_821CD1C4:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CD1C8:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// b 0x821cd1d8
	goto loc_821CD1D8;
loc_821CD1D4:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_821CD1D8:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r11,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r11.u32);
	// bl 0x82264568
	ctx.lr = 0x821CD1F0;
	sub_82264568(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,112(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x821a1ff8
	ctx.lr = 0x821CD1FC;
	sub_821A1FF8(ctx, base);
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,112(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 112);
	// bl 0x822f6280
	ctx.lr = 0x821CD208;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd238
	if (ctx.cr0.eq) goto loc_821CD238;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-29688
	ctx.r11.s64 = ctx.r11.s64 + -29688;
	// addi r9,r9,-11256
	ctx.r9.s64 = ctx.r9.s64 + -11256;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x821cd23c
	goto loc_821CD23C;
loc_821CD238:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821CD23C:
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821cd408
	ctx.lr = 0x821CD248;
	sub_821CD408(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_821EA0C8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x821ea0d8
	if (!ctx.cr6.eq) goto loc_821EA0D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
loc_821EA0D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EA3C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r8,r11,256
	ctx.r8.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// lfs f0,15048(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,256
	ctx.r7.s64 = ctx.r11.s64 + 256;
	// lfs f13,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,256
	ctx.r9.s64 = ctx.r10.s64 + 256;
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lfs f12,588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 588);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r11,256
	ctx.r6.s64 = ctx.r11.s64 + 256;
	// addi r10,r10,16592
	ctx.r10.s64 = ctx.r10.s64 + 16592;
	// fsubs f10,f2,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// addi r5,r11,256
	ctx.r5.s64 = ctx.r11.s64 + 256;
	// fsubs f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// addi r11,r10,256
	ctx.r11.s64 = ctx.r10.s64 + 256;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
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
	// rlwinm r4,r10,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// lfsx f11,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f11,f11,f13,f1
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// rlwinm r4,r9,27,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// rlwinm r9,r9,30,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// rlwinm r3,r10,27,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x4;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r10,r10,30,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x4;
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// lfsx f10,r8,r9
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f10,f10,f13,f2
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// lfsx f8,r11,r10
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsel f11,f8,f0,f11
	ctx.f11.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
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
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// rlwinm r10,r11,27,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x4;
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
	// rlwinm r8,r9,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x4;
	// fctiw f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// rlwinm r4,r9,30,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x4;
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// or r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 | ctx.r4.u64;
	// lfsx f11,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f9,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f11,f11,f0,f10
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fsel f13,f9,f13,f3
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f3.f64;
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fctiw f11,f11
	ctx.f11.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
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
	// lwz r11,-12(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lfsx f11,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsel f0,f11,f0,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiw f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvtsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r10,r10,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0xFFFFFC00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82205678) {
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
	ctx.lr = 0x82205680;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stfs f1,460(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r29,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r29.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,460
	ctx.r5.s64 = ctx.r1.s64 + 460;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822056B0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,30120
	ctx.r3.s64 = ctx.r11.s64 + 30120;
	// bl 0x8216bc98
	ctx.lr = 0x822056C0;
	sub_8216BC98(ctx, base);
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
	ctx.lr = 0x822056D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f13,460(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,16(r30)
	ctx.f12.u64 = REX_LOAD_U64(r30.u32 + 16);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f0,652(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 652);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fsub f0,f1,f12
	ctx.f0.f64 = ctx.f1.f64 - ctx.f12.f64;
	// bge cr6,0x8220570c
	if (!ctx.cr6.lt) goto loc_8220570C;
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// lfd f13,-19016(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -19016);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822057e8
	if (!ctx.cr6.gt) goto loc_822057E8;
loc_8220570C:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r29,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8216b6a8
	ctx.lr = 0x8220572C;
	sub_8216B6A8(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r11,23304
	ctx.r3.s64 = ctx.r11.s64 + 23304;
	// bl 0x8216bc98
	ctx.lr = 0x8220573C;
	sub_8216BC98(ctx, base);
	// stfd f31,16(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 16, f31.u64);
	// clrlwi. r28,r31,24
	r28.u64 = r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// beq 0x82205760
	if (ctx.cr0.eq) goto loc_82205760;
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82205760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82205760:
	// lis r31,-32106
	r31.s64 = -2104098816;
	// stb r29,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, r29.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// li r12,4105
	ctx.r12.s64 = 4105;
	// stb r10,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// lwz r11,6060(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// li r3,3
	ctx.r3.s64 = 3;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// ld r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// clrldi r10,r10,15
	ctx.r10.u64 = ctx.r10.u64 & 0x1FFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r10,104(r11)
	REX_STORE_U64(ctx.r11.u32 + 104, ctx.r10.u64);
	// bl 0x821396b8
	ctx.lr = 0x822057A0;
	sub_821396B8(ctx, base);
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822057bc
	if (ctx.cr6.eq) goto loc_822057BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822057BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822057BC:
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212e710
	ctx.lr = 0x822057C4;
	sub_8212E710(ctx, base);
	// lwz r3,6060(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 6060);
	// bl 0x8212e8b0
	ctx.lr = 0x822057CC;
	sub_8212E8B0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822057e8
	if (ctx.cr6.eq) goto loc_822057E8;
	// lwz r3,6092(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 6092);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822057E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822057E8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82210288) {
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
	ctx.lr = 0x82210290;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x822e9088
	ctx.lr = 0x822102A4;
	sub_822E9088(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r29,r30,284
	r29.s64 = r30.s64 + 284;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822102C4;
	sub_82120AC0(ctx, base);
	// addi r27,r30,312
	r27.s64 = r30.s64 + 312;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822102D8;
	sub_82120AC0(ctx, base);
	// addi r26,r30,340
	r26.s64 = r30.s64 + 340;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120ac0
	ctx.lr = 0x822102EC;
	sub_82120AC0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// li r3,108
	ctx.r3.s64 = 108;
	// addi r25,r30,368
	r25.s64 = r30.s64 + 368;
	// lfs f0,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r30,372
	r24.s64 = r30.s64 + 372;
	// lfs f13,-16132(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -16132);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r30,376
	r23.s64 = r30.s64 + 376;
	// lfs f12,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,392(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 392, temp.u32);
	// stfs f0,368(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 368, temp.u32);
	// stfs f13,372(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 372, temp.u32);
	// stfs f12,376(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 376, temp.u32);
	// bl 0x822f6280
	ctx.lr = 0x8221032C;
	sub_822F6280(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x8221035c
	if (ctx.cr0.eq) goto loc_8221035C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r4,r11,-29500
	ctx.r4.s64 = ctx.r11.s64 + -29500;
	// bl 0x82120600
	ctx.lr = 0x82210344;
	sub_82120600(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r31,1
	r31.s64 = 1;
	// bl 0x8219e000
	ctx.lr = 0x82210358;
	sub_8219E000(ctx, base);
	// b 0x82210360
	goto loc_82210360;
loc_8221035C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210360:
	// stw r3,380(r30)
	REX_STORE_U32(r30.u32 + 380, ctx.r3.u32);
	// addi r28,r30,80
	r28.s64 = r30.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82210378;
	sub_82145710(ctx, base);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210394
	if (ctx.cr0.eq) goto loc_82210394;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// bl 0x82120ac0
	ctx.lr = 0x82210394;
	sub_82120AC0(ctx, base);
loc_82210394:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x8221039C;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822103cc
	if (ctx.cr0.eq) goto loc_822103CC;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-29480
	ctx.r4.s64 = ctx.r11.s64 + -29480;
	// bl 0x82120600
	ctx.lr = 0x822103B4;
	sub_82120600(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
	// bl 0x8219e000
	ctx.lr = 0x822103C8;
	sub_8219E000(ctx, base);
	// b 0x822103d0
	goto loc_822103D0;
loc_822103CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822103D0:
	// stw r3,384(r30)
	REX_STORE_U32(r30.u32 + 384, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822103E4;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82210400
	if (ctx.cr0.eq) goto loc_82210400;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r31,r31,0,31,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x82120ac0
	ctx.lr = 0x82210400;
	sub_82120AC0(ctx, base);
loc_82210400:
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x822f6280
	ctx.lr = 0x82210408;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82210438
	if (ctx.cr0.eq) goto loc_82210438;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-29460
	ctx.r4.s64 = ctx.r11.s64 + -29460;
	// bl 0x82120600
	ctx.lr = 0x82210420;
	sub_82120600(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,4
	r31.u64 = r31.u64 | 4;
	// bl 0x8219e000
	ctx.lr = 0x82210434;
	sub_8219E000(ctx, base);
	// b 0x8221043c
	goto loc_8221043C;
loc_82210438:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221043C:
	// stw r3,388(r30)
	REX_STORE_U32(r30.u32 + 388, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82210450;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221046c
	if (ctx.cr0.eq) goto loc_8221046C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r31,r31,0,30,28
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// bl 0x82120ac0
	ctx.lr = 0x8221046C;
	sub_82120AC0(ctx, base);
loc_8221046C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82210474;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822104a4
	if (ctx.cr0.eq) goto loc_822104A4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-29448
	ctx.r4.s64 = ctx.r11.s64 + -29448;
	// bl 0x82120600
	ctx.lr = 0x8221048C;
	sub_82120600(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,8
	r31.u64 = r31.u64 | 8;
	// bl 0x82196ba8
	ctx.lr = 0x822104A0;
	sub_82196BA8(ctx, base);
	// b 0x822104a8
	goto loc_822104A8;
loc_822104A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822104A8:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x822104B8;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822104d4
	if (ctx.cr0.eq) goto loc_822104D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r31,r31,0,29,27
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// bl 0x82120ac0
	ctx.lr = 0x822104D4;
	sub_82120AC0(ctx, base);
loc_822104D4:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x822104DC;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x8221050c
	if (ctx.cr0.eq) goto loc_8221050C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-29432
	ctx.r4.s64 = ctx.r11.s64 + -29432;
	// bl 0x82120600
	ctx.lr = 0x822104F4;
	sub_82120600(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,16
	r31.u64 = r31.u64 | 16;
	// bl 0x82196ba8
	ctx.lr = 0x82210508;
	sub_82196BA8(ctx, base);
	// b 0x82210510
	goto loc_82210510;
loc_8221050C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210510:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82210520;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221053c
	if (ctx.cr0.eq) goto loc_8221053C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// rlwinm r31,r31,0,28,26
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// bl 0x82120ac0
	ctx.lr = 0x8221053C;
	sub_82120AC0(ctx, base);
loc_8221053C:
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x822f6280
	ctx.lr = 0x82210544;
	sub_822F6280(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82210574
	if (ctx.cr0.eq) goto loc_82210574;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,-29420
	ctx.r4.s64 = ctx.r11.s64 + -29420;
	// bl 0x82120600
	ctx.lr = 0x8221055C;
	sub_82120600(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ori r31,r31,32
	r31.u64 = r31.u64 | 32;
	// bl 0x82196ba8
	ctx.lr = 0x82210570;
	sub_82196BA8(ctx, base);
	// b 0x82210578
	goto loc_82210578;
loc_82210574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82210578:
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82145710
	ctx.lr = 0x82210588;
	sub_82145710(ctx, base);
	// rlwinm. r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822105a0
	if (ctx.cr0.eq) goto loc_822105A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82120ac0
	ctx.lr = 0x822105A0;
	sub_82120AC0(ctx, base);
loc_822105A0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_8222A778) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13748
	ctx.r3.s64 = ctx.r11.s64 + -13748;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AA80) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-13732
	ctx.r3.s64 = ctx.r11.s64 + -13732;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AC58) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x822f6280
	ctx.lr = 0x8222AC70;
	sub_822F6280(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8222ac94
	if (ctx.cr0.eq) goto loc_8222AC94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82229520
	ctx.lr = 0x8222AC80;
	sub_82229520(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-21988
	ctx.r11.s64 = ctx.r11.s64 + -21988;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x8222ac98
	goto loc_8222AC98;
loc_8222AC94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222AC98:
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

DEFINE_REX_FUNC(sub_8222CB38) {
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
	// li r3,132
	ctx.r3.s64 = 132;
	// bl 0x822f6280
	ctx.lr = 0x8222CB4C;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222cb5c
	if (ctx.cr0.eq) goto loc_8222CB5C;
	// bl 0x8222cb70
	ctx.lr = 0x8222CB58;
	sub_8222CB70(ctx, base);
	// b 0x8222cb60
	goto loc_8222CB60;
loc_8222CB5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222CB60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222EA08) {
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
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// addi r11,r11,-14036
	ctx.r11.s64 = ctx.r11.s64 + -14036;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// bl 0x821d5aa8
	ctx.lr = 0x8222EA38;
	sub_821D5AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82178388
	ctx.lr = 0x8222EA40;
	sub_82178388(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222ea50
	if (ctx.cr0.eq) goto loc_8222EA50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269ce98
	ctx.lr = 0x8222EA50;
	sub_8269CE98(ctx, base);
loc_8222EA50:
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

DEFINE_REX_FUNC(sub_82231BE8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82231C18:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82231c18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82231C18;
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821884b0
	ctx.lr = 0x82231C34;
	sub_821884B0(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r30,r11,16592
	r30.s64 = ctx.r11.s64 + 16592;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,15048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x823fbd88
	ctx.lr = 0x82231C64;
	sub_823FBD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,160(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x823fbd88
	ctx.lr = 0x82231C98;
	sub_823FBD88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r10,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r10.u64);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r11,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r11.u64);
	// bl 0x821e3650
	ctx.lr = 0x82231CB4;
	sub_821E3650(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r30,256
	ctx.r10.s64 = r30.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
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
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x821e3650
	ctx.lr = 0x82231CF0;
	sub_821E3650(ctx, base);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r30,256
	ctx.r11.s64 = r30.s64 + 256;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
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
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82243538) {
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
	ctx.lr = 0x82243540;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r27,r3,r4
	r27.u64 = ctx.r4.u64 - ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// ble cr6,0x82243698
	if (!ctx.cr6.gt) goto loc_82243698;
loc_82243568:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822435f8
	if (!ctx.cr6.gt) goto loc_822435F8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82243838
	ctx.lr = 0x82243584;
	sub_82243838(ctx, base);
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r29,r30
	ctx.r11.u64 = r30.u64 - r29.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = r27.u64 - r31.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x822435d4
	if (!ctx.cr6.lt) goto loc_822435D4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82243538
	ctx.lr = 0x822435CC;
	sub_82243538(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// b 0x822435e4
	goto loc_822435E4;
loc_822435D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82243538
	ctx.lr = 0x822435E0;
	sub_82243538(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_822435E4:
	// subf r27,r31,r30
	r27.u64 = r30.u64 - r31.u64;
	// srawi r29,r27,2
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x3) != 0);
	r29.s64 = r27.s32 >> 2;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(r29.s32, 32, ctx.xer);
	// bgt cr6,0x82243568
	if (ctx.cr6.gt) goto loc_82243568;
loc_822435F8:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82243698
	if (!ctx.cr6.gt) goto loc_82243698;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x822436b0
	if (!ctx.cr6.gt) goto loc_822436B0;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// addze. r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r30.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble 0x82243648
	if (!ctx.cr0.gt) goto loc_82243648;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r31
	r28.u64 = ctx.r11.u64 + r31.u64;
loc_8224361C:
	// lwzu r11,-4(r28)
	ea = -4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82243f90
	ctx.lr = 0x82243640;
	sub_82243F90(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bgt cr6,0x8224361c
	if (ctx.cr6.gt) goto loc_8224361C;
loc_82243648:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// ble cr6,0x822436b0
	if (!ctx.cr6.gt) goto loc_822436B0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
loc_82243658:
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// srawi r5,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r5.s64 = r30.s32 >> 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r9,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x82243f90
	ctx.lr = 0x82243684;
	sub_82243F90(ctx, base);
	// rlwinm r10,r30,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x82243658
	if (ctx.cr6.gt) goto loc_82243658;
	// b 0x822436b0
	goto loc_822436B0;
loc_82243698:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x822436b0
	if (!ctx.cr6.gt) goto loc_822436B0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82243ac8
	ctx.lr = 0x822436B0;
	sub_82243AC8(ctx, base);
loc_822436B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82250370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f0,180(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// fmr f12,f2
	ctx.f12.f64 = ctx.f2.f64;
	// lfs f13,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82250390
	if (!ctx.cr6.gt) goto loc_82250390;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// b 0x82250394
	goto loc_82250394;
loc_82250390:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
loc_82250394:
	// lfs f0,184(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x822503a4
	if (!ctx.cr6.gt) goto loc_822503A4;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_822503A4:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// addi r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 256;
	// addi r9,r11,256
	ctx.r9.s64 = ctx.r11.s64 + 256;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
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
	// lfsx f10,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsel f10,f10,f0,f1
	ctx.f10.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
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
	// rlwinm r11,r11,30,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x4;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f9,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsel f13,f9,f13,f10
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f1,f0,f11,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, ctx.f13.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256670) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82288ce0
	ctx.lr = 0x8225668C;
	sub_82288CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256710
	if (ctx.cr0.eq) goto loc_82256710;
	// lbz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,134(r31)
	REX_STORE_U8(r31.u32 + 134, ctx.r11.u8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82256710
	if (!ctx.cr0.eq) goto loc_82256710;
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822566C8;
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
	ctx.lr = 0x822566E0;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r6,31
	ctx.r6.s64 = 31;
	// addi r5,r11,-10688
	ctx.r5.s64 = ctx.r11.s64 + -10688;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8216b6a8
	ctx.lr = 0x822566F8;
	sub_8216B6A8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// bl 0x8216bc98
	ctx.lr = 0x82256708;
	sub_8216BC98(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
loc_82256710:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225B298) {
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
	ctx.lr = 0x8225B2A0;
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8225B2B8;
	sub_82120AC0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// addi r28,r11,30636
	r28.s64 = ctx.r11.s64 + 30636;
	// addi r27,r10,1624
	r27.s64 = ctx.r10.s64 + 1624;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B2D4;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-25320
	ctx.r4.s64 = ctx.r11.s64 + -25320;
	// bl 0x8215f338
	ctx.lr = 0x8225B2E0;
	sub_8215F338(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8215fba8
	ctx.lr = 0x8225B2E8;
	sub_8215FBA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bca0
	if (ctx.cr0.eq) goto loc_8225BCA0;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-8604
	ctx.r4.s64 = ctx.r11.s64 + -8604;
	// bl 0x82125d00
	ctx.lr = 0x8225B300;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225b628
	if (!ctx.cr0.eq) goto loc_8225B628;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B314;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-8592
	ctx.r4.s64 = ctx.r11.s64 + -8592;
	// bl 0x8215f338
	ctx.lr = 0x8225B320;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225B324;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B334;
	sub_8215F338(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r4,r11,-8576
	ctx.r4.s64 = ctx.r11.s64 + -8576;
	// bl 0x8215f338
	ctx.lr = 0x8225B340;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225B344;
	sub_8215F990(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B354;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x8215f338
	ctx.lr = 0x8225B360;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B384;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b618
	if (ctx.cr0.eq) goto loc_8225B618;
	// lwz r31,172(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225b3a8
	if (ctx.cr0.eq) goto loc_8225B3A8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225bca0
	if (!ctx.cr6.eq) goto loc_8225BCA0;
loc_8225B3A8:
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
	ctx.lr = 0x8225B3D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225b3f8
	if (!ctx.cr0.eq) goto loc_8225B3F8;
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
	ctx.lr = 0x8225B3F8;
	sub_821231D0(ctx, base);
loc_8225B3F8:
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
	// beq cr6,0x8225bc58
	if (ctx.cr6.eq) goto loc_8225BC58;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225B430;
	sub_82120600(ctx, base);
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B43C;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x82120ac0
	ctx.lr = 0x8225B450;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225B460;
	sub_82120600(ctx, base);
	// addi r4,r1,464
	ctx.r4.s64 = ctx.r1.s64 + 464;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B46C;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82120ac0
	ctx.lr = 0x8225B480;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225B490;
	sub_82120600(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B49C;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82120ac0
	ctx.lr = 0x8225B4B0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225B4C0;
	sub_82120600(ctx, base);
	// addi r4,r1,720
	ctx.r4.s64 = ctx.r1.s64 + 720;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B4CC;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,720
	ctx.r3.s64 = ctx.r1.s64 + 720;
	// bl 0x82120ac0
	ctx.lr = 0x8225B4E0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225B4F0;
	sub_82120600(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B4FC;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82120ac0
	ctx.lr = 0x8225B510;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225B520;
	sub_82120600(ctx, base);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B52C;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82120ac0
	ctx.lr = 0x8225B540;
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
	ctx.lr = 0x8225B55C;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225B570;
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
	ctx.lr = 0x8225B588;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x8225B5A0;
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
	ctx.lr = 0x8225B5B8;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288848
	ctx.lr = 0x8225B5D0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-8556
	ctx.r4.s64 = ctx.r11.s64 + -8556;
	// bl 0x82288848
	ctx.lr = 0x8225B5E0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225B5F0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225B600;
	sub_82120600(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B60C;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// b 0x8225bc34
	goto loc_8225BC34;
loc_8225B618:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r6,r11,-8536
	ctx.r6.s64 = ctx.r11.s64 + -8536;
	// b 0x8225bc80
	goto loc_8225BC80;
loc_8225B628:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25312
	ctx.r4.s64 = ctx.r11.s64 + -25312;
	// bl 0x82125d00
	ctx.lr = 0x8225B638;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225b934
	if (!ctx.cr0.eq) goto loc_8225B934;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B64C;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x8215f338
	ctx.lr = 0x8225B658;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225B65C;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B66C;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x8215f338
	ctx.lr = 0x8225B678;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b92c
	if (ctx.cr0.eq) goto loc_8225B92C;
	// lwz r31,172(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225b6bc
	if (ctx.cr0.eq) goto loc_8225B6BC;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225bca0
	if (!ctx.cr6.eq) goto loc_8225BCA0;
loc_8225B6BC:
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stb r29,36(r31)
	REX_STORE_U8(r31.u32 + 36, r29.u8);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B6E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225b70c
	if (!ctx.cr0.eq) goto loc_8225B70C;
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
	ctx.lr = 0x8225B70C;
	sub_821231D0(ctx, base);
loc_8225B70C:
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
	// beq cr6,0x8225bc58
	if (ctx.cr6.eq) goto loc_8225BC58;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225B744;
	sub_82120600(ctx, base);
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B750;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82120ac0
	ctx.lr = 0x8225B764;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225B774;
	sub_82120600(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B780;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82120ac0
	ctx.lr = 0x8225B794;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225B7A4;
	sub_82120600(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B7B0;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120ac0
	ctx.lr = 0x8225B7C4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225B7D4;
	sub_82120600(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B7E0;
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
	ctx.lr = 0x8225B7F4;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225B804;
	sub_82120600(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B810;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120ac0
	ctx.lr = 0x8225B824;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225B834;
	sub_82120600(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B840;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82120ac0
	ctx.lr = 0x8225B854;
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
	ctx.lr = 0x8225B870;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225B884;
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
	ctx.lr = 0x8225B89C;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x8225B8B4;
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
	ctx.lr = 0x8225B8CC;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288848
	ctx.lr = 0x8225B8E4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-8520
	ctx.r4.s64 = ctx.r11.s64 + -8520;
	// bl 0x82288848
	ctx.lr = 0x8225B8F4;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225B904;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225B914;
	sub_82120600(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225B920;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// b 0x8225bc34
	goto loc_8225BC34;
loc_8225B92C:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// b 0x8225bc78
	goto loc_8225BC78;
loc_8225B934:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-10936
	ctx.r4.s64 = ctx.r11.s64 + -10936;
	// bl 0x82125d00
	ctx.lr = 0x8225B944;
	sub_82125D00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225bca0
	if (!ctx.cr0.eq) goto loc_8225BCA0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B958;
	sub_8215F338(ctx, base);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r4,r11,-16108
	ctx.r4.s64 = ctx.r11.s64 + -16108;
	// bl 0x8215f338
	ctx.lr = 0x8225B964;
	sub_8215F338(ctx, base);
	// bl 0x8215f990
	ctx.lr = 0x8225B968;
	sub_8215F990(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f338
	ctx.lr = 0x8225B978;
	sub_8215F338(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,29808
	ctx.r4.s64 = ctx.r11.s64 + 29808;
	// bl 0x8215f338
	ctx.lr = 0x8225B984;
	sub_8215F338(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,6152(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6152);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B9A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bc68
	if (ctx.cr0.eq) goto loc_8225BC68;
	// lwz r31,172(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lbz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225b9c8
	if (ctx.cr0.eq) goto loc_8225B9C8;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225bca0
	if (!ctx.cr6.eq) goto loc_8225BCA0;
loc_8225B9C8:
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// stb r29,36(r31)
	REX_STORE_U8(r31.u32 + 36, r29.u8);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lwz r3,6192(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 6192);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B9F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// slw. r11,r29,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r3.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// bne 0x8225ba18
	if (!ctx.cr0.eq) goto loc_8225BA18;
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
	ctx.lr = 0x8225BA18;
	sub_821231D0(ctx, base);
loc_8225BA18:
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
	// beq cr6,0x8225bc58
	if (ctx.cr6.eq) goto loc_8225BC58;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,2740
	ctx.r4.s64 = ctx.r11.s64 + 2740;
	// bl 0x82120600
	ctx.lr = 0x8225BA50;
	sub_82120600(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BA5C;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82120ac0
	ctx.lr = 0x8225BA70;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,2760
	ctx.r4.s64 = ctx.r11.s64 + 2760;
	// bl 0x82120600
	ctx.lr = 0x8225BA80;
	sub_82120600(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BA8C;
	sub_82178B60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82120ac0
	ctx.lr = 0x8225BAA0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,2780
	ctx.r4.s64 = ctx.r11.s64 + 2780;
	// bl 0x82120600
	ctx.lr = 0x8225BAB0;
	sub_82120600(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BABC;
	sub_82178B60(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82120ac0
	ctx.lr = 0x8225BAD0;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// addi r4,r11,2800
	ctx.r4.s64 = ctx.r11.s64 + 2800;
	// bl 0x82120600
	ctx.lr = 0x8225BAE0;
	sub_82120600(ctx, base);
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BAEC;
	sub_82178B60(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,560
	ctx.r3.s64 = ctx.r1.s64 + 560;
	// bl 0x82120ac0
	ctx.lr = 0x8225BB00;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r4,r11,2820
	ctx.r4.s64 = ctx.r11.s64 + 2820;
	// bl 0x82120600
	ctx.lr = 0x8225BB10;
	sub_82120600(ctx, base);
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BB1C;
	sub_82178B60(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82120ac0
	ctx.lr = 0x8225BB30;
	sub_82120AC0(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// addi r4,r11,2840
	ctx.r4.s64 = ctx.r11.s64 + 2840;
	// bl 0x82120600
	ctx.lr = 0x8225BB40;
	sub_82120600(ctx, base);
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BB4C;
	sub_82178B60(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82120ac0
	ctx.lr = 0x8225BB60;
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
	ctx.lr = 0x8225BB7C;
	sub_82288798(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lbzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + r30.u32);
	// bl 0x82288798
	ctx.lr = 0x8225BB90;
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
	ctx.lr = 0x8225BBA8;
	sub_82288798(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82288798
	ctx.lr = 0x8225BBC0;
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
	ctx.lr = 0x8225BBD8;
	sub_82288848(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82288848
	ctx.lr = 0x8225BBF0;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r4,r11,-8520
	ctx.r4.s64 = ctx.r11.s64 + -8520;
	// bl 0x82288848
	ctx.lr = 0x8225BC00;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r4,r11,-27404
	ctx.r4.s64 = ctx.r11.s64 + -27404;
	// bl 0x82288848
	ctx.lr = 0x8225BC10;
	sub_82288848(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
	// addi r4,r11,2864
	ctx.r4.s64 = ctx.r11.s64 + 2864;
	// bl 0x82120600
	ctx.lr = 0x8225BC20;
	sub_82120600(ctx, base);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82178b60
	ctx.lr = 0x8225BC2C;
	sub_82178B60(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,752
	ctx.r3.s64 = ctx.r1.s64 + 752;
loc_8225BC34:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82120ac0
	ctx.lr = 0x8225BC40;
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
	ctx.lr = 0x8225BC58;
	sub_82288798(ctx, base);
loc_8225BC58:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r11,2888
	ctx.r3.s64 = ctx.r11.s64 + 2888;
	// bl 0x8226afb8
	ctx.lr = 0x8225BC64;
	sub_8226AFB8(ctx, base);
	// b 0x8225bca0
	goto loc_8225BCA0;
loc_8225BC68:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lbz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8225bca0
	if (!ctx.cr0.eq) goto loc_8225BCA0;
loc_8225BC78:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r6,r11,-8500
	ctx.r6.s64 = ctx.r11.s64 + -8500;
loc_8225BC80:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-27404
	ctx.r5.s64 = ctx.r10.s64 + -27404;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82288100
	ctx.lr = 0x8225BC98;
	sub_82288100(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,1596(r31)
	REX_STORE_U32(r31.u32 + 1596, ctx.r11.u32);
loc_8225BCA0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8215f670
	ctx.lr = 0x8225BCAC;
	sub_8215F670(ctx, base);
	// bl 0x8215f0f0
	ctx.lr = 0x8225BCB0;
	sub_8215F0F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82120ac0
	ctx.lr = 0x8225BCC0;
	sub_82120AC0(ctx, base);
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_822A2F10) {
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
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1ca4
	ctx.lr = 0x822A2F18;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2ca4
	ctx.lr = 0x822A2F20;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822A2F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// subf r23,r10,r28
	r23.u64 = r28.u64 - ctx.r10.u64;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// lfs f31,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	f31.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// lfs f29,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	f29.f64 = double(temp.f32);
	// lfs f28,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	f28.f64 = double(temp.f32);
loc_822A2F78:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// add r26,r28,r11
	r26.u64 = r28.u64 + ctx.r11.u64;
	// lfs f11,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f10,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stfsx f29,r28,r11
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r28.u32 + ctx.r11.u32, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,56(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f6,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f11,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f10,f7,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f9,f6,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmadds f13,f11,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f13,f8,f0,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f0,f0,f5,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, ctx.f9.f64)));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bctrl 
	ctx.lr = 0x822A3010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lfs f10,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f10,f8,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f28,0(r26)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f11.f64)));
	// lfs f9,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f13,f13,f5,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f10.f64)));
	// fmadds f0,f4,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmadds f11,f12,f6,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f11.f64)));
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f12,f11,f3
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfsx f0,r28,r25
	temp.u32 = REX_LOAD_U32(r28.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 + ctx.f0.f64));
	// stfsx f0,r23,r26
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + r26.u32, temp.u32);
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f5,f12,f13
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f4,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmadds f13,f10,f13,f6
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f6.f64)));
	// fmadds f10,f9,f12,f5
	ctx.f10.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f5.f64)));
	// fmadds f11,f8,f12,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f11.f64)));
	// fmadds f13,f7,f12,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f13.f64)));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmadds f13,f4,f0,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f0,f0,f3,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f3.f64, ctx.f11.f64)));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bctrl 
	ctx.lr = 0x822A3120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f10,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lfs f9,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f9,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f2,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f13,f10,f7,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f13.f64)));
	// lfs f27,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	f27.f64 = double(temp.f32);
	// fmadds f12,f6,f8,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, ctx.f12.f64)));
	// fmadds f0,f8,f5,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f0.f64)));
	// fmadds f13,f8,f4,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f8.f64, ctx.f4.f64, ctx.f13.f64)));
	// fmadds f12,f9,f3,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f9.f64, ctx.f3.f64, ctx.f12.f64)));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f0,f13,f1
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f12,f27
	ctx.f0.f64 = double(float(ctx.f12.f64 + f27.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// ld r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r9,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lfsx f0,r28,r25
	temp.u32 = REX_LOAD_U32(r28.u32 + r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// stfsx f0,r28,r24
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + r24.u32, temp.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// blt cr6,0x822a2f78
	if (ctx.cr6.lt) goto loc_822A2F78;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x826a2cf0
	ctx.lr = 0x822A31D4;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_822C0020) {
	REX_FUNC_PROLOGUE();
	// lwz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 192);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C06D0) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,15048(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15048);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x822c0798
	if (ctx.cr6.eq) goto loc_822C0798;
	// lwz r3,500(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 500);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822c0720
	if (ctx.cr6.eq) goto loc_822C0720;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C0720;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822C0720:
	// addi r7,r31,336
	ctx.r7.s64 = r31.s64 + 336;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r31,320
	ctx.r6.s64 = r31.s64 + 320;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822941e8
	ctx.lr = 0x822C0738;
	sub_822941E8(ctx, base);
	// ld r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 320);
	// ld r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 328);
	// ld r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 336);
	// ld r8,344(r31)
	ctx.r8.u64 = REX_LOAD_U64(r31.u32 + 344);
	// std r11,144(r31)
	REX_STORE_U64(r31.u32 + 144, ctx.r11.u64);
	// std r10,152(r31)
	REX_STORE_U64(r31.u32 + 152, ctx.r10.u64);
	// std r9,160(r31)
	REX_STORE_U64(r31.u32 + 160, ctx.r9.u64);
	// std r8,168(r31)
	REX_STORE_U64(r31.u32 + 168, ctx.r8.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// std r11,80(r31)
	REX_STORE_U64(r31.u32 + 80, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// std r11,88(r31)
	REX_STORE_U64(r31.u32 + 88, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// std r11,104(r31)
	REX_STORE_U64(r31.u32 + 104, ctx.r11.u64);
	// ld r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 48);
	// std r11,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r11.u64);
	// ld r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 56);
	// std r11,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r11.u64);
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 64);
	// std r11,128(r31)
	REX_STORE_U64(r31.u32 + 128, ctx.r11.u64);
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// std r11,136(r31)
	REX_STORE_U64(r31.u32 + 136, ctx.r11.u64);
loc_822C0798:
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

DEFINE_REX_FUNC(sub_822C2AA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0xE0000) | (ctx.r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2E98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C3180) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,0,16,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C37A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	REX_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C4418) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1168);
	// srawi r3,r11,27
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 27;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5580) {
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
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822c55b8
	if (!ctx.cr6.eq) goto loc_822C55B8;
	// bl 0x822da140
	ctx.lr = 0x822C55A4;
	sub_822DA140(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// bl 0x823f0350
	ctx.lr = 0x822C55B0;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c55c0
	goto loc_822C55C0;
loc_822C55B8:
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
loc_822C55C0:
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

DEFINE_REX_FUNC(sub_822C8F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r5
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r5
	// li r5,16
	ctx.r5.s64 = 16;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// ble cr6,0x822c9010
	if (!ctx.cr6.gt) goto loc_822C9010;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r6,32
	ctx.r6.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,48
	ctx.r8.s64 = 48;
loc_822C8FB4:
	// li r4,256
	ctx.r4.s64 = 256;
	// dcbt r4,r11
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r4,64
	ctx.r4.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v61,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvlx128 v60,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvlx128 v59,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x822c8fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C8FB4;
loc_822C9010:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c9038
	if (ctx.cr6.eq) goto loc_822C9038;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_822C901C:
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x822c901c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C901C;
loc_822C9038:
	// ld r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// std r11,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D4BC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x822D4BC8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,10896(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10896);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r11.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4c6c
	if (ctx.cr0.eq) goto loc_822D4C6C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822d4c00
	if (!ctx.cr6.eq) goto loc_822D4C00;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d4c6c
	if (!ctx.cr6.gt) goto loc_822D4C6C;
loc_822D4C00:
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = REX_QUERY_TIMEBASE();
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_822D4C2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5318
	ctx.lr = 0x822D4C34;
	sub_822C5318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d4c64
	if (ctx.cr0.eq) goto loc_822D4C64;
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10896);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.u64 = r30.u64 - ctx.r11.u64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d4c64
	if (ctx.cr0.eq) goto loc_822D4C64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822d4c2c
	if (!ctx.cr6.eq) goto loc_822D4C2C;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822d4c2c
	if (ctx.cr6.gt) goto loc_822D4C2C;
loc_822D4C64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5250
	ctx.lr = 0x822D4C6C;
	sub_822C5250(ctx, base);
loc_822D4C6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_822DA3C8) {
	REX_FUNC_PROLOGUE();
	// addis r11,r3,8178
	ctx.r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DAD40) {
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
	ctx.lr = 0x822DAD48;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// li r29,-1
	r29.s64 = -1;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r11,-1412
	r31.s64 = ctx.r11.s64 + -1412;
	// lwz r30,-1412(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + -1412);
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne 0x822dadf8
	if (!ctx.cr0.eq) goto loc_822DADF8;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x823f02b8
	ctx.lr = 0x822DAD7C;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x822dad8c
	if (!ctx.cr0.eq) goto loc_822DAD8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822daf34
	goto loc_822DAF34;
loc_822DAD8C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82793894
	ctx.lr = 0x822DAD94;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,21845
	ctx.r11.s64 = 1431633920;
	// li r8,6144
	ctx.r8.s64 = 6144;
	// ori r11,r11,21845
	ctx.r11.u64 = ctx.r11.u64 | 21845;
	// stw r8,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,800(r30)
	REX_STORE_U32(r30.u32 + 800, ctx.r11.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_822DADB0:
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
	// bne cr6,0x822dadd4
	if (!ctx.cr6.eq) goto loc_822DADD4;
	// stwcx. r30,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x822dadb0
	if (!ctx.cr0.eq) goto loc_822DADB0;
	// b 0x822daddc
	goto loc_822DADDC;
loc_822DADD4:
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
loc_822DADDC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dadf8
	if (ctx.cr6.eq) goto loc_822DADF8;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f0350
	ctx.lr = 0x822DADF4;
	sub_823F0350(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_822DADF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938a4
	ctx.lr = 0x822DAE00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r4,28(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822daf1c
	if (ctx.cr6.gt) goto loc_822DAF1C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r7,r30,32
	ctx.r7.s64 = r30.s64 + 32;
	// addi r6,r30,800
	ctx.r6.s64 = r30.s64 + 800;
loc_822DAE20:
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822daef4
	if (ctx.cr6.eq) goto loc_822DAEF4;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bne cr6,0x822dae68
	if (!ctx.cr6.eq) goto loc_822DAE68;
loc_822DAE4C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822dae4c
	if (ctx.cr6.eq) goto loc_822DAE4C;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822daef4
	if (ctx.cr6.eq) goto loc_822DAEF4;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
loc_822DAE68:
	// srw r9,r29,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r8.u8 & 0x3F));
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822daeac
	if (!ctx.cr6.eq) goto loc_822DAEAC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// b 0x822dae90
	goto loc_822DAE90;
loc_822DAE8C:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
loc_822DAE90:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822dae8c
	if (ctx.cr6.eq) goto loc_822DAE8C;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822daea8
	if (!ctx.cr6.eq) goto loc_822DAEA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822daeac
	goto loc_822DAEAC;
loc_822DAEA8:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
loc_822DAEAC:
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r3,r9,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r9,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822daef4
	if (ctx.cr0.eq) goto loc_822DAEF4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// blt cr6,0x822daeec
	if (ctx.cr6.lt) goto loc_822DAEEC;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822daeec
	if (!ctx.cr6.lt) goto loc_822DAEEC;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_822DAEEC:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x822dae20
	goto loc_822DAE20;
loc_822DAEF4:
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x822daf1c
	if (ctx.cr6.eq) goto loc_822DAF1C;
	// subf r11,r28,r4
	ctx.r11.u64 = ctx.r4.u64 - r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// add r5,r31,r28
	ctx.r5.u64 = r31.u64 + r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dac00
	ctx.lr = 0x822DAF18;
	sub_822DAC00(ctx, base);
	// mr r27,r31
	r27.u64 = r31.u64;
loc_822DAF1C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827938b4
	ctx.lr = 0x822DAF24;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf r11,r27,r29
	ctx.r11.u64 = r29.u64 - r27.u64;
	// stw r27,0(r26)
	REX_STORE_U32(r26.u32 + 0, r27.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822DAF34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_822E9040) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32126
	ctx.r11.s64 = -2105409536;
	// addi r3,r11,-12976
	ctx.r3.s64 = ctx.r11.s64 + -12976;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E9FE8) {
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
	ctx.lr = 0x822E9FFC;
	sub_822F6280(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822ea00c
	if (ctx.cr0.eq) goto loc_822EA00C;
	// bl 0x822ea020
	ctx.lr = 0x822EA008;
	sub_822EA020(ctx, base);
	// b 0x822ea010
	goto loc_822EA010;
loc_822EA00C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822EA010:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EB7B0) {
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
	ctx.lr = 0x822EB7B8;
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f13,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// lfs f0,216(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,16592
	ctx.r9.s64 = ctx.r11.s64 + 16592;
	// lfs f12,124(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,136(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// lfs f9,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lfs f8,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// addi r30,r3,188
	r30.s64 = ctx.r3.s64 + 188;
	// lfs f6,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// lfs f0,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,16592(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f5,f0,f12
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f11,f7
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f11,f9,f7
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f8,f5
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f6,f5
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f29,f11,f13,f12
	f29.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// fadds f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// ble cr6,0x822eb8dc
	if (!ctx.cr6.gt) goto loc_822EB8DC;
loc_822EB84C:
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x822eb8dc
	if (ctx.cr6.gt) goto loc_822EB8DC;
	// addi r29,r30,8
	r29.s64 = r30.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822EB86C;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EB884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f30,f1,f31
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// blt cr6,0x822eb8c8
	if (ctx.cr6.lt) goto loc_822EB8C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8228ca78
	ctx.lr = 0x822EB8A0;
	sub_8228CA78(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fsubs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 - ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822EB8C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_822EB8C8:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822eb84c
	if (ctx.cr6.lt) goto loc_822EB84C;
loc_822EB8DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_822F5A50) {
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
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x822f5b3c
	if (ctx.cr6.eq) goto loc_822F5B3C;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822f5b3c
	if (!ctx.cr6.eq) goto loc_822F5B3C;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5b10
	if (ctx.cr6.eq) goto loc_822F5B10;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f5b10
	if (ctx.cr6.eq) goto loc_822F5B10;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x822f5208
	ctx.lr = 0x822F5AC4;
	sub_822F5208(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f5ae0
	if (ctx.cr6.eq) goto loc_822F5AE0;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x822f5b04
	if (ctx.cr6.eq) goto loc_822F5B04;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822f5af8
	if (ctx.cr6.gt) goto loc_822F5AF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822F5AE0:
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
loc_822F5AF8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x822f5ae0
	goto loc_822F5AE0;
loc_822F5B04:
	// lis r31,-32719
	r31.s64 = -2144272384;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
	// b 0x822f5ae0
	goto loc_822F5AE0;
loc_822F5B10:
	// ld r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x822f4f30
	ctx.lr = 0x822F5B18;
	sub_822F4F30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x822f5ae0
	if (!ctx.cr6.eq) goto loc_822F5AE0;
	// lis r3,-32719
	ctx.r3.s64 = -2144272384;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
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
loc_822F5B3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

DEFINE_REX_FUNC(sub_822FAEE0) {
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
	ctx.lr = 0x822FAEE8;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x822faf2c
	if (ctx.cr6.eq) goto loc_822FAF2C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x822faf20
	if (ctx.cr6.eq) goto loc_822FAF20;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x822faf38
	if (!ctx.cr6.eq) goto loc_822FAF38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3780(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3780);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822faf34
	goto loc_822FAF34;
loc_822FAF20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3776(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3776);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822faf34
	goto loc_822FAF34;
loc_822FAF2C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3712(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f0.f64 = double(temp.f32);
loc_822FAF34:
	// fmuls f31,f31,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_822FAF38:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822fb078
	if (ctx.cr0.eq) goto loc_822FB078;
	// beq cr6,0x822faf54
	if (ctx.cr6.eq) goto loc_822FAF54;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faf58
	goto loc_822FAF58;
loc_822FAF54:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822FAF58:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822faf74
	if (ctx.cr6.eq) goto loc_822FAF74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822faf70
	if (ctx.cr6.eq) goto loc_822FAF70;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822faf74
	goto loc_822FAF74;
loc_822FAF70:
	// li r28,0
	r28.s64 = 0;
loc_822FAF74:
	// lhz r11,100(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 100);
	// stfs f31,56(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 56, temp.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fb00c
	if (ctx.cr0.eq) goto loc_822FB00C;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// li r31,0
	r31.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r29,8(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x822fb130
	if (!ctx.cr6.gt) goto loc_822FB130;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_822FAFA8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822faff8
	if (ctx.cr6.eq) goto loc_822FAFF8;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fafc8
	if (ctx.cr6.eq) goto loc_822FAFC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822fafcc
	goto loc_822FAFCC;
loc_822FAFC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FAFCC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822faff8
	if (!ctx.cr6.eq) goto loc_822FAFF8;
	// lhz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 100);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822faff8
	if (ctx.cr0.eq) goto loc_822FAFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822faee0
	ctx.lr = 0x822FAFF0;
	sub_822FAEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fb134
	if (!ctx.cr0.eq) goto loc_822FB134;
loc_822FAFF8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822fafa8
	if (ctx.cr6.lt) goto loc_822FAFA8;
	// b 0x822fb130
	goto loc_822FB130;
loc_822FB00C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822fb130
	if (!ctx.cr6.gt) goto loc_822FB130;
	// li r31,0
	r31.s64 = 0;
loc_822FB024:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fb05c
	if (ctx.cr6.eq) goto loc_822FB05C;
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822fb05c
	if (ctx.cr6.eq) goto loc_822FB05C;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822faee0
	ctx.lr = 0x822FB054;
	sub_822FAEE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fb134
	if (!ctx.cr0.eq) goto loc_822FB134;
loc_822FB05C:
	// lwz r11,168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 168);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822fb024
	if (ctx.cr6.lt) goto loc_822FB024;
	// b 0x822fb130
	goto loc_822FB130;
loc_822FB078:
	// stfs f31,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// beq cr6,0x822fb088
	if (ctx.cr6.eq) goto loc_822FB088;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fb08c
	goto loc_822FB08C;
loc_822FB088:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FB08C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fb100
	if (ctx.cr6.eq) goto loc_822FB100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fa420
	ctx.lr = 0x822FB09C;
	sub_822FA420(ctx, base);
	// fadds f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,3048(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3048);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3704(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vexptefp128 v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	{
		simde__m128 x = simde_mm_load_ps(ctx.v63.f32);
		simde__m128 n = simde_mm_round_ps(x, SIMDE_MM_FROUND_TO_NEG_INF | SIMDE_MM_FROUND_NO_EXC);
		simde__m128 f = simde_mm_sub_ps(x, n);
		simde__m128 p = simde_mm_set1_ps(1.8775767e-3f);
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(8.9893397e-3f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(5.5826318e-2f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(2.4015361e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(6.9315308e-1f));
		p = simde_mm_add_ps(simde_mm_mul_ps(p, f), simde_mm_set1_ps(1.0f));
		simde__m128i exp_bits = simde_mm_slli_epi32(
			simde_mm_add_epi32(simde_mm_cvttps_epi32(n), simde_mm_set1_epi32(127)), 23);
		simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(p, simde_mm_castsi128_ps(exp_bits)));
	}
	// stvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x822fb0ec
	if (ctx.cr6.eq) goto loc_822FB0EC;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822fb0f0
	goto loc_822FB0F0;
loc_822FB0EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FB0F0:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82330108
	ctx.lr = 0x822FB0F8;
	sub_82330108(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fb134
	if (!ctx.cr0.eq) goto loc_822FB134;
loc_822FB100:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 312);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822fb130
	if (ctx.cr6.eq) goto loc_822FB130;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// rlwinm. r11,r11,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fb130
	if (ctx.cr0.eq) goto loc_822FB130;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822FB128;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822fb134
	if (!ctx.cr0.eq) goto loc_822FB134;
loc_822FB130:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822FB134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8230F5D8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8230f5e8
	if (!ctx.cr6.eq) goto loc_8230F5E8;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_8230F5E8:
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230f614
	if (ctx.cr6.eq) goto loc_8230F614;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8230f60c
	goto loc_8230F60C;
loc_8230F604:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8230F60C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8230f604
	if (!ctx.cr6.eq) goto loc_8230F604;
loc_8230F614:
	// stw r9,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82310898) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823119E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823119f8
	if (ctx.cr6.eq) goto loc_823119F8;
	// stw r3,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r3.u32);
loc_823119F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82312758) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x82312760;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r27,r3,128
	r27.s64 = ctx.r3.s64 + 128;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8231278c
	if (!ctx.cr6.eq) goto loc_8231278C;
	// li r30,0
	r30.s64 = 0;
loc_8231278C:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82312864
	if (ctx.cr6.eq) goto loc_82312864;
	// li r31,0
	r31.s64 = 0;
loc_8231279C:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ef5f0
	ctx.lr = 0x823127AC;
	sub_823EF5F0(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// blt cr6,0x823127e8
	if (ctx.cr6.lt) goto loc_823127E8;
	// beq cr6,0x823127dc
	if (ctx.cr6.eq) goto loc_823127DC;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// blt cr6,0x823127d0
	if (ctx.cr6.lt) goto loc_823127D0;
	// bne cr6,0x823127f4
	if (!ctx.cr6.eq) goto loc_823127F4;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x823127f0
	goto loc_823127F0;
loc_823127D0:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// b 0x823127f0
	goto loc_823127F0;
loc_823127DC:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// b 0x823127f0
	goto loc_823127F0;
loc_823127E8:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_823127F0:
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_823127F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x8233eee8
	ctx.lr = 0x82312800;
	sub_8233EEE8(ctx, base);
	// cmpwi cr6,r3,73
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 73, ctx.xer);
	// beq cr6,0x82312858
	if (ctx.cr6.eq) goto loc_82312858;
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82312820
	if (ctx.cr6.eq) goto loc_82312820;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82312820
	if (ctx.cr6.eq) goto loc_82312820;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82312898
	if (!ctx.cr6.eq) goto loc_82312898;
loc_82312820:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822fc2e0
	ctx.lr = 0x82312828;
	sub_822FC2E0(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 52);
	// bl 0x8233eea0
	ctx.lr = 0x82312838;
	sub_8233EEA0(ctx, base);
	// cmpwi cr6,r3,36
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 36, ctx.xer);
	// beq cr6,0x82312858
	if (ctx.cr6.eq) goto loc_82312858;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// beq cr6,0x82312858
	if (ctx.cr6.eq) goto loc_82312858;
	// cmpwi cr6,r3,82
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 82, ctx.xer);
	// beq cr6,0x82312858
	if (ctx.cr6.eq) goto loc_82312858;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82312898
	if (!ctx.cr6.eq) goto loc_82312898;
loc_82312858:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(r31.s32, 4, ctx.xer);
	// blt cr6,0x8231279c
	if (ctx.cr6.lt) goto loc_8231279C;
loc_82312864:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r30,r11,-4
	r30.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x8231287c
	if (!ctx.cr6.eq) goto loc_8231287C;
	// li r30,0
	r30.s64 = 0;
loc_8231287C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// addi r11,r28,124
	ctx.r11.s64 = r28.s64 + 124;
	// bne cr6,0x8231288c
	if (!ctx.cr6.eq) goto loc_8231288C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8231288C:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8231278c
	if (!ctx.cr6.eq) goto loc_8231278C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82312898:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82318A18) {
	REX_FUNC_PROLOGUE();
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82318a4c
	if (ctx.cr6.eq) goto loc_82318A4C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82318A30:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82318a54
	if (!ctx.cr6.eq) goto loc_82318A54;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82318a30
	if (ctx.cr6.lt) goto loc_82318A30;
loc_82318A4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82318A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8231A2F0) {
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
	ctx.lr = 0x8231A2F8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// ble cr6,0x8231a354
	if (!ctx.cr6.gt) goto loc_8231A354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r26
	r30.u64 = r26.u64;
	// addi r28,r11,6196
	r28.s64 = ctx.r11.s64 + 6196;
loc_8231A320:
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82317638
	ctx.lr = 0x8231A33C;
	sub_82317638(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231a320
	if (ctx.cr6.lt) goto loc_8231A320;
loc_8231A354:
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
	// beq cr6,0x8231a384
	if (ctx.cr6.eq) goto loc_8231A384;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2499
	ctx.r6.s64 = 2499;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231A384;
	sub_82330D00(ctx, base);
loc_8231A384:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a39c
	if (ctx.cr6.eq) goto loc_8231A39C;
	// bl 0x823151e8
	ctx.lr = 0x8231A394;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a444
	if (!ctx.cr0.eq) goto loc_8231A444;
loc_8231A39C:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r26,24(r31)
	REX_STORE_U32(r31.u32 + 24, r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r26,20(r31)
	REX_STORE_U32(r31.u32 + 20, r26.u32);
	// beq cr6,0x8231a41c
	if (ctx.cr6.eq) goto loc_8231A41C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8231a400
	if (!ctx.cr6.gt) goto loc_8231A400;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_8231A3C8:
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// li r6,2515
	ctx.r6.s64 = 2515;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82330d00
	ctx.lr = 0x8231A3EC;
	sub_82330D00(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231a3c8
	if (ctx.cr6.lt) goto loc_8231A3C8;
loc_8231A400:
	// lwz r11,1012(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 1012);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r6,2518
	ctx.r6.s64 = 2518;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8231A41C;
	sub_82330D00(ctx, base);
loc_8231A41C:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231a434
	if (ctx.cr6.eq) goto loc_8231A434;
	// bl 0x823151e8
	ctx.lr = 0x8231A42C;
	sub_823151E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8231a444
	if (!ctx.cr0.eq) goto loc_8231A444;
loc_8231A434:
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,36(r31)
	REX_STORE_U32(r31.u32 + 36, r26.u32);
	// stw r26,32(r31)
	REX_STORE_U32(r31.u32 + 32, r26.u32);
loc_8231A444:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823265C0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// b 0x8232b780
	sub_8232B780(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823288F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x823288F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r30,-32129
	r30.s64 = -2105606144;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r31,r11,7860
	r31.s64 = ctx.r11.s64 + 7860;
	// beq cr6,0x82328930
	if (ctx.cr6.eq) goto loc_82328930;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,65
	ctx.r6.s64 = 65;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82328930;
	sub_82330D00(ctx, base);
loc_82328930:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82328960
	if (!ctx.cr6.eq) goto loc_82328960;
	// lwz r4,28(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328960
	if (ctx.cr6.eq) goto loc_82328960;
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,70
	ctx.r6.s64 = 70;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x82328960;
	sub_82330D00(ctx, base);
loc_82328960:
	// lwz r11,1012(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1012);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,73
	ctx.r6.s64 = 73;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8232897C;
	sub_82330D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_8232B128) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,8128
	ctx.r9.s64 = ctx.r9.s64 + 8128;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r11,36(r3)
	REX_STORE_U8(ctx.r3.u32 + 36, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232CF28) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,168(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232cf64
	if (ctx.cr6.eq) goto loc_8232CF64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,168(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232CF5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232cf68
	if (!ctx.cr0.eq) goto loc_8232CF68;
loc_8232CF64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232CF68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232E958) {
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
	// bl 0x8232e2a0
	ctx.lr = 0x8232E970;
	sub_8232E2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232e980
	if (!ctx.cr0.eq) goto loc_8232E980;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_8232E980:
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

DEFINE_REX_FUNC(sub_8232FA90) {
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
	// bl 0x82332760
	ctx.lr = 0x8232FAAC;
	sub_82332760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8232fac4
	if (!ctx.cr6.eq) goto loc_8232FAC4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82334410
	ctx.lr = 0x8232FAC4;
	sub_82334410(ctx, base);
loc_8232FAC4:
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

DEFINE_REX_FUNC(sub_82331388) {
	REX_FUNC_PROLOGUE();
	// b 0x823312a8
	sub_823312A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823315A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823315B8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x823315d8
	if (ctx.cr6.lt) goto loc_823315D8;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x823315d8
	if (ctx.cr6.gt) goto loc_823315D8;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
loc_823315D8:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823315b8
	if (!ctx.cr6.eq) goto loc_823315B8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82335060) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335074
	if (!ctx.cr6.eq) goto loc_82335074;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82335074:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82337F88) {
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
	ctx.lr = 0x82337F90;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82337fbc
	if (!ctx.cr6.eq) goto loc_82337FBC;
	// li r3,37
	ctx.r3.s64 = 37;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cfc
	return;
loc_82337FBC:
	// lwz r11,20884(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20884);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233800c
	if (ctx.cr6.eq) goto loc_8233800C;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233800c
	if (ctx.cr6.eq) goto loc_8233800C;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8872
	ctx.r5.s64 = ctx.r10.s64 + 8872;
	// li r6,9383
	ctx.r6.s64 = 9383;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,412
	ctx.r4.s64 = 412;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82337FFC;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338104
	if (ctx.cr6.eq) goto loc_82338104;
	// bl 0x823366a8
	ctx.lr = 0x82338008;
	sub_823366A8(ctx, base);
	// b 0x82338094
	goto loc_82338094;
loc_8233800C:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,8872
	ctx.r5.s64 = ctx.r10.s64 + 8872;
	// li r6,9388
	ctx.r6.s64 = 9388;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// li r4,100
	ctx.r4.s64 = 100;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330e40
	ctx.lr = 0x82338030;
	sub_82330E40(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338104
	if (ctx.cr6.eq) goto loc_82338104;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// addi r7,r10,8944
	ctx.r7.s64 = ctx.r10.s64 + 8944;
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lfs f0,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lfs f13,3716(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3716);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r30,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, r30.u32);
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
loc_82338094:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338104
	if (ctx.cr6.eq) goto loc_82338104;
	// addic. r11,r28,21820
	ctx.xer.ca = r28.u32 > 4294945475;
	ctx.r11.s64 = r28.s64 + 21820;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r28,21824
	ctx.r10.s64 = r28.s64 + 21824;
	// bne 0x823380b0
	if (!ctx.cr0.eq) goto loc_823380B0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823380B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = r31.s64 + 4;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
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
	// stw r28,20(r31)
	REX_STORE_U32(r31.u32 + 20, r28.u32);
	// beq cr6,0x82338110
	if (ctx.cr6.eq) goto loc_82338110;
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338110
	if (ctx.cr6.eq) goto loc_82338110;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823317f0
	ctx.lr = 0x823380F0;
	sub_823317F0(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338114
	if (!ctx.cr6.eq) goto loc_82338114;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352038
	ctx.lr = 0x82338104;
	sub_82352038(ctx, base);
loc_82338104:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cfc
	return;
loc_82338110:
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_82338114:
	// lwz r11,20884(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 20884);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338254
	if (ctx.cr6.eq) goto loc_82338254;
	// clrlwi r11,r26,24
	ctx.r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233824c
	if (ctx.cr6.eq) goto loc_8233824C;
	// addi r11,r1,188
	ctx.r11.s64 = ctx.r1.s64 + 188;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// li r5,152
	ctx.r5.s64 = 152;
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ef5f0
	ctx.lr = 0x82338150;
	sub_823EF5F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r9,9008
	ctx.r4.s64 = ctx.r9.s64 + 9008;
	// bl 0x82331480
	ctx.lr = 0x82338160;
	sub_82331480(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82338188
	if (ctx.cr6.eq) goto loc_82338188;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,28276
	ctx.r4.s64 = ctx.r11.s64 + 28276;
	// bl 0x823314c8
	ctx.lr = 0x82338178;
	sub_823314C8(ctx, base);
	// li r5,18
	ctx.r5.s64 = 18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82331500
	ctx.lr = 0x82338188;
	sub_82331500(ctx, base);
loc_82338188:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r31,104
	ctx.r10.s64 = r31.s64 + 104;
	// ori r9,r11,256
	ctx.r9.u64 = ctx.r11.u64 | 256;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82336400
	ctx.lr = 0x823381B4;
	sub_82336400(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823381d4
	if (ctx.cr6.eq) goto loc_823381D4;
loc_823381C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82352038
	ctx.lr = 0x823381C8;
	sub_82352038(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cfc
	return;
loc_823381D4:
	// lwz r11,1188(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1188);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f3,3788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3788);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lwz r6,68(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82338210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,284(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 284);
	// ori r11,r3,2
	ctx.r11.u64 = ctx.r3.u64 | 2;
	// stw r11,284(r4)
	REX_STORE_U32(ctx.r4.u32 + 284, ctx.r11.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r3,4372(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 4372);
	// bl 0x82348ca0
	ctx.lr = 0x82338238;
	sub_82348CA0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823381c0
	if (!ctx.cr6.eq) goto loc_823381C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// b 0x82338250
	goto loc_82338250;
loc_8233824C:
	// lwz r11,4372(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4372);
loc_82338250:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_82338254:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8233827c
	if (ctx.cr6.eq) goto loc_8233827C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,25872
	ctx.r3.s64 = ctx.r11.s64 + 25872;
	// bl 0x82331668
	ctx.lr = 0x8233826C;
	sub_82331668(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8233827c
	if (!ctx.cr6.eq) goto loc_8233827C;
	// lwz r11,1176(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1176);
	// stw r31,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, r31.u32);
loc_8233827C:
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_82351410) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82351418;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82351434
	if (ctx.cr6.eq) goto loc_82351434;
	// stb r4,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r4.u8);
loc_82351434:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235148c
	if (ctx.cr6.eq) goto loc_8235148C;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351454
	if (!ctx.cr6.eq) goto loc_82351454;
	// li r31,0
	r31.s64 = 0;
loc_82351454:
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8235148c
	if (ctx.cr6.eq) goto loc_8235148C;
loc_8235145C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82351410
	ctx.lr = 0x8235146C;
	sub_82351410(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// bne cr6,0x82351480
	if (!ctx.cr6.eq) goto loc_82351480;
	// li r31,0
	r31.s64 = 0;
loc_82351480:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235145c
	if (!ctx.cr6.eq) goto loc_8235145C;
loc_8235148C:
	// lwz r31,44(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// beq cr6,0x823514b8
	if (ctx.cr6.eq) goto loc_823514B8;
loc_8235149C:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm r4,r11,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// bl 0x8234cba0
	ctx.lr = 0x823514AC;
	sub_8234CBA0(ctx, base);
	// lwz r31,0(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x8235149c
	if (!ctx.cr6.eq) goto loc_8235149C;
loc_823514B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82354C38) {
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
	// beq cr6,0x82354c74
	if (ctx.cr6.eq) goto loc_82354C74;
	// lbz r11,1224(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354c90
	if (!ctx.cr6.eq) goto loc_82354C90;
	// bl 0x823a94f0
	ctx.lr = 0x82354C64;
	sub_823A94F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354c94
	if (!ctx.cr6.eq) goto loc_82354C94;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82354c8c
	goto loc_82354C8C;
loc_82354C74:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a94f0
	ctx.lr = 0x82354C80;
	sub_823A94F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82354c94
	if (!ctx.cr6.eq) goto loc_82354C94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354C8C:
	// stb r11,1224(r31)
	REX_STORE_U8(r31.u32 + 1224, ctx.r11.u8);
loc_82354C90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354C94:
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

DEFINE_REX_FUNC(sub_82356910) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82356920
	if (!ctx.cr6.eq) goto loc_82356920;
	// li r3,37
	ctx.r3.s64 = 37;
	// blr 
	return;
loc_82356920:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,260
	ctx.r10.s64 = ctx.r3.s64 + 260;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,352(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82356940
	if (!ctx.cr6.eq) goto loc_82356940;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82356940:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82356970
	if (ctx.cr6.eq) goto loc_82356970;
loc_82356948:
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82356978
	if (ctx.cr6.eq) goto loc_82356978;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-92
	ctx.r11.s64 = ctx.r11.s64 + -92;
	// bne cr6,0x82356968
	if (!ctx.cr6.eq) goto loc_82356968;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82356968:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356948
	if (!ctx.cr6.eq) goto loc_82356948;
loc_82356970:
	// li r3,68
	ctx.r3.s64 = 68;
	// blr 
	return;
loc_82356978:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82359E98;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// addi r29,r3,96
	r29.s64 = ctx.r3.s64 + 96;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x82359ee4
	if (ctx.cr6.eq) goto loc_82359EE4;
	// clrlwi r28,r4,24
	r28.u64 = ctx.r4.u32 & 0xFF;
loc_82359EB4:
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82359ecc
	if (ctx.cr6.eq) goto loc_82359ECC;
	// lbz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82359ed8
	if (ctx.cr6.eq) goto loc_82359ED8;
loc_82359ECC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82359d38
	ctx.lr = 0x82359ED8;
	sub_82359D38(ctx, base);
loc_82359ED8:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bne cr6,0x82359eb4
	if (!ctx.cr6.eq) goto loc_82359EB4;
loc_82359EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8235D2B8) {
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
	ctx.lr = 0x8235D2C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f12,188(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lfs f10,192(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f9,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f8,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f7,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f5,184(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lwz r6,16(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// lwz r5,20(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// fsubs f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lis r3,-32202
	ctx.r3.s64 = -2110390272;
	// lwz r27,12(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f9,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lwz r26,16(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r4,r3,-13528
	ctx.r4.s64 = ctx.r3.s64 + -13528;
	// lwz r25,20(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// addi r7,r31,12
	ctx.r7.s64 = r31.s64 + 12;
	// fmadds f8,f10,f4,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, ctx.f3.f64)));
	// addi r10,r11,184
	ctx.r10.s64 = ctx.r11.s64 + 184;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r11,236
	ctx.r3.s64 = ctx.r11.s64 + 236;
	// fmadds f7,f5,f2,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f2.f64, ctx.f8.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f5,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f7,f5,f4,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f4.f64, ctx.f8.f64)));
	// fsubs f5,f1,f0
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f13,f3,f2,f7
	ctx.f13.f64 = double(float(std::fma(ctx.f3.f64, ctx.f2.f64, ctx.f7.f64)));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f12,224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f6
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f8,f12,f4,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f9.f64)));
	// fmadds f7,f11,f2,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f8.f64)));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f6,192(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,184(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 184);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmadds f13,f6,f1,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f1.f64, ctx.f2.f64)));
	// fmadds f12,f4,f0,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f11,208(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 204);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f5
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmadds f7,f11,f1,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f1.f64, ctx.f8.f64)));
	// fmadds f6,f10,f0,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f2,220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// lfs f4,224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f12,f4,f1,f13
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f1.f64, ctx.f13.f64)));
	// fmadds f11,f3,f0,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x823a8798
	ctx.lr = 0x8235D418;
	sub_823A8798(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r27,12(r31)
	REX_STORE_U32(r31.u32 + 12, r27.u32);
	// stw r26,16(r31)
	REX_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r25,20(r31)
	REX_STORE_U32(r31.u32 + 20, r25.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cfc
	return;
}

DEFINE_REX_FUNC(sub_8236C558) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r9,r3,-28
	ctx.r9.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x8236c56c
	if (!ctx.cr6.eq) goto loc_8236C56C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8236C56C:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r9,652
	ctx.r11.s64 = ctx.r9.s64 + 652;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
loc_8236C580:
	// stfs f0,-124(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// stw r8,-188(r11)
	REX_STORE_U32(ctx.r11.u32 + -188, ctx.r8.u32);
	// stfs f0,-60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8236c580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236C580;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r8,368(r9)
	REX_STORE_U8(ctx.r9.u32 + 368, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236E668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8236E670;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32129
	ctx.r10.s64 = -2105606144;
	// li r29,0
	r29.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,1012(r10)
	REX_STORE_U32(ctx.r10.u32 + 1012, ctx.r11.u32);
	// lwz r8,164(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r9,384(r3)
	REX_STORE_U16(ctx.r3.u32 + 384, ctx.r9.u16);
	// stw r29,376(r3)
	REX_STORE_U32(ctx.r3.u32 + 376, r29.u32);
	// ble cr6,0x8236e6e4
	if (!ctx.cr6.gt) goto loc_8236E6E4;
loc_8236E6A4:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + r29.u64;
	// lwz r8,40(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f1,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8236E6C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e6e8
	if (!ctx.cr6.eq) goto loc_8236E6E8;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8236e6a4
	if (ctx.cr6.lt) goto loc_8236E6A4;
loc_8236E6E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236E6E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82374610) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374620
	if (!ctx.cr6.eq) goto loc_82374620;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374620:
	// b 0x82374470
	sub_82374470(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374B70) {
	REX_FUNC_PROLOGUE();
	// li r3,25
	ctx.r3.s64 = 25;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374B78) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374b88
	if (!ctx.cr6.eq) goto loc_82374B88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82374B88:
	// b 0x82374910
	sub_82374910(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374EF8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x82374f0c
	if (!ctx.cr6.eq) goto loc_82374F0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82374F0C:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// beq cr6,0x82374f44
	if (ctx.cr6.eq) goto loc_82374F44;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r7,268(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 268);
	// lwz r6,272(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 272);
	// mulld r5,r7,r8
	ctx.r5.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r8.u64);
	// lwz r4,276(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 276);
	// divdu r3,r5,r6
	ctx.r3.u64 = ctx.r6.u64 ? ctx.r5.u64 / ctx.r6.u64 : 0;
	// tdllei r6,0
	if (ctx.r6.s64 == 0ll || ctx.r6.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// twllei r4,0
	if (ctx.r4.s32 == 0 || ctx.r4.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r10,r4
	ctx.r9.u64 = uint32_t(ctx.r4.u32 ? ctx.r10.u32 / ctx.r4.u32 : 0);
	// mullw r10,r9,r4
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
loc_82374F44:
	// lwz r9,188(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,256(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82340e38
	sub_82340E38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823784E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,-28
	ctx.r3.s64 = ctx.r3.s64 + -28;
	// bne cr6,0x823784f0
	if (!ctx.cr6.eq) goto loc_823784F0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823784F0:
	// b 0x82377be8
	sub_82377BE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82379EF8) {
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
	// addi r30,r31,12400
	r30.s64 = r31.s64 + 12400;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x82379F24;
	sub_823EF5F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,18224
	ctx.r11.s64 = ctx.r11.s64 + 18224;
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r11,12400(r31)
	REX_STORE_U32(r31.u32 + 12400, ctx.r11.u32);
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
	// addi r11,r5,-24936
	ctx.r11.s64 = ctx.r5.s64 + -24936;
	// addi r10,r6,-24912
	ctx.r10.s64 = ctx.r6.s64 + -24912;
	// addi r9,r7,-24888
	ctx.r9.s64 = ctx.r7.s64 + -24888;
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// stw r9,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// addi r11,r8,-24864
	ctx.r11.s64 = ctx.r8.s64 + -24864;
	// li r9,288
	ctx.r9.s64 = 288;
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

DEFINE_REX_FUNC(sub_82380D98) {
	REX_FUNC_PROLOGUE();
	// lbz r11,680(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 680);
	// lbz r9,650(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 650);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// bgt cr6,0x82380e10
	if (ctx.cr6.gt) goto loc_82380E10;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82380dfc
	if (ctx.cr6.eq) goto loc_82380DFC;
	// bdz 0x82380dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82380DC8;
	// bdz 0x82380df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82380DF0;
	// b 0x82380dfc
	goto loc_82380DFC;
loc_82380DC8:
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// rlwinm r11,r10,3,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xF8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x82380de4
	if (!ctx.cr6.lt) goto loc_82380DE4;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r10,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r10.u64 = static_cast<uint64_t>(255) - ctx.r11.u64;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
loc_82380DE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r11,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r11.u32);
	// b 0x82380e10
	goto loc_82380E10;
loc_82380DF0:
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r11,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r11.u32);
	// b 0x82380e10
	goto loc_82380E10;
loc_82380DFC:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r11,30660
	ctx.r7.s64 = ctx.r11.s64 + 30660;
	// lbzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stw r6,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r6.u32);
loc_82380E10:
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lbz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 652);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,604(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// stw r11,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r11.u32);
	// blt cr6,0x82380e4c
	if (ctx.cr6.lt) goto loc_82380E4C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// ble cr6,0x82380e6c
	if (!ctx.cr6.gt) goto loc_82380E6C;
	// subfic r11,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// stw r11,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r11.u32);
	// b 0x82380e6c
	goto loc_82380E6C;
loc_82380E4C:
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82380e60
	if (!ctx.cr6.lt) goto loc_82380E60;
	// stw r10,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
loc_82380E60:
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r10,612(r3)
	REX_STORE_U32(ctx.r3.u32 + 612, ctx.r10.u32);
loc_82380E6C:
	// lbz r11,651(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 651);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// stb r9,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r9.u8);
	// cmpwi cr6,r9,31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 31, ctx.xer);
	// ble cr6,0x82380e90
	if (!ctx.cr6.gt) goto loc_82380E90;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r11,-64
	ctx.r10.s64 = ctx.r11.s64 + -64;
	// stb r10,650(r3)
	REX_STORE_U8(ctx.r3.u32 + 650, ctx.r10.u8);
loc_82380E90:
	// lbz r11,460(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 460);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,460(r8)
	REX_STORE_U8(ctx.r8.u32 + 460, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82390C30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82390C38;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,256
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 256, ctx.xer);
	// bne cr6,0x82390c68
	if (!ctx.cr6.eq) goto loc_82390C68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c8da8
	ctx.lr = 0x82390C54;
	sub_823C8DA8(ctx, base);
	// stw r30,2184(r31)
	REX_STORE_U32(r31.u32 + 2184, r30.u32);
	// stw r30,2200(r31)
	REX_STORE_U32(r31.u32 + 2200, r30.u32);
loc_82390C5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82390C68:
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// bne cr6,0x82390ce8
	if (!ctx.cr6.eq) goto loc_82390CE8;
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82390c5c
	if (ctx.cr6.eq) goto loc_82390C5C;
	// bge cr6,0x82390c94
	if (!ctx.cr6.lt) goto loc_82390C94;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c8da8
	ctx.lr = 0x82390C90;
	sub_823C8DA8(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_82390C94:
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bge cr6,0x82390cb8
	if (!ctx.cr6.lt) goto loc_82390CB8;
loc_82390CA0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823908d0
	ctx.lr = 0x82390CAC;
	sub_823908D0(ctx, base);
	// lwz r11,1260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1260);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// blt cr6,0x82390ca0
	if (ctx.cr6.lt) goto loc_82390CA0;
loc_82390CB8:
	// clrlwi r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82390cdc
	if (ctx.cr6.eq) goto loc_82390CDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,2164(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 2164);
	// lbz r29,2165(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 2165);
	// bl 0x823c86b8
	ctx.lr = 0x82390CD4;
	sub_823C86B8(ctx, base);
	// stb r30,2164(r31)
	REX_STORE_U8(r31.u32 + 2164, r30.u8);
	// stb r29,2165(r31)
	REX_STORE_U8(r31.u32 + 2165, r29.u8);
loc_82390CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
loc_82390CE8:
	// li r3,25
	ctx.r3.s64 = 25;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82395368) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r5,356(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 356);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823953f4
	if (ctx.cr6.eq) goto loc_823953F4;
	// lhz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x823953fc
	if (!ctx.cr6.eq) goto loc_823953FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r5,24
	ctx.r9.s64 = ctx.r5.s64 + 24;
	// addi r6,r11,20176
	ctx.r6.s64 = ctx.r11.s64 + 20176;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
loc_82395398:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x823953b8
	if (!ctx.cr0.eq) goto loc_823953B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82395398
	if (!ctx.cr6.eq) goto loc_82395398;
loc_823953B8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82395414
	if (ctx.cr6.eq) goto loc_82395414;
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r9,16
	ctx.r8.s64 = ctx.r9.s64 + 16;
loc_823953CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823953ec
	if (!ctx.cr0.eq) goto loc_823953EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823953cc
	if (!ctx.cr6.eq) goto loc_823953CC;
loc_823953EC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82395414
	if (ctx.cr6.eq) goto loc_82395414;
loc_823953F4:
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_823953FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82395414
	if (ctx.cr6.eq) goto loc_82395414;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82395414
	if (ctx.cr6.eq) goto loc_82395414;
	// li r3,45
	ctx.r3.s64 = 45;
	// blr 
	return;
loc_82395414:
	// lhz r11,14(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 14);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r6,r10
	ctx.r3.u64 = ctx.r6.u64 & ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8239D748) {
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
	ctx.lr = 0x8239D750;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8239d7ac
	if (!ctx.cr6.eq) goto loc_8239D7AC;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8239d7a4
	if (ctx.cr6.eq) goto loc_8239D7A4;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_8239D784:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8239d7a4
	if (!ctx.cr0.eq) goto loc_8239D7A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8239d784
	if (!ctx.cr6.eq) goto loc_8239D784;
loc_8239D7A4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8239d82c
	if (ctx.cr6.eq) goto loc_8239D82C;
loc_8239D7AC:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r29,-32129
	r29.s64 = -2105606144;
	// addi r30,r11,20848
	r30.s64 = ctx.r11.s64 + 20848;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8239d7e4
	if (ctx.cr6.eq) goto loc_8239D7E4;
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,140
	ctx.r6.s64 = 140;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x8239D7DC;
	sub_82330D00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8239D7E4:
	// lwz r11,1012(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1012);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,144
	ctx.r6.s64 = 144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330a38
	ctx.lr = 0x8239D804;
	sub_82330A38(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8239d81c
	if (!ctx.cr6.eq) goto loc_8239D81C;
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
loc_8239D81C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823ef2f8
	ctx.lr = 0x8239D828;
	sub_823EF2F8(ctx, base);
	// stw r28,32(r31)
	REX_STORE_U32(r31.u32 + 32, r28.u32);
loc_8239D82C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_823A22B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,3716(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82334068
	ctx.lr = 0x823A22FC;
	sub_82334068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823a24c4
	if (!ctx.cr6.eq) goto loc_823A24C4;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// li r6,1
	ctx.r6.s64 = 1;
	// mulli r9,r10,61
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(61));
	// lwz r10,1200(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 1200);
	// lwz r8,1196(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 1196);
	// addi r5,r9,17
	ctx.r5.s64 = ctx.r9.s64 + 17;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r5,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lfs f0,9000(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 9000);
	ctx.f0.f64 = double(temp.f32);
	// stb r6,8(r7)
	REX_STORE_U8(ctx.r7.u32 + 8, ctx.r6.u8);
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stb r11,9(r6)
	REX_STORE_U8(ctx.r6.u32 + 9, ctx.r11.u8);
	// lwz r5,36(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stb r4,10(r5)
	REX_STORE_U8(ctx.r5.u32 + 10, ctx.r4.u8);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stb r11,11(r4)
	REX_STORE_U8(ctx.r4.u32 + 11, ctx.r11.u8);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// bge cr6,0x823a2380
	if (!ctx.cr6.lt) goto loc_823A2380;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_823A2380:
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stb r10,16(r8)
	REX_STORE_U8(ctx.r8.u32 + 16, ctx.r10.u8);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lbz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 12);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r4,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x823a24b0
	if (!ctx.cr6.gt) goto loc_823A24B0;
loc_823A23C0:
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r12,255
	ctx.r12.s64 = 255;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rldicr r12,r12,40,23
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFF0000000000;
	// ldx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r6,r8,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00;
	// rldicl r4,r8,48,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u64, 48) & 0xFFFFFFFFFF;
	// rldimi r6,r8,16,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r6.u64 & 0xFFFF);
	// rlwinm r5,r8,0,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF0000;
	// rldicr r3,r6,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// and r6,r8,r12
	ctx.r6.u64 = ctx.r8.u64 & ctx.r12.u64;
	// rldicr r4,r4,0,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u64, 0) & 0xFFFFFFFF00000000;
	// li r12,255
	ctx.r12.s64 = 255;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 | ctx.r6.u64;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// rldicr r3,r5,16,47
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicl r5,r4,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwinm r6,r8,0,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF000000;
	// and r4,r8,r12
	ctx.r4.u64 = ctx.r8.u64 & ctx.r12.u64;
	// or r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 | ctx.r6.u64;
	// or r8,r5,r4
	ctx.r8.u64 = ctx.r5.u64 | ctx.r4.u64;
	// rldicr r6,r3,8,55
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicl r5,r8,56,8
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 56) & 0xFFFFFFFFFFFFFF;
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// stdx r3,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u64);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r10,40
	ctx.r8.s64 = ctx.r10.s64 + 40;
	// lwz r6,40(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lbz r7,40(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r4,r6,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// rlwimi r5,r6,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// or r3,r4,r7
	ctx.r3.u64 = ctx.r4.u64 | ctx.r7.u64;
	// rlwinm r8,r5,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stw r7,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r7.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r5,46(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 46);
	// addi r8,r10,46
	ctx.r8.s64 = ctx.r10.s64 + 46;
	// lhz r6,46(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 46);
	// rotlwi r4,r6,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// sth r3,46(r10)
	REX_STORE_U16(ctx.r10.u32 + 46, ctx.r3.u16);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,48(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 48);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// lhz r6,48(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 48);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// sth r4,48(r10)
	REX_STORE_U16(ctx.r10.u32 + 48, ctx.r4.u16);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823a23c0
	if (ctx.cr6.lt) goto loc_823A23C0;
loc_823A24B0:
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8235f178
	ctx.lr = 0x823A24C4;
	sub_8235F178(ctx, base);
loc_823A24C4:
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

DEFINE_REX_FUNC(sub_823BADC8) {
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
	// lwz r4,1084(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1084);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bae24
	if (ctx.cr6.eq) goto loc_823BAE24;
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,32356
	ctx.r5.s64 = ctx.r10.s64 + 32356;
	// li r6,273
	ctx.r6.s64 = 273;
	// lwz r11,1012(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1012);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82330d00
	ctx.lr = 0x823BAE08;
	sub_82330D00(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,1084(r31)
	REX_STORE_U32(r31.u32 + 1084, ctx.r9.u32);
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
loc_823BAE24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1084(r31)
	REX_STORE_U32(r31.u32 + 1084, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823BE198) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,32544(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32544);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,32572(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32572);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823BE308) {
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
	ctx.lr = 0x823BE310;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,44
	r27.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,7
	r30.s64 = 7;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_823BE324:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d6e08
	ctx.lr = 0x823BE32C;
	sub_823D6E08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bge 0x823be324
	if (!ctx.cr0.lt) goto loc_823BE324;
	// addi r28,r31,268
	r28.s64 = r31.s64 + 268;
	// li r30,7
	r30.s64 = 7;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823BE344:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d6e08
	ctx.lr = 0x823BE34C;
	sub_823D6E08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// bge 0x823be344
	if (!ctx.cr0.lt) goto loc_823BE344;
	// addi r23,r31,492
	r23.s64 = r31.s64 + 492;
	// li r30,3
	r30.s64 = 3;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_823BE364:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d6e90
	ctx.lr = 0x823BE36C;
	sub_823D6E90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bge 0x823be364
	if (!ctx.cr0.lt) goto loc_823BE364;
	// addi r24,r31,556
	r24.s64 = r31.s64 + 556;
	// li r30,3
	r30.s64 = 3;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_823BE384:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d6e90
	ctx.lr = 0x823BE38C;
	sub_823D6E90(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bge 0x823be384
	if (!ctx.cr0.lt) goto loc_823BE384;
	// li r5,1116
	ctx.r5.s64 = 1116;
	// addi r4,r31,620
	ctx.r4.s64 = r31.s64 + 620;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3A8;
	sub_823D6E20(ctx, base);
	// li r5,1139
	ctx.r5.s64 = 1139;
	// addi r4,r31,5084
	ctx.r4.s64 = r31.s64 + 5084;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3B8;
	sub_823D6E20(ctx, base);
	// li r5,1188
	ctx.r5.s64 = 1188;
	// addi r4,r31,9640
	ctx.r4.s64 = r31.s64 + 9640;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3C8;
	sub_823D6E20(ctx, base);
	// li r5,1211
	ctx.r5.s64 = 1211;
	// addi r4,r31,14392
	ctx.r4.s64 = r31.s64 + 14392;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3D8;
	sub_823D6E20(ctx, base);
	// li r5,1277
	ctx.r5.s64 = 1277;
	// addi r4,r31,19236
	ctx.r4.s64 = r31.s64 + 19236;
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3E8;
	sub_823D6E20(ctx, base);
	// li r5,1300
	ctx.r5.s64 = 1300;
	// addi r4,r31,24344
	ctx.r4.s64 = r31.s64 + 24344;
	// addi r3,r31,324
	ctx.r3.s64 = r31.s64 + 324;
	// bl 0x823d6e20
	ctx.lr = 0x823BE3F8;
	sub_823D6E20(ctx, base);
	// li r5,1356
	ctx.r5.s64 = 1356;
	// addi r4,r31,29544
	ctx.r4.s64 = r31.s64 + 29544;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x823d6e20
	ctx.lr = 0x823BE408;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1379
	ctx.r5.s64 = 1379;
	// addi r4,r4,-30568
	ctx.r4.s64 = ctx.r4.s64 + -30568;
	// addi r3,r31,352
	ctx.r3.s64 = r31.s64 + 352;
	// bl 0x823d6e20
	ctx.lr = 0x823BE41C;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1422
	ctx.r5.s64 = 1422;
	// addi r4,r4,-25052
	ctx.r4.s64 = ctx.r4.s64 + -25052;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// bl 0x823d6e20
	ctx.lr = 0x823BE430;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1445
	ctx.r5.s64 = 1445;
	// addi r4,r4,-19364
	ctx.r4.s64 = ctx.r4.s64 + -19364;
	// addi r3,r31,380
	ctx.r3.s64 = r31.s64 + 380;
	// bl 0x823d6e20
	ctx.lr = 0x823BE444;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1491
	ctx.r5.s64 = 1491;
	// addi r4,r4,-13584
	ctx.r4.s64 = ctx.r4.s64 + -13584;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x823d6e20
	ctx.lr = 0x823BE458;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1514
	ctx.r5.s64 = 1514;
	// addi r4,r4,-7620
	ctx.r4.s64 = ctx.r4.s64 + -7620;
	// addi r3,r31,408
	ctx.r3.s64 = r31.s64 + 408;
	// bl 0x823d6e20
	ctx.lr = 0x823BE46C;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1557
	ctx.r5.s64 = 1557;
	// addi r4,r4,-1564
	ctx.r4.s64 = ctx.r4.s64 + -1564;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x823d6e20
	ctx.lr = 0x823BE480;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1580
	ctx.r5.s64 = 1580;
	// addi r4,r4,4664
	ctx.r4.s64 = ctx.r4.s64 + 4664;
	// addi r3,r31,436
	ctx.r3.s64 = r31.s64 + 436;
	// bl 0x823d6e20
	ctx.lr = 0x823BE494;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1617
	ctx.r5.s64 = 1617;
	// addi r4,r4,10984
	ctx.r4.s64 = ctx.r4.s64 + 10984;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x823d6e20
	ctx.lr = 0x823BE4A8;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,1640
	ctx.r5.s64 = 1640;
	// addi r4,r4,17452
	ctx.r4.s64 = ctx.r4.s64 + 17452;
	// addi r3,r31,464
	ctx.r3.s64 = r31.s64 + 464;
	// bl 0x823d6e20
	ctx.lr = 0x823BE4BC;
	sub_823D6E20(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,556
	ctx.r5.s64 = 556;
	// addi r4,r4,24012
	ctx.r4.s64 = ctx.r4.s64 + 24012;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE4D0;
	sub_823D6EA0(ctx, base);
	// li r5,579
	ctx.r5.s64 = 579;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// addi r4,r4,26236
	ctx.r4.s64 = ctx.r4.s64 + 26236;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE4E4;
	sub_823D6EA0(ctx, base);
	// addi r30,r31,508
	r30.s64 = r31.s64 + 508;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,441
	ctx.r5.s64 = 441;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r4,28552
	ctx.r4.s64 = ctx.r4.s64 + 28552;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE4FC;
	sub_823D6EA0(ctx, base);
	// addi r29,r31,572
	r29.s64 = r31.s64 + 572;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,464
	ctx.r5.s64 = 464;
	// addi r4,r4,30316
	ctx.r4.s64 = ctx.r4.s64 + 30316;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE514;
	sub_823D6EA0(ctx, base);
	// addi r28,r31,524
	r28.s64 = r31.s64 + 524;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// li r5,341
	ctx.r5.s64 = 341;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r4,32172
	ctx.r4.s64 = ctx.r4.s64 + 32172;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE52C;
	sub_823D6EA0(ctx, base);
	// addi r27,r31,588
	r27.s64 = r31.s64 + 588;
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// li r5,364
	ctx.r5.s64 = 364;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r4,-32000
	ctx.r4.s64 = ctx.r4.s64 + -32000;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE544;
	sub_823D6EA0(ctx, base);
	// addi r26,r31,540
	r26.s64 = r31.s64 + 540;
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// li r5,225
	ctx.r5.s64 = 225;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r4,-30544
	ctx.r4.s64 = ctx.r4.s64 + -30544;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE55C;
	sub_823D6EA0(ctx, base);
	// addi r25,r31,604
	r25.s64 = r31.s64 + 604;
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// li r5,248
	ctx.r5.s64 = 248;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r4,-29644
	ctx.r4.s64 = ctx.r4.s64 + -29644;
	// bl 0x823d6ea0
	ctx.lr = 0x823BE574;
	sub_823D6EA0(ctx, base);
	// lis r22,-32256
	r22.s64 = -2113929216;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r23,r22,32528
	r23.s64 = r22.s64 + 32528;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE588;
	sub_823D6E88(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE594;
	sub_823D6E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5A0;
	sub_823D6E88(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5AC;
	sub_823D6E88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5B8;
	sub_823D6E88(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5C4;
	sub_823D6E88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5D0;
	sub_823D6E88(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lfs f1,40(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823d6e88
	ctx.lr = 0x823BE5DC;
	sub_823D6E88(ctx, base);
	// lis r11,-32129
	ctx.r11.s64 = -2105606144;
	// lfs f13,32528(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r22.u32 + 32528);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,17216(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x823be088
	ctx.lr = 0x823BE5F8;
	sub_823BE088(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,32576(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x823be088
	ctx.lr = 0x823BE60C;
	sub_823BE088(ctx, base);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,14180(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 14180);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// bl 0x823be088
	ctx.lr = 0x823BE62C;
	sub_823BE088(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,3704(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 3704);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x823be088
	ctx.lr = 0x823BE640;
	sub_823BE088(ctx, base);
	// lfs f0,3716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 3716);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823be088
	ctx.lr = 0x823BE650;
	sub_823BE088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823be290
	ctx.lr = 0x823BE658;
	sub_823BE290(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cf0
	return;
}

DEFINE_REX_FUNC(sub_823D02F8) {
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
	ctx.lr = 0x823D0300;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r4)
	r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823d04d8
	if (ctx.cr6.eq) goto loc_823D04D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0354
	if (!ctx.cr6.gt) goto loc_823D0354;
	// addi r31,r29,28
	r31.s64 = r29.s64 + 28;
loc_823D032C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0340
	if (ctx.cr6.eq) goto loc_823D0340;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823D0340;
	sub_82393BF0(ctx, base);
loc_823D0340:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d032c
	if (ctx.cr6.lt) goto loc_823D032C;
loc_823D0354:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d03ac
	if (!ctx.cr6.gt) goto loc_823D03AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r29,540
	r31.s64 = r29.s64 + 540;
	// addi r28,r11,-2264
	r28.s64 = ctx.r11.s64 + -2264;
loc_823D0370:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0398
	if (ctx.cr6.eq) goto loc_823D0398;
	// lwz r11,-256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -256);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D0398;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D0398:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0370
	if (ctx.cr6.lt) goto loc_823D0370;
loc_823D03AC:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d0404
	if (!ctx.cr6.gt) goto loc_823D0404;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r29,1052
	r31.s64 = r29.s64 + 1052;
	// addi r28,r11,-2284
	r28.s64 = ctx.r11.s64 + -2284;
loc_823D03C8:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d03f0
	if (ctx.cr6.eq) goto loc_823D03F0;
	// lwz r11,-256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -256);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D03F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D03F0:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d03c8
	if (ctx.cr6.lt) goto loc_823D03C8;
loc_823D0404:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d045c
	if (!ctx.cr6.gt) goto loc_823D045C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r29,1564
	r31.s64 = r29.s64 + 1564;
	// addi r28,r11,-2276
	r28.s64 = ctx.r11.s64 + -2276;
loc_823D0420:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0448
	if (ctx.cr6.eq) goto loc_823D0448;
	// lwz r11,-256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + -256);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823D0448;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823D0448:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0420
	if (ctx.cr6.lt) goto loc_823D0420;
loc_823D045C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823d04b8
	if (!ctx.cr6.gt) goto loc_823D04B8;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r29,1820
	r30.s64 = r29.s64 + 1820;
loc_823D0474:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d0488
	if (ctx.cr6.eq) goto loc_823D0488;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e3590
	ctx.lr = 0x823D0488;
	sub_823E3590(ctx, base);
loc_823D0488:
	// lwz r11,2844(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d04a0
	if (ctx.cr6.eq) goto loc_823D04A0;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e35e0
	ctx.lr = 0x823D04A0;
	sub_823E35E0(ctx, base);
loc_823D04A0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823d0474
	if (ctx.cr6.lt) goto loc_823D0474;
loc_823D04B8:
	// lwz r4,2844(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 2844);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823d04cc
	if (ctx.cr6.eq) goto loc_823D04CC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823D04CC;
	sub_82393BF0(ctx, base);
loc_823D04CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82393bf0
	ctx.lr = 0x823D04D8;
	sub_82393BF0(ctx, base);
loc_823D04D8:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ef5f0
	ctx.lr = 0x823D04E8;
	sub_823EF5F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_823DC9F0) {
	REX_FUNC_PROLOGUE();
	// li r4,96
	ctx.r4.s64 = 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a2b40
	sub_826A2B40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823DCAA8) {
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
	// beq cr6,0x823dcacc
	if (ctx.cr6.eq) goto loc_823DCACC;
	// bl 0x8269d770
	ctx.lr = 0x823DCACC;
	sub_8269D770(ctx, base);
loc_823DCACC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823DDC30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x823DDC38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ddce8
	if (ctx.cr6.eq) goto loc_823DDCE8;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ddc9c
	if (ctx.cr6.eq) goto loc_823DDC9C;
	// subfic r30,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	r30.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823ddc70
	if (ctx.cr6.lt) goto loc_823DDC70;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_823DDC70:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DDC84;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ddc98
	if (!ctx.cr6.eq) goto loc_823DDC98;
loc_823DDC8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
loc_823DDC98:
	// subf r31,r30,r31
	r31.u64 = r31.u64 - r30.u64;
loc_823DDC9C:
	// rlwinm r5,r31,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823ddcc0
	if (ctx.cr6.eq) goto loc_823DDCC0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dd030
	ctx.lr = 0x823DDCB4;
	sub_823DD030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ddc8c
	if (ctx.cr6.eq) goto loc_823DDC8C;
	// clrlwi r31,r31,29
	r31.u64 = r31.u32 & 0x7;
loc_823DDCC0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823ddce8
	if (ctx.cr6.eq) goto loc_823DDCE8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dcc18
	ctx.lr = 0x823DDCDC;
	sub_823DCC18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x823ddcec
	if (ctx.cr6.eq) goto loc_823DDCEC;
loc_823DDCE8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823DDCEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823E2EB8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823E2EC8:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823e2ec8
	if (!ctx.cr6.eq) goto loc_823E2EC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E4360) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823e43ac
	if (!ctx.cr6.gt) goto loc_823E43AC;
	// bl 0x823e4188
	ctx.lr = 0x823E4384;
	sub_823E4188(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823e43ac
	if (ctx.cr6.lt) goto loc_823E43AC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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
loc_823E43AC:
	// li r3,-1
	ctx.r3.s64 = -1;
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

DEFINE_REX_FUNC(sub_823E67E0) {
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
	ctx.lr = 0x823E67E8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x823e6a00
	if (!ctx.cr6.gt) goto loc_823E6A00;
	// rlwinm r31,r6,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r5,268
	r30.s64 = ctx.r5.s64 + 268;
	// rlwinm r28,r8,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
loc_823E6800:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r31,r3
	ctx.r10.u64 = r31.u64 + ctx.r3.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x823e6980
	if (ctx.cr6.lt) goto loc_823E6980;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E6830:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f9,f11,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f12.f64)));
	// fmadds f6,f9,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f10.f64)));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsux f0,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f6,f11,f12,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f8.f64)));
	// fmsubs f5,f11,f0,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f7.f64)));
	// fsubs f4,f10,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f3,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfsux f0,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f11,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmadds f5,f10,f11,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f10.f64, ctx.f11.f64, ctx.f7.f64)));
	// fmsubs f4,f10,f0,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// stfs f3,16(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f2,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f10,28(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfsux f0,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// lfs f7,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f5,f10,f0
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmsubs f4,f9,f0,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, -ctx.f6.f64)));
	// fmadds f3,f9,f7,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f9.f64, ctx.f7.f64, ctx.f5.f64)));
	// fsubs f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x823e6830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E6830;
loc_823E6980:
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823e69f4
	if (!ctx.cr6.lt) goto loc_823E69F4;
	// subf r7,r5,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r5.u64;
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823E699C:
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// fmsubs f7,f9,f11,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f11.f64, -ctx.f12.f64)));
	// fmadds f6,f0,f9,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f10.f64)));
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfsu f3,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lfs f2,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f13,f2,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfsu f13,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823e699c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E699C;
loc_823E69F4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// bne 0x823e6800
	if (!ctx.cr0.eq) goto loc_823E6800;
loc_823E6A00:
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_823F0480) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f04ac
	if (!ctx.cr6.eq) goto loc_823F04AC;
	// li r31,0
	r31.s64 = 0;
	// b 0x823f04d8
	goto loc_823F04D8;
loc_823F04AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82793884
	ctx.lr = 0x823F04B4;
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823f04d8
	if (ctx.cr0.lt) goto loc_823F04D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_823F04D8:
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

DEFINE_REX_FUNC(sub_823F5810) {
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
	// bl 0x823f63d0
	ctx.lr = 0x823F5828;
	sub_823F63D0(ctx, base);
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 25);
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
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F7BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,1364(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1364);
	// lwz r10,2152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2152);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r11,1221
	ctx.r10.s64 = ctx.r11.s64 + 1221;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_823F7BC8:
	// li r9,100
	ctx.r9.s64 = 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// lwz r9,2152(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2152);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823f7bc8
	if (ctx.cr6.lt) goto loc_823F7BC8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F9A18) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F9A2C:
	// addi r10,r11,4730
	ctx.r10.s64 = ctx.r11.s64 + 4730;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// ble cr6,0x823f9a2c
	if (!ctx.cr6.gt) goto loc_823F9A2C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x823f9970
	ctx.lr = 0x823F9A54;
	sub_823F9970(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_823F9A5C:
	// addi r8,r11,4730
	ctx.r8.s64 = ctx.r11.s64 + 4730;
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x823f9a5c
	if (!ctx.cr0.eq) goto loc_823F9A5C;
	// clrlwi. r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x823f9af8
	if (ctx.cr0.eq) goto loc_823F9AF8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
loc_823F9A98:
	// lhz r8,9492(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 9492);
	// li r11,15
	ctx.r11.s64 = 15;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sth r8,9492(r9)
	REX_STORE_U16(ctx.r9.u32 + 9492, ctx.r8.u16);
loc_823F9AA8:
	// addi r8,r11,4730
	ctx.r8.s64 = ctx.r11.s64 + 4730;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne 0x823f9acc
	if (!ctx.cr0.eq) goto loc_823F9ACC;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f9aa8
	if (!ctx.cr0.eq) goto loc_823F9AA8;
	// b 0x823f9ae8
	goto loc_823F9AE8;
loc_823F9ACC:
	// addi r11,r11,4731
	ctx.r11.s64 = ctx.r11.s64 + 4731;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r8,r7,r9
	REX_STORE_U16(ctx.r7.u32 + ctx.r9.u32, ctx.r8.u16);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthx r8,r11,r9
	REX_STORE_U16(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u16);
loc_823F9AE8:
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne 0x823f9a98
	if (!ctx.cr0.eq) goto loc_823F9A98;
loc_823F9AF8:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r7,16
	ctx.r7.s64 = 16;
loc_823F9B00:
	// addi r11,r7,4730
	ctx.r11.s64 = ctx.r7.s64 + 4730;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// b 0x823f9b2c
	goto loc_823F9B2C;
loc_823F9B10:
	// lwz r8,2452(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 2452);
	// lwz r6,2456(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 2456);
	// lhz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// stbx r10,r8,r6
	REX_STORE_U8(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u8);
	// lwz r8,2452(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 2452);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r8,2452(r9)
	REX_STORE_U32(ctx.r9.u32 + 2452, ctx.r8.u32);
loc_823F9B2C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh. r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823f9b10
	if (!ctx.cr0.lt) goto loc_823F9B10;
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// bne 0x823f9b00
	if (!ctx.cr0.eq) goto loc_823F9B00;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82400810) {
	REX_FUNC_PROLOGUE();
	// b 0x82400740
	sub_82400740(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82400818) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x82400820;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240084c
	if (!ctx.cr6.gt) goto loc_8240084C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824008a0
	goto loc_824008A0;
loc_8240084C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cd20
	ctx.lr = 0x8240085C;
	sub_8269CD20(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stb r9,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r9.u8);
loc_8240086C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8240086c
	if (!ctx.cr6.eq) goto loc_8240086C;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,122
	ctx.r10.u64 = ctx.r10.u64 | 122;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subfc r11,r31,r11
	ctx.xer.ca = ctx.r11.u32 >= r31.u32;
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// addze r9,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	ctx.r9.s64 = temp.s64;
	// subf r11,r9,r31
	ctx.r11.u64 = r31.u64 - ctx.r9.u64;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_824008A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_824051E8) {
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
	ctx.lr = 0x824051F0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,11(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 11);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82405210
	if (ctx.cr6.eq) goto loc_82405210;
loc_82405204:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82405430
	goto loc_82405430;
loc_82405210:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,104(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 104);
	// lwz r10,104(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8240522c
	if (!ctx.cr6.gt) goto loc_8240522C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8240522C:
	// lwz r9,108(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 108);
	// lwz r8,108(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 108);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82405244
	if (ctx.cr6.lt) goto loc_82405244;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
loc_82405244:
	// lwz r9,112(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 112);
	// lwz r8,112(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 112);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8240525c
	if (ctx.cr6.lt) goto loc_8240525C;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
loc_8240525C:
	// rlwinm r30,r11,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823f02b8
	ctx.lr = 0x8240526C;
	sub_823F02B8(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x82405204
	if (ctx.cr0.eq) goto loc_82405204;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823f02b8
	ctx.lr = 0x82405288;
	sub_823F02B8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bne 0x824052a0
	if (!ctx.cr0.eq) goto loc_824052A0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823f0350
	ctx.lr = 0x8240529C;
	sub_823F0350(ctx, base);
	// b 0x82405204
	goto loc_82405204;
loc_824052A0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a2e60
	ctx.lr = 0x824052AC;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x826a2e60
	ctx.lr = 0x824052C4;
	sub_826A2E60(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824052f4
	if (ctx.cr6.eq) goto loc_824052F4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x824052f4
	if (ctx.cr6.eq) goto loc_824052F4;
	// stw r24,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r24.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r24,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r24.u32);
loc_824052F4:
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824053ac
	if (ctx.cr6.eq) goto loc_824053AC;
loc_82405300:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82405358
	if (ctx.cr6.eq) goto loc_82405358;
loc_8240530C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240532C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240534C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(r30.u32, r25.u32, ctx.xer);
	// blt cr6,0x8240530c
	if (ctx.cr6.lt) goto loc_8240530C;
loc_82405358:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x824053a0
	if (!ctx.cr6.lt) goto loc_824053A0;
loc_8240536C:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8240538C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8240536c
	if (ctx.cr6.lt) goto loc_8240536C;
loc_824053A0:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(r29.u32, r26.u32, ctx.xer);
	// blt cr6,0x82405300
	if (ctx.cr6.lt) goto loc_82405300;
loc_824053AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82405414
	if (!ctx.cr6.lt) goto loc_82405414;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
loc_824053C4:
	// mr r30,r24
	r30.u64 = r24.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82405404
	if (ctx.cr6.eq) goto loc_82405404;
loc_824053D0:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824053F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824053d0
	if (ctx.cr6.lt) goto loc_824053D0;
loc_82405404:
	// lwz r9,112(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x824053c4
	if (ctx.cr6.lt) goto loc_824053C4;
loc_82405414:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823f0350
	ctx.lr = 0x82405420;
	sub_823F0350(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8240542C;
	sub_823F0350(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82405430:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_82411398) {
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
	// bge cr6,0x824114b0
	if (!ctx.cr6.lt) goto loc_824114B0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,3704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20244(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20244);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,20236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20236);
	ctx.f12.f64 = double(temp.f32);
loc_82411404:
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r10,r10,30,2,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r9,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 3;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,22,10,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x3FFFFF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x82411404
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82411404;
loc_824114B0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824114cc
	if (ctx.cr6.eq) goto loc_824114CC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x824114CC;
	sub_825C73B8(ctx, base);
loc_824114CC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824114e8
	if (ctx.cr6.eq) goto loc_824114E8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82409820
	ctx.lr = 0x824114E8;
	sub_82409820(ctx, base);
loc_824114E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82416F28) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,23796
	ctx.r11.s64 = ctx.r11.s64 + 23796;
loc_82416F48:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82416f6c
	if (ctx.cr0.eq) goto loc_82416F6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82416f48
	if (ctx.cr6.eq) goto loc_82416F48;
loc_82416F6C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82416f7c
	if (!ctx.cr0.eq) goto loc_82416F7C;
	// lwz r3,660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 660);
	// b 0x82417010
	goto loc_82417010;
loc_82416F7C:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82415868
	ctx.lr = 0x82416F8C;
	sub_82415868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8241700c
	if (ctx.cr0.eq) goto loc_8241700C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82416fc0
	if (ctx.cr6.eq) goto loc_82416FC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1517
	ctx.r5.s64 = 1517;
	// addi r6,r11,23728
	ctx.r6.s64 = ctx.r11.s64 + 23728;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x82416FB8;
	sub_8241A4F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82417010
	goto loc_82417010;
loc_82416FC0:
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82416ff4
	if (ctx.cr6.eq) goto loc_82416FF4;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82416ff4
	if (!ctx.cr6.eq) goto loc_82416FF4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82416ff4
	if (ctx.cr6.lt) goto loc_82416FF4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82416ff4
	if (ctx.cr6.gt) goto loc_82416FF4;
	// lwz r3,24(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// b 0x82417010
	goto loc_82417010;
loc_82416FF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r11,23532
	ctx.r6.s64 = ctx.r11.s64 + 23532;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8241a4f0
	ctx.lr = 0x8241700C;
	sub_8241A4F0(ctx, base);
loc_8241700C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82417010:
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

DEFINE_REX_FUNC(sub_8241CB98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8241CBA0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,112
	r30.s64 = ctx.r3.s64 + 112;
	// li r29,7
	r29.s64 = 7;
loc_8241CBB0:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241cbd0
	if (ctx.cr6.eq) goto loc_8241CBD0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241CBC4;
	sub_8241C9A0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241CBD0;
	sub_823F0350(ctx, base);
loc_8241CBD0:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8241cbb0
	if (!ctx.cr0.eq) goto loc_8241CBB0;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
	// li r29,7
	r29.s64 = 7;
loc_8241CBE4:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241cc04
	if (ctx.cr6.eq) goto loc_8241CC04;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241CBF8;
	sub_8241C9A0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241CC04;
	sub_823F0350(ctx, base);
loc_8241CC04:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8241cbe4
	if (!ctx.cr0.eq) goto loc_8241CBE4;
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// li r29,7
	r29.s64 = 7;
loc_8241CC18:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241cc38
	if (ctx.cr6.eq) goto loc_8241CC38;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241CC2C;
	sub_8241C9A0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241CC38;
	sub_823F0350(ctx, base);
loc_8241CC38:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8241cc18
	if (!ctx.cr0.eq) goto loc_8241CC18;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// li r29,7
	r29.s64 = 7;
loc_8241CC4C:
	// lwz r28,0(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241cc6c
	if (ctx.cr6.eq) goto loc_8241CC6C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241CC60;
	sub_8241C9A0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241CC6C;
	sub_823F0350(ctx, base);
loc_8241CC6C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8241cc4c
	if (!ctx.cr0.eq) goto loc_8241CC4C;
	// li r30,7
	r30.s64 = 7;
loc_8241CC7C:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241cc9c
	if (ctx.cr6.eq) goto loc_8241CC9C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8241c9a0
	ctx.lr = 0x8241CC90;
	sub_8241C9A0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823f0350
	ctx.lr = 0x8241CC9C;
	sub_823F0350(ctx, base);
loc_8241CC9C:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8241cc7c
	if (!ctx.cr0.eq) goto loc_8241CC7C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82434350) {
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
	ctx.lr = 0x82434358;
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82434388
	if (!ctx.cr6.eq) goto loc_82434388;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82435fbc
	if (!ctx.cr6.eq) goto loc_82435FBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82435fc4
	goto loc_82435FC4;
loc_82434388:
	// lwz r11,4(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x82435fbc
	if (!ctx.cr6.eq) goto loc_82435FBC;
	// lwz r10,24(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 24);
	// li r25,0
	r25.s64 = 0;
	// lwz r9,20(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 20);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,32(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 32);
	// li r27,0
	r27.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// li r30,0
	r30.s64 = 0;
	// mullw r21,r9,r10
	r21.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824343e8
	if (ctx.cr6.eq) goto loc_824343E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x824343e8
	if (!ctx.cr6.eq) goto loc_824343E8;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_824343E8:
	// lwz r11,36(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82434410
	if (ctx.cr6.eq) goto loc_82434410;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82434410
	if (!ctx.cr6.eq) goto loc_82434410;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mullw r31,r10,r11
	r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82434410:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82434430
	if (ctx.cr6.eq) goto loc_82434430;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423bd0
	ctx.lr = 0x82434424;
	sub_82423BD0(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
loc_82434430:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82434450
	if (ctx.cr6.eq) goto loc_82434450;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423bd0
	ctx.lr = 0x82434444;
	sub_82423BD0(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r24.u32);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
loc_82434450:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 28);
	// li r20,1
	r20.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82434488
	if (ctx.cr6.lt) goto loc_82434488;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82434484
	if (!ctx.cr6.gt) goto loc_82434484;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x82434488
	if (!ctx.cr6.gt) goto loc_82434488;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// ble cr6,0x824344d0
	if (!ctx.cr6.gt) goto loc_824344D0;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x82434488
	if (ctx.cr6.gt) goto loc_82434488;
loc_82434484:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82434488:
	// lwz r11,40(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824344d8
	if (ctx.cr6.eq) goto loc_824344D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824344b8
	if (ctx.cr6.eq) goto loc_824344B8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82434350
	ctx.lr = 0x824344B0;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
loc_824344B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82434520
	if (ctx.cr6.eq) goto loc_82434520;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82434510
	goto loc_82434510;
loc_824344D0:
	// mr r29,r20
	r29.u64 = r20.u64;
	// b 0x82434488
	goto loc_82434488;
loc_824344D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x824344fc
	if (ctx.cr6.eq) goto loc_824344FC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82434350
	ctx.lr = 0x824344F4;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
loc_824344FC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82434520
	if (ctx.cr6.eq) goto loc_82434520;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_82434510:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82434350
	ctx.lr = 0x82434518;
	sub_82434350(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
loc_82434520:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 28);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82435f1c
	if (ctx.cr6.gt) goto loc_82435F1C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r22,-1
	r22.s64 = -1;
	// li r19,257
	r19.s64 = 257;
	// lfd f31,-3744(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// lis r12,-32254
	ctx.r12.s64 = -2113798144;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-23256
	ctx.r12.s64 = ctx.r12.s64 + -23256;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32189
	ctx.r12.s64 = -2109538304;
	// addi r12,r12,17764
	ctx.r12.s64 = ctx.r12.s64 + 17764;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82434564;
	case 1:
		goto loc_82434564;
	case 2:
		goto loc_824347A0;
	case 3:
		goto loc_824347EC;
	case 4:
		goto loc_82434828;
	case 5:
		goto loc_82434918;
	case 6:
		goto loc_82434964;
	case 7:
		goto loc_82435F1C;
	case 8:
		goto loc_824351B4;
	case 9:
		goto loc_82435204;
	case 10:
		goto loc_824352B0;
	case 11:
		goto loc_824349A4;
	case 12:
		goto loc_824349F8;
	case 13:
		goto loc_82435F1C;
	case 14:
		goto loc_82435F1C;
	case 15:
		goto loc_82434AA4;
	case 16:
		goto loc_82434AF8;
	case 17:
		goto loc_82434B40;
	case 18:
		goto loc_82434B98;
	case 19:
		goto loc_82434BE0;
	case 20:
		goto loc_82434D0C;
	case 21:
		goto loc_82435F1C;
	case 22:
		goto loc_82435F1C;
	case 23:
		goto loc_82435F1C;
	case 24:
		goto loc_82434E38;
	case 25:
		goto loc_82434FFC;
	case 26:
		goto loc_82434660;
	case 27:
		goto loc_8243474C;
	case 28:
		goto loc_824354F0;
	case 29:
		goto loc_82435524;
	case 30:
		goto loc_824355B0;
	case 31:
		goto loc_824357B4;
	case 32:
		goto loc_82435820;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82434564:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82434648
	if (ctx.cr6.eq) goto loc_82434648;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(r27.u32, 1, ctx.xer);
	// bne cr6,0x824345c4
	if (!ctx.cr6.eq) goto loc_824345C4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243459c
	if (ctx.cr6.eq) goto loc_8243459C;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434590:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434590;
loc_8243459C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// lwz r11,164(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 164);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82435868
	if (!ctx.cr6.gt) goto loc_82435868;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82435838
	if (!ctx.cr6.eq) goto loc_82435838;
	// li r31,16
	r31.s64 = 16;
	// b 0x82435838
	goto loc_82435838;
loc_824345C4:
	// cmplw cr6,r21,r27
	ctx.cr6.compare<uint32_t>(r21.u32, r27.u32, ctx.xer);
	// beq cr6,0x82434728
	if (ctx.cr6.eq) goto loc_82434728;
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x824345e0
	if (!ctx.cr6.eq) goto loc_824345E0;
	// cmplw cr6,r21,r27
	ctx.cr6.compare<uint32_t>(r21.u32, r27.u32, ctx.xer);
	// blt cr6,0x82434728
	if (ctx.cr6.lt) goto loc_82434728;
loc_824345E0:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82435f34
	if (ctx.cr6.gt) goto loc_82435F34;
	// lwz r10,24(r15)
	ctx.r10.u64 = REX_LOAD_U32(r15.u32 + 24);
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82435f34
	if (ctx.cr6.gt) goto loc_82435F34;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243459c
	if (ctx.cr6.eq) goto loc_8243459C;
loc_82434608:
	// lwz r9,24(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 24);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// mullw r10,r9,r31
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r10,r14
	ctx.r3.u64 = ctx.r10.u64 + r14.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82434634;
	sub_826A1E70(ctx, base);
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 20);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82434608
	if (ctx.cr6.lt) goto loc_82434608;
	// b 0x8243459c
	goto loc_8243459C;
loc_82434648:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// lwz r4,32(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 32);
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82435fd0
	ctx.lr = 0x8243465C;
	sub_82435FD0(ctx, base);
	// b 0x824357a8
	goto loc_824357A8;
loc_82434660:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243459c
	if (ctx.cr6.eq) goto loc_8243459C;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8243469c
	if (!ctx.cr6.lt) goto loc_8243469C;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x824346a0
	goto loc_824346A0;
loc_8243469C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_824346A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82434720
	if (ctx.cr6.eq) goto loc_82434720;
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82434720
	if (!ctx.cr6.eq) goto loc_82434720;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824346f4
	if (ctx.cr6.eq) goto loc_824346F4;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
loc_824346CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8243473c
	if (ctx.cr6.eq) goto loc_8243473C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// blt cr6,0x824346cc
	if (ctx.cr6.lt) goto loc_824346CC;
loc_824346F4:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r5,r20,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
loc_82434704:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434718;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
loc_82434720:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
loc_82434728:
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8243472C:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// rlwinm r5,r21,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x826a1e70
	ctx.lr = 0x82434738;
	sub_826A1E70(ctx, base);
	// b 0x8243459c
	goto loc_8243459C;
loc_8243473C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// addi r6,r11,-22144
	ctx.r6.s64 = ctx.r11.s64 + -22144;
	// b 0x82435f28
	goto loc_82435F28;
loc_8243474C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243459c
	if (ctx.cr6.eq) goto loc_8243459C;
	// lwz r9,8(r17)
	ctx.r9.u64 = REX_LOAD_U32(r17.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
loc_82434774:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x8243473c
	if (ctx.cr6.eq) goto loc_8243473C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// blt cr6,0x82434774
	if (ctx.cr6.lt) goto loc_82434774;
	// b 0x824346f4
	goto loc_824346F4;
loc_824347A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x824347B4;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824347d8
	if (ctx.cr6.eq) goto loc_824347D8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_824347CC:
	// lwz r10,32(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824347cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824347CC;
loc_824347D8:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r11,129
	ctx.r11.s64 = 129;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// rlwimi r5,r11,22,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82434704
	goto loc_82434704;
loc_824347EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434800;
	sub_82423B58(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824347d8
	if (ctx.cr6.eq) goto loc_824347D8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_82434818:
	// lwz r10,40(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 40);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434818;
	// b 0x824347d8
	goto loc_824347D8;
loc_82434828:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// rlwinm r4,r21,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434844;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// rlwinm r8,r21,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8243485C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x8243485c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243485C;
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434890
	if (ctx.cr6.eq) goto loc_82434890;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434890
	if (ctx.cr0.eq) goto loc_82434890;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434888:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434888;
loc_82434890:
	// lwz r30,148(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824348dc
	if (ctx.cr6.eq) goto loc_824348DC;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824348b8
	if (ctx.cr0.eq) goto loc_824348B8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824348B0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824348b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824348B0;
loc_824348B8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824348dc
	if (ctx.cr6.eq) goto loc_824348DC;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824348dc
	if (ctx.cr0.eq) goto loc_824348DC;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824348D4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824348d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824348D4;
loc_824348DC:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x824348F8;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r11,515
	ctx.r11.s64 = 515;
	// li r9,23
	ctx.r9.s64 = 23;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// b 0x824354d8
	goto loc_824354D8;
loc_82434918:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243494c
	if (ctx.cr6.eq) goto loc_8243494C;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x8243494c
	if (ctx.cr0.eq) goto loc_8243494C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434944:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434944;
loc_8243494C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwimi r5,r19,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
loc_82434954:
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82434958:
	// li r8,0
	ctx.r8.s64 = 0;
loc_8243495C:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x824354dc
	goto loc_824354DC;
loc_82434964:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434998
	if (ctx.cr6.eq) goto loc_82434998;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434998
	if (ctx.cr0.eq) goto loc_82434998;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434990:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434990;
loc_82434998:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwimi r5,r20,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82434954
	goto loc_82434954;
loc_824349A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824349e0
	if (ctx.cr6.eq) goto loc_824349E0;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824349e0
	if (ctx.cr0.eq) goto loc_824349E0;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824349D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824349d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824349D8;
loc_824349E0:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r11,129
	ctx.r11.s64 = 129;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwimi r5,r11,22,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x8243495c
	goto loc_8243495C;
loc_824349F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434A1C;
	sub_82423B58(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434a6c
	if (ctx.cr6.eq) goto loc_82434A6C;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434a48
	if (ctx.cr0.eq) goto loc_82434A48;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434A40:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434A40;
loc_82434A48:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434a6c
	if (ctx.cr6.eq) goto loc_82434A6C;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434a6c
	if (ctx.cr0.eq) goto loc_82434A6C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434A64:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434a64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434A64;
loc_82434A6C:
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434A90;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// b 0x824354d4
	goto loc_824354D4;
loc_82434AA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434ae0
	if (ctx.cr6.eq) goto loc_82434AE0;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434ae0
	if (ctx.cr0.eq) goto loc_82434AE0;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434AD8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434ad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434AD8;
loc_82434AE0:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82434AE8:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r9,23
	ctx.r9.s64 = 23;
	// rlwimi r5,r19,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824354dc
	goto loc_824354DC;
loc_82434AF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434b34
	if (ctx.cr6.eq) goto loc_82434B34;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434b34
	if (ctx.cr0.eq) goto loc_82434B34;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434B2C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434B2C;
loc_82434B34:
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x82434ae8
	goto loc_82434AE8;
loc_82434B40:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434b7c
	if (ctx.cr6.eq) goto loc_82434B7C;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434b7c
	if (ctx.cr0.eq) goto loc_82434B7C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434B74:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434b74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434B74;
loc_82434B7C:
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82434B84:
	// li r11,515
	ctx.r11.s64 = 515;
	// li r9,23
	ctx.r9.s64 = 23;
loc_82434B8C:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x824354dc
	goto loc_824354DC;
loc_82434B98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434bd4
	if (ctx.cr6.eq) goto loc_82434BD4;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434bd4
	if (ctx.cr0.eq) goto loc_82434BD4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434BCC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434BCC;
loc_82434BD4:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// b 0x82434b84
	goto loc_82434B84;
loc_82434BE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// rlwinm r31,r21,2,0,29
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434C08;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82434C20:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x82434c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434C20;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82434c4c
	if (ctx.cr6.eq) goto loc_82434C4C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82434C3C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r22,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82434c3c
	if (ctx.cr6.lt) goto loc_82434C3C;
loc_82434C4C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434c70
	if (ctx.cr6.eq) goto loc_82434C70;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434c70
	if (ctx.cr0.eq) goto loc_82434C70;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434C68:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434C68;
loc_82434C70:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434C98;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434CC4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82434CF0;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// oris r5,r30,8240
	ctx.r5.u64 = r30.u64 | 540016640;
	// b 0x824354dc
	goto loc_824354DC;
loc_82434D0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// rlwinm r31,r21,2,0,29
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434D34;
	sub_82423B58(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82434D4C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x82434d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434D4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82434d78
	if (ctx.cr6.eq) goto loc_82434D78;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82434D68:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r22,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r10.u32 = ea;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// blt cr6,0x82434d68
	if (ctx.cr6.lt) goto loc_82434D68;
loc_82434D78:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434d9c
	if (ctx.cr6.eq) goto loc_82434D9C;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434d9c
	if (ctx.cr0.eq) goto loc_82434D9C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434D94:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434d94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434D94;
loc_82434D9C:
	// lwz r29,144(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434DC4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434DF0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,156(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r28,152(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82434E1C;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_82434E28:
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// oris r5,r30,8224
	ctx.r5.u64 = r30.u64 | 538968064;
	// b 0x824354dc
	goto loc_824354DC;
loc_82434E38:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r26,128(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434ed8
	if (ctx.cr6.eq) goto loc_82434ED8;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(r17.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// subf r9,r31,r26
	ctx.r9.u64 = r26.u64 - r31.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82434E74:
	// lwzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82434ef4
	if (ctx.cr0.eq) goto loc_82434EF4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r7,r7,31
	ctx.r7.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82434ef4
	if (ctx.cr0.eq) goto loc_82434EF4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r21.u32, ctx.xer);
	// blt cr6,0x82434e74
	if (ctx.cr6.lt) goto loc_82434E74;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82434ed8
	if (ctx.cr6.eq) goto loc_82434ED8;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82434ed8
	if (ctx.cr0.eq) goto loc_82434ED8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82434ED0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82434ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434ED0;
loc_82434ED8:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r11,517
	ctx.r11.s64 = 517;
	// li r9,23
	ctx.r9.s64 = 23;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x824354dc
	goto loc_824354DC;
loc_82434EF4:
	// mulli r4,r21,3
	ctx.r4.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(3));
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82434F00;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// rlwinm r8,r21,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82434F18:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x82434f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434F18;
	// lwz r28,144(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi. r10,r21,2
	ctx.r10.u64 = r21.u32 & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,-4
	ctx.r9.s64 = r28.s64 + -4;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// beq 0x82434f48
	if (ctx.cr0.eq) goto loc_82434F48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82434F40:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82434f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434F40;
loc_82434F48:
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm. r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r9,r27,-4
	ctx.r9.s64 = r27.s64 + -4;
	// beq 0x82434f68
	if (ctx.cr0.eq) goto loc_82434F68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82434F60:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82434f60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434F60;
loc_82434F68:
	// lwz r29,152(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm. r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r9,r29,-4
	ctx.r9.s64 = r29.s64 + -4;
	// beq 0x82434f88
	if (ctx.cr0.eq) goto loc_82434F88;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82434F80:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82434f80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434F80;
loc_82434F88:
	// rlwinm. r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r14,-4
	ctx.r10.s64 = r14.s64 + -4;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// beq 0x82434fa4
	if (ctx.cr0.eq) goto loc_82434FA4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82434F9C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82434f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82434F9C;
loc_82434FA4:
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82434FC8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82434FEC;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// b 0x82434e28
	goto loc_82434E28;
loc_82434FFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// rlwinm r31,r21,2,0,29
	r31.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x82435024;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82435038:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// bdnz 0x82435038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435038;
	// lwz r26,144(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243506c
	if (ctx.cr6.eq) goto loc_8243506C;
	// addi r11,r26,-4
	ctx.r11.s64 = r26.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x8243506c
	if (ctx.cr0.eq) goto loc_8243506C;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435064:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435064;
loc_8243506C:
	// lwz r27,148(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435094
	if (ctx.cr6.eq) goto loc_82435094;
	// addi r11,r27,-4
	ctx.r11.s64 = r27.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435094
	if (ctx.cr0.eq) goto loc_82435094;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_8243508C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243508c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243508C;
loc_82435094:
	// lwz r29,152(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824350bc
	if (ctx.cr6.eq) goto loc_824350BC;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824350bc
	if (ctx.cr0.eq) goto loc_824350BC;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824350B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824350b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824350B4;
loc_824350BC:
	// lwz r28,156(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435108
	if (ctx.cr6.eq) goto loc_82435108;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824350e4
	if (ctx.cr0.eq) goto loc_824350E4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824350DC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824350dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824350DC;
loc_824350E4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435108
	if (ctx.cr6.eq) goto loc_82435108;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435108
	if (ctx.cr0.eq) goto loc_82435108;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435100:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435100;
loc_82435108:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82435124;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82435148;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = r30.u64 | 541065216;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435174;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = r30.u64 | 269484032;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243519C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// oris r5,r30,8224
	ctx.r5.u64 = r30.u64 | 538968064;
	// b 0x824354d8
	goto loc_824354D8;
loc_824351B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824351f0
	if (ctx.cr6.eq) goto loc_824351F0;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824351f0
	if (ctx.cr0.eq) goto loc_824351F0;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824351E8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824351e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824351E8;
loc_824351F0:
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r11,517
	ctx.r11.s64 = 517;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82434b8c
	goto loc_82434B8C;
loc_82435204:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82435228;
	sub_82423B58(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435278
	if (ctx.cr6.eq) goto loc_82435278;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435254
	if (ctx.cr0.eq) goto loc_82435254;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_8243524C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8243524c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243524C;
loc_82435254:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435278
	if (ctx.cr6.eq) goto loc_82435278;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435278
	if (ctx.cr0.eq) goto loc_82435278;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435270:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435270
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435270;
loc_82435278:
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// lwz r7,132(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243529C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// b 0x824354d4
	goto loc_824354D4;
loc_824352B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// rlwinm r4,r21,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x824352D4;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r21,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824352EC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x824352ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824352EC;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,8
	ctx.r8.s64 = 8;
loc_82435300:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435328
	if (ctx.cr6.eq) goto loc_82435328;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435328
	if (ctx.cr0.eq) goto loc_82435328;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435320:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435320;
loc_82435328:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82435300
	if (!ctx.cr0.eq) goto loc_82435300;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435358
	if (ctx.cr6.eq) goto loc_82435358;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435358
	if (ctx.cr0.eq) goto loc_82435358;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435350:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435350;
loc_82435358:
	// clrlwi r30,r21,12
	r30.u64 = r21.u32 & 0xFFFFF;
	// lwz r29,160(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r24,132(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r23,128(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// oris r25,r30,8272
	r25.u64 = r30.u64 | 542113792;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243538C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// oris r27,r30,4112
	r27.u64 = r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x824353BC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r26,168(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// oris r5,r30,8240
	ctx.r5.u64 = r30.u64 | 540016640;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x824353E8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,172(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435414;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r27,176(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824269e8
	ctx.lr = 0x82435440;
	sub_824269E8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,180(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = r30.u64 | 271581184;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x8243546C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r28,184(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435498;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,188(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = r30.u64 | 272629760;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x824354C4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_824354D4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_824354D8:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
loc_824354DC:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x824354EC;
	sub_82423F70(ctx, base);
	// b 0x824357a8
	goto loc_824357A8;
loc_824354F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82431890
	ctx.lr = 0x82435520;
	sub_82431890(ctx, base);
	// b 0x824357a8
	goto loc_824357A8;
loc_82435524:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// lwz r11,36(r15)
	ctx.r11.u64 = REX_LOAD_U32(r15.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x8243556c
	if (!ctx.cr6.eq) goto loc_8243556C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82435f34
	if (!ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8243472c
	goto loc_8243472C;
loc_8243556C:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82435f34
	if (!ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x8243459c
	if (ctx.cr6.eq) goto loc_8243459C;
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r10,r14,-4
	ctx.r10.s64 = r14.s64 + -4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435590:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bdnz 0x82435590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435590;
	// b 0x8243459c
	goto loc_8243459C;
loc_824355B0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82435f34
	if (ctx.cr6.eq) goto loc_82435F34;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// mulli r4,r21,3
	ctx.r4.s64 = static_cast<int64_t>(r21.u64 * static_cast<uint64_t>(3));
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x824355D4;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// rlwinm r24,r21,2,0,29
	r24.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_824355EC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// bdnz 0x824355ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824355EC;
	// lwz r25,144(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r26,0
	r26.s64 = 0;
	// lwz r23,132(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435688
	if (ctx.cr6.eq) goto loc_82435688;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r31,r25
	r31.u64 = r25.u64;
	// add r29,r24,r23
	r29.u64 = r24.u64 + r23.u64;
	// subf r28,r23,r11
	r28.u64 = ctx.r11.u64 - r23.u64;
	// subf r27,r25,r23
	r27.u64 = r23.u64 - r25.u64;
loc_82435620:
	// add r30,r27,r31
	r30.u64 = r27.u64 + r31.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwzx r4,r28,r30
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + r30.u32);
	// bl 0x82422288
	ctx.lr = 0x82435634;
	sub_82422288(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82435688
	if (ctx.cr0.lt) goto loc_82435688;
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bgt cr6,0x8243566c
	if (ctx.cr6.gt) goto loc_8243566C;
	// lfd f0,168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x8243566c
	if (ctx.cr6.lt) goto loc_8243566C;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, f31.f64);
	// bne cr6,0x82435688
	if (!ctx.cr6.eq) goto loc_82435688;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bne cr6,0x82435688
	if (!ctx.cr6.eq) goto loc_82435688;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// b 0x82435670
	goto loc_82435670;
loc_8243566C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82435670:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(r26.u32, r21.u32, ctx.xer);
	// blt cr6,0x82435620
	if (ctx.cr6.lt) goto loc_82435620;
loc_82435688:
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(r26.u32, r21.u32, ctx.xer);
	// bne cr6,0x824356c4
	if (!ctx.cr6.eq) goto loc_824356C4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824356b4
	if (ctx.cr6.eq) goto loc_824356B4;
	// addi r11,r14,-4
	ctx.r11.s64 = r14.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824356b4
	if (ctx.cr0.eq) goto loc_824356B4;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824356AC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824356ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824356AC;
loc_824356B4:
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// rlwimi r5,r20,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x82434958
	goto loc_82434958;
loc_824356C4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x824356e8
	if (ctx.cr6.eq) goto loc_824356E8;
	// addi r11,r25,-4
	ctx.r11.s64 = r25.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x824356e8
	if (ctx.cr0.eq) goto loc_824356E8;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_824356E0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824356e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824356E0;
loc_824356E8:
	// lwz r29,148(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435710
	if (ctx.cr6.eq) goto loc_82435710;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435710
	if (ctx.cr0.eq) goto loc_82435710;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435708:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435708
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435708;
loc_82435710:
	// lwz r30,152(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435738
	if (ctx.cr6.eq) goto loc_82435738;
	// addi r11,r30,-4
	ctx.r11.s64 = r30.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r21,0
	ctx.cr0.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq 0x82435738
	if (ctx.cr0.eq) goto loc_82435738;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
loc_82435730:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435730;
loc_82435738:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82435754;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r9,23
	ctx.r9.s64 = 23;
	// rlwimi r5,r19,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435780;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// add r6,r24,r23
	ctx.r6.u64 = r24.u64 + r23.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x824269e8
	ctx.lr = 0x824357A8;
	sub_824269E8(ctx, base);
loc_824357A8:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8243459c
	if (!ctx.cr0.lt) goto loc_8243459C;
	// b 0x82435f3c
	goto loc_82435F3C;
loc_824357B4:
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,32(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423508
	ctx.lr = 0x824357C4;
	sub_82423508(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bne 0x824357ec
	if (!ctx.cr0.eq) goto loc_824357EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r7,56(r15)
	ctx.r7.u64 = REX_LOAD_U32(r15.u32 + 56);
	// li r5,3510
	ctx.r5.s64 = 3510;
	// addi r6,r11,-22184
	ctx.r6.s64 = ctx.r11.s64 + -22184;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82423e58
	ctx.lr = 0x824357E8;
	sub_82423E58(ctx, base);
	// b 0x82435f34
	goto loc_82435F34;
loc_824357EC:
	// lwz r11,56(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// stw r11,56(r17)
	REX_STORE_U32(r17.u32 + 56, ctx.r11.u32);
	// lwz r6,36(r15)
	ctx.r6.u64 = REX_LOAD_U32(r15.u32 + 36);
	// bl 0x82433470
	ctx.lr = 0x82435810;
	sub_82433470(ctx, base);
	// lwz r11,56(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r17)
	REX_STORE_U32(r17.u32 + 56, ctx.r11.u32);
	// b 0x824357a8
	goto loc_824357A8;
loc_82435820:
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8242af20
	ctx.lr = 0x82435830;
	sub_8242AF20(ctx, base);
	// b 0x824357a8
	goto loc_824357A8;
loc_82435834:
	// rlwinm r31,r31,1,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_82435838:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(r31.u32, r21.u32, ctx.xer);
	// blt cr6,0x82435834
	if (ctx.cr6.lt) goto loc_82435834;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823f02b8
	ctx.lr = 0x8243584C;
	sub_823F02B8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,160(r17)
	ctx.r3.u64 = REX_LOAD_U32(r17.u32 + 160);
	// bl 0x823f0350
	ctx.lr = 0x82435860;
	sub_823F0350(ctx, base);
	// stw r30,160(r17)
	REX_STORE_U32(r17.u32 + 160, r30.u32);
	// stw r31,164(r17)
	REX_STORE_U32(r17.u32 + 164, r31.u32);
loc_82435868:
	// lwz r25,160(r17)
	r25.u64 = REX_LOAD_U32(r17.u32 + 160);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,16(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 16);
	// add r16,r11,r25
	r16.u64 = ctx.r11.u64 + r25.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bl 0x82424b08
	ctx.lr = 0x82435884;
	sub_82424B08(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// subf r6,r16,r14
	ctx.r6.u64 = r14.u64 - r16.u64;
	// subf r5,r25,r16
	ctx.r5.u64 = r16.u64 - r25.u64;
loc_824358A4:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// add r7,r5,r9
	ctx.r7.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwzx r10,r7,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x824358cc
	if (!ctx.cr6.lt) goto loc_824358CC;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x824358d0
	goto loc_824358D0;
loc_824358CC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_824358D0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82435a1c
	if (ctx.cr6.eq) goto loc_82435A1C;
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82435938
	if (ctx.cr6.eq) goto loc_82435938;
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi. r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8243590c
	if (ctx.cr0.eq) goto loc_8243590C;
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8243590c
	if (!ctx.cr0.eq) goto loc_8243590C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r20,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r20.u32);
	// b 0x82435940
	goto loc_82435940;
loc_8243590C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82435938
	if (ctx.cr6.eq) goto loc_82435938;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435938
	if (ctx.cr0.eq) goto loc_82435938;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82435938
	if (!ctx.cr0.eq) goto loc_82435938;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// b 0x8243593c
	goto loc_8243593C;
loc_82435938:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8243593C:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82435940:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r4,r21
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r21.u32, ctx.xer);
	// blt cr6,0x824358a4
	if (ctx.cr6.lt) goto loc_824358A4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82435ab0
	if (ctx.cr6.eq) goto loc_82435AB0;
	// rlwinm r31,r27,2,0,29
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82423b58
	ctx.lr = 0x82435968;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435acc
	if (ctx.cr0.eq) goto loc_82435ACC;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8243597C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// bdnz 0x8243597c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243597C;
	// lwz r28,148(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824359b0
	if (ctx.cr6.eq) goto loc_824359B0;
	// addi r11,r28,-4
	ctx.r11.s64 = r28.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x824359b0
	if (ctx.cr0.eq) goto loc_824359B0;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824359A8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824359a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824359A8;
loc_824359B0:
	// lwz r29,152(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824359d8
	if (ctx.cr6.eq) goto loc_824359D8;
	// addi r11,r29,-4
	ctx.r11.s64 = r29.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq 0x824359d8
	if (ctx.cr0.eq) goto loc_824359D8;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_824359D0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x824359d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824359D0;
loc_824359D8:
	// lwz r30,156(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// subf r26,r14,r25
	r26.u64 = r25.u64 - r14.u64;
	// subf r8,r30,r7
	ctx.r8.u64 = ctx.r7.u64 - r30.u64;
loc_824359F4:
	// lwzx r9,r26,r11
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82435a34
	if (!ctx.cr6.eq) goto loc_82435A34;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,28(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82435a28
	if (ctx.cr6.eq) goto loc_82435A28;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82435a2c
	goto loc_82435A2C;
loc_82435A1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-23640
	ctx.r6.s64 = ctx.r11.s64 + -23640;
	// b 0x82435f24
	goto loc_82435F24;
loc_82435A28:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_82435A2C:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82435A34:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824359f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824359F4;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82427618
	ctx.lr = 0x82435A54;
	sub_82427618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r9,23
	ctx.r9.s64 = 23;
	// rlwimi r5,r19,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435A80;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
loc_82435A94:
	// lwzx r9,r11,r26
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r26.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82435aa8
	if (!ctx.cr6.eq) goto loc_82435AA8;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82435AA8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82435a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435A94;
loc_82435AB0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82435e88
	if (ctx.cr6.eq) goto loc_82435E88;
	// mulli r4,r24,11
	ctx.r4.s64 = static_cast<int64_t>(r24.u64 * static_cast<uint64_t>(11));
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423b58
	ctx.lr = 0x82435AC4;
	sub_82423B58(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82435af0
	if (!ctx.cr0.eq) goto loc_82435AF0;
loc_82435ACC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,24176
	ctx.r6.s64 = ctx.r11.s64 + 24176;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423e58
	ctx.lr = 0x82435AE4;
	sub_82423E58(ctx, base);
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82435f3c
	goto loc_82435F3C;
loc_82435AF0:
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r24,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82435B00:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x82435b00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435B00;
	// lwz r20,200(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// lwz r27,160(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// subf r18,r14,r25
	r18.u64 = r25.u64 - r14.u64;
	// subf r19,r20,r27
	r19.u64 = r27.u64 - r20.u64;
loc_82435B28:
	// lwzx r9,r11,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r18.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82435b5c
	if (!ctx.cr6.eq) goto loc_82435B5C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r9,r19,r10
	REX_STORE_U32(r19.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,28(r15)
	ctx.r9.u64 = REX_LOAD_U32(r15.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82435b50
	if (ctx.cr6.eq) goto loc_82435B50;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82435b54
	goto loc_82435B54;
loc_82435B50:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_82435B54:
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82435B5C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82435b28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435B28;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// li r8,9
	ctx.r8.s64 = 9;
loc_82435B6C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82435b94
	if (ctx.cr6.eq) goto loc_82435B94;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq 0x82435b94
	if (ctx.cr0.eq) goto loc_82435B94;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
loc_82435B8C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82435b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435B8C;
loc_82435B94:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82435b6c
	if (!ctx.cr0.eq) goto loc_82435B6C;
	// lwz r28,164(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// clrlwi r30,r24,12
	r30.u64 = r24.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// oris r5,r30,4128
	ctx.r5.u64 = r30.u64 | 270532608;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435BC8;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r25,168(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = r30.u64 | 272629760;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435BF4;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,172(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// oris r26,r30,4112
	r26.u64 = r30.u64 | 269484032;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435C24;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r22,176(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// oris r23,r30,8256
	r23.u64 = r30.u64 | 541065216;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435C54;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r28,180(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435C80;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r24,184(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// oris r29,r30,8224
	r29.u64 = r30.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435CB0;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r27,188(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435CDC;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r28,192(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435D08;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// lwz r29,196(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = r30.u64 | 542113792;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435D34;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423f70
	ctx.lr = 0x82435D5C;
	sub_82423F70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82435f3c
	if (ctx.cr0.lt) goto loc_82435F3C;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r27,r21
	r27.u64 = r21.u64;
loc_82435D70:
	// lwzx r11,r18,r28
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + r28.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82435e7c
	if (!ctx.cr6.eq) goto loc_82435E7C;
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lwzx r10,r19,r29
	ctx.r10.u64 = REX_LOAD_U32(r19.u32 + r29.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r31,r10,r11
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r30,r9,r11
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82435db8
	if (ctx.cr0.eq) goto loc_82435DB8;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// stfd f0,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.f0.u64);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_82435DB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435e70
	if (ctx.cr0.eq) goto loc_82435E70;
	// lfd f1,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 32);
	// bl 0x826a18c8
	ctx.lr = 0x82435DCC;
	sub_826A18C8(ctx, base);
	// lfd f0,32(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82435e00
	if (ctx.cr0.eq) goto loc_82435E00;
	// lfd f13,184(r17)
	ctx.f13.u64 = REX_LOAD_U64(r17.u32 + 184);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82435df4
	if (ctx.cr6.lt) goto loc_82435DF4;
	// fadd f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 + ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82435DEC;
	sub_826A2F00(ctx, base);
	// stfd f1,32(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 32, ctx.f1.u64);
	// b 0x82435e04
	goto loc_82435E04;
loc_82435DF4:
	// fsub f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64 - ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82435DFC;
	sub_826A2F00(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82435E00:
	// stfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 32, ctx.f0.u64);
loc_82435E04:
	// lfd f1,40(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(r31.u32 + 40);
	// bl 0x826a18c8
	ctx.lr = 0x82435E0C;
	sub_826A18C8(ctx, base);
	// lfd f0,40(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 40);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82435e40
	if (ctx.cr0.eq) goto loc_82435E40;
	// lfd f13,184(r17)
	ctx.f13.u64 = REX_LOAD_U64(r17.u32 + 184);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82435e34
	if (ctx.cr6.lt) goto loc_82435E34;
	// fadd f1,f13,f0
	ctx.f1.f64 = ctx.f13.f64 + ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82435E2C;
	sub_826A2F00(ctx, base);
	// stfd f1,40(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 40, ctx.f1.u64);
	// b 0x82435e44
	goto loc_82435E44;
loc_82435E34:
	// fsub f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64 - ctx.f0.f64;
	// bl 0x826a2f00
	ctx.lr = 0x82435E3C;
	sub_826A2F00(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82435E40:
	// stfd f0,40(r30)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r30.u32 + 40, ctx.f0.u64);
loc_82435E44:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfd f0,32(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r30.u32 + 32);
	// lfd f13,40(r30)
	ctx.f13.u64 = REX_LOAD_U64(r30.u32 + 40);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82435e68
	if (!ctx.cr6.eq) goto loc_82435E68;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// b 0x82435e6c
	goto loc_82435E6C;
loc_82435E68:
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_82435E6C:
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_82435E70:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_82435E7C:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x82435d70
	if (!ctx.cr0.eq) goto loc_82435D70;
loc_82435E88:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// beq cr6,0x82435f14
	if (ctx.cr6.eq) goto loc_82435F14;
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// subf r7,r16,r14
	ctx.r7.u64 = r14.u64 - r16.u64;
loc_82435E9C:
	// lwz r11,8(r17)
	ctx.r11.u64 = REX_LOAD_U32(r17.u32 + 8);
	// lwzx r10,r7,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,0,7,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// or r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 | ctx.r11.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// bne 0x82435ed8
	if (!ctx.cr0.eq) goto loc_82435ED8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82435ED8:
	// lwz r6,92(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82435ef0
	if (!ctx.cr6.eq) goto loc_82435EF0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82435efc
	if (ctx.cr6.lt) goto loc_82435EFC;
	// b 0x82435ef8
	goto loc_82435EF8;
loc_82435EF0:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82435efc
	if (ctx.cr6.gt) goto loc_82435EFC;
loc_82435EF8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82435EFC:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r10,0,7,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bdnz 0x82435e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82435E9C;
loc_82435F14:
	// li r31,0
	r31.s64 = 0;
	// b 0x82435f3c
	goto loc_82435F3C;
loc_82435F1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r6,r11,-22224
	ctx.r6.s64 = ctx.r11.s64 + -22224;
loc_82435F24:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82435F28:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82423e58
	ctx.lr = 0x82435F34;
	sub_82423E58(ctx, base);
loc_82435F34:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82435F3C:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435f78
	if (ctx.cr6.eq) goto loc_82435F78;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r10,144(r17)
	REX_STORE_U32(r17.u32 + 144, ctx.r10.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82435f68
	if (!ctx.cr6.gt) goto loc_82435F68;
	// stw r11,148(r17)
	REX_STORE_U32(r17.u32 + 148, ctx.r11.u32);
	// b 0x82435f78
	goto loc_82435F78;
loc_82435F68:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,148(r17)
	REX_STORE_U32(r17.u32 + 148, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x82435F78;
	sub_823F0350(ctx, base);
loc_82435F78:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435fb4
	if (ctx.cr6.eq) goto loc_82435FB4;
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r10,144(r17)
	REX_STORE_U32(r17.u32 + 144, ctx.r10.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82435fa4
	if (!ctx.cr6.gt) goto loc_82435FA4;
	// stw r11,148(r17)
	REX_STORE_U32(r17.u32 + 148, ctx.r11.u32);
	// b 0x82435fb4
	goto loc_82435FB4;
loc_82435FA4:
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r11,148(r17)
	REX_STORE_U32(r17.u32 + 148, ctx.r11.u32);
	// bl 0x823f0350
	ctx.lr = 0x82435FB4;
	sub_823F0350(ctx, base);
loc_82435FB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82435fc4
	goto loc_82435FC4;
loc_82435FBC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82435FC4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_824F4608) {
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
	ctx.lr = 0x824F4610;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r26,16(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f4648
	if (!ctx.cr0.eq) goto loc_824F4648;
	// bl 0x826b40a0
	ctx.lr = 0x824F4648;
	sub_826B40A0(ctx, base);
loc_824F4648:
	// lwz r11,1580(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1580);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x824f4658
	if (!ctx.cr6.eq) goto loc_824F4658;
	// bl 0x826b40a0
	ctx.lr = 0x824F4658;
	sub_826B40A0(ctx, base);
loc_824F4658:
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// lwz r30,1580(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 1580);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bgt cr6,0x824f4f64
	if (ctx.cr6.gt) goto loc_824F4F64;
	// beq cr6,0x824f4ee4
	if (ctx.cr6.eq) goto loc_824F4EE4;
	// addi r10,r10,-25
	ctx.r10.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// bgt cr6,0x824f4f64
	if (ctx.cr6.gt) goto loc_824F4F64;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// rlwinm r0,r10,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-22864
	ctx.r12.s64 = ctx.r12.s64 + -22864;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32177
	ctx.r12.s64 = -2108751872;
	// addi r12,r12,18088
	ctx.r12.s64 = ctx.r12.s64 + 18088;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_824F49E8;
	case 1:
		goto loc_824F4ACC;
	case 2:
		goto loc_824F490C;
	case 3:
		goto loc_824F4A10;
	case 4:
		goto loc_824F4A4C;
	case 5:
		goto loc_824F49AC;
	case 6:
		goto loc_824F4F64;
	case 7:
		goto loc_824F4F64;
	case 8:
		goto loc_824F4F64;
	case 9:
		goto loc_824F4F64;
	case 10:
		goto loc_824F4F64;
	case 11:
		goto loc_824F4F64;
	case 12:
		goto loc_824F4F64;
	case 13:
		goto loc_824F4A58;
	case 14:
		goto loc_824F4A4C;
	case 15:
		goto loc_824F46A8;
	case 16:
		goto loc_824F4C7C;
	case 17:
		goto loc_824F483C;
	case 18:
		goto loc_824F48E0;
	case 19:
		goto loc_824F4C74;
	case 20:
		goto loc_824F4DB0;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_824F46A8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,24,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bne cr6,0x824f476c
	if (!ctx.cr6.eq) goto loc_824F476C;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x824f46e4
	if (!ctx.cr6.eq) goto loc_824F46E4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
	// b 0x824f46e8
	goto loc_824F46E8;
loc_824F46E4:
	// li r11,52
	ctx.r11.s64 = 52;
loc_824F46E8:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824f4110
	ctx.lr = 0x824F471C;
	sub_824F4110(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r25.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F476C:
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x824f4778
	if (ctx.cr6.eq) goto loc_824F4778;
	// bl 0x826b40a0
	ctx.lr = 0x824F4778;
	sub_826B40A0(ctx, base);
loc_824F4778:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x824f4790
	if (ctx.cr6.eq) goto loc_824F4790;
	// bl 0x826b40a0
	ctx.lr = 0x824F4790;
	sub_826B40A0(ctx, base);
loc_824F4790:
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x824f4110
	ctx.lr = 0x824F47CC;
	sub_824F4110(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r25.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x824f48ac
	if (!ctx.cr6.eq) goto loc_824F48AC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,39
	ctx.r8.s64 = 39;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
loc_824F4834:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F483C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824f48d0
	if (ctx.cr6.eq) goto loc_824F48D0;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,53
	ctx.r8.s64 = 53;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x824f4110
	ctx.lr = 0x824F48A8;
	sub_824F4110(ctx, base);
loc_824F48A8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_824F48AC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_824F48B0:
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x826a1cec
	return;
loc_824F48D0:
	// li r10,39
	ctx.r10.s64 = 39;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// b 0x824f4834
	goto loc_824F4834;
loc_824F48E0:
	// li r11,41
	ctx.r11.s64 = 41;
	// li r27,1
	r27.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824f48b0
	if (ctx.cr6.eq) goto loc_824F48B0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F490C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,3
	r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x824f492c
	if (ctx.cr6.eq) goto loc_824F492C;
	// bl 0x826b40a0
	ctx.lr = 0x824F492C;
	sub_826B40A0(ctx, base);
loc_824F492C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824f493c
	if (ctx.cr0.eq) goto loc_824F493C;
	// bl 0x826b40a0
	ctx.lr = 0x824F493C;
	sub_826B40A0(ctx, base);
loc_824F493C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x824f4958
	if (ctx.cr6.eq) goto loc_824F4958;
	// bl 0x826b40a0
	ctx.lr = 0x824F4958;
	sub_826B40A0(ctx, base);
loc_824F4958:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824f496c
	if (ctx.cr6.lt) goto loc_824F496C;
	// bl 0x826b40a0
	ctx.lr = 0x824F496C;
	sub_826B40A0(ctx, base);
loc_824F496C:
	// li r11,62
	ctx.r11.s64 = 62;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x824f4110
	ctx.lr = 0x824F49A8;
	sub_824F4110(ctx, base);
	// b 0x824f48a8
	goto loc_824F48A8;
loc_824F49AC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824f49cc
	if (ctx.cr6.eq) goto loc_824F49CC;
	// bl 0x826b40a0
	ctx.lr = 0x824F49CC;
	sub_826B40A0(ctx, base);
loc_824F49CC:
	// li r10,50
	ctx.r10.s64 = 50;
loc_824F49D0:
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// stwu r10,4(r31)
	ea = 4 + r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r31.u32 = ea;
	// b 0x824f4834
	goto loc_824F4834;
loc_824F49E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824f4a08
	if (ctx.cr6.eq) goto loc_824F4A08;
	// bl 0x826b40a0
	ctx.lr = 0x824F4A08;
	sub_826B40A0(ctx, base);
loc_824F4A08:
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x824f49d0
	goto loc_824F49D0;
loc_824F4A10:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// li r27,1
	r27.s64 = 1;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x824f4a38
	if (!ctx.cr0.eq) goto loc_824F4A38;
	// li r11,43
	ctx.r11.s64 = 43;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// b 0x824f4a40
	goto loc_824F4A40;
loc_824F4A38:
	// li r11,83
	ctx.r11.s64 = 83;
loc_824F4A3C:
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_824F4A40:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F4A4C:
	// li r11,42
	ctx.r11.s64 = 42;
loc_824F4A50:
	// li r27,1
	r27.s64 = 1;
	// b 0x824f4a3c
	goto loc_824F4A3C;
loc_824F4A58:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x824f4a78
	if (ctx.cr6.eq) goto loc_824F4A78;
	// bl 0x826b40a0
	ctx.lr = 0x824F4A78;
	sub_826B40A0(ctx, base);
loc_824F4A78:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824f4a8c
	if (ctx.cr6.lt) goto loc_824F4A8C;
	// bl 0x826b40a0
	ctx.lr = 0x824F4A8C;
	sub_826B40A0(ctx, base);
loc_824F4A8C:
	// li r11,62
	ctx.r11.s64 = 62;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,62
	ctx.r8.s64 = 62;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824f4110
	ctx.lr = 0x824F4AC8;
	sub_824F4110(ctx, base);
	// b 0x824f48a8
	goto loc_824F48A8;
loc_824F4ACC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r27,3
	r27.s64 = 3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// bne cr6,0x824f4b7c
	if (!ctx.cr6.eq) goto loc_824F4B7C;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824f4b04
	if (ctx.cr6.eq) goto loc_824F4B04;
	// bl 0x826b40a0
	ctx.lr = 0x824F4B04;
	sub_826B40A0(ctx, base);
loc_824F4B04:
	// li r11,52
	ctx.r11.s64 = 52;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x824f4110
	ctx.lr = 0x824F4B40;
	sub_824F4110(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r7,41
	ctx.r7.s64 = 41;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// b 0x824f4f5c
	goto loc_824F4F5C;
loc_824F4B7C:
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x824f4b88
	if (ctx.cr6.eq) goto loc_824F4B88;
	// bl 0x826b40a0
	ctx.lr = 0x824F4B88;
	sub_826B40A0(ctx, base);
loc_824F4B88:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x824f4ba4
	if (ctx.cr6.eq) goto loc_824F4BA4;
	// bl 0x826b40a0
	ctx.lr = 0x824F4BA4;
	sub_826B40A0(ctx, base);
loc_824F4BA4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x824f4bb8
	if (ctx.cr6.lt) goto loc_824F4BB8;
	// bl 0x826b40a0
	ctx.lr = 0x824F4BB8;
	sub_826B40A0(ctx, base);
loc_824F4BB8:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// rlwinm r11,r11,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF000000;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x824f4c38
	if (!ctx.cr6.eq) goto loc_824F4C38;
	// li r11,53
	ctx.r11.s64 = 53;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x824f4110
	ctx.lr = 0x824F4C08;
	sub_824F4110(ctx, base);
	// li r11,39
	ctx.r11.s64 = 39;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r8,41
	ctx.r8.s64 = 41;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// b 0x824f4f5c
	goto loc_824F4F5C;
loc_824F4C38:
	// li r11,9
	ctx.r11.s64 = 9;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r8,9
	ctx.r8.s64 = 9;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x824f4110
	ctx.lr = 0x824F4C58;
	sub_824F4110(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// clrlwi r9,r11,21
	ctx.r9.u64 = ctx.r11.u32 & 0x7FF;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F4C74:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x824f4a50
	goto loc_824F4A50;
loc_824F4C7C:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x7;
	// li r27,3
	r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824f4cd8
	if (ctx.cr6.eq) goto loc_824F4CD8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824f4cd0
	if (ctx.cr6.eq) goto loc_824F4CD0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824f4cc8
	if (ctx.cr6.eq) goto loc_824F4CC8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// beq cr6,0x824f4cc0
	if (ctx.cr6.eq) goto loc_824F4CC0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x824f4cb8
	if (ctx.cr6.eq) goto loc_824F4CB8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x824f4ce0
	goto loc_824F4CE0;
loc_824F4CB8:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x824f4ce0
	goto loc_824F4CE0;
loc_824F4CC0:
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x824f4ce4
	goto loc_824F4CE4;
loc_824F4CC8:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x824f4cdc
	goto loc_824F4CDC;
loc_824F4CD0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x824f4cdc
	goto loc_824F4CDC;
loc_824F4CD8:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_824F4CDC:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
loc_824F4CE0:
	// ori r11,r11,52
	ctx.r11.u64 = ctx.r11.u64 | 52;
loc_824F4CE4:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824F4D00:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(r26.u32, 512, ctx.xer);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// blt cr6,0x824f4d4c
	if (ctx.cr6.lt) goto loc_824F4D4C;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bne cr6,0x824f4d4c
	if (!ctx.cr6.eq) goto loc_824F4D4C;
	// rlwimi r9,r9,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r9,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// bne cr6,0x824f4d4c
	if (!ctx.cr6.eq) goto loc_824F4D4C;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x824f4d54
	goto loc_824F4D54;
loc_824F4D4C:
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stwx r25,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r25.u32);
loc_824F4D54:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824f4d00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F4D00;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,52
	ctx.r8.s64 = 52;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824f4110
	ctx.lr = 0x824F4D84;
	sub_824F4110(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824f4110
	ctx.lr = 0x824F4DAC;
	sub_824F4110(ctx, base);
	// b 0x824f48a8
	goto loc_824F48A8;
loc_824F4DB0:
	// rlwinm r11,r27,16,29,31
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0x7;
	// li r27,3
	r27.s64 = 3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x824f4e0c
	if (ctx.cr6.eq) goto loc_824F4E0C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x824f4e04
	if (ctx.cr6.eq) goto loc_824F4E04;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x824f4dfc
	if (ctx.cr6.eq) goto loc_824F4DFC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// beq cr6,0x824f4df4
	if (ctx.cr6.eq) goto loc_824F4DF4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x824f4dec
	if (ctx.cr6.eq) goto loc_824F4DEC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x824f4e14
	goto loc_824F4E14;
loc_824F4DEC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// b 0x824f4e14
	goto loc_824F4E14;
loc_824F4DF4:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x824f4e18
	goto loc_824F4E18;
loc_824F4DFC:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// b 0x824f4e10
	goto loc_824F4E10;
loc_824F4E04:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// b 0x824f4e10
	goto loc_824F4E10;
loc_824F4E0C:
	// lis r11,3
	ctx.r11.s64 = 196608;
loc_824F4E10:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
loc_824F4E14:
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
loc_824F4E18:
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_824F4E34:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r26,512
	ctx.cr6.compare<uint32_t>(r26.u32, 512, ctx.xer);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// blt cr6,0x824f4e80
	if (ctx.cr6.lt) goto loc_824F4E80;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bne cr6,0x824f4e80
	if (!ctx.cr6.eq) goto loc_824F4E80;
	// rlwimi r9,r9,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r9,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// bne cr6,0x824f4e80
	if (!ctx.cr6.eq) goto loc_824F4E80;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x824f4e88
	goto loc_824F4E88;
loc_824F4E80:
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stwx r25,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r25.u32);
loc_824F4E88:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824f4e34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824F4E34;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,7
	ctx.r8.s64 = 7;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824f4110
	ctx.lr = 0x824F4EB8;
	sub_824F4110(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// li r8,7
	ctx.r8.s64 = 7;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bl 0x824f4110
	ctx.lr = 0x824F4EE0;
	sub_824F4110(ctx, base);
	// b 0x824f48a8
	goto loc_824F48A8;
loc_824F4EE4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// li r27,2
	r27.s64 = 2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x824f4f04
	if (ctx.cr6.eq) goto loc_824F4F04;
	// bl 0x826b40a0
	ctx.lr = 0x824F4F04;
	sub_826B40A0(ctx, base);
loc_824F4F04:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,7
	ctx.r8.s64 = 7;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x824f4110
	ctx.lr = 0x824F4F40;
	sub_824F4110(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r9,17476
	ctx.r9.s64 = 17476;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
loc_824F4F5C:
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// b 0x824f48b0
	goto loc_824F48B0;
loc_824F4F64:
	// li r27,1
	r27.s64 = 1;
	// b 0x824f48b0
	goto loc_824F48B0;
}

DEFINE_REX_FUNC(sub_82553ED8) {
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
	ctx.lr = 0x82553EE0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825bb860
	ctx.lr = 0x82553F0C;
	sub_825BB860(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82553f30
	if (ctx.cr6.eq) goto loc_82553F30;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553F2C;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553F30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553F38;
	sub_8250AD28(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// beq cr6,0x82553f5c
	if (ctx.cr6.eq) goto loc_82553F5C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553F58;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553F5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553F64;
	sub_8250AD28(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// beq cr6,0x82553f88
	if (ctx.cr6.eq) goto loc_82553F88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 12);
	// bl 0x82503da0
	ctx.lr = 0x82553F84;
	sub_82503DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82553F88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250ad28
	ctx.lr = 0x82553F90;
	sub_8250AD28(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r29,24
	ctx.r10.s64 = r29.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_8255DBB8) {
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
	ctx.lr = 0x8255DBC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x825ba3a0
	ctx.lr = 0x8255DBF0;
	sub_825BA3A0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,80(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,88(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bne 0x8255dc2c
	if (!ctx.cr0.eq) goto loc_8255DC2C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8255dc2c
	if (ctx.cr0.eq) goto loc_8255DC2C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8255dc38
	if (!ctx.cr6.gt) goto loc_8255DC38;
loc_8255DC2C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82584838
	ctx.lr = 0x8255DC38;
	sub_82584838(ctx, base);
loc_8255DC38:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r29,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r29.u32);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r28.u32);
	// stw r27,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r27.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82550110
	ctx.lr = 0x8255DC68;
	sub_82550110(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825717C8) {
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
	ctx.lr = 0x825717D0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571d24
	if (!ctx.cr0.eq) goto loc_82571D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	r25.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq 0x82571d24
	if (ctx.cr0.eq) goto loc_82571D24;
loc_825717F8:
	// rlwinm r23,r25,0,0,30
	r23.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82571810
	if (ctx.cr0.eq) goto loc_82571810;
	// li r21,0
	r21.s64 = 0;
	// b 0x82571818
	goto loc_82571818;
loc_82571810:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r21,r11,-4
	r21.s64 = ctx.r11.s64 + -4;
loc_82571818:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571d18
	if (ctx.cr0.eq) goto loc_82571D18;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r9,r10
	r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// beq cr6,0x82571858
	if (ctx.cr6.eq) goto loc_82571858;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8257185c
	if (!ctx.cr6.eq) goto loc_8257185C;
loc_82571858:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8257185C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571910
	if (ctx.cr0.eq) goto loc_82571910;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r26
	r24.u64 = r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
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
	// and r26,r10,r11
	r26.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x82571910
	if (ctx.cr6.eq) goto loc_82571910;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825718a0
	if (ctx.cr0.eq) goto loc_825718A0;
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 36);
	// addi r30,r24,32
	r30.s64 = r24.s64 + 32;
	// b 0x825718a8
	goto loc_825718A8;
loc_825718A0:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 28);
	// addi r30,r24,24
	r30.s64 = r24.s64 + 24;
loc_825718A8:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82571994
	if (ctx.cr6.eq) goto loc_82571994;
loc_825718C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825718C8;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571d40
	if (!ctx.cr0.eq) goto loc_82571D40;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825718e8
	if (!ctx.cr0.eq) goto loc_825718E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825718c0
	if (!ctx.cr6.eq) goto loc_825718C0;
loc_825718E8:
	// addi r11,r24,32
	ctx.r11.s64 = r24.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82571994
	if (ctx.cr6.eq) goto loc_82571994;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571994
	if (!ctx.cr0.eq) goto loc_82571994;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x825718c0
	if (!ctx.cr0.eq) goto loc_825718C0;
	// b 0x82571994
	goto loc_82571994;
loc_82571910:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571928
	if (ctx.cr0.eq) goto loc_82571928;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 36);
	// addi r30,r25,32
	r30.s64 = r25.s64 + 32;
	// b 0x82571930
	goto loc_82571930;
loc_82571928:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 28);
	// addi r30,r25,24
	r30.s64 = r25.s64 + 24;
loc_82571930:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82571994
	if (ctx.cr6.eq) goto loc_82571994;
loc_82571948:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6e38
	ctx.lr = 0x82571950;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571d4c
	if (!ctx.cr0.eq) goto loc_82571D4C;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571970
	if (!ctx.cr0.eq) goto loc_82571970;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82571948
	if (!ctx.cr6.eq) goto loc_82571948;
loc_82571970:
	// addi r11,r25,32
	ctx.r11.s64 = r25.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82571994
	if (ctx.cr6.eq) goto loc_82571994;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571994
	if (!ctx.cr0.eq) goto loc_82571994;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x82571948
	if (!ctx.cr0.eq) goto loc_82571948;
loc_82571994:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825719ac
	if (ctx.cr0.eq) goto loc_825719AC;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// addi r30,r26,32
	r30.s64 = r26.s64 + 32;
	// b 0x825719b4
	goto loc_825719B4;
loc_825719AC:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 28);
	// addi r30,r26,24
	r30.s64 = r26.s64 + 24;
loc_825719B4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82571a18
	if (ctx.cr6.eq) goto loc_82571A18;
loc_825719CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f6e38
	ctx.lr = 0x825719D4;
	sub_824F6E38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571d58
	if (!ctx.cr0.eq) goto loc_82571D58;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x825719f4
	if (!ctx.cr0.eq) goto loc_825719F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x825719cc
	if (!ctx.cr6.eq) goto loc_825719CC;
loc_825719F4:
	// addi r11,r26,32
	ctx.r11.s64 = r26.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82571a18
	if (ctx.cr6.eq) goto loc_82571A18;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571a18
	if (!ctx.cr0.eq) goto loc_82571A18;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne 0x825719cc
	if (!ctx.cr0.eq) goto loc_825719CC;
loc_82571A18:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571a2c
	if (ctx.cr6.eq) goto loc_82571A2C;
	// lwz r28,0(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82571A2C:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571a40
	if (ctx.cr6.eq) goto loc_82571A40;
	// lwz r30,4(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82571A40:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82571a54
	if (ctx.cr0.eq) goto loc_82571A54;
	// li r31,0
	r31.s64 = 0;
	// b 0x82571a60
	goto loc_82571A60;
loc_82571A54:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	r31.s64 = ctx.r11.s64 + -40;
loc_82571A60:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x824f71b8
	ctx.lr = 0x82571A78;
	sub_824F71B8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r9,r31,-16
	ctx.r9.s64 = r31.s64 + -16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r29,r3,r9
	r29.u64 = ctx.r3.u64 + ctx.r9.u64;
loc_82571A88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571aac
	if (ctx.cr6.eq) goto loc_82571AAC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82571aa4
	if (ctx.cr6.eq) goto loc_82571AA4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82571a88
	goto loc_82571A88;
loc_82571AA4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82571ab0
	goto loc_82571AB0;
loc_82571AAC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82571AB0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82571b0c
	if (!ctx.cr0.eq) goto loc_82571B0C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82571ABC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571ad8
	if (ctx.cr6.eq) goto loc_82571AD8;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(r31.u32, r25.u32, ctx.xer);
	// bne cr6,0x82571adc
	if (!ctx.cr6.eq) goto loc_82571ADC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82571abc
	goto loc_82571ABC;
loc_82571AD8:
	// li r31,0
	r31.s64 = 0;
loc_82571ADC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x82571AEC;
	sub_825C6828(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82571AFC;
	sub_825C69A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// bne cr6,0x82571b0c
	if (!ctx.cr6.eq) goto loc_82571B0C;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_82571B0C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825c6828
	ctx.lr = 0x82571B1C;
	sub_825C6828(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// beq cr6,0x82571b58
	if (ctx.cr6.eq) goto loc_82571B58;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c6828
	ctx.lr = 0x82571B34;
	sub_825C6828(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825c69a0
	ctx.lr = 0x82571B44;
	sub_825C69A0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r25.u32, ctx.xer);
	// bne cr6,0x82571d18
	if (!ctx.cr6.eq) goto loc_82571D18;
	// stw r22,0(r29)
	REX_STORE_U32(r29.u32 + 0, r22.u32);
	// b 0x82571d18
	goto loc_82571D18;
loc_82571B58:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r22,r25
	r22.u64 = r25.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82571ba8
	if (ctx.cr6.eq) goto loc_82571BA8;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_82571BA8:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r27,1
	ctx.r9.u64 = r27.u64 | 1;
	// addi r8,r23,4
	ctx.r8.s64 = r23.s64 + 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r10,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r23.u32);
	// stw r9,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r9.u32);
	// stw r8,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82571c18
	if (ctx.cr6.eq) goto loc_82571C18;
	// rlwinm r10,r24,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r7.u32);
loc_82571C18:
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r31,r26,32
	r31.s64 = r26.s64 + 32;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,83
	ctx.r6.s64 = 83;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r31,0(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// bl 0x825bb860
	ctx.lr = 0x82571C58;
	sub_825BB860(ctx, base);
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571d18
	if (!ctx.cr0.eq) goto loc_82571D18;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82571d18
	if (ctx.cr0.eq) goto loc_82571D18;
loc_82571C70:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82571cfc
	if (!ctx.cr6.eq) goto loc_82571CFC;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82571C84:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82571cfc
	if (ctx.cr6.eq) goto loc_82571CFC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82571ce8
	if (ctx.cr0.eq) goto loc_82571CE8;
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82571ce8
	if (ctx.cr0.eq) goto loc_82571CE8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82571ce8
	if (ctx.cr0.eq) goto loc_82571CE8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82571cc8
	goto loc_82571CC8;
loc_82571CC0:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82571CC8:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82571cc0
	if (!ctx.cr6.eq) goto loc_82571CC0;
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
loc_82571CE8:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82571c84
	if (!ctx.cr6.eq) goto loc_82571C84;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x82571c84
	goto loc_82571C84;
loc_82571CFC:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82571d18
	if (!ctx.cr0.eq) goto loc_82571D18;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82571c70
	if (!ctx.cr6.eq) goto loc_82571C70;
loc_82571D18:
	// mr r25,r21
	r25.u64 = r21.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(r21.u32, 0, ctx.xer);
	// bne cr6,0x825717f8
	if (!ctx.cr6.eq) goto loc_825717F8;
loc_82571D24:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8257dfd8
	ctx.lr = 0x82571D2C;
	sub_8257DFD8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256c548
	ctx.lr = 0x82571D38;
	sub_8256C548(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x826a1cec
	return;
loc_82571D40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82571D4C;
	sub_824E4368(ctx, base);
loc_82571D4C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82571D58;
	sub_824E4368(ctx, base);
loc_82571D58:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824e4368
	ctx.lr = 0x82571D64;
	sub_824E4368(ctx, base);
}

DEFINE_REX_FUNC(sub_825A3328) {
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
	ctx.lr = 0x825A3330;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r25,r11,22852
	r25.s64 = ctx.r11.s64 + 22852;
	// addi r24,r10,-11576
	r24.s64 = ctx.r10.s64 + -11576;
	// bne cr6,0x825a337c
	if (!ctx.cr6.eq) goto loc_825A337C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-26440
	ctx.r5.s64 = ctx.r11.s64 + -26440;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,533
	ctx.r7.s64 = 533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A337C;
	sub_824EA978(ctx, base);
loc_825A337C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x825a33a0
	if (!ctx.cr6.eq) goto loc_825A33A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-26452
	ctx.r5.s64 = ctx.r11.s64 + -26452;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,534
	ctx.r7.s64 = 534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A33A0;
	sub_824EA978(ctx, base);
loc_825A33A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x825a33c4
	if (!ctx.cr6.eq) goto loc_825A33C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-11200
	ctx.r5.s64 = ctx.r11.s64 + -11200;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,535
	ctx.r7.s64 = 535;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A33C4;
	sub_824EA978(ctx, base);
loc_825A33C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x825a33e8
	if (!ctx.cr6.eq) goto loc_825A33E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-11220
	ctx.r5.s64 = ctx.r11.s64 + -11220;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,536
	ctx.r7.s64 = 536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A33E8;
	sub_824EA978(ctx, base);
loc_825A33E8:
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x825A33F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x825a3420
	if (!ctx.cr0.eq) goto loc_825A3420;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-11232
	ctx.r5.s64 = ctx.r11.s64 + -11232;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,543
	ctx.r7.s64 = 543;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A341C;
	sub_824EA978(ctx, base);
	// b 0x825a34b4
	goto loc_825A34B4;
loc_825A3420:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824efc00
	ctx.lr = 0x825A3448;
	sub_824EFC00(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824efc70
	ctx.lr = 0x825A3460;
	sub_824EFC70(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825a3478
	if (ctx.cr0.eq) goto loc_825A3478;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a34b4
	if (!ctx.cr6.eq) goto loc_825A34B4;
loc_825A3478:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825a348c
	if (ctx.cr6.eq) goto loc_825A348C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825a34a8
	if (!ctx.cr6.eq) goto loc_825A34A8;
loc_825A348C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r5,r11,-11288
	ctx.r5.s64 = ctx.r11.s64 + -11288;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825A34A8;
	sub_824EA978(ctx, base);
loc_825A34A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a2db8
	ctx.lr = 0x825A34B0;
	sub_825A2DB8(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_825A34B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_825AD3A8) {
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
	// li r10,73
	ctx.r10.s64 = 73;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// sth r10,6(r6)
	REX_STORE_U16(ctx.r6.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,10,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r9.u64 & 0x400000);
	// stw r9,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ad424
	if (ctx.cr0.eq) goto loc_825AD424;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AD424:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x825ad43c
	if (ctx.cr0.eq) goto loc_825AD43C;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_825AD43C:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,4
	r31.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r9,r10,0,10,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF3FFFFF) | (ctx.r9.u64 & 0xC00000);
	// rlwinm r10,r9,0,10,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x825ad4c8
	if (ctx.cr6.eq) goto loc_825AD4C8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x825ad558
	if (ctx.cr6.eq) goto loc_825AD558;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x825ad54c
	if (ctx.cr6.eq) goto loc_825AD54C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x825ad544
	if (ctx.cr6.eq) goto loc_825AD544;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x825ad53c
	if (ctx.cr6.eq) goto loc_825AD53C;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x825ad534
	if (ctx.cr6.eq) goto loc_825AD534;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,-8552
	ctx.r6.s64 = ctx.r11.s64 + -8552;
	// addi r5,r10,-31184
	ctx.r5.s64 = ctx.r10.s64 + -31184;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,11141
	ctx.r7.s64 = 11141;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825AD4C8;
	sub_824EA978(ctx, base);
loc_825AD4C8:
	// li r10,2
	ctx.r10.s64 = 2;
loc_825AD4CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_825AD4D0:
	// sth r10,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// li r9,65
	ctx.r9.s64 = 65;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r8,r9,16,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// stw r8,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwzu r8,4(r31)
	ea = 4 + r31.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// rlwinm r8,r8,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwimi r10,r11,4,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// rlwinm r9,r9,0,28,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r9,0,24,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r10,r11,12,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
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
loc_825AD534:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x825ad550
	goto loc_825AD550;
loc_825AD53C:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x825ad55c
	goto loc_825AD55C;
loc_825AD544:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x825ad4cc
	goto loc_825AD4CC;
loc_825AD54C:
	// li r10,2
	ctx.r10.s64 = 2;
loc_825AD550:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825ad4d0
	goto loc_825AD4D0;
loc_825AD558:
	// li r10,2
	ctx.r10.s64 = 2;
loc_825AD55C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x825ad4d0
	goto loc_825AD4D0;
}

DEFINE_REX_FUNC(sub_825B6F58) {
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
	ctx.lr = 0x825B6F60;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// bne cr6,0x825b6fb0
	if (!ctx.cr6.eq) goto loc_825B6FB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-9704
	ctx.r5.s64 = ctx.r11.s64 + -9704;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1154
	ctx.r7.s64 = 1154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6FB0;
	sub_824EA978(ctx, base);
loc_825B6FB0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x825b6fc0
	if (!ctx.cr6.eq) goto loc_825B6FC0;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// b 0x825b6fe8
	goto loc_825B6FE8;
loc_825B6FC0:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// beq cr6,0x825b6fe4
	if (ctx.cr6.eq) goto loc_825B6FE4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,-25788
	ctx.r5.s64 = ctx.r11.s64 + -25788;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,1164
	ctx.r7.s64 = 1164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825B6FE4;
	sub_824EA978(ctx, base);
loc_825B6FE4:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
loc_825B6FE8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824f0eb0
	ctx.lr = 0x825B6FF8;
	sub_824F0EB0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825B8720) {
	REX_FUNC_PROLOGUE();
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// lfd f0,-3744(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -3744);
	// bne cr6,0x825b875c
	if (!ctx.cr6.eq) goto loc_825B875C;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_825B875C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// bne cr6,0x825b8770
	if (!ctx.cr6.eq) goto loc_825B8770;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_825B8770:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826a1930
	ctx.lr = 0x825B8778;
	sub_826A1930(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825b87cc
	if (ctx.cr6.eq) goto loc_825B87CC;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x825b87c4
	if (ctx.cr6.eq) goto loc_825B87C4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826a1930
	ctx.lr = 0x825B8790;
	sub_826A1930(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x825b87b4
	if (ctx.cr6.eq) goto loc_825B87B4;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x825b87a8
	if (ctx.cr6.eq) goto loc_825B87A8;
	// fmul f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 * f30.f64;
	// b 0x825b87e0
	goto loc_825B87E0;
loc_825B87A8:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
loc_825B87AC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// b 0x825b87dc
	goto loc_825B87DC;
loc_825B87B4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x826a1898
	ctx.lr = 0x825B87BC;
	sub_826A1898(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x825b87ac
	goto loc_825B87AC;
loc_825B87C4:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// b 0x825b87d8
	goto loc_825B87D8;
loc_825B87CC:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x826a1898
	ctx.lr = 0x825B87D4;
	sub_826A1898(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
loc_825B87D8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_825B87DC:
	// bl 0x826a1860
	ctx.lr = 0x825B87E0;
	sub_826A1860(ctx, base);
loc_825B87E0:
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

DEFINE_REX_FUNC(sub_825BD768) {
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
	ctx.lr = 0x825BD770;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bd804
	if (ctx.cr0.eq) goto loc_825BD804;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8250c998
	ctx.lr = 0x825BD7A4;
	sub_8250C998(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8250ab60
	ctx.lr = 0x825BD7B4;
	sub_8250AB60(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwimi r10,r8,0,7,3
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF) | (ctx.r10.u64 & 0xE000000);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_825BD804:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 | 32;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// ori r9,r9,36262
	ctx.r9.u64 = ctx.r9.u64 | 36262;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// li r5,228
	ctx.r5.s64 = 228;
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwimi r11,r10,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r8,r11,1,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// bl 0x825b93f8
	ctx.lr = 0x825BD86C;
	sub_825B93F8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825bd9a8
	if (!ctx.cr6.eq) goto loc_825BD9A8;
	// rlwinm r10,r29,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xFFFFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// bne cr6,0x825bd8a0
	if (!ctx.cr6.eq) goto loc_825BD8A0;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// b 0x825bd8a8
	goto loc_825BD8A8;
loc_825BD8A0:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x825bd8ac
	if (ctx.cr6.gt) goto loc_825BD8AC;
loc_825BD8A8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825BD8AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825bd9a8
	if (ctx.cr0.eq) goto loc_825BD9A8;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r28,92(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825bd8d4
	if (ctx.cr6.eq) goto loc_825BD8D4;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// beq cr6,0x825bd998
	if (ctx.cr6.eq) goto loc_825BD998;
loc_825BD8D4:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bb860
	ctx.lr = 0x825BD8EC;
	sub_825BB860(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x825bd938
	if (!ctx.cr6.eq) goto loc_825BD938;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 564);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// b 0x825bd964
	goto loc_825BD964;
loc_825BD938:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
loc_825BD964:
	// lwz r28,564(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 564);
	// lwz r5,92(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 92);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x825bd984
	if (ctx.cr6.eq) goto loc_825BD984;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250b4d8
	ctx.lr = 0x825BD984;
	sub_8250B4D8(ctx, base);
loc_825BD984:
	// stw r29,92(r28)
	REX_STORE_U32(r28.u32 + 92, r29.u32);
	// mr r28,r29
	r28.u64 = r29.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r11.u32);
loc_825BD998:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8250adf0
	ctx.lr = 0x825BD9A8;
	sub_8250ADF0(ctx, base);
loc_825BD9A8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8250ad28
	ctx.lr = 0x825BD9B4;
	sub_8250AD28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_825CD958) {
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
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825cda1c
	if (!ctx.cr6.lt) goto loc_825CDA1C;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f0,20328(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20328);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	ctx.f13.f64 = double(temp.f32);
loc_825CD9BC:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
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
	// lbz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
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
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x825cd9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825CD9BC;
loc_825CDA1C:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cda38
	if (ctx.cr6.eq) goto loc_825CDA38;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c73b8
	ctx.lr = 0x825CDA38;
	sub_825C73B8(ctx, base);
loc_825CDA38:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825cda54
	if (ctx.cr6.eq) goto loc_825CDA54;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x825c7788
	ctx.lr = 0x825CDA54;
	sub_825C7788(ctx, base);
loc_825CDA54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_825D00B8) {
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
	ctx.lr = 0x825D00C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825d00ec
	if (ctx.cr6.eq) goto loc_825D00EC;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82408848
	ctx.lr = 0x825D00E8;
	sub_82408848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825D00EC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825d0108
	if (ctx.cr6.eq) goto loc_825D0108;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c7448
	ctx.lr = 0x825D0104;
	sub_825C7448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825D0108:
	// lwz r9,156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// lwz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 64);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + r28.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + r29.u64;
	// subfe r6,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x825cfc60
	ctx.lr = 0x825D0134;
	sub_825CFC60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x825d016c
	if (ctx.cr0.lt) goto loc_825D016C;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 132);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x826a1e70
	ctx.lr = 0x825D0164;
	sub_826A1E70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
loc_825D016C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825D4018) {
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
	ctx.lr = 0x825D4020;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x825d4060
	if (!ctx.cr6.eq) goto loc_825D4060;
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
	// li r7,2631
	ctx.r7.s64 = 2631;
	// bl 0x824ea978
	ctx.lr = 0x825D4060;
	sub_824EA978(ctx, base);
loc_825D4060:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824f05f0
	ctx.lr = 0x825D4070;
	sub_824F05F0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bgt cr6,0x825d40d8
	if (ctx.cr6.gt) goto loc_825D40D8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d4094
	if (ctx.cr6.eq) goto loc_825D4094;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D4094;
	sub_824F0950(ctx, base);
loc_825D4094:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d40d0
	if (ctx.cr6.eq) goto loc_825D40D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d40d0
	if (ctx.cr6.eq) goto loc_825D40D0;
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
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// bctrl 
	ctx.lr = 0x825D40D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D40D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825d4134
	goto loc_825D4134;
loc_825D40D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x825d40f4
	if (ctx.cr6.eq) goto loc_825D40F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824f0950
	ctx.lr = 0x825D40F4;
	sub_824F0950(ctx, base);
loc_825D40F4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x825d4130
	if (ctx.cr6.eq) goto loc_825D4130;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x825d4130
	if (ctx.cr6.eq) goto loc_825D4130;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,53
	ctx.r6.s64 = 53;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,212(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// bctrl 
	ctx.lr = 0x825D4130;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825D4130:
	// li r3,1
	ctx.r3.s64 = 1;
loc_825D4134:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825D7C78) {
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
	ctx.lr = 0x825D7C80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
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
	// addi r29,r11,22852
	r29.s64 = ctx.r11.s64 + 22852;
	// addi r28,r10,9976
	r28.s64 = ctx.r10.s64 + 9976;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x825d7cc8
	if (!ctx.cr6.gt) goto loc_825D7CC8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10152
	ctx.r5.s64 = ctx.r11.s64 + 10152;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1945
	ctx.r7.s64 = 1945;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7CC8;
	sub_824EA978(ctx, base);
loc_825D7CC8:
	// lwz r11,952(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 952);
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825d7d0c
	if (ctx.cr0.eq) goto loc_825D7D0C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x825d7d0c
	if (!ctx.cr6.eq) goto loc_825D7D0C;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825d7d0c
	if (ctx.cr0.eq) goto loc_825D7D0C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,10080
	ctx.r5.s64 = ctx.r11.s64 + 10080;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825D7D0C;
	sub_824EA978(ctx, base);
loc_825D7D0C:
	// addi r11,r30,58
	ctx.r11.s64 = r30.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825DE908) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825DE910;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825de988
	if (ctx.cr6.eq) goto loc_825DE988;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x825de988
	if (ctx.cr6.eq) goto loc_825DE988;
	// lwz r28,1448(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1448);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825DE940;
	sub_825B33A0(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825de970
	if (ctx.cr0.eq) goto loc_825DE970;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// b 0x825de974
	goto loc_825DE974;
loc_825DE970:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825DE974:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x825de994
	goto loc_825DE994;
loc_825DE988:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825de888
	ctx.lr = 0x825DE994;
	sub_825DE888(ctx, base);
loc_825DE994:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825E3C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x825E3C90;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,120(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x825e9278
	ctx.lr = 0x825E3CA4;
	sub_825E9278(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824ea888
	ctx.lr = 0x825E3CB4;
	sub_824EA888(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825e3cf8
	if (ctx.cr0.eq) goto loc_825E3CF8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// divw r11,r11,r10
	ctx.r11.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x825e3cf8
	if (ctx.cr6.gt) goto loc_825E3CF8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r6,r11,11616
	ctx.r6.s64 = ctx.r11.s64 + 11616;
	// addi r5,r10,12888
	ctx.r5.s64 = ctx.r10.s64 + 12888;
	// addi r4,r9,22852
	ctx.r4.s64 = ctx.r9.s64 + 22852;
	// li r7,1677
	ctx.r7.s64 = 1677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825E3CF8;
	sub_824EA978(ctx, base);
loc_825E3CF8:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824ea8e0
	ctx.lr = 0x825E3D0C;
	sub_824EA8E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_825E7178) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825E7180;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// stb r4,32(r3)
	REX_STORE_U8(ctx.r3.u32 + 32, ctx.r4.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r29.u32);
	// beq 0x825e71a4
	if (ctx.cr0.eq) goto loc_825E71A4;
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// b 0x825e71ac
	goto loc_825E71AC;
loc_825E71A4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
loc_825E71AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E71C0;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e71f4
	if (ctx.cr0.eq) goto loc_825E71F4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,27480
	ctx.r6.s64 = ctx.r10.s64 + 27480;
	// addi r5,r9,27496
	ctx.r5.s64 = ctx.r9.s64 + 27496;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E71F0;
	sub_825E6AC8(ctx, base);
	// b 0x825e71f8
	goto loc_825E71F8;
loc_825E71F4:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E71F8:
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7210;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e7244
	if (ctx.cr0.eq) goto loc_825E7244;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,26624
	ctx.r6.s64 = ctx.r10.s64 + 26624;
	// addi r5,r9,26704
	ctx.r5.s64 = ctx.r9.s64 + 26704;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E7240;
	sub_825E6AC8(ctx, base);
	// b 0x825e7248
	goto loc_825E7248;
loc_825E7244:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E7248:
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7260;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e7294
	if (ctx.cr0.eq) goto loc_825E7294;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,26632
	ctx.r6.s64 = ctx.r10.s64 + 26632;
	// addi r5,r9,26752
	ctx.r5.s64 = ctx.r9.s64 + 26752;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E7290;
	sub_825E6AC8(ctx, base);
	// b 0x825e7298
	goto loc_825E7298;
loc_825E7294:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E7298:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E72B0;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e72e4
	if (ctx.cr0.eq) goto loc_825E72E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,26648
	ctx.r6.s64 = ctx.r10.s64 + 26648;
	// addi r5,r9,26832
	ctx.r5.s64 = ctx.r9.s64 + 26832;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E72E0;
	sub_825E6AC8(ctx, base);
	// b 0x825e72e8
	goto loc_825E72E8;
loc_825E72E4:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E72E8:
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r28,1452(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7300;
	sub_825B33A0(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x825e7334
	if (ctx.cr0.eq) goto loc_825E7334;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,26672
	ctx.r6.s64 = ctx.r10.s64 + 26672;
	// addi r5,r9,26944
	ctx.r5.s64 = ctx.r9.s64 + 26944;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x825e6ac8
	ctx.lr = 0x825E7330;
	sub_825E6AC8(ctx, base);
	// b 0x825e7338
	goto loc_825E7338;
loc_825E7334:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_825E7338:
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7350;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825e7374
	if (ctx.cr0.eq) goto loc_825E7374;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825f7fb8
	ctx.lr = 0x825E7370;
	sub_825F7FB8(ctx, base);
	// b 0x825e7378
	goto loc_825E7378;
loc_825E7374:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825E7378:
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r30,1452(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825b33a0
	ctx.lr = 0x825E7390;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x825e73ac
	if (ctx.cr0.eq) goto loc_825E73AC;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x825faec0
	ctx.lr = 0x825E73A8;
	sub_825FAEC0(ctx, base);
	// b 0x825e73b0
	goto loc_825E73B0;
loc_825E73AC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_825E73B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r29,1432(r11)
	REX_STORE_U32(ctx.r11.u32 + 1432, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,1404(r11)
	REX_STORE_U32(ctx.r11.u32 + 1404, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,1408(r11)
	REX_STORE_U32(ctx.r11.u32 + 1408, r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r10,1412(r11)
	REX_STORE_U32(ctx.r11.u32 + 1412, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r29,1416(r11)
	REX_STORE_U32(ctx.r11.u32 + 1416, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825F7B50) {
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
	ctx.lr = 0x825F7B58;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F7B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x825f7c2c
	if (ctx.cr6.eq) goto loc_825F7C2C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825f7c2c
	if (!ctx.cr6.gt) goto loc_825F7C2C;
	// li r29,0
	r29.s64 = 0;
loc_825F7BA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7bc0
	if (!ctx.cr6.lt) goto loc_825F7BC0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// b 0x825f7bcc
	goto loc_825F7BCC;
loc_825F7BC0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825f7718
	ctx.lr = 0x825F7BCC;
	sub_825F7718(ctx, base);
loc_825F7BCC:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825F7BE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825f7c00
	if (ctx.cr0.eq) goto loc_825F7C00;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825f7ba8
	if (ctx.cr6.lt) goto loc_825F7BA8;
	// b 0x825f7c2c
	goto loc_825F7C2C;
loc_825F7C00:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825f7c2c
	if (!ctx.cr6.lt) goto loc_825F7C2C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x826a1e70
	ctx.lr = 0x825F7C2C;
	sub_826A1E70(ctx, base);
loc_825F7C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_825FA8D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x825FA8D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,-21368
	ctx.r10.s64 = ctx.r10.s64 + -21368;
	// mulli r8,r11,52
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,-53
	ctx.r7.s64 = ctx.r11.s64 + -53;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r30,r9,22852
	r30.s64 = ctx.r9.s64 + 22852;
	// rlwinm r28,r7,27,31,31
	r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// addi r29,r11,30240
	r29.s64 = ctx.r11.s64 + 30240;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// bne cr6,0x825fa93c
	if (!ctx.cr6.eq) goto loc_825FA93C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,30640
	ctx.r5.s64 = ctx.r11.s64 + 30640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA93C;
	sub_824EA978(ctx, base);
loc_825FA93C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825fa980
	if (ctx.cr0.eq) goto loc_825FA980;
	// lbz r11,153(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 153);
	// lbz r10,154(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 154);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825fa970
	if (ctx.cr6.eq) goto loc_825FA970;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,30580
	ctx.r5.s64 = ctx.r11.s64 + 30580;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,1468
	ctx.r7.s64 = 1468;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824ea978
	ctx.lr = 0x825FA970;
	sub_824EA978(ctx, base);
loc_825FA970:
	// lbz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 154);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	REX_STORE_U8(r31.u32 + 154, ctx.r11.u8);
loc_825FA980:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_825FD6F8) {
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
	// b 0x825fd718
	goto loc_825FD718;
loc_825FD710:
	// bl 0x825e9278
	ctx.lr = 0x825FD714;
	sub_825E9278(ctx, base);
	// bl 0x825f7f08
	ctx.lr = 0x825FD718;
	sub_825F7F08(ctx, base);
loc_825FD718:
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825fd710
	if (!ctx.cr6.eq) goto loc_825FD710;
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

DEFINE_REX_FUNC(sub_82607820) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82607828;
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
	ctx.lr = 0x82607848;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x8260786c
	if (ctx.cr0.eq) goto loc_8260786C;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825f8d38
	ctx.lr = 0x82607868;
	sub_825F8D38(ctx, base);
	// b 0x82607870
	goto loc_82607870;
loc_8260786C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82607870:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82609750) {
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
	ctx.lr = 0x82609758;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1456(r7)
	r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 1456);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x825b33a0
	ctx.lr = 0x82609778;
	sub_825B33A0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8260979c
	if (ctx.cr0.eq) goto loc_8260979C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x82609794;
	sub_825D7A48(ctx, base);
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x826097a0
	goto loc_826097A0;
loc_8260979C:
	// mr r26,r24
	r26.u64 = r24.u64;
loc_826097A0:
	// stw r24,8(r30)
	REX_STORE_U32(r30.u32 + 8, r24.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,1456(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 1456);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r27,r24
	r27.u64 = r24.u64;
	// bl 0x825b33a0
	ctx.lr = 0x826097B8;
	sub_825B33A0(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x826097d8
	if (ctx.cr0.eq) goto loc_826097D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,1456(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 1456);
	// bl 0x825d7a48
	ctx.lr = 0x826097D0;
	sub_825D7A48(ctx, base);
	// mr r28,r31
	r28.u64 = r31.u64;
	// b 0x826097dc
	goto loc_826097DC;
loc_826097D8:
	// mr r28,r24
	r28.u64 = r24.u64;
loc_826097DC:
	// lwz r31,20(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 20);
	// mr r29,r24
	r29.u64 = r24.u64;
loc_826097E4:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82609880
	if (!ctx.cr0.eq) goto loc_82609880;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82609854
	if (ctx.cr6.eq) goto loc_82609854;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bge 0x82609814
	if (!ctx.cr0.lt) goto loc_82609814;
	// stw r24,8(r31)
	REX_STORE_U32(r31.u32 + 8, r24.u32);
loc_82609814:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82609830;
	sub_825F7718(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82609844;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,20(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 20);
	// b 0x826097e4
	goto loc_826097E4;
loc_82609854:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82609870
	if (!ctx.cr6.eq) goto loc_82609870;
	// stw r31,24(r30)
	REX_STORE_U32(r30.u32 + 24, r31.u32);
loc_82609870:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8260987c
	if (ctx.cr6.eq) goto loc_8260987C;
	// stw r31,32(r27)
	REX_STORE_U32(r27.u32 + 32, r31.u32);
loc_8260987C:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82609880:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r29,r24
	r29.u64 = r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x826097e4
	if (!ctx.cr6.eq) goto loc_826097E4;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826098b4
	if (!ctx.cr6.eq) goto loc_826098B4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826098b0
	if (ctx.cr6.eq) goto loc_826098B0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_826098B0:
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
loc_826098B4:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82609900
	if (ctx.cr6.eq) goto loc_82609900;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// bl 0x825e9278
	ctx.lr = 0x826098CC;
	sub_825E9278(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826097e4
	if (!ctx.cr6.eq) goto loc_826097E4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826098f4
	if (ctx.cr6.eq) goto loc_826098F4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// b 0x826098f8
	goto loc_826098F8;
loc_826098F4:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_826098F8:
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// b 0x826097e4
	goto loc_826097E4;
loc_82609900:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826099d8
	if (ctx.cr6.eq) goto loc_826099D8;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82609928
	if (!ctx.cr6.lt) goto loc_82609928;
loc_8260991C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + r27.u64;
	// b 0x82609934
	goto loc_82609934;
loc_82609928:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825f7718
	ctx.lr = 0x82609934;
	sub_825F7718(ctx, base);
loc_82609934:
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x826099c4
	if (!ctx.cr6.gt) goto loc_826099C4;
	// lwz r31,1456(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 1456);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825b33a0
	ctx.lr = 0x82609954;
	sub_825B33A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// beq 0x82609974
	if (ctx.cr0.eq) goto loc_82609974;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82609518
	ctx.lr = 0x8260996C;
	sub_82609518(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82609978
	goto loc_82609978;
loc_82609974:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82609978:
	// lwz r3,96(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 96);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x82609984;
	sub_825F7718(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// lwz r31,24(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 24);
loc_82609994:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826099b0
	if (ctx.cr6.eq) goto loc_826099B0;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x825f7718
	ctx.lr = 0x826099A8;
	sub_825F7718(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_826099B0:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826099c4
	if (ctx.cr6.eq) goto loc_826099C4;
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
	// b 0x82609994
	goto loc_82609994;
loc_826099C4:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8260991c
	if (ctx.cr6.lt) goto loc_8260991C;
loc_826099D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1cf4
	return;
}

DEFINE_REX_FUNC(sub_82615FE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82616070
	sub_82616070(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_826161F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82616200;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82625c10
	ctx.lr = 0x82616238;
	sub_82625C10(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82616250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826184D8) {
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r11,r11,-14092
	ctx.r11.s64 = ctx.r11.s64 + -14092;
	// addi r10,r10,-14112
	ctx.r10.s64 = ctx.r10.s64 + -14112;
	// addi r9,r9,-14132
	ctx.r9.s64 = ctx.r9.s64 + -14132;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// bl 0x82618088
	ctx.lr = 0x82618514;
	sub_82618088(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82629cd8
	ctx.lr = 0x8261851C;
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

DEFINE_REX_FUNC(sub_8261B208) {
	REX_FUNC_PROLOGUE();
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8261b234
	if (!ctx.cr6.lt) goto loc_8261B234;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8261b22c
	if (ctx.cr6.eq) goto loc_8261B22C;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_8261B224:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bdnz 0x8261b224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8261B224;
loc_8261B22C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8261b238
	goto loc_8261B238;
loc_8261B234:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8261B238:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8261CF68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x8261CF70;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,8
	r29.s64 = ctx.r3.s64 + 8;
	// b 0x8261cfd0
	goto loc_8261CFD0;
loc_8261CF80:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x8261cfa0
	goto loc_8261CFA0;
loc_8261CF90:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// beq cr6,0x8261cfa8
	if (ctx.cr6.eq) goto loc_8261CFA8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8261CFA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8261cf90
	if (!ctx.cr6.eq) goto loc_8261CF90;
loc_8261CFA8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82625870
	ctx.lr = 0x8261CFB0;
	sub_82625870(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 48);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8260b9b0
	ctx.lr = 0x8261CFC0;
	sub_8260B9B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261c968
	ctx.lr = 0x8261CFC8;
	sub_8261C968(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x8261CFD0;
	sub_8264C3D0(ctx, base);
loc_8261CFD0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c0a0
	ctx.lr = 0x8261CFD8;
	sub_8260C0A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8261cf80
	if (!ctx.cr0.eq) goto loc_8261CF80;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(sub_82625CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82625CE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
loc_82625D00:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82625d24
	if (!ctx.cr6.eq) goto loc_82625D24;
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
	// bne 0x82625d00
	if (!ctx.cr0.eq) goto loc_82625D00;
	// b 0x82625d2c
	goto loc_82625D2C;
loc_82625D24:
	// stwcx. r10,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82625D2C:
	// lis r11,-32120
	ctx.r11.s64 = -2105016320;
	// addi r28,r11,20576
	r28.s64 = ctx.r11.s64 + 20576;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x827938a4
	ctx.lr = 0x82625D3C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// bne cr6,0x82625d4c
	if (!ctx.cr6.eq) goto loc_82625D4C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// b 0x82625d58
	goto loc_82625D58;
loc_82625D4C:
	// addi r11,r30,5
	ctx.r11.s64 = r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
loc_82625D58:
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x827938b4
	ctx.lr = 0x82625D64;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_826284F8) {
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
	ctx.lr = 0x82628500;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82628540
	if (!ctx.cr6.eq) goto loc_82628540;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82628540
	if (!ctx.cr6.eq) goto loc_82628540;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8262853C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826285ac
	goto loc_826285AC;
loc_82628540:
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
	ctx.lr = 0x8262855C;
	sub_8260B5B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82628570
	if (!ctx.cr0.eq) goto loc_82628570;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x826285ac
	goto loc_826285AC;
loc_82628570:
	// addic r11,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	ctx.r11.s64 = r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,12(r31)
	REX_STORE_U32(r31.u32 + 12, r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	REX_STORE_U32(r31.u32 + 16, r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// bl 0x82628898
	ctx.lr = 0x8262859C;
	sub_82628898(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge 0x826285ac
	if (!ctx.cr0.lt) goto loc_826285AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264c3d0
	ctx.lr = 0x826285AC;
	sub_8264C3D0(ctx, base);
loc_826285AC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82633298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lbz r9,1(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lfs f0,2768(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2768);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// or r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r4,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r11,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 12;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82634BC0) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r9,r4,3,13,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x7FFF8;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// subf r8,r11,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82634bf0
	if (ctx.cr6.lt) goto loc_82634BF0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// divw r9,r10,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r10.s32 / ctx.r11.s32 : 0);
	// addis r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 65536;
	// addi r8,r8,-12
	ctx.r8.s64 = ctx.r8.s64 + -12;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// b 0x82634bf4
	goto loc_82634BF4;
loc_82634BF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82634BF4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r3,r10,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82636028) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1cb8
	ctx.lr = 0x82636030;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x826360d0
	if (!ctx.cr6.eq) goto loc_826360D0;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82636358
	if (!ctx.cr6.gt) goto loc_82636358;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82636068:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r3,114(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lhzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sth r4,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r4.u16);
	// sth r4,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r4.u16);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82636068
	if (ctx.cr6.lt) goto loc_82636068;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_826360D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82636358
	if (!ctx.cr6.eq) goto loc_82636358;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82636350
	if (!ctx.cr6.gt) goto loc_82636350;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f30,3720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 3720);
	f30.f64 = double(temp.f32);
	// lfs f31,3804(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3804);
	f31.f64 = double(temp.f32);
loc_82636100:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,424(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 424);
	// lhz r5,114(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 114);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r9,124(r30)
	REX_STORE_U16(r30.u32 + 124, ctx.r9.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,-2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r8,122(r30)
	REX_STORE_U16(r30.u32 + 122, ctx.r8.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r5,126(r30)
	REX_STORE_U16(r30.u32 + 126, ctx.r5.u16);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x826361f4
	if (!ctx.cr6.gt) goto loc_826361F4;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 256);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r7,r8,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82636194
	if (!ctx.cr6.gt) goto loc_82636194;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// divw r10,r8,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
loc_82636184:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82636184
	if (ctx.cr6.gt) goto loc_82636184;
loc_82636194:
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8263636c
	if (!ctx.cr6.lt) goto loc_8263636C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x826361c4
	if (!ctx.cr6.gt) goto loc_826361C4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826361B4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x826361b4
	if (ctx.cr6.lt) goto loc_826361B4;
loc_826361C4:
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 340);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// lwz r5,352(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r4.u32);
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// lwzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// b 0x82636218
	goto loc_82636218;
loc_826361F4:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r7,352(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// stw r6,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r6.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r5.u32);
loc_82636218:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 276);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,272(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// divw r3,r5,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// divw r10,r4,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// stw r3,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// stw r10,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r10.u32);
	// sth r9,118(r30)
	REX_STORE_U16(r30.u32 + 118, ctx.r9.u16);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 264);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 268);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r6.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x826362d8
	if (!ctx.cr6.eq) goto loc_826362D8;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * f31.f64));
	// fdivs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f6.f64));
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + f30.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r6.u32);
	// lhz r5,118(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x826362c4
	if (!ctx.cr6.gt) goto loc_826362C4;
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
loc_826362C4:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 412);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r8.u32);
loc_826362D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82635e80
	ctx.lr = 0x826362E4;
	sub_82635E80(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x826362f8
	if (!ctx.cr6.eq) goto loc_826362F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// bl 0x82635f90
	ctx.lr = 0x826362F8;
	sub_82635F90(ctx, base);
loc_826362F8:
	// addi r8,r30,130
	ctx.r8.s64 = r30.s64 + 130;
	// lhz r6,124(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 124);
	// addi r7,r30,128
	ctx.r7.s64 = r30.s64 + 128;
	// lhz r5,122(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 122);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e6a68
	ctx.lr = 0x82636314;
	sub_826E6A68(ctx, base);
	// addi r9,r30,134
	ctx.r9.s64 = r30.s64 + 134;
	// addi r8,r30,132
	ctx.r8.s64 = r30.s64 + 132;
	// lwz r7,140(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r6,126(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 126);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 124);
	// bl 0x826e6b38
	ctx.lr = 0x82636334;
	sub_826E6B38(ctx, base);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82636100
	if (ctx.cr6.lt) goto loc_82636100;
loc_82636350:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82639e58
	ctx.lr = 0x82636358;
	sub_82639E58(ctx, base);
loc_82636358:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
loc_8263636C:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8264C378) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264C380) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8264C800) {
	REX_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793f64
	__imp__NetDll_XNetRegisterKey(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C860) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82793fb4
	__imp__NetDll_XNetGetConnectStatus(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264C928) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82794014
	__imp__NetDll_XNetGetOpt(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8264CBB8) {
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
	ctx.lr = 0x8264CBC0;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// rlwinm. r11,r5,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,76
	r30.s64 = 76;
	// beq 0x8264cbf0
	if (ctx.cr0.eq) goto loc_8264CBF0;
	// li r30,80
	r30.s64 = 80;
loc_8264CBF0:
	// addi r31,r6,7712
	r31.s64 = ctx.r6.s64 + 7712;
	// lis r4,5
	ctx.r4.s64 = 327680;
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// li r3,252
	ctx.r3.s64 = 252;
	// addi r27,r11,4096
	r27.s64 = ctx.r11.s64 + 4096;
	// bl 0x82793744
	ctx.lr = 0x8264CC14;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r9,340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// add r8,r30,r29
	ctx.r8.u64 = r30.u64 + r29.u64;
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// mr r28,r29
	r28.u64 = r29.u64;
	// stw r21,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// add r30,r31,r8
	r30.u64 = r31.u64 + ctx.r8.u64;
	// stw r9,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// subf r29,r27,r23
	r29.u64 = r23.u64 - r27.u64;
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r9,-32119
	ctx.r9.s64 = -2104950784;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// add r6,r29,r30
	ctx.r6.u64 = r29.u64 + r30.u64;
	// addi r5,r9,-6304
	ctx.r5.s64 = ctx.r9.s64 + -6304;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264ec68
	ctx.lr = 0x8264CC84;
	sub_8264EC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8264cca4
	if (ctx.cr0.lt) goto loc_8264CCA4;
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r28,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r28.u32);
loc_8264CCA4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x826a1cec
	return;
}

DEFINE_REX_FUNC(sub_8264F6A8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8264F910) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8264f934
	if (!ctx.cr6.lt) goto loc_8264F934;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_8264F934:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8264f990
	if (ctx.cr6.eq) goto loc_8264F990;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
loc_8264F950:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8264f978
	if (ctx.cr6.eq) goto loc_8264F978;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r11,r8,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r8,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r8,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r8,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// b 0x8264f97c
	goto loc_8264F97C;
loc_8264F978:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
loc_8264F97C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x8264f950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8264F950;
loc_8264F990:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82654028) {
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
	ctx.lr = 0x82654030;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8264ff28
	ctx.lr = 0x82654040;
	sub_8264FF28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650370
	ctx.lr = 0x82654050;
	sub_82650370(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82654088
	if (ctx.cr6.eq) goto loc_82654088;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x82654088
	if (ctx.cr6.lt) goto loc_82654088;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82654088
	if (!ctx.cr6.lt) goto loc_82654088;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r27,1
	r27.s64 = 1;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82654090
	goto loc_82654090;
loc_82654088:
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
loc_82654090:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,0,26,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
	// bl 0x826a2e60
	ctx.lr = 0x826540B0;
	sub_826A2E60(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x826540e8
	if (ctx.cr6.eq) goto loc_826540E8;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826540E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x826540f4
	goto loc_826540F4;
loc_826540E8:
	// lwz r11,740(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 740);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,740(r31)
	REX_STORE_U32(r31.u32 + 740, ctx.r11.u32);
loc_826540F4:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r28,r31,248
	r28.s64 = r31.s64 + 248;
	// b 0x82654244
	goto loc_82654244;
loc_82654100:
	// lwz r11,304(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 304);
	// addi r30,r29,-92
	r30.s64 = r29.s64 + -92;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82654150
	if (ctx.cr0.eq) goto loc_82654150;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82654240
	if (ctx.cr0.eq) goto loc_82654240;
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82654240
	if (ctx.cr0.eq) goto loc_82654240;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82654240
	if (ctx.cr6.eq) goto loc_82654240;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
	// b 0x82654240
	goto loc_82654240;
loc_82654150:
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826541dc
	if (ctx.cr0.eq) goto loc_826541DC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82654184
	if (ctx.cr6.eq) goto loc_82654184;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82654178;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,396(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 396);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r11.u32);
loc_82654184:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8265419C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,396(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 396);
	// addi r11,r31,424
	ctx.r11.s64 = r31.s64 + 424;
	// rlwinm r10,r10,0,5,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r10,396(r30)
	REX_STORE_U32(r30.u32 + 396, ctx.r10.u32);
	// lwz r10,180(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 180);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r10.u32);
	// lwz r10,428(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 428);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ld r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U64(r30.u32 + 16);
	// beq cr6,0x826541dc
	if (ctx.cr6.eq) goto loc_826541DC;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826541DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826541DC:
	// lwz r3,396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 396);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x826541f4
	if (!ctx.cr6.eq) goto loc_826541F4;
	// bl 0x8265f6a8
	ctx.lr = 0x826541EC;
	sub_8265F6A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r31)
	REX_STORE_U32(r31.u32 + 396, ctx.r11.u32);
loc_826541F4:
	// lwz r3,420(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82654240
	if (ctx.cr6.eq) goto loc_82654240;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82654208:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r30,88(r30)
	r30.u64 = REX_LOAD_U32(r30.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82654208
	if (!ctx.cr6.eq) goto loc_82654208;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82660120
	ctx.lr = 0x82654238;
	sub_82660120(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8265426c
	if (ctx.cr0.lt) goto loc_8265426C;
loc_82654240:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_82654244:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// beq cr6,0x82654258
	if (ctx.cr6.eq) goto loc_82654258;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// bne 0x82654100
	if (!ctx.cr0.eq) goto loc_82654100;
loc_82654258:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826537e0
	ctx.lr = 0x82654268;
	sub_826537E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265426C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x826a1d00
	return;
}

DEFINE_REX_FUNC(sub_82661120) {
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
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// addi r31,r11,-6212
	r31.s64 = ctx.r11.s64 + -6212;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938a4
	ctx.lr = 0x82661140;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bne 0x82661160
	if (!ctx.cr0.eq) goto loc_82661160;
	// bl 0x8264ce48
	ctx.lr = 0x82661154;
	sub_8264CE48(ctx, base);
	// bl 0x8264c7e8
	ctx.lr = 0x82661158;
	sub_8264C7E8(ctx, base);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x826704e8
	ctx.lr = 0x82661160;
	sub_826704E8(ctx, base);
loc_82661160:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827938b4
	ctx.lr = 0x82661168;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_82663130) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663180
	if (!ctx.cr6.eq) goto loc_82663180;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,22084
	ctx.r10.s64 = ctx.r10.s64 + 22084;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82663164:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82663164
	if (!ctx.cr0.eq) goto loc_82663164;
	// b 0x82663264
	goto loc_82663264;
loc_82663180:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826631a4
	if (!ctx.cr6.eq) goto loc_826631A4;
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r3,r11,-6156
	ctx.r3.s64 = ctx.r11.s64 + -6156;
	// bl 0x826a1e70
	ctx.lr = 0x826631A0;
	sub_826A1E70(ctx, base);
	// b 0x82663264
	goto loc_82663264;
loc_826631A4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x826631dc
	if (!ctx.cr6.eq) goto loc_826631DC;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,22088
	ctx.r11.s64 = ctx.r11.s64 + 22088;
loc_826631C0:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x826631c0
	if (!ctx.cr0.eq) goto loc_826631C0;
	// b 0x82663264
	goto loc_82663264;
loc_826631DC:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826632bc
	if (ctx.cr6.eq) goto loc_826632BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 | 5;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x826632bc
	if (ctx.cr6.eq) goto loc_826632BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82663228
	if (!ctx.cr6.eq) goto loc_82663228;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwimi r9,r11,0,24,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF00);
	// sth r9,-6132(r10)
	REX_STORE_U16(ctx.r10.u32 + -6132, ctx.r9.u16);
	// b 0x826632c4
	goto loc_826632C4;
loc_82663228:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,7
	ctx.r11.u64 = ctx.r11.u64 | 7;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8266326c
	if (!ctx.cr6.eq) goto loc_8266326C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32119
	ctx.r10.s64 = -2104950784;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-6128
	ctx.r10.s64 = ctx.r10.s64 + -6128;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8266324C:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r9,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8266324c
	if (!ctx.cr0.eq) goto loc_8266324C;
loc_82663264:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826632c4
	goto loc_826632C4;
loc_8266326C:
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// beq cr6,0x8266327c
	if (ctx.cr6.eq) goto loc_8266327C;
	// cmpwi cr6,r3,17
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 17, ctx.xer);
	// bne cr6,0x826632a4
	if (!ctx.cr6.eq) goto loc_826632A4;
loc_8266327C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826632bc
	if (ctx.cr6.eq) goto loc_826632BC;
	// li r10,-3
	ctx.r10.s64 = -3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x826632bc
	if (ctx.cr6.gt) goto loc_826632BC;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
loc_826632A4:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82675bb0
	ctx.lr = 0x826632B8;
	sub_82675BB0(ctx, base);
	// b 0x826632c4
	goto loc_826632C4;
loc_826632BC:
	// lis r3,-32646
	ctx.r3.s64 = -2139488256;
	// ori r3,r3,4105
	ctx.r3.u64 = ctx.r3.u64 | 4105;
loc_826632C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826711D8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r7,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82671A98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-10796
	ctx.r9.s64 = ctx.r11.s64 + -10796;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82671DF8) {
	REX_FUNC_PROLOGUE();
	// clrlwi. r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82671e2c
	if (ctx.cr0.eq) goto loc_82671E2C;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// oris r11,r11,12288
	ctx.r11.u64 = ctx.r11.u64 | 805306368;
	// rlwinm. r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// bne 0x82671e24
	if (!ctx.cr0.eq) goto loc_82671E24;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// b 0x82671e44
	goto loc_82671E44;
loc_82671E24:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x82671e44
	goto loc_82671E44;
loc_82671E2C:
	// rlwinm. r10,r5,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82671e44
	if (ctx.cr0.eq) goto loc_82671E44;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
loc_82671E44:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82671e70
	if (ctx.cr6.lt) goto loc_82671E70;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r9,15(r6)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + 15);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,40(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// oris r11,r8,32768
	ctx.r11.u64 = ctx.r8.u64 | 2147483648;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x82671e78
	goto loc_82671E78;
loc_82671E70:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// oris r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 1207959552;
loc_82671E78:
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r4,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675A60) {
	REX_FUNC_PROLOGUE();
	// b 0x82678008
	sub_82678008(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675A98) {
	REX_FUNC_PROLOGUE();
	// b 0x8267e1f8
	sub_8267E1F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82675B48) {
	REX_FUNC_PROLOGUE();
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 32);
	// sth r11,4(r4)
	REX_STORE_U16(ctx.r4.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82675E60) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8266d258
	sub_8266D258(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82676010) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82676238) {
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
	ctx.lr = 0x82676240;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82676274;
	sub_826A2E60(ctx, base);
	// add r11,r31,r30
	ctx.r11.u64 = r31.u64 + r30.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82676298
	if (ctx.cr6.eq) goto loc_82676298;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
loc_82676298:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_82677E68) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x82677E70;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677E84;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r29,r31,172
	r29.s64 = r31.s64 + 172;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677E90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 448);
	// oris r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 1610612736;
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,448(r31)
	REX_STORE_U32(r31.u32 + 448, ctx.r11.u32);
	// beq 0x82677ec4
	if (ctx.cr0.eq) goto loc_82677EC4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677EB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676ea8
	ctx.lr = 0x82677EBC;
	sub_82676EA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677EC4;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82677EC4:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677ef8
	if (ctx.cr6.eq) goto loc_82677EF8;
	// addi r30,r31,312
	r30.s64 = r31.s64 + 312;
loc_82677ED4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82677190
	ctx.lr = 0x82677EDC;
	sub_82677190(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-144
	ctx.r4.s64 = ctx.r11.s64 + -144;
	// bl 0x82677508
	ctx.lr = 0x82677EEC;
	sub_82677508(ctx, base);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82677ed4
	if (!ctx.cr6.eq) goto loc_82677ED4;
loc_82677EF8:
	// lwz r3,280(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 280);
	// bl 0x8264ce68
	ctx.lr = 0x82677F00;
	sub_8264CE68(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r30,r31,300
	r30.s64 = r31.s64 + 300;
	// stw r11,280(r31)
	REX_STORE_U32(r31.u32 + 280, ctx.r11.u32);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// b 0x82677f40
	goto loc_82677F40;
loc_82677F14:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
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
	// bl 0x82676d18
	ctx.lr = 0x82677F3C;
	sub_82676D18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82677F40:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82677f14
	if (!ctx.cr6.eq) goto loc_82677F14;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// addi r30,r31,288
	r30.s64 = r31.s64 + 288;
	// b 0x82677f8c
	goto loc_82677F8C;
loc_82677F54:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
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
	// bl 0x82676d18
	ctx.lr = 0x82677F7C;
	sub_82676D18(ctx, base);
	// lwz r11,284(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 284);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,284(r31)
	REX_STORE_U32(r31.u32 + 284, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
loc_82677F8C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x82677f54
	if (!ctx.cr6.eq) goto loc_82677F54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82681670
	ctx.lr = 0x82677F9C;
	sub_82681670(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677FA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_82677FA8:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82677fc0
	if (!ctx.cr6.eq) goto loc_82677FC0;
	// lwz r11,388(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82677fec
	if (ctx.cr6.eq) goto loc_82677FEC;
loc_82677FC0:
	// cmplwi cr6,r30,1000
	ctx.cr6.compare<uint32_t>(r30.u32, 1000, ctx.xer);
	// bge cr6,0x82677fec
	if (!ctx.cr6.lt) goto loc_82677FEC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677FD0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82661180
	ctx.lr = 0x82677FDC;
	sub_82661180(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938a4
	ctx.lr = 0x82677FE4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x82677fa8
	goto loc_82677FA8;
loc_82677FEC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827938b4
	ctx.lr = 0x82677FF4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82676d18
	ctx.lr = 0x82677FFC;
	sub_82676D18(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_82681288) {
	REX_FUNC_PROLOGUE();
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// cmplwi cr6,r5,11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 11, ctx.xer);
	// beq cr6,0x8268129c
	if (ctx.cr6.eq) goto loc_8268129C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8268129C:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82681B20) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r9,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r9.u16);
	// bl 0x82680d90
	ctx.lr = 0x82681B60;
	sub_82680D90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82682DC0) {
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
	// subf r6,r4,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82682c48
	ctx.lr = 0x82682DE4;
	sub_82682C48(ctx, base);
	// std r6,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r6.u64);
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

DEFINE_REX_FUNC(sub_82684560) {
	REX_FUNC_PROLOGUE();
	// lhz r11,14(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 14);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// beq 0x82684590
	if (ctx.cr0.eq) goto loc_82684590;
	// rlwinm. r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,184(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r5,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r5.u32);
	// b 0x826845ac
	goto loc_826845AC;
loc_82684590:
	// rlwinm. r10,r11,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,188(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r5,188(r3)
	REX_STORE_U32(ctx.r3.u32 + 188, ctx.r5.u32);
loc_826845AC:
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826866D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x826866D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,6(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r28,1
	r28.s64 = 1;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r9,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// slw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r9.u8 & 0x3F));
	// lbzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + r30.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r10,r30
	REX_STORE_U8(ctx.r10.u32 + r30.u32, ctx.r9.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8268673c
	if (ctx.cr6.eq) goto loc_8268673C;
	// lhz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r10.u64;
	// extsh. r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x826867b8
	if (ctx.cr0.lt) goto loc_826867B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// b 0x826867b8
	goto loc_826867B8;
loc_8268673C:
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82686750
	if (!ctx.cr6.eq) goto loc_82686750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
loc_82686750:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi. r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bne 0x8268678c
	if (!ctx.cr0.eq) goto loc_8268678C;
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a1e70
	ctx.lr = 0x82686774;
	sub_826A1E70(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a2e60
	ctx.lr = 0x82686784;
	sub_826A2E60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// sth r11,6(r31)
	REX_STORE_U16(r31.u32 + 6, ctx.r11.u16);
loc_8268678C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 6);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// slw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r9.u8 & 0x3F));
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82686750
	if (!ctx.cr0.eq) goto loc_82686750;
loc_826867B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268C8E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb8
	ctx.lr = 0x8268C8F0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	r31.u64 = r31.u64 | 87;
	// bl 0x8268bc78
	ctx.lr = 0x8268C90C;
	sub_8268BC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8268c934
	if (ctx.cr0.eq) goto loc_8268C934;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8268C930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8268C934:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x826a1d08
	return;
}

DEFINE_REX_FUNC(sub_8268E960) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8268e9d8
	if (!ctx.cr6.eq) goto loc_8268E9D8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8268e9d8
	if (ctx.cr6.eq) goto loc_8268E9D8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_8268E98C:
	// lwz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8268e9a4
	if (ctx.cr6.eq) goto loc_8268E9A4;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x8268e9c8
	if (ctx.cr6.eq) goto loc_8268E9C8;
loc_8268E9A4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8268e98c
	if (ctx.cr6.lt) goto loc_8268E98C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268E9B8:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8268e9dc
	goto loc_8268E9DC;
loc_8268E9C8:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x8268ee00
	ctx.lr = 0x8268E9D4;
	sub_8268EE00(ctx, base);
	// b 0x8268e9b8
	goto loc_8268E9B8;
loc_8268E9D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268E9DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82694580) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x826a1ca8
	ctx.lr = 0x82694588;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2ca0
	ctx.lr = 0x82694590;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r30,40(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	f29.f64 = double(temp.f32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lfs f28,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	f28.f64 = double(temp.f32);
	// li r5,161
	ctx.r5.s64 = 161;
	// lfs f27,3704(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3704);
	f27.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lfs f26,-11520(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -11520);
	f26.f64 = double(temp.f32);
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lfsx f31,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	f31.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfsx f30,r8,r28
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	f30.f64 = double(temp.f32);
	// addi r25,r11,-150
	r25.s64 = ctx.r11.s64 + -150;
	// bl 0x82695338
	ctx.lr = 0x826945F0;
	sub_82695338(ctx, base);
	// li r10,80
	ctx.r10.s64 = 80;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfs f11,-3032(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -3032);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-3036(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -3036);
	ctx.f12.f64 = double(temp.f32);
loc_8269460C:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f12
	ctx.f13.f64 = double(float(f31.f64 * ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f9,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f30,f12
	ctx.f8.f64 = double(float(f30.f64 * ctx.f12.f64));
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r9,r10
	r30.u64 = ctx.r10.u64 - ctx.r9.u64;
	// fmadds f31,f0,f10,f13
	f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f13.f64)));
	// fmadds f30,f9,f10,f8
	f30.f64 = double(float(std::fma(ctx.f9.f64, ctx.f10.f64, ctx.f8.f64)));
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r10,r28
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f31,r10,r31
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// stfsx f30,r10,r28
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + r28.u32, temp.u32);
	// fmuls f9,f28,f31
	ctx.f9.f64 = double(float(f28.f64 * f31.f64));
	// fadds f8,f29,f31
	ctx.f8.f64 = double(float(f29.f64 + f31.f64));
	// fadds f7,f28,f30
	ctx.f7.f64 = double(float(f28.f64 + f30.f64));
	// fmuls f0,f29,f31
	ctx.f0.f64 = double(float(f29.f64 * f31.f64));
	// fmsubs f9,f29,f30,f9
	ctx.f9.f64 = double(float(std::fma(f29.f64, f30.f64, -ctx.f9.f64)));
	// fsubs f29,f8,f13
	f29.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f28,f7,f10
	f28.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// blt cr6,0x826946a4
	if (ctx.cr6.lt) goto loc_826946A4;
	// fmuls f10,f13,f27
	ctx.f10.f64 = double(float(ctx.f13.f64 * f27.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f0,f26
	ctx.f10.f64 = double(float(ctx.f0.f64 * f26.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x826946a4
	if (!ctx.cr6.gt) goto loc_826946A4;
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// fmr f26,f13
	f26.f64 = ctx.f13.f64;
loc_826946A4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bdnz 0x8269460c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8269460C;
	// srawi r11,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r11.s64 = r24.s32 >> 1;
	// stfs f29,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f28,36(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stw r27,44(r31)
	REX_STORE_U32(r31.u32 + 44, r27.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// cmpwi cr6,r27,80
	ctx.cr6.compare<int32_t>(r27.s32, 80, ctx.xer);
	// subf r11,r11,r26
	ctx.r11.u64 = r26.u64 - ctx.r11.u64;
	// ble cr6,0x82694730
	if (!ctx.cr6.gt) goto loc_82694730;
	// subfic r10,r27,160
	ctx.xer.ca = r27.u32 <= 160;
	ctx.r10.u64 = static_cast<uint64_t>(160) - r27.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f0
	ctx.f11.f64 = double(float(ctx.f0.f64));
	// lfs f0,-3040(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -3040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3720(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 40, ctx.xer);
	// ble cr6,0x82694778
	if (!ctx.cr6.gt) goto loc_82694778;
	// li r3,40
	ctx.r3.s64 = 40;
	// b 0x82694778
	goto loc_82694778;
loc_82694730:
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfs f0,-3040(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -3040);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3720(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 3720);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r3,r11
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r3,-40
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -40, ctx.xer);
	// bge cr6,0x82694778
	if (!ctx.cr6.lt) goto loc_82694778;
	// li r3,-40
	ctx.r3.s64 = -40;
loc_82694778:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x826a2cec
	ctx.lr = 0x82694784;
	// b 0x826a1cf8
	return;
}

DEFINE_REX_FUNC(sub_826A0E04) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-112
	ctx.r31.s64 = ctx.r12.s64 + -112;
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8269e1e0
	ctx.lr = 0x826A0E24;
	sub_8269E1E0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savegprlr_25) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_826A24A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cbc
	ctx.lr = 0x826A24B0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a24dc
	if (ctx.cr6.eq) goto loc_826A24DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826a24dc
	if (ctx.cr6.eq) goto loc_826A24DC;
	// lwz r29,4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x826a24e0
	goto loc_826A24E0;
loc_826A24DC:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826A24E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x826ae080
	ctx.lr = 0x826A24EC;
	sub_826AE080(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826a252c
	if (ctx.cr6.eq) goto loc_826A252C;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mulli r9,r10,20
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
loc_826A2500:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826a2520
	if (!ctx.cr6.gt) goto loc_826A2520;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x826a2530
	if (!ctx.cr6.gt) goto loc_826A2530;
loc_826A2520:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r9,-20
	ctx.r9.s64 = ctx.r9.s64 + -20;
	// bne 0x826a2500
	if (!ctx.cr0.eq) goto loc_826A2500;
loc_826A252C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_826A2530:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x826a2540
	if (!ctx.cr6.eq) goto loc_826A2540;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x826a2548
	goto loc_826A2548;
loc_826A2540:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
loc_826A2548:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826ae2d8
	ctx.lr = 0x826A2558;
	sub_826AE2D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x826a1d0c
	return;
}

DEFINE_REX_FUNC(__savevmx_115) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_98) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_826AC8F0) {
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
	ctx.lr = 0x826AC8F8;
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// mr r25,r30
	r25.u64 = r30.u64;
	// mr r16,r30
	r16.u64 = r30.u64;
	// bne cr6,0x826ac948
	if (!ctx.cr6.eq) goto loc_826AC948;
loc_826AC930:
	// bl 0x826a33d0
	ctx.lr = 0x826AC934;
	sub_826A33D0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8269cb20
	ctx.lr = 0x826AC940;
	sub_8269CB20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x826ad430
	goto loc_826AD430;
loc_826AC948:
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ac9e4
	if (!ctx.cr0.eq) goto loc_826AC9E4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826a3320
	ctx.lr = 0x826AC95C;
	sub_826A3320(ctx, base);
	// lis r11,-32106
	ctx.r11.s64 = -2104098816;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,31264
	ctx.r11.s64 = ctx.r11.s64 + 31264;
	// addi r8,r10,26400
	ctx.r8.s64 = ctx.r10.s64 + 26400;
	// beq cr6,0x826ac998
	if (ctx.cr6.eq) goto loc_826AC998;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826ac998
	if (ctx.cr6.eq) goto loc_826AC998;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(72));
	// lwzx r9,r7,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x826ac99c
	goto loc_826AC99C;
loc_826AC998:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_826AC99C:
	// lbz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826ac930
	if (!ctx.cr0.eq) goto loc_826AC930;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x826ac9d4
	if (ctx.cr6.eq) goto loc_826AC9D4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x826ac9d4
	if (ctx.cr6.eq) goto loc_826AC9D4;
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
	// b 0x826ac9d8
	goto loc_826AC9D8;
loc_826AC9D4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_826AC9D8:
	// lbz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ac930
	if (!ctx.cr0.eq) goto loc_826AC930;
loc_826AC9E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x826ac930
	if (ctx.cr6.eq) goto loc_826AC930;
	// bl 0x8269dfa8
	ctx.lr = 0x826AC9F0;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826ad3fc
	if (ctx.cr6.eq) goto loc_826AD3FC;
	// bl 0x8269dfa8
	ctx.lr = 0x826ACA00;
	sub_8269DFA8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x826ad3fc
	if (ctx.cr6.eq) goto loc_826AD3FC;
	// lbz r29,0(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 0);
	// mr r24,r30
	r24.u64 = r30.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r14,r30
	r14.u64 = r30.u64;
	// beq 0x826ad3f4
	if (ctx.cr0.eq) goto loc_826AD3F4;
	// lis r11,-32127
	ctx.r11.s64 = -2105475072;
	// lwz r21,112(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r28,112(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r19,r31,-1
	r19.s64 = r31.s64 + -1;
	// lis r15,-32248
	r15.s64 = -2113404928;
	// lis r20,-32248
	r20.s64 = -2113404928;
	// addi r23,r11,27400
	r23.s64 = ctx.r11.s64 + 27400;
	// addi r22,r10,28084
	r22.s64 = ctx.r10.s64 + 28084;
	// addi r17,r9,22912
	r17.s64 = ctx.r9.s64 + 22912;
loc_826ACA5C:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x826ad3e0
	if (ctx.cr6.lt) goto loc_826AD3E0;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x826aca88
	if (ctx.cr6.lt) goto loc_826ACA88;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x826aca88
	if (ctx.cr6.gt) goto loc_826ACA88;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x826aca8c
	goto loc_826ACA8C;
loc_826ACA88:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_826ACA8C:
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r11,9
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + r17.u32);
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x826ac930
	if (ctx.cr6.eq) goto loc_826AC930;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x826ad3c8
	if (ctx.cr6.gt) goto loc_826AD3C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826accac
	if (ctx.cr6.eq) goto loc_826ACCAC;
	// bdz 0x826acae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACAE0;
	// bdz 0x826acb00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACB00;
	// bdz 0x826acb50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACB50;
	// bdz 0x826acb9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACB9C;
	// bdz 0x826acba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACBA4;
	// bdz 0x826acbdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_826ACBDC;
	// b 0x826accf8
	goto loc_826ACCF8;
loc_826ACAE0:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r21,r27
	r21.u64 = r27.u64;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB00:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x826acb48
	if (ctx.cr6.eq) goto loc_826ACB48;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x826acb40
	if (ctx.cr6.eq) goto loc_826ACB40;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x826acb38
	if (ctx.cr6.eq) goto loc_826ACB38;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x826acb30
	if (ctx.cr6.eq) goto loc_826ACB30;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x826ad3c8
	if (!ctx.cr6.eq) goto loc_826AD3C8;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB30:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB38:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB40:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB48:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB50:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x826acb84
	if (!ctx.cr6.eq) goto loc_826ACB84;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x826ad3c8
	if (!ctx.cr6.lt) goto loc_826AD3C8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// b 0x826acb94
	goto loc_826ACB94;
loc_826ACB84:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_826ACB94:
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACB9C:
	// li r25,0
	r25.s64 = 0;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACBA4:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x826acbcc
	if (!ctx.cr6.eq) goto loc_826ACBCC;
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826ad3c8
	if (!ctx.cr6.lt) goto loc_826AD3C8;
	// li r25,-1
	r25.s64 = -1;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACBCC:
	// mulli r11,r25,10
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	r25.s64 = ctx.r11.s64 + -48;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACBDC:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x826acc2c
	if (ctx.cr6.eq) goto loc_826ACC2C;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x826acc24
	if (ctx.cr6.eq) goto loc_826ACC24;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x826acc04
	if (ctx.cr6.eq) goto loc_826ACC04;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x826ad3c8
	if (!ctx.cr6.eq) goto loc_826AD3C8;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC04:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x826acc1c
	if (!ctx.cr6.eq) goto loc_826ACC1C;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC1C:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC24:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC2C:
	// lbz r11,1(r19)
	ctx.r11.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x826acc54
	if (!ctx.cr6.eq) goto loc_826ACC54;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x826acc54
	if (!ctx.cr6.eq) goto loc_826ACC54;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC54:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x826acc74
	if (!ctx.cr6.eq) goto loc_826ACC74;
	// lbz r10,2(r19)
	ctx.r10.u64 = REX_LOAD_U8(r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x826acc74
	if (!ctx.cr6.eq) goto loc_826ACC74;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACC74:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_826ACCAC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// li r16,0
	r16.s64 = 0;
	// bl 0x826b1458
	ctx.lr = 0x826ACCBC;
	sub_826B1458(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826acce0
	if (ctx.cr0.eq) goto loc_826ACCE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a5e90
	ctx.lr = 0x826ACCD4;
	sub_826A5E90(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + r19.u32;
	r29.u64 = REX_LOAD_U8(ea);
	r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq 0x826ac930
	if (ctx.cr0.eq) goto loc_826AC930;
loc_826ACCE0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a5e90
	ctx.lr = 0x826ACCF0;
	sub_826A5E90(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x826ad3c8
	goto loc_826AD3C8;
loc_826ACCF8:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x826ad1f8
	if (ctx.cr6.gt) goto loc_826AD1F8;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,23008
	ctx.r12.s64 = ctx.r12.s64 + 23008;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32149
	ctx.r12.s64 = -2106916864;
	// addi r12,r12,-13012
	ctx.r12.s64 = ctx.r12.s64 + -13012;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_826ACF08;
	case 1:
		goto loc_826AD1F8;
	case 2:
		goto loc_826ACD2C;
	case 3:
		goto loc_826AD1F8;
	case 4:
		goto loc_826ACF08;
	case 5:
		goto loc_826AD1F8;
	case 6:
		goto loc_826ACF08;
	case 7:
		goto loc_826AD1F8;
	case 8:
		goto loc_826AD1F8;
	case 9:
		goto loc_826AD1F8;
	case 10:
		goto loc_826AD1F8;
	case 11:
		goto loc_826AD1F8;
	case 12:
		goto loc_826AD1F8;
	case 13:
		goto loc_826AD1F8;
	case 14:
		goto loc_826AD1F8;
	case 15:
		goto loc_826AD1F8;
	case 16:
		goto loc_826AD1F8;
	case 17:
		goto loc_826AD1F8;
	case 18:
		goto loc_826ACE14;
	case 19:
		goto loc_826AD1F8;
	case 20:
		goto loc_826AD1F8;
	case 21:
		goto loc_826AD1F8;
	case 22:
		goto loc_826AD1F8;
	case 23:
		goto loc_826AD048;
	case 24:
		goto loc_826AD1F8;
	case 25:
		goto loc_826ACD98;
	case 26:
		goto loc_826AD1F8;
	case 27:
		goto loc_826AD1F8;
	case 28:
		goto loc_826AD1F8;
	case 29:
		goto loc_826AD1F8;
	case 30:
		goto loc_826AD1F8;
	case 31:
		goto loc_826AD1F8;
	case 32:
		goto loc_826ACF14;
	case 33:
		goto loc_826AD1F8;
	case 34:
		goto loc_826ACD3C;
	case 35:
		goto loc_826AD038;
	case 36:
		goto loc_826ACF14;
	case 37:
		goto loc_826ACF14;
	case 38:
		goto loc_826ACF14;
	case 39:
		goto loc_826AD1F8;
	case 40:
		goto loc_826AD038;
	case 41:
		goto loc_826AD1F8;
	case 42:
		goto loc_826AD1F8;
	case 43:
		goto loc_826AD1F8;
	case 44:
		goto loc_826AD1F8;
	case 45:
		goto loc_826ACECC;
	case 46:
		goto loc_826AD080;
	case 47:
		goto loc_826AD044;
	case 48:
		goto loc_826AD1F8;
	case 49:
		goto loc_826AD1F8;
	case 50:
		goto loc_826ACE24;
	case 51:
		goto loc_826AD1F8;
	case 52:
		goto loc_826AD03C;
	case 53:
		goto loc_826AD1F8;
	case 54:
		goto loc_826AD1F8;
	case 55:
		goto loc_826AD050;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_826ACD2C:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826acd3c
	if (!ctx.cr0.eq) goto loc_826ACD3C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_826ACD3C:
	// andi. r11,r27,2064
	ctx.r11.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x826acd7c
	if (ctx.cr0.eq) goto loc_826ACD7C;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826b1450
	ctx.lr = 0x826ACD68;
	sub_826B1450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826acd8c
	if (ctx.cr0.eq) goto loc_826ACD8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x826acd8c
	goto loc_826ACD8C;
loc_826ACD7C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_826ACD8C:
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x826ad1f8
	goto loc_826AD1F8;
loc_826ACD98:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x826acde8
	if (ctx.cr6.eq) goto loc_826ACDE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x826acde8
	if (ctx.cr6.eq) goto loc_826ACDE8;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x826acddc
	if (ctx.cr0.eq) goto loc_826ACDDC;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// b 0x826ad1f4
	goto loc_826AD1F4;
loc_826ACDDC:
	// lha r7,0(r11)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x826ad1f4
	goto loc_826AD1F4;
loc_826ACDE8:
	// lwz r28,21544(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 21544);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_826ACDF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x826acdf4
	if (!ctx.cr6.eq) goto loc_826ACDF4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_826ACE08:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x826ad1f4
	goto loc_826AD1F4;
loc_826ACE14:
	// andi. r11,r27,2096
	ctx.r11.u64 = r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ace24
	if (!ctx.cr0.eq) goto loc_826ACE24;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_826ACE24:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// bne cr6,0x826ace38
	if (!ctx.cr6.eq) goto loc_826ACE38;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x826ace3c
	goto loc_826ACE3C;
loc_826ACE38:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_826ACE3C:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq 0x826ace98
	if (ctx.cr0.eq) goto loc_826ACE98;
	// bne cr6,0x826ace64
	if (!ctx.cr6.eq) goto loc_826ACE64;
	// lwz r28,21548(r15)
	r28.u64 = REX_LOAD_U32(r15.u32 + 21548);
loc_826ACE64:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x826ace84
	goto loc_826ACE84;
loc_826ACE70:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826ace8c
	if (ctx.cr0.eq) goto loc_826ACE8C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_826ACE84:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826ace70
	if (!ctx.cr6.eq) goto loc_826ACE70;
loc_826ACE8C:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// b 0x826ad1f4
	goto loc_826AD1F4;
loc_826ACE98:
	// bne cr6,0x826acea0
	if (!ctx.cr6.eq) goto loc_826ACEA0;
	// lwz r28,21544(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 21544);
loc_826ACEA0:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x826acebc
	goto loc_826ACEBC;
loc_826ACEA8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x826acec4
	if (ctx.cr0.eq) goto loc_826ACEC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_826ACEBC:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x826acea8
	if (!ctx.cr6.eq) goto loc_826ACEA8;
loc_826ACEC4:
	// subf r7,r28,r11
	ctx.r7.u64 = ctx.r11.u64 - r28.u64;
	// b 0x826ad1f4
	goto loc_826AD1F4;
loc_826ACECC:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x826a3040
	ctx.lr = 0x826ACEE0;
	sub_826A3040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x826ac930
	if (ctx.cr0.eq) goto loc_826AC930;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826acef8
	if (ctx.cr0.eq) goto loc_826ACEF8;
	// sth r24,0(r31)
	REX_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x826acefc
	goto loc_826ACEFC;
loc_826ACEF8:
	// stw r24,0(r31)
	REX_STORE_U32(r31.u32 + 0, r24.u32);
loc_826ACEFC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x826ad3b4
	goto loc_826AD3B4;
loc_826ACF08:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	r21.s64 = 1;
	// extsb r29,r11
	r29.s64 = ctx.r11.s8;
loc_826ACF14:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826acf30
	if (!ctx.cr6.lt) goto loc_826ACF30;
	// li r25,6
	r25.s64 = 6;
	// b 0x826acf80
	goto loc_826ACF80;
loc_826ACF30:
	// bne cr6,0x826acf48
	if (!ctx.cr6.eq) goto loc_826ACF48;
	// extsb r11,r29
	ctx.r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x826acf80
	if (!ctx.cr6.eq) goto loc_826ACF80;
	// li r25,1
	r25.s64 = 1;
	// b 0x826acf80
	goto loc_826ACF80;
loc_826ACF48:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x826acf54
	if (!ctx.cr6.gt) goto loc_826ACF54;
	// li r25,512
	r25.s64 = 512;
loc_826ACF54:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(r25.s32, 163, ctx.xer);
	// ble cr6,0x826acf80
	if (!ctx.cr6.gt) goto loc_826ACF80;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269d6a8
	ctx.lr = 0x826ACF68;
	sub_8269D6A8(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r14.s32, 0, ctx.xer);
	// beq 0x826acf7c
	if (ctx.cr0.eq) goto loc_826ACF7C;
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x826acf80
	goto loc_826ACF80;
loc_826ACF7C:
	// li r25,163
	r25.s64 = 163;
loc_826ACF80:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(r22.u32 + 24);
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x826ACFC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x826acfe4
	if (ctx.cr0.eq) goto loc_826ACFE4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x826acfe4
	if (!ctx.cr6.eq) goto loc_826ACFE4;
	// lwz r11,36(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826ACFE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826ACFE4:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(r31.s32, 103, ctx.xer);
	// bne cr6,0x826ad008
	if (!ctx.cr6.eq) goto loc_826AD008;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x826ad008
	if (!ctx.cr6.eq) goto loc_826AD008;
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x826AD008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_826AD008:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x826ad01c
	if (!ctx.cr6.eq) goto loc_826AD01C;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_826AD01C:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_826AD020:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x826ad020
	if (!ctx.cr6.eq) goto loc_826AD020;
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - r28.u64;
	// b 0x826ace08
	goto loc_826ACE08;
loc_826AD038:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_826AD03C:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x826ad090
	goto loc_826AD090;
loc_826AD044:
	// li r25,8
	r25.s64 = 8;
loc_826AD048:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x826ad054
	goto loc_826AD054;
loc_826AD050:
	// li r11,39
	ctx.r11.s64 = 39;
loc_826AD054:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x826ad090
	if (ctx.cr0.eq) goto loc_826AD090;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x826ad090
	goto loc_826AD090;
loc_826AD080:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x826ad090
	if (ctx.cr0.eq) goto loc_826AD090;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_826AD090:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ad0a0
	if (!ctx.cr0.eq) goto loc_826AD0A0;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad0b4
	if (ctx.cr0.eq) goto loc_826AD0B4;
loc_826AD0A0:
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x826ad104
	goto loc_826AD104;
loc_826AD0B4:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad0e4
	if (ctx.cr0.eq) goto loc_826AD0E4;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x826ad0dc
	if (ctx.cr0.eq) goto loc_826AD0DC;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x826ad104
	goto loc_826AD104;
loc_826AD0DC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x826ad104
	goto loc_826AD104;
loc_826AD0E4:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = ctx.r11.s64 + 8;
	// beq 0x826ad100
	if (ctx.cr0.eq) goto loc_826AD100;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x826ad104
	goto loc_826AD104;
loc_826AD100:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_826AD104:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x826ad11c
	if (ctx.cr0.eq) goto loc_826AD11C;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x826ad11c
	if (!ctx.cr6.lt) goto loc_826AD11C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_826AD11C:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826ad130
	if (!ctx.cr0.eq) goto loc_826AD130;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x826ad130
	if (!ctx.cr0.eq) goto loc_826AD130;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_826AD130:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bge cr6,0x826ad140
	if (!ctx.cr6.lt) goto loc_826AD140;
	// li r25,1
	r25.s64 = 1;
	// b 0x826ad150
	goto loc_826AD150;
loc_826AD140:
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(r25.s32, 512, ctx.xer);
	// ble cr6,0x826ad150
	if (!ctx.cr6.gt) goto loc_826AD150;
	// li r25,512
	r25.s64 = 512;
loc_826AD150:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x826ad160
	if (!ctx.cr6.eq) goto loc_826AD160;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_826AD160:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_826AD164:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x826ad178
	if (ctx.cr6.gt) goto loc_826AD178;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x826ad1bc
	if (ctx.cr6.eq) goto loc_826AD1BC;
loc_826AD178:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// mulld r7,r7,r10
	ctx.r7.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r10.u64);
	// subf r7,r7,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r7.u64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 ? ctx.r11.u64 / ctx.r10.u64 : 0;
	// tdllei r10,0
	if (ctx.r10.s64 == 0ll || ctx.r10.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x826ad1ac
	if (!ctx.cr6.gt) goto loc_826AD1AC;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_826AD1AC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x826ad164
	goto loc_826AD164;
loc_826AD1BC:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// beq 0x826ad1f8
	if (ctx.cr0.eq) goto loc_826AD1F8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x826ad1e8
	if (ctx.cr6.eq) goto loc_826AD1E8;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x826ad1f8
	if (ctx.cr6.eq) goto loc_826AD1F8;
loc_826AD1E8:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + r28.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	r28.u32 = ea;
loc_826AD1F4:
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
loc_826AD1F8:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x826ad3b4
	if (!ctx.cr6.eq) goto loc_826AD3B4;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad248
	if (ctx.cr0.eq) goto loc_826AD248;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad21c
	if (ctx.cr0.eq) goto loc_826AD21C;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x826ad228
	goto loc_826AD228;
loc_826AD21C:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad238
	if (ctx.cr0.eq) goto loc_826AD238;
	// li r11,43
	ctx.r11.s64 = 43;
loc_826AD228:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x826ad24c
	goto loc_826AD24C;
loc_826AD238:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad248
	if (ctx.cr0.eq) goto loc_826AD248;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x826ad228
	goto loc_826AD228;
loc_826AD248:
	// lwz r30,92(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_826AD24C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r29,r30,r11
	r29.u64 = ctx.r11.u64 - r30.u64;
	// bne 0x826ad294
	if (!ctx.cr0.eq) goto loc_826AD294;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826ad294
	if (!ctx.cr6.gt) goto loc_826AD294;
loc_826AD26C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826AD280;
	sub_826A5E90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826ad294
	if (ctx.cr6.eq) goto loc_826AD294;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826ad26c
	if (ctx.cr6.gt) goto loc_826AD26C;
loc_826AD294:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826a5f28
	ctx.lr = 0x826AD2A8;
	sub_826A5F28(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad2ec
	if (ctx.cr0.eq) goto loc_826AD2EC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x826ad2ec
	if (!ctx.cr0.eq) goto loc_826AD2EC;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826ad2ec
	if (!ctx.cr6.gt) goto loc_826AD2EC;
loc_826AD2C4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826AD2D8;
	sub_826A5E90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x826ad2ec
	if (ctx.cr6.eq) goto loc_826AD2EC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826ad2c4
	if (ctx.cr6.gt) goto loc_826AD2C4;
loc_826AD2EC:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x826ad35c
	if (ctx.cr6.eq) goto loc_826AD35C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x826ad35c
	if (!ctx.cr6.gt) goto loc_826AD35C;
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_826AD308:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + r30.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826b1450
	ctx.lr = 0x826AD320;
	sub_826B1450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x826ad350
	if (!ctx.cr0.eq) goto loc_826AD350;
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x826ad350
	if (ctx.cr6.eq) goto loc_826AD350;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x826a5f28
	ctx.lr = 0x826AD344;
	sub_826A5F28(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x826ad308
	if (!ctx.cr6.eq) goto loc_826AD308;
	// b 0x826ad36c
	goto loc_826AD36C;
loc_826AD350:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x826ad370
	goto loc_826AD370;
loc_826AD35C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a5f28
	ctx.lr = 0x826AD36C;
	sub_826A5F28(ctx, base);
loc_826AD36C:
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_826AD370:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// blt cr6,0x826ad3b4
	if (ctx.cr6.lt) goto loc_826AD3B4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x826ad3b4
	if (ctx.cr0.eq) goto loc_826AD3B4;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x826ad3b4
	if (!ctx.cr6.gt) goto loc_826AD3B4;
loc_826AD38C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x826a5e90
	ctx.lr = 0x826AD3A0;
	sub_826A5E90(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// beq cr6,0x826ad3b4
	if (ctx.cr6.eq) goto loc_826AD3B4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt cr6,0x826ad38c
	if (ctx.cr6.gt) goto loc_826AD38C;
loc_826AD3B4:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(r14.u32, 0, ctx.xer);
	// beq cr6,0x826ad3c8
	if (ctx.cr6.eq) goto loc_826AD3C8;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8269d770
	ctx.lr = 0x826AD3C4;
	sub_8269D770(ctx, base);
	// li r14,0
	r14.s64 = 0;
loc_826AD3C8:
	// lbz r29,1(r19)
	r29.u64 = REX_LOAD_U8(r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x826ad3e0
	if (ctx.cr0.eq) goto loc_826AD3E0;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// b 0x826aca5c
	goto loc_826ACA5C;
loc_826AD3E0:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x826ad3f4
	if (ctx.cr6.eq) goto loc_826AD3F4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x826ac930
	if (!ctx.cr6.eq) goto loc_826AC930;
loc_826AD3F4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x826ad430
	goto loc_826AD430;
loc_826AD3FC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8269d1a8
	ctx.lr = 0x826AD410;
	sub_8269D1A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x826ad424
	if (!ctx.cr6.eq) goto loc_826AD424;
	// li r31,511
	r31.s64 = 511;
	// stb r30,1167(r1)
	REX_STORE_U8(ctx.r1.u32 + 1167, r30.u8);
loc_826AD424:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x823ecbd8
	ctx.lr = 0x826AD42C;
	sub_823ECBD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_826AD430:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82716AE0) {
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
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82716b24
	if (ctx.cr6.eq) goto loc_82716B24;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82716B20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_82716B24:
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

DEFINE_REX_FUNC(sub_8271A6A8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,21884(r3)
	REX_STORE_U32(ctx.r3.u32 + 21884, ctx.r11.u32);
	// stw r11,3452(r3)
	REX_STORE_U32(ctx.r3.u32 + 3452, ctx.r11.u32);
	// stw r11,3464(r3)
	REX_STORE_U32(ctx.r3.u32 + 3464, ctx.r11.u32);
	// stw r11,3460(r3)
	REX_STORE_U32(ctx.r3.u32 + 3460, ctx.r11.u32);
	// stw r11,21768(r3)
	REX_STORE_U32(ctx.r3.u32 + 21768, ctx.r11.u32);
	// stw r11,22092(r3)
	REX_STORE_U32(ctx.r3.u32 + 22092, ctx.r11.u32);
	// stw r10,21900(r3)
	REX_STORE_U32(ctx.r3.u32 + 21900, ctx.r10.u32);
	// stw r11,3472(r3)
	REX_STORE_U32(ctx.r3.u32 + 3472, ctx.r11.u32);
	// stw r9,21800(r3)
	REX_STORE_U32(ctx.r3.u32 + 21800, ctx.r9.u32);
	// stw r11,404(r3)
	REX_STORE_U32(ctx.r3.u32 + 404, ctx.r11.u32);
	// stw r11,21888(r3)
	REX_STORE_U32(ctx.r3.u32 + 21888, ctx.r11.u32);
	// stw r11,21896(r3)
	REX_STORE_U32(ctx.r3.u32 + 21896, ctx.r11.u32);
	// stw r11,21892(r3)
	REX_STORE_U32(ctx.r3.u32 + 21892, ctx.r11.u32);
	// stw r11,3988(r3)
	REX_STORE_U32(ctx.r3.u32 + 3988, ctx.r11.u32);
	// stw r11,22008(r3)
	REX_STORE_U32(ctx.r3.u32 + 22008, ctx.r11.u32);
	// stw r11,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8271B250) {
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
	ctx.lr = 0x8271B258;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,2620(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2620);
	// addi r30,r11,2536
	r30.s64 = ctx.r11.s64 + 2536;
	// addi r29,r10,2368
	r29.s64 = ctx.r10.s64 + 2368;
	// addi r4,r9,29008
	ctx.r4.s64 = ctx.r9.s64 + 29008;
	// addi r11,r8,29036
	ctx.r11.s64 = ctx.r8.s64 + 29036;
	// addi r10,r7,29076
	ctx.r10.s64 = ctx.r7.s64 + 29076;
	// stw r30,2612(r31)
	REX_STORE_U32(r31.u32 + 2612, r30.u32);
	// addi r9,r6,29100
	ctx.r9.s64 = ctx.r6.s64 + 29100;
	// stw r29,2616(r31)
	REX_STORE_U32(r31.u32 + 2616, r29.u32);
	// lis r5,9356
	ctx.r5.s64 = 613154816;
	// stw r4,2596(r31)
	REX_STORE_U32(r31.u32 + 2596, ctx.r4.u32);
	// addi r8,r31,2204
	ctx.r8.s64 = r31.s64 + 2204;
	// stw r11,2600(r31)
	REX_STORE_U32(r31.u32 + 2600, ctx.r11.u32);
	// li r7,168
	ctx.r7.s64 = 168;
	// stw r10,2604(r31)
	REX_STORE_U32(r31.u32 + 2604, ctx.r10.u32);
	// li r6,98
	ctx.r6.s64 = 98;
	// stw r9,2608(r31)
	REX_STORE_U32(r31.u32 + 2608, ctx.r9.u32);
	// stw r8,2584(r31)
	REX_STORE_U32(r31.u32 + 2584, ctx.r8.u32);
	// ori r21,r5,32769
	r21.u64 = ctx.r5.u64 | 32769;
	// stw r7,2588(r31)
	REX_STORE_U32(r31.u32 + 2588, ctx.r7.u32);
	// addi r20,r31,2584
	r20.s64 = r31.s64 + 2584;
	// stw r6,2592(r31)
	REX_STORE_U32(r31.u32 + 2592, ctx.r6.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8271b2e0
	if (ctx.cr6.eq) goto loc_8271B2E0;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B2E0;
	sub_823F0350(ctx, base);
loc_8271B2E0:
	// li r26,0
	r26.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r26,2620(r31)
	REX_STORE_U32(r31.u32 + 2620, r26.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,168
	ctx.r5.s64 = 168;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B2FC;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2660(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2660);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r30,r11,2896
	r30.s64 = ctx.r11.s64 + 2896;
	// addi r29,r10,2704
	r29.s64 = ctx.r10.s64 + 2704;
	// addi r5,r9,28780
	ctx.r5.s64 = ctx.r9.s64 + 28780;
	// stw r30,2652(r31)
	REX_STORE_U32(r31.u32 + 2652, r30.u32);
	// addi r4,r8,28960
	ctx.r4.s64 = ctx.r8.s64 + 28960;
	// stw r29,2656(r31)
	REX_STORE_U32(r31.u32 + 2656, r29.u32);
	// addi r11,r7,28812
	ctx.r11.s64 = ctx.r7.s64 + 28812;
	// stw r5,2636(r31)
	REX_STORE_U32(r31.u32 + 2636, ctx.r5.u32);
	// addi r10,r6,29000
	ctx.r10.s64 = ctx.r6.s64 + 29000;
	// stw r4,2640(r31)
	REX_STORE_U32(r31.u32 + 2640, ctx.r4.u32);
	// addi r9,r31,2216
	ctx.r9.s64 = r31.s64 + 2216;
	// stw r11,2644(r31)
	REX_STORE_U32(r31.u32 + 2644, ctx.r11.u32);
	// li r8,185
	ctx.r8.s64 = 185;
	// stw r10,2648(r31)
	REX_STORE_U32(r31.u32 + 2648, ctx.r10.u32);
	// li r7,118
	ctx.r7.s64 = 118;
	// stw r9,2624(r31)
	REX_STORE_U32(r31.u32 + 2624, ctx.r9.u32);
	// addi r22,r31,2624
	r22.s64 = r31.s64 + 2624;
	// stw r8,2628(r31)
	REX_STORE_U32(r31.u32 + 2628, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,2632(r31)
	REX_STORE_U32(r31.u32 + 2632, ctx.r7.u32);
	// beq cr6,0x8271b37c
	if (ctx.cr6.eq) goto loc_8271B37C;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B37C;
	sub_823F0350(ctx, base);
loc_8271B37C:
	// stw r26,2660(r31)
	REX_STORE_U32(r31.u32 + 2660, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,185
	ctx.r5.s64 = 185;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B394;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2700(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2700);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r30,r11,3240
	r30.s64 = ctx.r11.s64 + 3240;
	// addi r29,r10,3088
	r29.s64 = ctx.r10.s64 + 3088;
	// addi r5,r9,29192
	ctx.r5.s64 = ctx.r9.s64 + 29192;
	// stw r30,2692(r31)
	REX_STORE_U32(r31.u32 + 2692, r30.u32);
	// addi r4,r8,29224
	ctx.r4.s64 = ctx.r8.s64 + 29224;
	// stw r29,2696(r31)
	REX_STORE_U32(r31.u32 + 2696, r29.u32);
	// addi r11,r7,29268
	ctx.r11.s64 = ctx.r7.s64 + 29268;
	// stw r5,2676(r31)
	REX_STORE_U32(r31.u32 + 2676, ctx.r5.u32);
	// addi r10,r6,29284
	ctx.r10.s64 = ctx.r6.s64 + 29284;
	// stw r4,2680(r31)
	REX_STORE_U32(r31.u32 + 2680, ctx.r4.u32);
	// addi r9,r31,2228
	ctx.r9.s64 = r31.s64 + 2228;
	// stw r11,2684(r31)
	REX_STORE_U32(r31.u32 + 2684, ctx.r11.u32);
	// li r8,148
	ctx.r8.s64 = 148;
	// stw r10,2688(r31)
	REX_STORE_U32(r31.u32 + 2688, ctx.r10.u32);
	// li r7,80
	ctx.r7.s64 = 80;
	// stw r9,2664(r31)
	REX_STORE_U32(r31.u32 + 2664, ctx.r9.u32);
	// addi r23,r31,2664
	r23.s64 = r31.s64 + 2664;
	// stw r8,2668(r31)
	REX_STORE_U32(r31.u32 + 2668, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,2672(r31)
	REX_STORE_U32(r31.u32 + 2672, ctx.r7.u32);
	// beq cr6,0x8271b414
	if (ctx.cr6.eq) goto loc_8271B414;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B414;
	sub_823F0350(ctx, base);
loc_8271B414:
	// stw r26,2700(r31)
	REX_STORE_U32(r31.u32 + 2700, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B42C;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2740(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2740);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r30,r11,3528
	r30.s64 = ctx.r11.s64 + 3528;
	// addi r29,r10,3392
	r29.s64 = ctx.r10.s64 + 3392;
	// addi r5,r9,29112
	ctx.r5.s64 = ctx.r9.s64 + 29112;
	// stw r30,2732(r31)
	REX_STORE_U32(r31.u32 + 2732, r30.u32);
	// addi r4,r8,29136
	ctx.r4.s64 = ctx.r8.s64 + 29136;
	// stw r29,2736(r31)
	REX_STORE_U32(r31.u32 + 2736, r29.u32);
	// addi r11,r7,29164
	ctx.r11.s64 = ctx.r7.s64 + 29164;
	// stw r5,2716(r31)
	REX_STORE_U32(r31.u32 + 2716, ctx.r5.u32);
	// addi r10,r6,29184
	ctx.r10.s64 = ctx.r6.s64 + 29184;
	// stw r4,2720(r31)
	REX_STORE_U32(r31.u32 + 2720, ctx.r4.u32);
	// addi r9,r31,2240
	ctx.r9.s64 = r31.s64 + 2240;
	// stw r11,2724(r31)
	REX_STORE_U32(r31.u32 + 2724, ctx.r11.u32);
	// li r8,132
	ctx.r8.s64 = 132;
	// stw r10,2728(r31)
	REX_STORE_U32(r31.u32 + 2728, ctx.r10.u32);
	// li r7,84
	ctx.r7.s64 = 84;
	// stw r9,2704(r31)
	REX_STORE_U32(r31.u32 + 2704, ctx.r9.u32);
	// addi r24,r31,2704
	r24.s64 = r31.s64 + 2704;
	// stw r8,2708(r31)
	REX_STORE_U32(r31.u32 + 2708, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,2712(r31)
	REX_STORE_U32(r31.u32 + 2712, ctx.r7.u32);
	// beq cr6,0x8271b4ac
	if (ctx.cr6.eq) goto loc_8271B4AC;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B4AC;
	sub_823F0350(ctx, base);
loc_8271B4AC:
	// stw r26,2740(r31)
	REX_STORE_U32(r31.u32 + 2740, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,132
	ctx.r5.s64 = 132;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B4C4;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2780(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2780);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r30,r11,4352
	r30.s64 = ctx.r11.s64 + 4352;
	// addi r29,r10,4456
	r29.s64 = ctx.r10.s64 + 4456;
	// addi r5,r9,29372
	ctx.r5.s64 = ctx.r9.s64 + 29372;
	// stw r30,2772(r31)
	REX_STORE_U32(r31.u32 + 2772, r30.u32);
	// addi r4,r8,29400
	ctx.r4.s64 = ctx.r8.s64 + 29400;
	// stw r29,2776(r31)
	REX_STORE_U32(r31.u32 + 2776, r29.u32);
	// li r28,102
	r28.s64 = 102;
	// stw r5,2756(r31)
	REX_STORE_U32(r31.u32 + 2756, ctx.r5.u32);
	// addi r11,r7,29444
	ctx.r11.s64 = ctx.r7.s64 + 29444;
	// stw r4,2760(r31)
	REX_STORE_U32(r31.u32 + 2760, ctx.r4.u32);
	// addi r10,r6,29460
	ctx.r10.s64 = ctx.r6.s64 + 29460;
	// stw r28,2748(r31)
	REX_STORE_U32(r31.u32 + 2748, r28.u32);
	// addi r9,r31,2252
	ctx.r9.s64 = r31.s64 + 2252;
	// stw r11,2764(r31)
	REX_STORE_U32(r31.u32 + 2764, ctx.r11.u32);
	// li r8,57
	ctx.r8.s64 = 57;
	// stw r10,2768(r31)
	REX_STORE_U32(r31.u32 + 2768, ctx.r10.u32);
	// addi r25,r31,2744
	r25.s64 = r31.s64 + 2744;
	// stw r9,2744(r31)
	REX_STORE_U32(r31.u32 + 2744, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,2752(r31)
	REX_STORE_U32(r31.u32 + 2752, ctx.r8.u32);
	// beq cr6,0x8271b544
	if (ctx.cr6.eq) goto loc_8271B544;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B544;
	sub_823F0350(ctx, base);
loc_8271B544:
	// stw r26,2780(r31)
	REX_STORE_U32(r31.u32 + 2780, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,102
	ctx.r5.s64 = 102;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B55C;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2820(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2820);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r28,2788(r31)
	REX_STORE_U32(r31.u32 + 2788, r28.u32);
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r30,r11,4560
	r30.s64 = ctx.r11.s64 + 4560;
	// addi r29,r10,4664
	r29.s64 = ctx.r10.s64 + 4664;
	// addi r5,r9,29292
	ctx.r5.s64 = ctx.r9.s64 + 29292;
	// stw r30,2812(r31)
	REX_STORE_U32(r31.u32 + 2812, r30.u32);
	// addi r4,r8,29308
	ctx.r4.s64 = ctx.r8.s64 + 29308;
	// stw r29,2816(r31)
	REX_STORE_U32(r31.u32 + 2816, r29.u32);
	// addi r11,r7,29332
	ctx.r11.s64 = ctx.r7.s64 + 29332;
	// stw r5,2796(r31)
	REX_STORE_U32(r31.u32 + 2796, ctx.r5.u32);
	// addi r10,r6,29360
	ctx.r10.s64 = ctx.r6.s64 + 29360;
	// stw r4,2800(r31)
	REX_STORE_U32(r31.u32 + 2800, ctx.r4.u32);
	// addi r9,r31,2264
	ctx.r9.s64 = r31.s64 + 2264;
	// stw r11,2804(r31)
	REX_STORE_U32(r31.u32 + 2804, ctx.r11.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,2808(r31)
	REX_STORE_U32(r31.u32 + 2808, ctx.r10.u32);
	// addi r27,r31,2784
	r27.s64 = r31.s64 + 2784;
	// stw r9,2784(r31)
	REX_STORE_U32(r31.u32 + 2784, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r8,2792(r31)
	REX_STORE_U32(r31.u32 + 2792, ctx.r8.u32);
	// beq cr6,0x8271b5d8
	if (ctx.cr6.eq) goto loc_8271B5D8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B5D8;
	sub_823F0350(ctx, base);
loc_8271B5D8:
	// stw r26,2820(r31)
	REX_STORE_U32(r31.u32 + 2820, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,102
	ctx.r5.s64 = 102;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B5F0;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2900(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2900);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r29,r11,3840
	r29.s64 = ctx.r11.s64 + 3840;
	// addi r28,r10,3664
	r28.s64 = ctx.r10.s64 + 3664;
	// addi r5,r9,29568
	ctx.r5.s64 = ctx.r9.s64 + 29568;
	// stw r29,2892(r31)
	REX_STORE_U32(r31.u32 + 2892, r29.u32);
	// addi r4,r8,29596
	ctx.r4.s64 = ctx.r8.s64 + 29596;
	// stw r28,2896(r31)
	REX_STORE_U32(r31.u32 + 2896, r28.u32);
	// addi r11,r7,29628
	ctx.r11.s64 = ctx.r7.s64 + 29628;
	// stw r5,2876(r31)
	REX_STORE_U32(r31.u32 + 2876, ctx.r5.u32);
	// addi r10,r6,29664
	ctx.r10.s64 = ctx.r6.s64 + 29664;
	// stw r4,2880(r31)
	REX_STORE_U32(r31.u32 + 2880, ctx.r4.u32);
	// addi r9,r31,2452
	ctx.r9.s64 = r31.s64 + 2452;
	// stw r11,2884(r31)
	REX_STORE_U32(r31.u32 + 2884, ctx.r11.u32);
	// li r8,174
	ctx.r8.s64 = 174;
	// stw r10,2888(r31)
	REX_STORE_U32(r31.u32 + 2888, ctx.r10.u32);
	// li r7,108
	ctx.r7.s64 = 108;
	// stw r9,2864(r31)
	REX_STORE_U32(r31.u32 + 2864, ctx.r9.u32);
	// addi r30,r31,2864
	r30.s64 = r31.s64 + 2864;
	// stw r8,2868(r31)
	REX_STORE_U32(r31.u32 + 2868, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,2872(r31)
	REX_STORE_U32(r31.u32 + 2872, ctx.r7.u32);
	// beq cr6,0x8271b670
	if (ctx.cr6.eq) goto loc_8271B670;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B670;
	sub_823F0350(ctx, base);
loc_8271B670:
	// stw r26,2900(r31)
	REX_STORE_U32(r31.u32 + 2900, r26.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,174
	ctx.r5.s64 = 174;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B688;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r3,2860(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 2860);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,-32247
	ctx.r8.s64 = -2113339392;
	// lis r7,-32247
	ctx.r7.s64 = -2113339392;
	// lis r6,-32247
	ctx.r6.s64 = -2113339392;
	// addi r29,r11,4184
	r29.s64 = ctx.r11.s64 + 4184;
	// addi r28,r10,4016
	r28.s64 = ctx.r10.s64 + 4016;
	// addi r5,r9,29464
	ctx.r5.s64 = ctx.r9.s64 + 29464;
	// stw r29,2852(r31)
	REX_STORE_U32(r31.u32 + 2852, r29.u32);
	// addi r4,r8,29480
	ctx.r4.s64 = ctx.r8.s64 + 29480;
	// stw r28,2856(r31)
	REX_STORE_U32(r31.u32 + 2856, r28.u32);
	// addi r11,r7,29500
	ctx.r11.s64 = ctx.r7.s64 + 29500;
	// stw r5,2836(r31)
	REX_STORE_U32(r31.u32 + 2836, ctx.r5.u32);
	// addi r10,r6,29560
	ctx.r10.s64 = ctx.r6.s64 + 29560;
	// stw r4,2840(r31)
	REX_STORE_U32(r31.u32 + 2840, ctx.r4.u32);
	// addi r9,r31,2276
	ctx.r9.s64 = r31.s64 + 2276;
	// stw r11,2844(r31)
	REX_STORE_U32(r31.u32 + 2844, ctx.r11.u32);
	// li r8,162
	ctx.r8.s64 = 162;
	// stw r10,2848(r31)
	REX_STORE_U32(r31.u32 + 2848, ctx.r10.u32);
	// li r7,125
	ctx.r7.s64 = 125;
	// stw r9,2824(r31)
	REX_STORE_U32(r31.u32 + 2824, ctx.r9.u32);
	// addi r30,r31,2824
	r30.s64 = r31.s64 + 2824;
	// stw r8,2828(r31)
	REX_STORE_U32(r31.u32 + 2828, ctx.r8.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,2832(r31)
	REX_STORE_U32(r31.u32 + 2832, ctx.r7.u32);
	// beq cr6,0x8271b708
	if (ctx.cr6.eq) goto loc_8271B708;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x823f0350
	ctx.lr = 0x8271B708;
	sub_823F0350(ctx, base);
loc_8271B708:
	// stw r26,2860(r31)
	REX_STORE_U32(r31.u32 + 2860, r26.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,162
	ctx.r5.s64 = 162;
	// bl 0x8271b1c0
	ctx.lr = 0x8271B720;
	sub_8271B1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8271b7a4
	if (!ctx.cr6.eq) goto loc_8271B7A4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r23,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, r23.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r20,2932(r31)
	REX_STORE_U32(r31.u32 + 2932, r20.u32);
	// addi r7,r11,6976
	ctx.r7.s64 = ctx.r11.s64 + 6976;
	// stw r25,2936(r31)
	REX_STORE_U32(r31.u32 + 2936, r25.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// stw r24,2940(r31)
	REX_STORE_U32(r31.u32 + 2940, r24.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// stw r7,2044(r31)
	REX_STORE_U32(r31.u32 + 2044, ctx.r7.u32);
	// addi r6,r10,8080
	ctx.r6.s64 = ctx.r10.s64 + 8080;
	// stw r22,2944(r31)
	REX_STORE_U32(r31.u32 + 2944, r22.u32);
	// addi r5,r9,4768
	ctx.r5.s64 = ctx.r9.s64 + 4768;
	// stw r27,2948(r31)
	REX_STORE_U32(r31.u32 + 2948, r27.u32);
	// addi r4,r8,5872
	ctx.r4.s64 = ctx.r8.s64 + 5872;
	// stw r6,2048(r31)
	REX_STORE_U32(r31.u32 + 2048, ctx.r6.u32);
	// addi r3,r31,2064
	ctx.r3.s64 = r31.s64 + 2064;
	// stw r5,2052(r31)
	REX_STORE_U32(r31.u32 + 2052, ctx.r5.u32);
	// addi r11,r31,2076
	ctx.r11.s64 = r31.s64 + 2076;
	// stw r4,2056(r31)
	REX_STORE_U32(r31.u32 + 2056, ctx.r4.u32);
	// addi r10,r31,2088
	ctx.r10.s64 = r31.s64 + 2088;
	// stw r3,2124(r31)
	REX_STORE_U32(r31.u32 + 2124, ctx.r3.u32);
	// addi r9,r31,2100
	ctx.r9.s64 = r31.s64 + 2100;
	// stw r11,2128(r31)
	REX_STORE_U32(r31.u32 + 2128, ctx.r11.u32);
	// addi r8,r31,2012
	ctx.r8.s64 = r31.s64 + 2012;
	// stw r10,2132(r31)
	REX_STORE_U32(r31.u32 + 2132, ctx.r10.u32);
	// addi r7,r31,2024
	ctx.r7.s64 = r31.s64 + 2024;
	// stw r9,2136(r31)
	REX_STORE_U32(r31.u32 + 2136, ctx.r9.u32);
	// stw r8,2036(r31)
	REX_STORE_U32(r31.u32 + 2036, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,2040(r31)
	REX_STORE_U32(r31.u32 + 2040, ctx.r7.u32);
loc_8271B7A4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x826a1ce8
	return;
}

DEFINE_REX_FUNC(sub_8273FB88) {
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
	ctx.lr = 0x8273FB90;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r27,0
	r27.s64 = 0;
	// lwz r9,3744(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3744);
	// li r22,1
	r22.s64 = 1;
	// lwz r30,84(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r15,r9,r10
	r15.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r10,3752(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3752);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r8,3748(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3748);
	// mr r28,r27
	r28.u64 = r27.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r27,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r14,r8,r11
	r14.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8273fc3c
	if (!ctx.cr6.lt) goto loc_8273FC3C;
loc_8273FBE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8273fc3c
	if (ctx.cr6.eq) goto loc_8273FC3C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// ld r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r3,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// std r10,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// bge 0x8273fc2c
	if (!ctx.cr0.lt) goto loc_8273FC2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273FC2C;
	sub_82725E38(ctx, base);
loc_8273FC2C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8273fbe4
	if (ctx.cr6.gt) goto loc_8273FBE4;
loc_8273FC3C:
	// subfic r11,r29,64
	ctx.xer.ca = r29.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r29.u64;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
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
	// stw r6,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r29,r11,r28
	r29.u64 = ctx.r11.u64 + r28.u64;
	// std r4,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r4.u64);
	// bge 0x8273fc74
	if (!ctx.cr0.lt) goto loc_8273FC74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82725e38
	ctx.lr = 0x8273FC74;
	sub_82725E38(ctx, base);
loc_8273FC74:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,15504(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15504);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - r29.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stw r9,1984(r31)
	REX_STORE_U32(r31.u32 + 1984, ctx.r9.u32);
	// blt cr6,0x8273fc9c
	if (ctx.cr6.lt) goto loc_8273FC9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x827035c8
	ctx.lr = 0x8273FC98;
	sub_827035C8(ctx, base);
	// b 0x8273fcbc
	goto loc_8273FCBC;
loc_8273FC9C:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r9.u32);
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r8,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r8.u32);
	// stw r7,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r7.u32);
loc_8273FCBC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r3,1996(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1996);
	// bl 0x8276fa60
	ctx.lr = 0x8273FCCC;
	sub_8276FA60(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r11,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r11.u32);
	// ble cr6,0x8273fcf4
	if (!ctx.cr6.gt) goto loc_8273FCF4;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r9.u32);
loc_8273FCF4:
	// lwz r8,300(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 300);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,1768(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r16,r7,r11
	r16.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r17,r6,r8
	r17.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x826a2e60
	ctx.lr = 0x8273FD4C;
	sub_826A2E60(ctx, base);
	// lis r11,-32119
	ctx.r11.s64 = -2104950784;
	// lwz r10,1824(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1824);
	// addi r11,r11,14260
	ctx.r11.s64 = ctx.r11.s64 + 14260;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1816(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1816);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1820(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1820);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r8,1788(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8273fd90
	if (ctx.cr6.eq) goto loc_8273FD90;
	// lwz r10,1828(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1828);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1804(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1804);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_8273FD90:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r29,r27
	r29.u64 = r27.u64;
	// lwz r10,1988(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1988);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,1996(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1996);
	// addi r25,r11,12
	r25.s64 = ctx.r11.s64 + 12;
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r26,84(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r24,1768(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1768);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8274004c
	if (!ctx.cr6.gt) goto loc_8274004C;
	// li r18,255
	r18.s64 = 255;
loc_8273FDC4:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// srawi r23,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r23.s64 = r29.s32 >> 1;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r6,r23
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r23.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r10,r15
	r19.u64 = ctx.r10.u64 + r15.u64;
	// add r21,r11,r14
	r21.u64 = ctx.r11.u64 + r14.u64;
	// add r20,r11,r7
	r20.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82740038
	if (!ctx.cr6.gt) goto loc_82740038;
loc_8273FE04:
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,1992(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1992);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8276f248
	ctx.lr = 0x8273FE20;
	sub_8276F248(ctx, base);
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,1988(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1988);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8273d990
	ctx.lr = 0x8273FE54;
	sub_8273D990(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8273fe90
	if (ctx.cr6.eq) goto loc_8273FE90;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,16(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x827702e0
	ctx.lr = 0x8273FE74;
	sub_827702E0(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8274007c
	if (!ctx.cr6.eq) goto loc_8274007C;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_8273FE90:
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r8,296(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 296);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// bl 0x8273f748
	ctx.lr = 0x8273FEE0;
	sub_8273F748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82740070
	if (!ctx.cr6.eq) goto loc_82740070;
	// and r11,r30,r29
	ctx.r11.u64 = r30.u64 & r29.u64;
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740024
	if (ctx.cr6.eq) goto loc_82740024;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,1992(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1992);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8276f450
	ctx.lr = 0x8273FF0C;
	sub_8276F450(ctx, base);
	// lwz r4,300(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 300);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r3,1988(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1988);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x8273d990
	ctx.lr = 0x8273FF4C;
	sub_8273D990(ctx, base);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// lwz r8,300(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x8273f748
	ctx.lr = 0x8273FF94;
	sub_8273F748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82740070
	if (!ctx.cr6.eq) goto loc_82740070;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,1988(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1988);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8273d990
	ctx.lr = 0x8273FFCC;
	sub_8273D990(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r8,300(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x8273f748
	ctx.lr = 0x82740014;
	sub_8273F748(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82740070
	if (!ctx.cr6.eq) goto loc_82740070;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
loc_82740024:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273fe04
	if (ctx.cr6.lt) goto loc_8273FE04;
loc_82740038:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8273fdc4
	if (ctx.cr6.lt) goto loc_8273FDC4;
loc_8274004C:
	// lwz r11,15540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82740094
	if (ctx.cr6.eq) goto loc_82740094;
	// stw r27,15560(r31)
	REX_STORE_U32(r31.u32 + 15560, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r27.u32);
	// stw r27,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r27.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_82740070:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82740088
	if (ctx.cr6.eq) goto loc_82740088;
loc_8274007C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_82740088:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
loc_82740094:
	// stw r22,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,15596(r31)
	REX_STORE_U32(r31.u32 + 15596, r27.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_8275BD40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x826a1cb4
	ctx.lr = 0x8275BD48;
	// li r11,8
	ctx.r11.s64 = 8;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// addi r31,r31,-2
	r31.s64 = r31.s64 + -2;
loc_8275BD68:
	// lbzx r30,r10,r31
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + r31.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r29,-2(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + -2);
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r28,1(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r27,0(r5)
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rotlwi r29,r28,16
	r29.u64 = __builtin_rotateleft32(r28.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r27
	r29.u64 = r29.u64 | r27.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lbzx r29,r5,r8
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r28,1(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stwx r30,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, r30.u32);
	// lbz r30,-1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r29,3(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r28,2(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// lbz r27,-1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, r29.u32);
	// lbz r29,2(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r28,3(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r30.u32);
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,5(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 5);
	// lbz r28,4(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 4);
	// lbz r27,0(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r29.u32);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r29,7(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r28,6(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 6);
	// lbz r27,1(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, r29.u32);
	// lbz r29,6(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// lbz r28,7(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r30.u32);
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r29,9(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 9);
	// lbz r28,8(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 8);
	// lbz r27,2(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, r29.u32);
	// lbz r29,9(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r28,8(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, r30.u32);
	// lbz r30,3(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r29,11(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 11);
	// lbz r28,10(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 10);
	// lbz r27,3(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, r29.u32);
	// lbz r29,10(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 10);
	// lbz r28,11(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 11);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r30.u32);
	// lbz r30,4(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lbz r29,13(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 13);
	// lbz r28,12(r5)
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + 12);
	// lbz r27,4(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// or r30,r27,r30
	r30.u64 = r27.u64 | r30.u64;
	// rotlwi r29,r29,16
	r29.u64 = __builtin_rotateleft32(r29.u32, 16);
	// rlwinm r30,r30,8,0,23
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	r29.u64 = r29.u64 | r28.u64;
	// or r29,r29,r30
	r29.u64 = r29.u64 | r30.u64;
	// stw r29,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, r29.u32);
	// lbz r29,12(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// lbz r28,13(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 13);
	// rotlwi r28,r28,16
	r28.u64 = __builtin_rotateleft32(r28.u32, 16);
	// or r29,r28,r29
	r29.u64 = r28.u64 | r29.u64;
	// or r30,r29,r30
	r30.u64 = r29.u64 | r30.u64;
	// stw r30,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, r30.u32);
	// lbz r30,15(r5)
	r30.u64 = REX_LOAD_U8(ctx.r5.u32 + 15);
	// lbz r28,5(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r29,14(r5)
	r29.u64 = REX_LOAD_U8(ctx.r5.u32 + 14);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r27,5(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// rotlwi r27,r27,16
	r27.u64 = __builtin_rotateleft32(r27.u32, 16);
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// or r28,r27,r28
	r28.u64 = r27.u64 | r28.u64;
	// or r30,r30,r29
	r30.u64 = r30.u64 | r29.u64;
	// rlwinm r28,r28,8,0,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// or r30,r30,r28
	r30.u64 = r30.u64 | r28.u64;
	// stw r30,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, r30.u32);
	// add r4,r3,r6
	ctx.r4.u64 = ctx.r3.u64 + ctx.r6.u64;
	// lbz r30,15(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 15);
	// rotlwi r30,r30,16
	r30.u64 = __builtin_rotateleft32(r30.u32, 16);
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// or r11,r30,r11
	ctx.r11.u64 = r30.u64 | ctx.r11.u64;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | r28.u64;
	// stw r11,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// bdnz 0x8275bd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8275BD68;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8276B1F0) {
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
	ctx.lr = 0x8276B1F8;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r31,0
	r31.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// stb r11,160(r1)
	REX_STORE_U8(ctx.r1.u32 + 160, ctx.r11.u8);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r31,161(r1)
	REX_STORE_U8(ctx.r1.u32 + 161, r31.u8);
	// li r23,1
	r23.s64 = 1;
	// stb r11,162(r1)
	REX_STORE_U8(ctx.r1.u32 + 162, ctx.r11.u8);
	// li r29,2
	r29.s64 = 2;
	// stb r11,164(r1)
	REX_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// li r30,5
	r30.s64 = 5;
	// stb r23,163(r1)
	REX_STORE_U8(ctx.r1.u32 + 163, r23.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r29,165(r1)
	REX_STORE_U8(ctx.r1.u32 + 165, r29.u8);
	// li r5,10
	ctx.r5.s64 = 10;
	// stb r11,166(r1)
	REX_STORE_U8(ctx.r1.u32 + 166, ctx.r11.u8);
	// li r10,12
	ctx.r10.s64 = 12;
	// stb r11,168(r1)
	REX_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stb r8,169(r1)
	REX_STORE_U8(ctx.r1.u32 + 169, ctx.r8.u8);
	// li r24,3
	r24.s64 = 3;
	// stb r11,170(r1)
	REX_STORE_U8(ctx.r1.u32 + 170, ctx.r11.u8);
	// li r25,7
	r25.s64 = 7;
	// stb r30,171(r1)
	REX_STORE_U8(ctx.r1.u32 + 171, r30.u8);
	// li r4,9
	ctx.r4.s64 = 9;
	// stb r24,167(r1)
	REX_STORE_U8(ctx.r1.u32 + 167, r24.u8);
	// li r26,11
	r26.s64 = 11;
	// stb r11,172(r1)
	REX_STORE_U8(ctx.r1.u32 + 172, ctx.r11.u8);
	// li r6,13
	ctx.r6.s64 = 13;
	// stb r3,173(r1)
	REX_STORE_U8(ctx.r1.u32 + 173, ctx.r3.u8);
	// li r27,15
	r27.s64 = 15;
	// stb r11,174(r1)
	REX_STORE_U8(ctx.r1.u32 + 174, ctx.r11.u8);
	// li r28,17
	r28.s64 = 17;
	// stb r25,175(r1)
	REX_STORE_U8(ctx.r1.u32 + 175, r25.u8);
	// li r17,20
	r17.s64 = 20;
	// stb r11,128(r1)
	REX_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// li r18,21
	r18.s64 = 21;
	// stb r9,129(r1)
	REX_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
	// stb r11,130(r1)
	REX_STORE_U8(ctx.r1.u32 + 130, ctx.r11.u8);
	// li r19,24
	r19.s64 = 24;
	// stb r4,131(r1)
	REX_STORE_U8(ctx.r1.u32 + 131, ctx.r4.u8);
	// li r20,25
	r20.s64 = 25;
	// stb r11,132(r1)
	REX_STORE_U8(ctx.r1.u32 + 132, ctx.r11.u8);
	// li r21,28
	r21.s64 = 28;
	// stb r5,133(r1)
	REX_STORE_U8(ctx.r1.u32 + 133, ctx.r5.u8);
	// li r22,29
	r22.s64 = 29;
	// stb r11,134(r1)
	REX_STORE_U8(ctx.r1.u32 + 134, ctx.r11.u8);
	// stb r26,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r26.u8);
	// stb r11,136(r1)
	REX_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// stb r10,137(r1)
	REX_STORE_U8(ctx.r1.u32 + 137, ctx.r10.u8);
	// stb r11,138(r1)
	REX_STORE_U8(ctx.r1.u32 + 138, ctx.r11.u8);
	// stb r6,139(r1)
	REX_STORE_U8(ctx.r1.u32 + 139, ctx.r6.u8);
	// stb r11,140(r1)
	REX_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r7,141(r1)
	REX_STORE_U8(ctx.r1.u32 + 141, ctx.r7.u8);
	// stb r11,142(r1)
	REX_STORE_U8(ctx.r1.u32 + 142, ctx.r11.u8);
	// stb r27,143(r1)
	REX_STORE_U8(ctx.r1.u32 + 143, r27.u8);
	// stb r11,224(r1)
	REX_STORE_U8(ctx.r1.u32 + 224, ctx.r11.u8);
	// stb r31,225(r1)
	REX_STORE_U8(ctx.r1.u32 + 225, r31.u8);
	// stb r11,226(r1)
	REX_STORE_U8(ctx.r1.u32 + 226, ctx.r11.u8);
	// stb r29,227(r1)
	REX_STORE_U8(ctx.r1.u32 + 227, r29.u8);
	// stb r11,228(r1)
	REX_STORE_U8(ctx.r1.u32 + 228, ctx.r11.u8);
	// stb r8,229(r1)
	REX_STORE_U8(ctx.r1.u32 + 229, ctx.r8.u8);
	// stb r11,230(r1)
	REX_STORE_U8(ctx.r1.u32 + 230, ctx.r11.u8);
	// stb r3,231(r1)
	REX_STORE_U8(ctx.r1.u32 + 231, ctx.r3.u8);
	// stb r11,232(r1)
	REX_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// stb r9,233(r1)
	REX_STORE_U8(ctx.r1.u32 + 233, ctx.r9.u8);
	// stb r11,234(r1)
	REX_STORE_U8(ctx.r1.u32 + 234, ctx.r11.u8);
	// stb r5,235(r1)
	REX_STORE_U8(ctx.r1.u32 + 235, ctx.r5.u8);
	// stb r11,236(r1)
	REX_STORE_U8(ctx.r1.u32 + 236, ctx.r11.u8);
	// stb r10,237(r1)
	REX_STORE_U8(ctx.r1.u32 + 237, ctx.r10.u8);
	// stb r11,238(r1)
	REX_STORE_U8(ctx.r1.u32 + 238, ctx.r11.u8);
	// stb r7,239(r1)
	REX_STORE_U8(ctx.r1.u32 + 239, ctx.r7.u8);
	// stb r31,192(r1)
	REX_STORE_U8(ctx.r1.u32 + 192, r31.u8);
	// stb r23,193(r1)
	REX_STORE_U8(ctx.r1.u32 + 193, r23.u8);
	// stb r11,194(r1)
	REX_STORE_U8(ctx.r1.u32 + 194, ctx.r11.u8);
	// stb r28,195(r1)
	REX_STORE_U8(ctx.r1.u32 + 195, r28.u8);
	// stb r8,196(r1)
	REX_STORE_U8(ctx.r1.u32 + 196, ctx.r8.u8);
	// stb r30,197(r1)
	REX_STORE_U8(ctx.r1.u32 + 197, r30.u8);
	// stb r17,198(r1)
	REX_STORE_U8(ctx.r1.u32 + 198, r17.u8);
	// stb r18,199(r1)
	REX_STORE_U8(ctx.r1.u32 + 199, r18.u8);
	// stb r9,200(r1)
	REX_STORE_U8(ctx.r1.u32 + 200, ctx.r9.u8);
	// stb r23,177(r1)
	REX_STORE_U8(ctx.r1.u32 + 177, r23.u8);
	// lis r14,-32119
	r14.s64 = -2104950784;
	// stb r23,209(r1)
	REX_STORE_U8(ctx.r1.u32 + 209, r23.u8);
	// li r23,18
	r23.s64 = 18;
	// stb r28,159(r1)
	REX_STORE_U8(ctx.r1.u32 + 159, r28.u8);
	// li r15,22
	r15.s64 = 22;
	// stb r23,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, r23.u8);
	// li r23,26
	r23.s64 = 26;
	// stb r28,185(r1)
	REX_STORE_U8(ctx.r1.u32 + 185, r28.u8);
	// li r16,23
	r16.s64 = 23;
	// stb r28,217(r1)
	REX_STORE_U8(ctx.r1.u32 + 217, r28.u8);
	// li r28,19
	r28.s64 = 19;
	// stb r8,146(r1)
	REX_STORE_U8(ctx.r1.u32 + 146, ctx.r8.u8);
	// stb r28,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// li r28,27
	r28.s64 = 27;
	// stb r8,180(r1)
	REX_STORE_U8(ctx.r1.u32 + 180, ctx.r8.u8);
	// stb r8,210(r1)
	REX_STORE_U8(ctx.r1.u32 + 210, ctx.r8.u8);
	// addi r8,r14,24552
	ctx.r8.s64 = r14.s64 + 24552;
	// stb r30,147(r1)
	REX_STORE_U8(ctx.r1.u32 + 147, r30.u8);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// li r28,18
	r28.s64 = 18;
	// stb r11,158(r1)
	REX_STORE_U8(ctx.r1.u32 + 158, ctx.r11.u8);
	// std r23,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r23.u64);
	// li r23,19
	r23.s64 = 19;
	// stb r30,181(r1)
	REX_STORE_U8(ctx.r1.u32 + 181, r30.u8);
	// stb r11,184(r1)
	REX_STORE_U8(ctx.r1.u32 + 184, ctx.r11.u8);
	// stb r30,211(r1)
	REX_STORE_U8(ctx.r1.u32 + 211, r30.u8);
	// li r30,30
	r30.s64 = 30;
	// stb r11,216(r1)
	REX_STORE_U8(ctx.r1.u32 + 216, ctx.r11.u8);
	// li r11,31
	ctx.r11.s64 = 31;
	// stb r4,201(r1)
	REX_STORE_U8(ctx.r1.u32 + 201, ctx.r4.u8);
	// stb r19,202(r1)
	REX_STORE_U8(ctx.r1.u32 + 202, r19.u8);
	// stb r20,203(r1)
	REX_STORE_U8(ctx.r1.u32 + 203, r20.u8);
	// stb r10,204(r1)
	REX_STORE_U8(ctx.r1.u32 + 204, ctx.r10.u8);
	// stb r6,205(r1)
	REX_STORE_U8(ctx.r1.u32 + 205, ctx.r6.u8);
	// lbz r14,81(r1)
	r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r21,206(r1)
	REX_STORE_U8(ctx.r1.u32 + 206, r21.u8);
	// stb r22,207(r1)
	REX_STORE_U8(ctx.r1.u32 + 207, r22.u8);
	// stb r29,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// stb r24,145(r1)
	REX_STORE_U8(ctx.r1.u32 + 145, r24.u8);
	// stb r14,186(r1)
	REX_STORE_U8(ctx.r1.u32 + 186, r14.u8);
	// lbz r14,80(r1)
	r14.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r3,148(r1)
	REX_STORE_U8(ctx.r1.u32 + 148, ctx.r3.u8);
	// stb r25,149(r1)
	REX_STORE_U8(ctx.r1.u32 + 149, r25.u8);
	// stb r9,150(r1)
	REX_STORE_U8(ctx.r1.u32 + 150, ctx.r9.u8);
	// stb r4,151(r1)
	REX_STORE_U8(ctx.r1.u32 + 151, ctx.r4.u8);
	// stb r5,152(r1)
	REX_STORE_U8(ctx.r1.u32 + 152, ctx.r5.u8);
	// stb r26,153(r1)
	REX_STORE_U8(ctx.r1.u32 + 153, r26.u8);
	// stb r10,154(r1)
	REX_STORE_U8(ctx.r1.u32 + 154, ctx.r10.u8);
	// stb r6,155(r1)
	REX_STORE_U8(ctx.r1.u32 + 155, ctx.r6.u8);
	// stb r7,156(r1)
	REX_STORE_U8(ctx.r1.u32 + 156, ctx.r7.u8);
	// stb r27,157(r1)
	REX_STORE_U8(ctx.r1.u32 + 157, r27.u8);
	// stb r31,176(r1)
	REX_STORE_U8(ctx.r1.u32 + 176, r31.u8);
	// stb r29,178(r1)
	REX_STORE_U8(ctx.r1.u32 + 178, r29.u8);
	// stb r24,179(r1)
	REX_STORE_U8(ctx.r1.u32 + 179, r24.u8);
	// stb r3,182(r1)
	REX_STORE_U8(ctx.r1.u32 + 182, ctx.r3.u8);
	// stb r25,183(r1)
	REX_STORE_U8(ctx.r1.u32 + 183, r25.u8);
	// stb r14,187(r1)
	REX_STORE_U8(ctx.r1.u32 + 187, r14.u8);
	// stb r17,188(r1)
	REX_STORE_U8(ctx.r1.u32 + 188, r17.u8);
	// stb r18,189(r1)
	REX_STORE_U8(ctx.r1.u32 + 189, r18.u8);
	// stb r15,190(r1)
	REX_STORE_U8(ctx.r1.u32 + 190, r15.u8);
	// stb r16,191(r1)
	REX_STORE_U8(ctx.r1.u32 + 191, r16.u8);
	// stb r31,208(r1)
	REX_STORE_U8(ctx.r1.u32 + 208, r31.u8);
	// stb r9,212(r1)
	REX_STORE_U8(ctx.r1.u32 + 212, ctx.r9.u8);
	// stb r4,213(r1)
	REX_STORE_U8(ctx.r1.u32 + 213, ctx.r4.u8);
	// stb r10,214(r1)
	REX_STORE_U8(ctx.r1.u32 + 214, ctx.r10.u8);
	// stb r6,215(r1)
	REX_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r17,218(r1)
	REX_STORE_U8(ctx.r1.u32 + 218, r17.u8);
	// stb r18,219(r1)
	REX_STORE_U8(ctx.r1.u32 + 219, r18.u8);
	// stb r19,220(r1)
	REX_STORE_U8(ctx.r1.u32 + 220, r19.u8);
	// stb r20,221(r1)
	REX_STORE_U8(ctx.r1.u32 + 221, r20.u8);
	// stb r21,222(r1)
	REX_STORE_U8(ctx.r1.u32 + 222, r21.u8);
	// stb r22,223(r1)
	REX_STORE_U8(ctx.r1.u32 + 223, r22.u8);
	// stb r29,240(r1)
	REX_STORE_U8(ctx.r1.u32 + 240, r29.u8);
	// stb r24,241(r1)
	REX_STORE_U8(ctx.r1.u32 + 241, r24.u8);
	// stb r3,242(r1)
	REX_STORE_U8(ctx.r1.u32 + 242, ctx.r3.u8);
	// stb r25,243(r1)
	REX_STORE_U8(ctx.r1.u32 + 243, r25.u8);
	// stb r5,244(r1)
	REX_STORE_U8(ctx.r1.u32 + 244, ctx.r5.u8);
	// stb r26,245(r1)
	REX_STORE_U8(ctx.r1.u32 + 245, r26.u8);
	// stb r7,246(r1)
	REX_STORE_U8(ctx.r1.u32 + 246, ctx.r7.u8);
	// stb r27,247(r1)
	REX_STORE_U8(ctx.r1.u32 + 247, r27.u8);
	// stb r28,248(r1)
	REX_STORE_U8(ctx.r1.u32 + 248, r28.u8);
	// addi r8,r8,15
	ctx.r8.s64 = ctx.r8.s64 + 15;
	// ld r28,112(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lis r29,-32106
	r29.s64 = -2104098816;
	// stb r10,116(r1)
	REX_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// rlwinm r10,r8,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r9,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// lis r25,-32106
	r25.s64 = -2104098816;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stb r26,115(r1)
	REX_STORE_U8(ctx.r1.u32 + 115, r26.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r27,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, r27.u8);
	// lis r24,-32106
	r24.s64 = -2104098816;
	// stb r20,121(r1)
	REX_STORE_U8(ctx.r1.u32 + 121, r20.u8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,249(r1)
	REX_STORE_U8(ctx.r1.u32 + 249, r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// ld r23,96(r1)
	r23.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r9,30020(r29)
	REX_STORE_U32(r29.u32 + 30020, ctx.r9.u32);
	// lis r26,-32106
	r26.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r28,253(r1)
	REX_STORE_U8(ctx.r1.u32 + 253, r28.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r28,123(r1)
	REX_STORE_U8(ctx.r1.u32 + 123, r28.u8);
	// stw r9,30016(r25)
	REX_STORE_U32(r25.u32 + 30016, ctx.r9.u32);
	// lis r27,-32106
	r27.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r23,252(r1)
	REX_STORE_U8(ctx.r1.u32 + 252, r23.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r23,122(r1)
	REX_STORE_U8(ctx.r1.u32 + 122, r23.u8);
	// stw r9,30012(r24)
	REX_STORE_U32(r24.u32 + 30012, ctx.r9.u32);
	// lis r20,-32106
	r20.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,254(r1)
	REX_STORE_U8(ctx.r1.u32 + 254, r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r7,118(r1)
	REX_STORE_U8(ctx.r1.u32 + 118, ctx.r7.u8);
	// stw r9,30008(r26)
	REX_STORE_U32(r26.u32 + 30008, ctx.r9.u32);
	// lis r28,-32106
	r28.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r30,126(r1)
	REX_STORE_U8(ctx.r1.u32 + 126, r30.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r11,255(r1)
	REX_STORE_U8(ctx.r1.u32 + 255, ctx.r11.u8);
	// stw r9,30004(r27)
	REX_STORE_U32(r27.u32 + 30004, ctx.r9.u32);
	// lis r23,-32106
	r23.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r11,127(r1)
	REX_STORE_U8(ctx.r1.u32 + 127, ctx.r11.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r4,113(r1)
	REX_STORE_U8(ctx.r1.u32 + 113, ctx.r4.u8);
	// stw r9,30000(r20)
	REX_STORE_U32(r20.u32 + 30000, ctx.r9.u32);
	// lis r7,-32106
	ctx.r7.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r5,114(r1)
	REX_STORE_U8(ctx.r1.u32 + 114, ctx.r5.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r22,125(r1)
	REX_STORE_U8(ctx.r1.u32 + 125, r22.u8);
	// stw r9,29996(r28)
	REX_STORE_U32(r28.u32 + 29996, ctx.r9.u32);
	// lis r30,-32106
	r30.s64 = -2104098816;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r15,250(r1)
	REX_STORE_U8(ctx.r1.u32 + 250, r15.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r16,251(r1)
	REX_STORE_U8(ctx.r1.u32 + 251, r16.u8);
	// stw r9,29992(r23)
	REX_STORE_U32(r23.u32 + 29992, ctx.r9.u32);
	// li r11,255
	ctx.r11.s64 = 255;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stb r6,117(r1)
	REX_STORE_U8(ctx.r1.u32 + 117, ctx.r6.u8);
	// stb r19,120(r1)
	REX_STORE_U8(ctx.r1.u32 + 120, r19.u8);
	// lis r22,-32106
	r22.s64 = -2104098816;
	// stb r21,124(r1)
	REX_STORE_U8(ctx.r1.u32 + 124, r21.u8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stb r31,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, r31.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stb r31,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, r31.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r3,30024(r7)
	REX_STORE_U32(ctx.r7.u32 + 30024, ctx.r3.u32);
	// stw r9,29980(r30)
	REX_STORE_U32(r30.u32 + 29980, ctx.r9.u32);
	// stb r11,98(r1)
	REX_STORE_U8(ctx.r1.u32 + 98, ctx.r11.u8);
	// stb r11,99(r1)
	REX_STORE_U8(ctx.r1.u32 + 99, ctx.r11.u8);
	// stb r11,100(r1)
	REX_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// stb r11,101(r1)
	REX_STORE_U8(ctx.r1.u32 + 101, ctx.r11.u8);
	// stb r11,102(r1)
	REX_STORE_U8(ctx.r1.u32 + 102, ctx.r11.u8);
	// stb r11,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// stb r11,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// lis r21,-32106
	r21.s64 = -2104098816;
	// stb r11,105(r1)
	REX_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// stb r11,106(r1)
	REX_STORE_U8(ctx.r1.u32 + 106, ctx.r11.u8);
	// stb r11,107(r1)
	REX_STORE_U8(ctx.r1.u32 + 107, ctx.r11.u8);
	// stb r11,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r11.u8);
	// stb r11,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r11.u8);
	// stb r11,110(r1)
	REX_STORE_U8(ctx.r1.u32 + 110, ctx.r11.u8);
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r10,29988(r22)
	REX_STORE_U32(r22.u32 + 29988, ctx.r10.u32);
	// stw r11,29984(r21)
	REX_STORE_U32(r21.u32 + 29984, ctx.r11.u32);
	// bl 0x826a1e70
	ctx.lr = 0x8276B5F8;
	sub_826A1E70(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,30020(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 30020);
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x826a1e70
	ctx.lr = 0x8276B608;
	sub_826A1E70(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,30016(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 30016);
	// bl 0x826a1e70
	ctx.lr = 0x8276B618;
	sub_826A1E70(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,30012(r24)
	ctx.r3.u64 = REX_LOAD_U32(r24.u32 + 30012);
	// bl 0x826a1e70
	ctx.lr = 0x8276B628;
	sub_826A1E70(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,30008(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 30008);
	// bl 0x826a1e70
	ctx.lr = 0x8276B638;
	sub_826A1E70(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,30004(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 30004);
	// bl 0x826a1e70
	ctx.lr = 0x8276B648;
	sub_826A1E70(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,30000(r20)
	ctx.r3.u64 = REX_LOAD_U32(r20.u32 + 30000);
	// bl 0x826a1e70
	ctx.lr = 0x8276B658;
	sub_826A1E70(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,29996(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 29996);
	// bl 0x826a1e70
	ctx.lr = 0x8276B668;
	sub_826A1E70(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,29992(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 29992);
	// bl 0x826a1e70
	ctx.lr = 0x8276B678;
	sub_826A1E70(ctx, base);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// lwz r11,29988(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 29988);
	// ori r4,r6,128
	ctx.r4.u64 = ctx.r6.u64 | 128;
	// ori r3,r5,128
	ctx.r3.u64 = ctx.r5.u64 | 128;
	// rldimi r4,r4,32,0
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r4.u64 & 0xFFFFFFFF);
	// rldimi r3,r3,32,0
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r3.u64 & 0xFFFFFFFF);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// std r31,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r31.u64);
	// std r31,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r31.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,29984(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 29984);
	// std r10,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// std r3,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r3.u64);
	// lwz r3,29980(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 29980);
	// bl 0x826a1e70
	ctx.lr = 0x8276B6BC;
	sub_826A1E70(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x826a1cd0
	return;
}

DEFINE_REX_FUNC(sub_82789258) {
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
	ctx.lr = 0x82789260;
	// lwz r11,14468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14468);
	// lis r6,-19
	ctx.r6.s64 = -1245184;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r31,2
	r31.s64 = 131072;
	// lis r30,1
	r30.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,13436
	ctx.r11.s64 = ctx.r3.s64 + 13436;
	// bne cr6,0x82789304
	if (!ctx.cr6.eq) goto loc_82789304;
	// lis r7,-259
	ctx.r7.s64 = -16973824;
	// lis r8,-51
	ctx.r8.s64 = -3342336;
	// lis r9,-105
	ctx.r9.s64 = -6881280;
	// lis r10,-205
	ctx.r10.s64 = -13434880;
	// ori r6,r6,24240
	ctx.r6.u64 = ctx.r6.u64 | 24240;
	// ori r7,r7,52096
	ctx.r7.u64 = ctx.r7.u64 | 52096;
	// ori r8,r8,55936
	ctx.r8.u64 = ctx.r8.u64 | 55936;
	// ori r9,r9,61568
	ctx.r9.u64 = ctx.r9.u64 | 61568;
	// ori r10,r10,46464
	ctx.r10.u64 = ctx.r10.u64 | 46464;
	// ori r27,r5,39061
	r27.u64 = ctx.r5.u64 | 39061;
	// ori r28,r4,53279
	r28.u64 = ctx.r4.u64 | 53279;
	// ori r29,r31,1129
	r29.u64 = r31.u64 | 1129;
	// ori r30,r30,10773
	r30.u64 = r30.u64 | 10773;
loc_827892C0:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, r31.u32);
	// stw r5,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
	// addi r8,r8,25675
	ctx.r8.s64 = ctx.r8.s64 + 25675;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// bdnz 0x827892c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827892C0;
	// b 0x82789378
	goto loc_82789378;
loc_82789304:
	// lis r7,-272
	ctx.r7.s64 = -17825792;
	// lis r8,-69
	ctx.r8.s64 = -4521984;
	// lis r9,-28
	ctx.r9.s64 = -1835008;
	// lis r10,-231
	ctx.r10.s64 = -15138816;
	// ori r6,r6,19456
	ctx.r6.u64 = ctx.r6.u64 | 19456;
	// ori r7,r7,36224
	ctx.r7.u64 = ctx.r7.u64 | 36224;
	// ori r8,r8,34048
	ctx.r8.u64 = ctx.r8.u64 | 34048;
	// ori r9,r9,39168
	ctx.r9.u64 = ctx.r9.u64 | 39168;
	// ori r10,r10,41216
	ctx.r10.u64 = ctx.r10.u64 | 41216;
	// ori r27,r5,52414
	r27.u64 = ctx.r5.u64 | 52414;
	// ori r28,r4,35062
	r28.u64 = ctx.r4.u64 | 35062;
	// ori r29,r31,7909
	r29.u64 = r31.u64 | 7909;
	// ori r30,r30,11072
	r30.u64 = r30.u64 | 11072;
loc_82789338:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	REX_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-2044(r11)
	REX_STORE_U32(ctx.r11.u32 + -2044, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-3068(r11)
	REX_STORE_U32(ctx.r11.u32 + -3068, r31.u32);
	// stw r5,-1020(r11)
	REX_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r9,r9,14030
	ctx.r9.s64 = ctx.r9.s64 + 14030;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// bdnz 0x82789338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82789338;
loc_82789378:
	// lis r10,-32106
	ctx.r10.s64 = -2104098816;
	// li r11,1020
	ctx.r11.s64 = 1020;
	// addi r10,r10,25888
	ctx.r10.s64 = ctx.r10.s64 + 25888;
	// li r9,-2040
	ctx.r9.s64 = -2040;
	// addi r8,r10,2040
	ctx.r8.s64 = ctx.r10.s64 + 2040;
	// li r10,-510
	ctx.r10.s64 = -510;
	// stw r8,14464(r3)
	REX_STORE_U32(ctx.r3.u32 + 14464, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82789398:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x827893a8
	if (!ctx.cr6.lt) goto loc_827893A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x827893b8
	goto loc_827893B8;
loc_827893A8:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x827893b8
	if (ctx.cr6.gt) goto loc_827893B8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_827893B8:
	// lwz r8,14464(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 14464);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82789398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82789398;
	// b 0x826a1d04
	return;
}

DEFINE_REX_FUNC(sub_8278FCE0) {
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
	// bl 0x826a1c90
	ctx.lr = 0x8278FCE8;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// lwz r31,100(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r30,-64
	r30.s64 = -64;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// addi r29,r11,-21776
	r29.s64 = ctx.r11.s64 + -21776;
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// li r28,-48
	r28.s64 = -48;
	// vspltish v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x2)));
	// li r26,-16
	r26.s64 = -16;
	// vspltish v13,3
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x3)));
	// srawi r11,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r11.s64 = r31.s32 >> 8;
	// li r27,-32
	r27.s64 = -32;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lvx128 v7,r29,r30
	ea = (r29.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r29,r28
	ea = (r29.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r29,r26
	ea = (r29.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r29,r27
	ea = (r29.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r20,r6,0,0,27
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// add r30,r11,r3
	r30.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r26,16
	r26.s64 = 16;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// add r4,r5,r7
	ctx.r4.u64 = ctx.r5.u64 + ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8278fe08
	if (!ctx.cr6.gt) goto loc_8278FE08;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r27,r26
	r27.u64 = r26.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r28,r11
	r28.u64 = ctx.r11.u64;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_8278FD7C:
	// lvrx128 v63,r27,r3
	temp.u32 = r27.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r29,r3,1
	r29.s64 = ctx.r3.s64 + 1;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// vor128 v63,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v61,r26,r29
	temp.u32 = r26.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v5,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrghb v3,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v1,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v5,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v5,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v4,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v24,v29,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v31,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsubshs v22,v26,v27
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v21,v25,v28
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v20,v24,v22
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vaddshs v19,v23,v21
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vsrah v18,v20,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v20.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v59,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvlx128 v59,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r31,r26
	ea = r31.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x8278fd7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FD7C;
loc_8278FE08:
	// rlwinm r3,r28,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// add r3,r28,r3
	ctx.r3.u64 = r28.u64 + ctx.r3.u64;
	// rlwinm r3,r3,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8278fe5c
	if (!ctx.cr6.lt) goto loc_8278FE5C;
	// subf r31,r11,r6
	r31.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8278FE28:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	r31.s64 = ctx.r3.s32 >> 7;
	// clrlwi r27,r3,25
	r27.u64 = ctx.r3.u32 & 0x7F;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// subfic r29,r27,128
	ctx.xer.ca = r27.u32 <= 128;
	r29.u64 = static_cast<uint64_t>(128) - r27.u64;
	// lbzx r25,r31,r30
	r25.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// lbzx r31,r28,r31
	r31.u64 = REX_LOAD_U8(r28.u32 + r31.u32);
	// mullw r29,r25,r29
	r29.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// mullw r31,r31,r27
	r31.s64 = int64_t(r31.s32) * int64_t(r27.s32);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// srawi r31,r31,7
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7F) != 0);
	r31.s64 = r31.s32 >> 7;
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278fe28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FE28;
loc_8278FE5C:
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8278fe84
	if (!ctx.cr6.lt) goto loc_8278FE84;
	// subf r31,r11,r7
	r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8278FE6C:
	// srawi r31,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	r31.s64 = ctx.r3.s32 >> 7;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// lbzx r31,r31,r30
	r31.u64 = REX_LOAD_U8(r31.u32 + r30.u32);
	// stbx r31,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r31.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8278fe6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FE6C;
loc_8278FE84:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r23,r30,r9
	r23.u64 = r30.u64 + ctx.r9.u64;
	// mr r18,r11
	r18.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8279057c
	if (!ctx.cr6.lt) goto loc_8279057C;
	// addi r19,r23,1
	r19.s64 = r23.s64 + 1;
loc_8278FE9C:
	// clrlwi r11,r18,30
	ctx.r11.u64 = r18.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x8279056c
	if (ctx.cr6.gt) goto loc_8279056C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82790470
	if (ctx.cr6.eq) goto loc_82790470;
	// bdz 0x8278fec0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8278FEC0;
	// bdz 0x827900a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_827900A8;
	// b 0x82790290
	goto loc_82790290;
loc_8278FEC0:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x8278ffe0
	if (!ctx.cr6.gt) goto loc_8278FFE0;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_8278FEFC:
	// lvrx128 v58,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v57,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// vor128 v63,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvlx128 v56,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	r27.u64 = r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v55,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v54,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v53,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v56,v53
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v52,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v52,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvrx128 v52,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v51,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvlx128 v51,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v51,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// bdnz 0x8278fefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8278FEFC;
loc_8278FFE0:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x82790034
	if (!ctx.cr6.lt) goto loc_82790034;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790000:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82790000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790000;
loc_82790034:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8279005c
	if (!ctx.cr6.lt) goto loc_8279005C;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790044:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82790044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790044;
loc_8279005C:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790558
	if (!ctx.cr6.lt) goto loc_82790558;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// subf r29,r22,r4
	r29.u64 = ctx.r4.u64 - r22.u64;
	// subf r28,r22,r21
	r28.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790078:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,2
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// rotlwi r30,r3,1
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stbx r3,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790078
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790078;
	// b 0x82790558
	goto loc_82790558;
loc_827900A8:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x827901c8
	if (!ctx.cr6.gt) goto loc_827901C8;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_827900E4:
	// lvrx128 v50,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v49,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r11,r30
	r28.u64 = ctx.r11.u64 + r30.u64;
	// vor128 v63,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v47,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v4,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v45,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v5,v48,v45
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vmrghb v1,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v4,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v4,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v3,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v3,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v19,v27,v28
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v20,v24,v25
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsubshs v18,v22,v23
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// vaddshs v17,v26,v5
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vslh v15,v2,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v16,v21,v20
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v14,v19,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v3,v15,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vsrah v5,v16,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v4,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vslh v2,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v1,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vpkshus128 v44,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v31,v2,v5
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v3,v31
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvlx128 v44,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// vaddshs v28,v17,v30
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// stvrx128 v44,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v44.u8[i]);
	// vsrah v27,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v43,v27,v26
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvlx128 v43,r11,r29
	ea = ctx.r11.u32 + r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v43,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v43.u8[i]);
	// bdnz 0x827900e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827900E4;
loc_827901C8:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x8279021c
	if (!ctx.cr6.lt) goto loc_8279021C;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_827901E8:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x827901e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827901E8;
loc_8279021C:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790244
	if (!ctx.cr6.lt) goto loc_82790244;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8279022C:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x8279022c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8279022C;
loc_82790244:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790558
	if (!ctx.cr6.lt) goto loc_82790558;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r22
	ctx.r11.u64 = r30.u64 + r22.u64;
	// subf r29,r22,r4
	r29.u64 = ctx.r4.u64 - r22.u64;
	// subf r28,r22,r21
	r28.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790260:
	// lbzx r5,r29,r11
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r31,r5,1
	r31.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// rotlwi r30,r3,2
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + r30.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stbx r3,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790260;
	// b 0x82790558
	goto loc_82790558;
loc_82790290:
	// li r24,0
	r24.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x827903b0
	if (!ctx.cr6.gt) goto loc_827903B0;
	// addi r11,r20,-1
	ctx.r11.s64 = r20.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r3,r11,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r30,r4,r22
	r30.u64 = r22.u64 - ctx.r4.u64;
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r29,r4,r21
	r29.u64 = r21.u64 - ctx.r4.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
	// mr r25,r26
	r25.u64 = r26.u64;
loc_827902CC:
	// lvrx128 v42,r25,r5
	temp.u32 = r25.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r31,r5,1
	r31.s64 = ctx.r5.s64 + 1;
	// lvlx128 v41,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// vor128 v63,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// lvlx128 v40,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r29,r11
	r27.u64 = r29.u64 + ctx.r11.u64;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// lvlx128 v39,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v38,r26,r31
	temp.u32 = r26.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vperm128 v3,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vor128 v63,v39,v38
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// lvrx128 v37,r26,r28
	temp.u32 = r26.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v4,v40,v37
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vmrghb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v63,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v3,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v30,v1,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v31,v0,v2
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v1,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v2,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v28,v3,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v3,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v26,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v31,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v2,v6
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v2,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v22,v31,v8
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v21,v29,v30
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v20,v27,v28
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vsubshs v19,v23,v24
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsubshs v18,v22,v25
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vslh v17,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v21,v18
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v2,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v1,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v31,v15,v26
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v30,v1,v4
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v31,v5
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v36,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v28,v30,v2
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v27,v29,v3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v26,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v36,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvrx128 v36,r11,r26
	ea = ctx.r11.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v36.u8[i]);
	// vpkshus128 v35,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// stvlx128 v35,r29,r11
	ea = r29.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v35,r27,r26
	ea = r27.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v35.u8[i]);
	// bdnz 0x827902cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827902CC;
loc_827903B0:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r24,r11
	ctx.r11.u64 = r24.u64 + ctx.r11.u64;
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bge cr6,0x82790404
	if (!ctx.cr6.lt) goto loc_82790404;
	// subf r5,r3,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_827903D0:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// clrlwi r29,r11,25
	r29.u64 = ctx.r11.u32 & 0x7F;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// subfic r31,r29,128
	ctx.xer.ca = r29.u32 <= 128;
	r31.u64 = static_cast<uint64_t>(128) - r29.u64;
	// lbzx r28,r5,r23
	r28.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// lbzx r5,r19,r5
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + ctx.r5.u32);
	// mullw r31,r28,r31
	r31.s64 = int64_t(r28.s32) * int64_t(r31.s32);
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r29.s32);
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r5,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 7;
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x827903d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827903D0;
loc_82790404:
	// cmpw cr6,r3,r7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8279042c
	if (!ctx.cr6.lt) goto loc_8279042C;
	// subf r5,r3,r7
	ctx.r5.u64 = ctx.r7.u64 - ctx.r3.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790414:
	// srawi r5,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 7;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// lbzx r5,r5,r23
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + r23.u32);
	// stbx r5,r3,r4
	REX_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bdnz 0x82790414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790414;
loc_8279042C:
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8279056c
	if (!ctx.cr6.lt) goto loc_8279056C;
	// subf r5,r30,r7
	ctx.r5.u64 = ctx.r7.u64 - r30.u64;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// subf r31,r4,r22
	r31.u64 = r22.u64 - ctx.r4.u64;
	// subf r30,r4,r21
	r30.u64 = r21.u64 - ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790448:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stbx r3,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790448;
	// b 0x8279056c
	goto loc_8279056C;
loc_82790470:
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82790518
	if (!ctx.cr6.gt) goto loc_82790518;
	// addi r5,r20,-1
	ctx.r5.s64 = r20.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r3,r5,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// subf r5,r4,r22
	ctx.r5.u64 = r22.u64 - ctx.r4.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r4,r21
	ctx.r3.u64 = r21.u64 - ctx.r4.u64;
	// rlwinm r27,r31,4,0,27
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_827904A4:
	// lvrx128 v34,r28,r11
	temp.u32 = r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r31,r5,r11
	r31.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lvlx128 v33,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r3,r11
	r30.u64 = ctx.r3.u64 + ctx.r11.u64;
	// vor128 v4,v33,v34
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvlx128 v32,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r29,r31
	temp.u32 = r29.u32 + r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v5,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vor128 v3,v32,v63
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrglb v4,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v2,v5,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v1,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v4,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v29,v4,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v5,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v27,v2,v5
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v26,v31,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v27,v28
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v24,v26,v29
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v23,v30,v25
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vaddshs v22,v1,v24
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// vsrah v21,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvlx128 v62,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stvrx128 v62,r30,r26
	ea = r30.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// bdnz 0x827904a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827904A4;
loc_82790518:
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82790558
	if (!ctx.cr6.lt) goto loc_82790558;
	// subf r5,r27,r7
	ctx.r5.u64 = ctx.r7.u64 - r27.u64;
	// add r11,r27,r22
	ctx.r11.u64 = r27.u64 + r22.u64;
	// subf r31,r22,r4
	r31.u64 = ctx.r4.u64 - r22.u64;
	// subf r30,r22,r21
	r30.u64 = r21.u64 - r22.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82790534:
	// lbzx r3,r31,r11
	ctx.r3.u64 = REX_LOAD_U8(r31.u32 + ctx.r11.u32);
	// lbz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r29,r3,3
	r29.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// subf r3,r3,r29
	ctx.r3.u64 = r29.u64 - ctx.r3.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// stbx r3,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82790534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82790534;
loc_82790558:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r22,r11
	r22.u64 = ctx.r11.u64;
	// add r23,r23,r9
	r23.u64 = r23.u64 + ctx.r9.u64;
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
loc_8279056C:
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// add r21,r21,r8
	r21.u64 = r21.u64 + ctx.r8.u64;
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8278fe9c
	if (ctx.cr6.lt) goto loc_8278FE9C;
loc_8279057C:
	// b 0x826a1ce0
	return;
}

